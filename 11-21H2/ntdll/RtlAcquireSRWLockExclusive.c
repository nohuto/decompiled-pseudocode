/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180019910
 * Callers:
 *     RtlSetSearchPathMode @ 0x180002500 (RtlSetSearchPathMode.c)
 *     RtlExtendMemoryZone @ 0x180002690 (RtlExtendMemoryZone.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180006748 (EtwpRemoveRegistrationFromTable.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180006C90 (EtwProcessPrivateLoggerRequest.c)
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180007898 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180007A58 (EtwpFindRegistration.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180007BA4 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpInsertGuidEntry @ 0x180007C68 (EtwpInsertGuidEntry.c)
 *     TppPoolAddWorker @ 0x180014DA0 (TppPoolAddWorker.c)
 *     RtlpHpSegContextCompact @ 0x1800150D8 (RtlpHpSegContextCompact.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800159B8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpHeapLock @ 0x180015DFC (RtlpHpHeapLock.c)
 *     EtwpInsertRegistration @ 0x1800162A8 (EtwpInsertRegistration.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x180016878 (EtwpFindGuidEntry.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x180017B5C (TppPrepareDirectParams.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18001816C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     TppWorkerFindTask @ 0x180018A28 (TppWorkerFindTask.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     TpPostTask @ 0x18001B374 (TpPostTask.c)
 *     TpStartAsyncIoOperation @ 0x18001B860 (TpStartAsyncIoOperation.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlpGetCachedPath @ 0x18001DEB4 (RtlpGetCachedPath.c)
 *     AlpcGetMessageFromCompletionList @ 0x18001E000 (AlpcGetMessageFromCompletionList.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     TppSetTimer @ 0x18001E794 (TppSetTimer.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     TppSingleTimerExpiration @ 0x18001EEBC (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18001F020 (TpWaitForTimer.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 *     TppCleanupGroupRemoveMember @ 0x18001FB70 (TppCleanupGroupRemoveMember.c)
 *     TppWaitCompletion @ 0x18001FD80 (TppWaitCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002F118 (RtlpHpVsContextGrowInPlace.c)
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800340FC (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x18003FB90 (LdrpBuildForwarderLink.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18004E64C (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpFindLoadedDllByMapping @ 0x180050578 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFindExistingModule @ 0x180051548 (LdrpFindExistingModule.c)
 *     LdrpComputeLazyDllPath @ 0x180051BAC (LdrpComputeLazyDllPath.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180052674 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180052A10 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     RtlpFlsDataCleanup @ 0x180054714 (RtlpFlsDataCleanup.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180055694 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrAlloc @ 0x180055CE8 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x180056664 (RtlpCSparseBitmapLock.c)
 *     RtlpHpSegMgrReserve @ 0x18005675C (RtlpHpSegMgrReserve.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180056BC8 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180057304 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpVaMgrCtxFree @ 0x180057B70 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x18005867C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18005897C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x180059290 (RtlpHpHeapExtendContext.c)
 *     RtlpFcInsertChangeRegistration @ 0x180059928 (RtlpFcInsertChangeRegistration.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180059D7C (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005A284 (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005AF70 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005B450 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlFlsSetValue @ 0x18005B620 (RtlFlsSetValue.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x180060280 (LdrRemoveDllDirectory.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     RtlpLockAtomTable @ 0x180062B48 (RtlpLockAtomTable.c)
 *     LdrpFindLoadedDllByAddress @ 0x180067FC0 (LdrpFindLoadedDllByAddress.c)
 *     TpTrimPools @ 0x18006AC30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x18006AF50 (RtlSleepConditionVariableSRW.c)
 *     TpReleaseCleanupGroupMembers @ 0x18006B800 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18006FA40 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18006FDA0 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180070540 (RtlRegisterWait.c)
 *     TpReleaseWait @ 0x180070960 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180070A24 (TpWaitOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x180070A70 (TpReleaseTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180070B20 (TpTimerOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x180070C30 (TpWaitForWait.c)
 *     TpSetDefaultPoolStackInformation @ 0x180070D60 (TpSetDefaultPoolStackInformation.c)
 *     TpAllocPoolInternal @ 0x180074674 (TpAllocPoolInternal.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180074EB0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     LdrpCondenseGraphRecurse @ 0x1800757D8 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075EC0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800763A8 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpCleanupThreadTlsData @ 0x18007729C (LdrpCleanupThreadTlsData.c)
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180077780 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180077F10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x1800781D0 (RtlAddGrowableFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007A558 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpFlsFree @ 0x18007ABF0 (RtlpFlsFree.c)
 *     RtlpFlsAlloc @ 0x18007B460 (RtlpFlsAlloc.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007BAA4 (TppPoolUpdateTrimmedWorker.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     RtlLockMemoryBlockLookaside @ 0x18007CB30 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x18007CBB0 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18007CC5C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18007CCB8 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x18007CD50 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x18007CDB0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x18007CE44 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x18007CE84 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockModuleSection @ 0x18007CEF0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x18007D000 (RtlUnlockModuleSection.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007D2CC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 *     RtlpTpWaitCheckReset @ 0x18007F164 (RtlpTpWaitCheckReset.c)
 *     TppDirectExecuteCallback @ 0x1800821D0 (TppDirectExecuteCallback.c)
 *     TppPoolRemoveWorker @ 0x1800823CC (TppPoolRemoveWorker.c)
 *     LdrpInsertModuleToIndex @ 0x18008321C (LdrpInsertModuleToIndex.c)
 *     LdrpQueueDeferredTlsData @ 0x1800842F4 (LdrpQueueDeferredTlsData.c)
 *     RtlpFcRemoveChangeRegistration @ 0x180084C8C (RtlpFcRemoveChangeRegistration.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800854A0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     TppJobpRundownJob @ 0x180085A30 (TppJobpRundownJob.c)
 *     LdrGetDllDirectory @ 0x180086650 (LdrGetDllDirectory.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180087700 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 *     RtlpRemoveVectoredHandler @ 0x180088BC0 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x18008AFA0 (RtlpInitializeStaticCriticalSection.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x18008B970 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x18008B9D0 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x18008CC10 (TpDisablePoolCallbackChecks.c)
 *     LdrFlushAlternateResourceModules @ 0x18008CDE0 (LdrFlushAlternateResourceModules.c)
 *     TppTimerpStopCallbackGeneration @ 0x18008CF90 (TppTimerpStopCallbackGeneration.c)
 *     LdrUpdatePackageSearchPath @ 0x18008D5D0 (LdrUpdatePackageSearchPath.c)
 *     TppStopWaitCallbackGeneration @ 0x18008DB10 (TppStopWaitCallbackGeneration.c)
 *     RtlpGetNormalization @ 0x180090770 (RtlpGetNormalization.c)
 *     EtwpDisableTraceProviders @ 0x180090A24 (EtwpDisableTraceProviders.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     ProviderHandleInsert @ 0x1800A3920 (ProviderHandleInsert.c)
 *     ProviderHandleRemove @ 0x1800A3AC8 (ProviderHandleRemove.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800B1024 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpFcChangeRegistrationCallback @ 0x1800B1260 (RtlpFcChangeRegistrationCallback.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800B13DA (RtlpIsLFHZoneAllocation.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1D36 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800B1E68 (RtlpTpIoDllUnloaded.c)
 *     LdrQueryModuleServiceTags @ 0x1800D9CD0 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAD8C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E1C5C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E1F70 (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 *     RtlpSignalSystemDirsModification @ 0x1800EA79C (RtlpSignalSystemDirsModification.c)
 *     RtlGrowFunctionTable @ 0x1800EBD50 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800F5E00 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x1800F5E60 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800F8AF0 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 *     RtlCompareExchangePointerMapping @ 0x180100FE0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180101130 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1801014B0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180101590 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180103340 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180103470 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x180103524 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackAdd @ 0x18010B568 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18010B644 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010B730 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x18010B870 (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x18010E568 (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115704 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180115ABC (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x180115C94 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180115CE8 (RtlpHpStackTraceEnable.c)
 *     RtlpFlsClonePrepare @ 0x180117F9C (RtlpFlsClonePrepare.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18011F724 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18011F798 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLargeReAlloc @ 0x18011FE14 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801204B0 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180120620 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1801207CC (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x180120F54 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextFreeInternal @ 0x180121208 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x1801213B4 (RtlpHpVsContextFreeList.c)
 *     TpSetDefaultPoolCpuSets @ 0x180123C28 (TpSetDefaultPoolCpuSets.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180123C80 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetPoolThreadCpuSets @ 0x180123DD0 (TpSetPoolThreadCpuSets.c)
 *     TppDirectUnposted @ 0x180123F30 (TppDirectUnposted.c)
 *     TppQueueRemoveHead @ 0x180124D54 (TppQueueRemoveHead.c)
 *     RtlSetIoCompletionCallback @ 0x180124ED0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x180125300 (RtlpTpIoLookup.c)
 *     RtlStackDbContextSerialize @ 0x180127244 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801275E4 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180127BBC (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180128020 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180128634 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18001B630 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18007BDD8 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A7BE0 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 i; // rdx
  _RTL_SRWLOCK *v2; // r8
  char *v3; // r9
  PRTL_SRWLOCK v4; // rsi
  unsigned __int64 Value; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  PRTL_SRWLOCK v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  unsigned int v16[3]; // [rsp+44h] [rbp-24h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = SRWLock;
  v17 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(SRWLock, i, v2, v3, v11) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v16[0] = 3;
        v13 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v12 = 0LL;
          v15 = -1;
          SRWLock = (PRTL_SRWLOCK)(unsigned __int8)Value;
          v11 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v11 | Value & 8 | 7;
          LOBYTE(SRWLock) = (Value & 4) == 0;
        }
        else
        {
          v6 = 11LL;
          v12 = &v11;
          v15 = Value >> 4;
          if ( v15 <= 1 )
            v6 = 3LL;
          i = (unsigned __int64)&v11 | v6;
          if ( !(unsigned int)(Value >> 4) )
            v15 = -2;
        }
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, i, Value);
        v7 = Value == v8;
        Value = v8;
        if ( !v7 )
          goto LABEL_13;
        if ( (_BYTE)SRWLock )
          RtlpOptimizeSRWLockList(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v2 = (_RTL_SRWLOCK *)__rdtsc();
            v3 = (char *)v2 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              SRWLock = (PRTL_SRWLOCK)v16[0];
              if ( (v16[0] & 2) == 0 )
                break;
              SRWLock = v2;
              v10 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v10) << 32;
              v2 = (_RTL_SRWLOCK *)v10;
              if ( v10 <= (unsigned __int64)SRWLock || v10 >= (unsigned __int64)v3 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              SRWLock = (PRTL_SRWLOCK)v16[0];
              if ( (v16[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v16, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v4, 0LL);
          while ( (v16[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v4, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v17);
        _m_prefetchw(v4);
        Value = v4->Value;
      }
    }
  }
}
