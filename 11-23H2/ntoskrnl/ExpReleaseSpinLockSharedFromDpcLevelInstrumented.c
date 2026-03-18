/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B0EC
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x140232320 (MiZeroFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BD70 (MiGetSlabPage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AF20 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiAddWorkingSetEntries @ 0x14026BD20 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402709E0 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273D60 (MiQueryAddressSpan.c)
 *     MiEndingOffsetWithLock @ 0x140279E50 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B450 (MiRemoveWsle.c)
 *     MiGetControlAreaPtes @ 0x140288610 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402892C0 (MiLocateSubsectionNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageListLock @ 0x1402DDAD0 (MiReleasePageListLock.c)
 *     ExpRemoveTagForBigPages @ 0x140323810 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331B30 (ExpAddTagForBigPages.c)
 *     ExReleaseSpinLockShared @ 0x140337540 (ExReleaseSpinLockShared.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600D78 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
