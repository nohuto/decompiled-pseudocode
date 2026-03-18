/*
 * XREFs of PsDereferencePartition @ 0x1402F9C4C
 * Callers:
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F87A0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x1402F8958 (MmQueryMemoryListInformation.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     EtwpClearPartitionContext @ 0x14031F024 (EtwpClearPartitionContext.c)
 *     CcGetPartitionWithCreate @ 0x14034ECF4 (CcGetPartitionWithCreate.c)
 *     PsGetNextPartition @ 0x14036AD70 (PsGetNextPartition.c)
 *     MmAllocateContiguousMemoryEx @ 0x140391220 (MmAllocateContiguousMemoryEx.c)
 *     PsQuitNextPartition @ 0x1405A65A0 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x140601794 (EtwpSetPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x140617904 (MmGetNodeFastLargePageCounts.c)
 *     MiZeroHugeRangeWorker @ 0x140622DD0 (MiZeroHugeRangeWorker.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140634F2C (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x140651730 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652840 (MiContractWsSwapPageFileWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140657CB8 (MmFreeNonChargedSecurePages.c)
 *     MiRebuildLargePages @ 0x14065DDF0 (MiRebuildLargePages.c)
 *     PspClosePartitionHandle @ 0x1406833C0 (PspClosePartitionHandle.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6A20 (MiAllocateVirtualMemoryCommon.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706CDC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateSection @ 0x140722B00 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140723010 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x14075FD70 (NtManagePartition.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     SmFirstTimeInit @ 0x1407B7D14 (SmFirstTimeInit.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140834410 (MmGetPhysicalMemoryRangesEx2.c)
 *     SmProcessCompressionInfoRequest @ 0x1408414C4 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x140858F1C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x140859010 (PspAllocatePartition.c)
 *     SmProcessConfigRequest @ 0x14085BB0C (SmProcessConfigRequest.c)
 *     MmQueryMemoryRanges @ 0x14085D580 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x140874E10 (MmGetPageFileInformation.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140947ACC (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409B2C24 (PspSetJobMemoryPartition.c)
 *     PspTeardownPartition @ 0x1409B66B0 (PspTeardownPartition.c)
 *     SmProcessListRequest @ 0x1409D6DAC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D768C (SmProcessSystemStoreTrimRequest.c)
 *     MmRemovePhysicalMemory @ 0x140A2D210 (MmRemovePhysicalMemory.c)
 *     MiZeroHugeRangeCore @ 0x140A2DEFC (MiZeroHugeRangeCore.c)
 *     MmAllocateMemoryRanges @ 0x140A2E2C0 (MmAllocateMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED08 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x140A45F68 (MmBuildLargePages.c)
 *     MiAddSpecialPurposeMemoryCleanup @ 0x140A46CC4 (MiAddSpecialPurposeMemoryCleanup.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46EF8 (MiCreatePagefileMemoryExtents.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A47248 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4736C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A4768C (MiOpenSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A47844 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x140A47994 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
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
