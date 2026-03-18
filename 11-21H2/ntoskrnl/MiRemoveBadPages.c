/*
 * XREFs of MiRemoveBadPages @ 0x14058E448
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnBadPagesToBadList @ 0x14058EA88 (MiReturnBadPagesToBadList.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x1405ADEB8 (MiUnlinkPageFromBadList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemoveBadPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r15
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  PVOID Pool; // rbp
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  int v28; // eax
  _DWORD *v29; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v32; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v36; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( (MiFlags & 0x20000000) == 0 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 48 * a2;
  v9 = 0;
  v10 = 48 * a2 - 0x220000000000LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  if ( a3 )
  {
    v11 = (_QWORD *)(v8 - 0x21FFFFFFFFD8LL);
    v36 = v8 - 0x21FFFFFFFFD8LL;
    while ( 1 )
    {
      if ( v4 > qword_140C50840 || (*v11 & 0x40000000000000LL) == 0 )
        goto LABEL_48;
      Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
      v13 = MiLockPageInline(v10);
      v14 = *(_QWORD *)(v10 + 40);
      v15 = v13;
      if ( (v14 & 0x20000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v21 = (v32 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v32;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v15);
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
LABEL_48:
        v9 = -1073741585;
        goto LABEL_49;
      }
      if ( *(_QWORD *)(qword_140C51F48 + 8 * ((v14 >> 43) & 0x3FF)) != a1 )
        break;
      if ( !MiIsPageOnBadList(v10) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v25 = v23->SchedulerAssist;
              v21 = (v24 & v25[5]) == 0;
              v25[5] &= v24;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)v23);
            }
          }
        }
        __writecr8(v15);
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
        v9 = -1073740682;
        goto LABEL_49;
      }
      MiUnlinkPageFromBadList(v16, 0LL);
      MiSetPfnRemovalRequested(v10, 1LL, 0LL);
      *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
        }
      }
      __writecr8(v15);
      ++v7;
      v11 = (_QWORD *)(v36 + 48);
      ++v4;
      v10 += 48LL;
      v36 += 48LL;
      if ( v7 >= a3 )
        goto LABEL_51;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v29 = v27->SchedulerAssist;
          v21 = (v28 & v29[5]) == 0;
          v29[5] &= v28;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)v27);
        }
      }
    }
    __writecr8(v15);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    v9 = -1073740277;
LABEL_49:
    if ( v7 )
      MiReturnBadPagesToBadList(v4 - v7, v7);
  }
LABEL_51:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  KeAbPostRelease((ULONG_PTR)&qword_140C55040);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
