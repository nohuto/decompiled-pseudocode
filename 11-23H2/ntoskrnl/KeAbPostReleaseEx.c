/*
 * XREFs of KeAbPostReleaseEx @ 0x1402BD4F0
 * Callers:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x1402882B8 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x14028952C (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x140293144 (MiLockControlAreaSectionExtend.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     PfLockSharedTryAcquire @ 0x1402FA288 (PfLockSharedTryAcquire.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032F7E0 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032F930 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryToAcquireFastMutex @ 0x14033DCE0 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x14034AEFC (KiWaitForAllObjects.c)
 *     MiTryLockVad @ 0x1403C6F18 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C98E0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9DC0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseFastResourceShared @ 0x1403CAF80 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CB3B4 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CC400 (ExDisownFastResource.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403CDA80 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403CF2A0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x140412180 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x1404129E0 (ExAcquireFastResourceExclusive2.c)
 *     ExTryToConvertFastResourceSharedToExclusive2 @ 0x140414598 (ExTryToConvertFastResourceSharedToExclusive2.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414B10 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140416368 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140416414 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041657C (ExpReleaseFastResourceShared2.c)
 *     IopProcessIoTracking @ 0x14045FB88 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8A48 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140609980 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140609A50 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     MiChangingSubsectionProtos @ 0x14063BDF4 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140640274 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x140654634 (MiProcessTransitionHeatBatch.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406832D0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     AlpcpReceiveMessagePort @ 0x14073B490 (AlpcpReceiveMessagePort.c)
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 *     ObpDeleteNameCheck @ 0x140740140 (ObpDeleteNameCheck.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765200 (IopWaitAndAcquireFileObjectLock.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA2AC (ObpLockUnrelatedDirectoryShared.c)
 *     MiPrefetchControlArea @ 0x1407DC90C (MiPrefetchControlArea.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DD7A8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1407DFB28 (CmpTryToLockKcbExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407E1748 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140865F50 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A730B0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x1402BD700 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * (unsigned __int8)(a2 >> 1));
    if ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    LODWORD(CurrentThread) = a2 - 96 * *(unsigned __int8 *)(a2 + 16) - 1696;
  }
  _disable();
  *(_BYTE *)(v2 + 18) = 0;
  return KiAbEntryFreeAndEnableInterrupts(v2, (_DWORD)CurrentThread, BugCheckParameter2, 1, 0LL);
}
