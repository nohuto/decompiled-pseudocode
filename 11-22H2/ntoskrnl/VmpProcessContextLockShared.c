/*
 * XREFs of VmpProcessContextLockShared @ 0x140466734
 * Callers:
 *     VmpAccessFaultBatch @ 0x140465EE6 (VmpAccessFaultBatch.c)
 *     VmpQueryAccessedState @ 0x1404667AA (VmpQueryAccessedState.c)
 *     VmColdPagesHint @ 0x1405F89C0 (VmColdPagesHint.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405FA72C (VmpPrefetchVirtualAddresses.c)
 *     VmpSplitMemoryRange @ 0x1405FB140 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v3) = 0x8000;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v3;
  }
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
