/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1405E4244
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(unsigned __int64 a1)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  struct _EX_RUNDOWN_REF **v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ExInitializePushLock(PoolWithTag + 1);
  LODWORD(v3->Count) = 0;
  v3[2].Count = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v7 = (struct _EX_RUNDOWN_REF **)off_140C04348;
  v8 = v3 + 3;
  if ( *off_140C04348 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v8->Count = (unsigned __int64)&RtlpDebugPrintCallbackList;
  v8[1].Count = (unsigned __int64)v7;
  *v7 = v8;
  off_140C04348 = (_UNKNOWN **)v8;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
