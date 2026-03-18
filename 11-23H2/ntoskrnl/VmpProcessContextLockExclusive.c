/*
 * XREFs of VmpProcessContextLockExclusive @ 0x140466D1E
 * Callers:
 *     VmpFlushTb @ 0x140466B2A (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1405F9210 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1405F938C (VmpInsertMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x1405F9818 (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1405F9FC4 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x1405FA330 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1405FACF4 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB0B0 (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405FB554 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
