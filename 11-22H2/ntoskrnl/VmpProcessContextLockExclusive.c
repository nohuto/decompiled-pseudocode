/*
 * XREFs of VmpProcessContextLockExclusive @ 0x1404666BE
 * Callers:
 *     VmpFlushTb @ 0x1404664CA (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1405F92A0 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1405F941C (VmpInsertMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x1405F98A8 (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1405FA054 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x1405FA3C0 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1405FAD84 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB140 (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405FB5E4 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
