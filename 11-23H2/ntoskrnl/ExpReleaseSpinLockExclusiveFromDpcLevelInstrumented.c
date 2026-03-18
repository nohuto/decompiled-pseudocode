/*
 * XREFs of ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B0BC
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     MiIdentifyPfn @ 0x14023E4C0 (MiIdentifyPfn.c)
 *     RtlpHpVsChunkSplit @ 0x14024A480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DCF0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E6C0 (RtlpHpSegPageRangeShrink.c)
 *     PsImpersonateContainerOfThread @ 0x140259EE0 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AF20 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B320 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BB20 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x14027BD60 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CBB0 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402878E0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288770 (MiAddViewsForSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289BE0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A2F0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiReleaseLargePageAllocationLocks @ 0x1402D8200 (MiReleaseLargePageAllocationLocks.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403372C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExReleaseSpinLockExclusive @ 0x140338060 (ExReleaseSpinLockExclusive.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339B70 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600D78 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(_DWORD *a1, __int64 a2)
{
  *a1 = 0;
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
