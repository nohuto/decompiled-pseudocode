/*
 * XREFs of MiChangePageAttribute @ 0x14036F55C
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiDeleteClusterPage @ 0x1402D64B0 (MiDeleteClusterPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E0000 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializePfn @ 0x1402E12D0 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiSetPfnOwnedAndActive @ 0x1402E2FCC (MiSetPfnOwnedAndActive.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9AA0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402F9E04 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MiAddExpansionNonPagedPool @ 0x140398AA4 (MiAddExpansionNonPagedPool.c)
 *     MiFreeSlabEntry @ 0x1403B88B0 (MiFreeSlabEntry.c)
 *     MiIncrementAweMapCount @ 0x14064B020 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x140662464 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408256A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14021AAAC (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x14021AB5C (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     MiPageContentsRetainedAcrossAttributeChange @ 0x14021AF2C (MiPageContentsRetainedAcrossAttributeChange.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14021E394 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // bl
  int v4; // ebp
  unsigned __int8 v6; // di
  int v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r10
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  signed __int32 v29[18]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C67E88 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  LOBYTE(v8) = MiPageCombiningActive(0LL);
  v12 = v10 + 2;
  if ( v8 )
  {
    MiAbortCombineScan(a1);
    v12 = 2;
    v3 = v3 & 0xF9 | 2;
  }
  LOBYTE(v13) = (_BYTE)v4 << 6;
  LOBYTE(v10) = ((_BYTE)v4 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  *(_BYTE *)(a1 + 34) = v10;
  if ( v7 != 3 )
  {
    v14 = 4;
    if ( (v3 & 4) == 0 )
    {
      if ( (v3 & (unsigned __int8)v12) != 0
        || (v11 = 7LL, v15 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL, ((*(_QWORD *)(a1 + 24) >> 59) & 7) == 0)
        || (_InterlockedOr(v29, 0), LOBYTE(v13) = MiTbFlushTimeStampMayNeedFlush(v15, KiTbFlushTimeStamp, 7), (_BYTE)v13) )
      {
        LOBYTE(v13) = MiFlushEntireTbDueToAttributeChange(v10, v9, v11);
        v16 = 2LL;
      }
      if ( v7 == 1 )
      {
        ++dword_140C65B08;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v16);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql != (_BYTE)v16 )
            v14 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v14;
        }
        MiFlushCacheForAttributeChange(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 1LL, a2, 0LL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v19 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(v13) = CurrentIrql;
        __writecr8(CurrentIrql);
        v4 = a2;
      }
    }
  }
  if ( (v3 & 8) != 0 )
  {
    v13 = MiPageContentsRetainedAcrossAttributeChange(v7, v4);
    if ( !v13 )
      LOBYTE(v13) = MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && v6 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v23 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    LOBYTE(v13) = v6;
    __writecr8(v6);
  }
  return v13;
}
