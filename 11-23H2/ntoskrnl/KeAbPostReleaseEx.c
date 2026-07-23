/*
 * XREFs of KeAbPostReleaseEx @ 0x1402BD780
 * Callers:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140288548 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x1402897BC (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x1402933D4 (MiLockControlAreaSectionExtend.c)
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     PfLockSharedTryAcquire @ 0x1402FA518 (PfLockSharedTryAcquire.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032FA70 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032FBC0 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryToAcquireFastMutex @ 0x14033DF70 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x14034B09C (KiWaitForAllObjects.c)
 *     MiTryLockVad @ 0x1403C70F8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C9360 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9AC0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9FA0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseFastResourceShared @ 0x1403CB160 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CB594 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CC5E0 (ExDisownFastResource.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403CDC60 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403CF480 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x1404124C0 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412D74 (ExAcquireFastResourceExclusive2.c)
 *     ExTryToConvertFastResourceSharedToExclusive2 @ 0x14041492C (ExTryToConvertFastResourceSharedToExclusive2.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x1404166FC (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x1404167A8 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140416910 (ExpReleaseFastResourceShared2.c)
 *     IopProcessIoTracking @ 0x14045FF88 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8FB8 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140609ED0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140609FA0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     MiChangingSubsectionProtos @ 0x14063C344 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1406407C4 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x140654B84 (MiProcessTransitionHeatBatch.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406832D0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     AlpcpReceiveMessagePort @ 0x14073B680 (AlpcpReceiveMessagePort.c)
 *     MmPrefetchPagesEx @ 0x14073E8C8 (MmPrefetchPagesEx.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA49C (ObpLockUnrelatedDirectoryShared.c)
 *     MiPrefetchControlArea @ 0x1407DCBDC (MiPrefetchControlArea.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DDA78 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1407DFDF8 (CmpTryToLockKcbExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407E1A18 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860718 (CmpWaitOnHiveWriteQueue.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140866190 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73360 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x1402BD990 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
