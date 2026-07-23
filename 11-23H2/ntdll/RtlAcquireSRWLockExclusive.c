/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180037D80
 * Callers:
 *     RtlSetSearchPathMode @ 0x180002030 (RtlSetSearchPathMode.c)
 *     RtlpLockAtomTable @ 0x180003BFC (RtlpLockAtomTable.c)
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpQueueDeferredTlsData @ 0x180005120 (LdrpQueueDeferredTlsData.c)
 *     LdrpFindLoadedDllByAddress @ 0x180008AE0 (LdrpFindLoadedDllByAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A380 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x18002A3F8 (LdrpBuildForwarderLink.c)
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C14C (RtlInsertInvertedFunctionTable.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D48C (LdrpDecrementModuleLoadCountEx.c)
 *     RtlpHpHeapLock @ 0x18002D83C (RtlpHpHeapLock.c)
 *     LdrpFindExistingModule @ 0x18002DA3C (LdrpFindExistingModule.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DBFC (LdrpFindLoadedDllByMapping.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002EEF4 (SbUpdateSwitchContextBasedOnDll.c)
 *     TpWaitForTimer @ 0x18002F9A0 (TpWaitForTimer.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 *     EtwpSetProviderTraits @ 0x18002FBC8 (EtwpSetProviderTraits.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18002FEE8 (EtwpRemoveRegistrationFromTable.c)
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x1800305B0 (ProviderHandleRemove.c)
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     TppSetTimer @ 0x1800309F8 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180030D8C (TppSingleTimerExpiration.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180030F14 (LdrpSetAlternateResourceModuleHandle.c)
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     RtlpGetCachedPath @ 0x180031DD0 (RtlpGetCachedPath.c)
 *     EtwpFindGuidEntry @ 0x18003234C (EtwpFindGuidEntry.c)
 *     EtwpInsertRegistration @ 0x18003241C (EtwpInsertRegistration.c)
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 *     ProviderHandleInsert @ 0x1800329E0 (ProviderHandleInsert.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     TpSetTimerEx @ 0x180032C50 (TpSetTimerEx.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033C84 (TppGetCurrentThreadNumaNode.c)
 *     RtlpHpSegPageRangeShrink @ 0x180034458 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180034660 (RtlpHpSegPageRangeCoalesce.c)
 *     TpStartAsyncIoOperation @ 0x180034B80 (TpStartAsyncIoOperation.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180034ED0 (RtlpHpSegPageRangeAllocate.c)
 *     TppWorkPost @ 0x1800351B8 (TppWorkPost.c)
 *     TpPostTask @ 0x1800352FC (TpPostTask.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x1800366DC (TppPrepareDirectParams.c)
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180037370 (RtlpHpVsContextAllocateInternal.c)
 *     TppWorkerFindTask @ 0x180037750 (TppWorkerFindTask.c)
 *     RtlpHpVsChunkSplit @ 0x180037F50 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E250 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1800412F0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180049850 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpVaMgrAlloc @ 0x18004A7C0 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x18004AC54 (RtlpCSparseBitmapLock.c)
 *     RtlpHpSegMgrReserve @ 0x18004AD68 (RtlpHpSegMgrReserve.c)
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C57C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlDeregisterWaitEx @ 0x18004C870 (RtlDeregisterWaitEx.c)
 *     TpWaitOutstandingCallbackCount @ 0x18004C9C0 (TpWaitOutstandingCallbackCount.c)
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18004D360 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x18004D620 (RtlRegisterWait.c)
 *     TpReleaseWait @ 0x18004DB60 (TpReleaseWait.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DE08 (RtlpWnfWalkUserSubscriptionList.c)
 *     TpReleaseTimer @ 0x18004E360 (TpReleaseTimer.c)
 *     RtlpTpWaitCheckReset @ 0x18004E534 (RtlpTpWaitCheckReset.c)
 *     TppWaitCompletion @ 0x18004E690 (TppWaitCompletion.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FA98 (RtlpDecRefWnfNameSubscription.c)
 *     TpWaitForWait @ 0x18004FBC0 (TpWaitForWait.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180050338 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpFcRemoveChangeRegistration @ 0x180050450 (RtlpFcRemoveChangeRegistration.c)
 *     RtlUpdateTimer @ 0x180050560 (RtlUpdateTimer.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800509F0 (TpSetDefaultPoolStackInformation.c)
 *     TppJobpRundownJob @ 0x180050DF0 (TppJobpRundownJob.c)
 *     RtlpFlsDataCleanup @ 0x180051734 (RtlpFlsDataCleanup.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180051E88 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x180051EF0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180051FA0 (RtlLockModuleSection.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800520E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800521D0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180052250 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800522FC (RtlpRegisterLockedMemoryZone.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180052390 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800523F0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180052484 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlFlsSetValue @ 0x1800528A0 (RtlFlsSetValue.c)
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18005BA20 (EtwProcessPrivateLoggerRequest.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     EtwpDisableTraceProviders @ 0x18005E51C (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18005EBB4 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18005ED8C (EtwpFindRegistration.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18005EE50 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18005EE80 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpInsertGuidEntry @ 0x18005EF9C (EtwpInsertGuidEntry.c)
 *     RtlpHpSegContextCompact @ 0x18005FC08 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005FDD4 (RtlpHpLfhOwnerCompact.c)
 *     TppCleanupGroupAddMember @ 0x1800610A0 (TppCleanupGroupAddMember.c)
 *     RtlpFcInsertChangeRegistration @ 0x18006110C (RtlpFcInsertChangeRegistration.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18006163C (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800617BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x180061A5C (RtlpCreateSerializationGroup.c)
 *     RtlpHpHeapExtendContext @ 0x180063FE0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x180064760 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180064FBC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpTagContextAllocateTag @ 0x180065AB4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18006694C (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180067598 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180067834 (RtlpHpLfhBucketAddSubsegment.c)
 *     TpReleaseCleanupGroupMembers @ 0x180067D10 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     TpTrimPools @ 0x180069400 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180069720 (RtlSleepConditionVariableSRW.c)
 *     TppPoolUpdateTrimmedWorker @ 0x180069A78 (TppPoolUpdateTrimmedWorker.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B800 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006D96C (RtlpHpVsSubsegmentCommitPages.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F3C8 (LdrpCondenseGraphRecurse.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18006FACC (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x180070978 (LdrpCleanupThreadTlsData.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFlsFree @ 0x180071990 (RtlpFlsFree.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071CF4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180073D20 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpFlsAlloc @ 0x180074830 (RtlpFlsAlloc.c)
 *     RtlpCallVectoredHandlers @ 0x180078068 (RtlpCallVectoredHandlers.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x180078CC0 (LdrRemoveDllDirectory.c)
 *     LdrSetDllDirectory @ 0x180078F30 (LdrSetDllDirectory.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
 *     LdrpComputeLazyDllPath @ 0x18007AF84 (LdrpComputeLazyDllPath.c)
 *     TppCleanupGroupRemoveMember @ 0x18007B408 (TppCleanupGroupRemoveMember.c)
 *     TppPoolAddWorker @ 0x18007B9A8 (TppPoolAddWorker.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     TppDirectExecuteCallback @ 0x18007D0A0 (TppDirectExecuteCallback.c)
 *     TppPoolRemoveWorker @ 0x18007D630 (TppPoolRemoveWorker.c)
 *     AlpcGetMessageFromCompletionList @ 0x18007DCC0 (AlpcGetMessageFromCompletionList.c)
 *     LdrpInsertModuleToIndex @ 0x18007EF9C (LdrpInsertModuleToIndex.c)
 *     LdrpReleaseTlsEntry @ 0x1800800CC (LdrpReleaseTlsEntry.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180081370 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     LdrGetDllDirectory @ 0x180082640 (LdrGetDllDirectory.c)
 *     RtlSetProtectedPolicy @ 0x180082ED0 (RtlSetProtectedPolicy.c)
 *     LdrUpdatePackageSearchPath @ 0x180084680 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     EtwpTrackProviderBinary @ 0x18008510C (EtwpTrackProviderBinary.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 *     TppPoolpFree @ 0x1800858AC (TppPoolpFree.c)
 *     RtlpRemoveVectoredHandler @ 0x180085CA0 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086D70 (RtlpInitializeStaticCriticalSection.c)
 *     LdrFlushAlternateResourceModules @ 0x180088510 (LdrFlushAlternateResourceModules.c)
 *     TppTimerpStopCallbackGeneration @ 0x180088D90 (TppTimerpStopCallbackGeneration.c)
 *     TppStopWaitCallbackGeneration @ 0x1800891C0 (TppStopWaitCallbackGeneration.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800892F0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180089350 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x180089570 (TpDisablePoolCallbackChecks.c)
 *     RtlpGetNormalization @ 0x180089D98 (RtlpGetNormalization.c)
 *     RtlDeleteFunctionTable @ 0x18008CC90 (RtlDeleteFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlpHpLargeReAlloc @ 0x18008E80C (RtlpHpLargeReAlloc.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     LdrpResetAppPackagesPath @ 0x18009EB80 (LdrpResetAppPackagesPath.c)
 *     RtlGetFeatureToggleConfiguration @ 0x18009F5C0 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x18009FDE0 (__ft_record_impression.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800B0B44 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpFcChangeRegistrationCallback @ 0x1800B0E20 (RtlpFcChangeRegistrationCallback.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800B125C (RtlpIsLFHZoneAllocation.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1F06 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800B2038 (RtlpTpIoDllUnloaded.c)
 *     LdrQueryModuleServiceTags @ 0x1800D96F0 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAB20 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E179C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E1F60 (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 *     RtlpSignalSystemDirsModification @ 0x1800EAE2C (RtlpSignalSystemDirsModification.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC830 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800F6F80 (RtlResetMemoryBlockLookaside.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 *     RtlResetMemoryZone @ 0x1800F70F0 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800FA140 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
 *     RtlCompareExchangePointerMapping @ 0x1801020D0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180102220 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1801025A0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180102680 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180104450 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180104580 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x180104634 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkTrackAdd @ 0x18010CBA8 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18010CC84 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010CD6C (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x18010CEAC (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x18010FB74 (RtlpStdLockAcquire.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180116F64 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180117314 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x1801174EC (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180117540 (RtlpHpStackTraceEnable.c)
 *     RtlpFlsClonePrepare @ 0x18011989C (RtlpFlsClonePrepare.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x180122B18 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180122B88 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x180122CB8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180123030 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801239AC (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180123B28 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180123CD0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x1801240AC (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextFreeInternal @ 0x180124364 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x180124514 (RtlpHpVsContextFreeList.c)
 *     TpSetDefaultPoolCpuSets @ 0x180126AE8 (TpSetDefaultPoolCpuSets.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180126B40 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetPoolThreadCpuSets @ 0x180126C90 (TpSetPoolThreadCpuSets.c)
 *     TppDirectUnposted @ 0x180126DF0 (TppDirectUnposted.c)
 *     TppQueueRemoveHead @ 0x180127C14 (TppQueueRemoveHead.c)
 *     RtlSetIoCompletionCallback @ 0x180127DA0 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1801281DC (RtlpTpIoLookup.c)
 *     RtlStackDbContextSerialize @ 0x18012D3E0 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x18012D754 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18012DD20 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E188 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18012E7B0 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180034A30 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180069DF8 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 Value; // rdi
  bool v3; // cl
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  int i; // edx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  signed __int32 v19[3]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( RtlpWaitCouldDeadlock() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v3 = 0;
        v19[0] = 3;
        v16 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v15 = 0LL;
          v18 = -1;
          v14 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v5 = (unsigned __int64)&v14 | Value & 8 | 7;
          v3 = (Value & 4) == 0;
        }
        else
        {
          v4 = 11LL;
          v15 = &v14;
          v18 = Value >> 4;
          if ( v18 <= 1 )
            v4 = 3LL;
          v5 = (unsigned __int64)&v14 | v4;
          if ( !(unsigned int)(Value >> 4) )
            v18 = -2;
        }
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v5, Value);
        v6 = Value == v7;
        Value = v7;
        if ( !v6 )
          goto LABEL_13;
        if ( v3 )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v10 = __rdtsc();
            v11 = v10 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v19[0] & 2) == 0 )
                break;
              v12 = v10;
              v13 = __rdtsc();
              v10 = v13;
              if ( v13 <= v12 || v13 >= v11 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v19[0] & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v19, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v19[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v20);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
