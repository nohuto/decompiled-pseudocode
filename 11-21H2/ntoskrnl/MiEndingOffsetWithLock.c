/*
 * XREFs of MiEndingOffsetWithLock @ 0x14033DFC0
 * Callers:
 *     MiReadyFlushMdlToWrite @ 0x1402394EC (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x14027E474 (MiViewMayContainPage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiEndingOffset @ 0x14033E0D4 (MiEndingOffset.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v5; // rcx
  signed __int32 v6; // ett
  __int64 v7; // rdi
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v11; // rcx
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v5[6];
        v5[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v2);
    v6 = *v2 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
    {
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v11[6] - 1;
          v11[6] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
    }
  }
  v7 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  v8 = KeGetCurrentPrcb();
  v9 = v8->SchedulerAssist;
  if ( v9 )
  {
    if ( v8->NestingLevel <= 1u )
    {
      v15 = v9[6] - 1;
      v9[6] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v7;
}
