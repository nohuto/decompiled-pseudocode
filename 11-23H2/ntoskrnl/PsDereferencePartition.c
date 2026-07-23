/*
 * XREFs of PsDereferencePartition @ 0x1402F9EDC
 * Callers:
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F8A30 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x1402F8BE8 (MmQueryMemoryListInformation.c)
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     EtwpClearPartitionContext @ 0x14031F2B4 (EtwpClearPartitionContext.c)
 *     CcGetPartitionWithCreate @ 0x14034EE94 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     MmAllocateContiguousMemoryEx @ 0x140391400 (MmAllocateContiguousMemoryEx.c)
 *     PsQuitNextPartition @ 0x1405A6B10 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x140601CE4 (EtwpSetPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x140617E54 (MmGetNodeFastLargePageCounts.c)
 *     MiZeroHugeRangeWorker @ 0x140623320 (MiZeroHugeRangeWorker.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x140651C80 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652D90 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140658208 (MmFreeNonChargedSecurePages.c)
 *     MiRebuildLargePages @ 0x14065E340 (MiRebuildLargePages.c)
 *     PspClosePartitionHandle @ 0x1406833C0 (PspClosePartitionHandle.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6C30 (MiAllocateVirtualMemoryCommon.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateSection @ 0x140722D00 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140723210 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x14075FF60 (NtManagePartition.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     SmFirstTimeInit @ 0x1407B7FF4 (SmFirstTimeInit.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140834710 (MmGetPhysicalMemoryRangesEx2.c)
 *     SmProcessCompressionInfoRequest @ 0x1408417C4 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x14085915C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x140859250 (PspAllocatePartition.c)
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     MmQueryMemoryRanges @ 0x14085D7C0 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x140875050 (MmGetPageFileInformation.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947CCC (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 *     PspTeardownPartition @ 0x1409B68B0 (PspTeardownPartition.c)
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D788C (SmProcessSystemStoreTrimRequest.c)
 *     MmRemovePhysicalMemory @ 0x140A2D4C0 (MmRemovePhysicalMemory.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 *     MmAllocateMemoryRanges @ 0x140A2E570 (MmAllocateMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2EFB8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32E90 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x140A46218 (MmBuildLargePages.c)
 *     MiAddSpecialPurposeMemoryCleanup @ 0x140A46F74 (MiAddSpecialPurposeMemoryCleanup.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A471A8 (MiCreatePagefileMemoryExtents.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A474F8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4761C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4793C (MiOpenSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A47AF4 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A47C44 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 72);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
