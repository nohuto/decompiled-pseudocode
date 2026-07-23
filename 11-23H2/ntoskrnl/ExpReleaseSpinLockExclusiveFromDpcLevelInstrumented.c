/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     RtlpHpVsChunkSplit @ 0x14024A550 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DDC0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B5B0 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BDB0 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x14027BFF0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140287B70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289E70 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiReleaseLargePageAllocationLocks @ 0x1402D8490 (MiReleaseLargePageAllocationLocks.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337550 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExReleaseSpinLockExclusive @ 0x1403382F0 (ExReleaseSpinLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
