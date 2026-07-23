/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B63C
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiEndingOffsetWithLock @ 0x14027A0E0 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiGetControlAreaPtes @ 0x1402888A0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageListLock @ 0x1402DDD60 (MiReleasePageListLock.c)
 *     ExpRemoveTagForBigPages @ 0x140323AA0 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331DC0 (ExpAddTagForBigPages.c)
 *     ExReleaseSpinLockShared @ 0x1403377D0 (ExReleaseSpinLockShared.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
