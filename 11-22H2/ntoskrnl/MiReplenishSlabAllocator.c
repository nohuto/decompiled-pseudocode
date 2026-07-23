/*
 * XREFs of MiReplenishSlabAllocator @ 0x1402E6AC4
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B8F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1402E9010 (MiReplenishSlabAllocatorWorker.c)
 *     MiInitialSlabPopulate @ 0x1403B4960 (MiInitialSlabPopulate.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiAllocateSlabPageForMdl @ 0x1406231CC (MiAllocateSlabPageForMdl.c)
 *     MiFastReplenishWithAsync @ 0x140656918 (MiFastReplenishWithAsync.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402E7080 (MiInsertSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1403B8070 (MiFreeSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 SlabEntry; // rsi
  unsigned int v6; // edi
  int v7; // r15d
  unsigned __int64 v8; // rbx
  struct _KPRCB *v9; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v11; // zf
  signed __int32 v12; // eax
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax

  v3 = a1[3];
  if ( a1[14] + a1[6] >= a2 )
    return 1LL;
  CurrentThread = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
  }
  SlabEntry = MiAllocateSlabEntry(a1, v3);
  if ( SlabEntry )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(SlabEntry + 140) & 2;
      if ( !(unsigned int)MiInsertSlabEntry(v3, a1, SlabEntry, 1LL) )
        break;
      *(_DWORD *)(SlabEntry + 140) |= 2u;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v16) = 4;
        else
          v16 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v16;
      }
      MiFreeSlabEntry(a1, SlabEntry);
      if ( (_DWORD)KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      SlabEntry = MiAllocateSlabEntry(a1, v3);
      if ( !SlabEntry )
        goto LABEL_21;
    }
    if ( v7 )
      goto LABEL_16;
    v8 = 512LL;
    MiReturnCommit(v3, 512LL);
    if ( (_UNKNOWN *)v3 != &MiSystemPartition )
      goto LABEL_15;
    v9 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v9->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_15;
    if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
    {
      do
      {
        v12 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v9->CachedResidentAvailable,
                CachedResidentAvailable + 512,
                CachedResidentAvailable);
        v11 = (_DWORD)CachedResidentAvailable == v12;
        LODWORD(CachedResidentAvailable) = v12;
        if ( v11 )
          goto LABEL_16;
      }
      while ( v12 != -1 && (unsigned __int64)(v12 + 512LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v9->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v8 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( v8 )
LABEL_15:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 17280), v8);
  }
  else
  {
LABEL_21:
    v6 = 0;
  }
LABEL_16:
  if ( CurrentThread )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
