/*
 * XREFs of VmpProcessContextLockShared @ 0x140466D94
 * Callers:
 *     VmpAccessFaultBatch @ 0x140466546 (VmpAccessFaultBatch.c)
 *     VmpQueryAccessedState @ 0x140466E0A (VmpQueryAccessedState.c)
 *     VmColdPagesHint @ 0x1405F8930 (VmColdPagesHint.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405FA69C (VmpPrefetchVirtualAddresses.c)
 *     VmpSplitMemoryRange @ 0x1405FB0B0 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
