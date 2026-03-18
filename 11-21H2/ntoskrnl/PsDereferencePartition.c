/*
 * XREFs of PsDereferencePartition @ 0x1403606C4
 * Callers:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     CcGetPartitionWithCreate @ 0x14023EB0C (CcGetPartitionWithCreate.c)
 *     EtwpClearPartitionContext @ 0x14024DFC0 (EtwpClearPartitionContext.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MmQueryMemoryListInformation @ 0x140360AC0 (MmQueryMemoryListInformation.c)
 *     MiRebuildLargePages @ 0x140396D30 (MiRebuildLargePages.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     MmGetNodeFastLargePageCounts @ 0x14057F740 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x14058A2D8 (MmFreeNonChargedSecurePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiObtainFreePages @ 0x140596A58 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1405B3D90 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405B7340 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x1405E2D20 (PsQuitNextPartition.c)
 *     EtwpSetPartitionContext @ 0x14063383C (EtwpSetPartitionContext.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140693EA8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1406FD6C0 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     NtManagePartition @ 0x1407DE5F0 (NtManagePartition.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407E6840 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 *     MmGetPageFileInformation @ 0x1407FC0D0 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 *     PsCreatePartition @ 0x14085BC40 (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140936BF8 (IopSetFileMemoryPartitionInformation.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x14096B768 (MmIdentifyPhysicalMemory.c)
 *     MiAddSpecialPurposeMemoryCleanup @ 0x14096DE64 (MiAddSpecialPurposeMemoryCleanup.c)
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14096E3D8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiOpenSpecialPurposeMemory @ 0x14096E7E4 (MiOpenSpecialPurposeMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14096E960 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x14096EAB0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 *     MmBuildLargePages @ 0x14097F59C (MmBuildLargePages.c)
 *     PspSetJobMemoryPartition @ 0x1409B08E8 (PspSetJobMemoryPartition.c)
 *     PspClosePartitionHandle @ 0x1409B3320 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x1409B3490 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
