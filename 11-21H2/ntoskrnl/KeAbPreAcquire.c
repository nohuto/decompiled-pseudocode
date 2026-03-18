/*
 * XREFs of KeAbPreAcquire @ 0x140347C10
 * Callers:
 *     CmpAcquireWriteQueue @ 0x14020AA84 (CmpAcquireWriteQueue.c)
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x140217A2C (KiWaitSatisfyAny.c)
 *     MiLockControlAreaSectionExtend @ 0x14022CA54 (MiLockControlAreaSectionExtend.c)
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x14029EBE0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     MiInitializeInPageSupport @ 0x14033C4D0 (MiInitializeInPageSupport.c)
 *     FsRtlAcquireHeaderMutex @ 0x140347B70 (FsRtlAcquireHeaderMutex.c)
 *     MiRebuildLargePages @ 0x140396D30 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14041AB50 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x140578730 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x14059E2C0 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x1405A1AE8 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14063C300 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406608E8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140661EF0 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140661FA0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1406913F4 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x14069A534 (ObpLockUnrelatedDirectoryShared.c)
 *     PfpPrefetchSharedStart @ 0x1406AF0D4 (PfpPrefetchSharedStart.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     ExpWnfCreateProcessContext @ 0x1406C4AE4 (ExpWnfCreateProcessContext.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     CmpTryToLockKcbExclusive @ 0x1406D1790 (CmpTryToLockKcbExclusive.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5C1C (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5CF8 (WbHeapExecutionUnloadModule.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7D74 (ExpWnfDispatchKernelSubscription.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406DA700 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406E2814 (ExpWnfEnumerateScopeInstances.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     ExpWnfDeleteScopeById @ 0x1407914BC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1407919CC (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstance @ 0x140791CAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14079204C (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 *     ExpWnfNotifySubscription @ 0x1407927AC (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14079296C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140792EFC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1407931C0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140793A34 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfReadStateData @ 0x1407944BC (ExpWnfReadStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140798234 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14079A254 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14079A690 (ExpWnfUpdateSubscription.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407A91A0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     WbRemoveWarbirdProcess @ 0x1407E15B4 (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407E1968 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     WbFreeMemoryBlockRegion @ 0x1407E1CA4 (WbFreeMemoryBlockRegion.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1407E1DC8 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1407E1EF8 (WbAddHeapExecutedBlockToLRU.c)
 *     WbGetWarbirdProcess @ 0x1407E2D60 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1407E3770 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1407E3900 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x1407E43F0 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407E4720 (WbAllocateSlots.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407EEEB8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1408486C4 (ExRegisterHost.c)
 *     ExpKdPullRemoteFileForUser @ 0x1408536D4 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1408654C0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140927128 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     PdcAcquireRwLockExclusive @ 0x1409C581C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140A02740 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A06FF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A073C0 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A083CC (ExpWnfDeleteScopeInstances.c)
 *     WheaSelLogCheckPoint @ 0x140A087A4 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A08D90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08F00 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A0921C (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x140A0A16C (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A0A2E8 (WheapPredictiveFailureAnalysis.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140A6D3D0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140351DF0 (KiAbEntryFreeAndEnableInterrupts.c)
 */

__int64 __fastcall KeAbPreAcquire(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v6; // rcx
  int SessionId; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  _disable();
  if ( a2 )
  {
    KiAbEntryFreeAndEnableInterrupts(a2, CurrentThread, a1, 0LL);
  }
  else
  {
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !CurrentThread->AbEntrySummary )
    {
      AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)CurrentThread);
      if ( !AbEntrySummary )
        return v3;
    }
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v6);
  }
  if ( (unsigned __int64)(a1 - qword_140C50630) < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v3 + 8) = SessionId;
  *(_QWORD *)v3 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  return v3;
}
