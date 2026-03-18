/*
 * XREFs of RtlpAcquirePropStoreLockExclusive @ 0x1405AACB0
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405AA2F0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405AA4B0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405AAA20 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405AAB80 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v3; // rax

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
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
