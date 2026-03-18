/*
 * XREFs of RtlpAcquirePropStoreLockShared @ 0x1405E7B68
 * Callers:
 *     RtlQueryPointerMapping @ 0x1405E7640 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1405E7780 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
