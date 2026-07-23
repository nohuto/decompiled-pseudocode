/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     MiLockDriverMappings @ 0x14020B4D8 (MiLockDriverMappings.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021020C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     ExpSaAllocatorAllocate @ 0x1402236D0 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14022395C (ExpSaPageGroupAllocateMemory.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F850 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x1402897BC (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289B14 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14028A2D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AF160 (MmResourcesAvailable.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402BCAA0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     MiGetChannelInformation @ 0x1402F9F04 (MiGetChannelInformation.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FD080 (ExfAcquirePushLockExclusive.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     NtCancelTimer @ 0x14032E4C0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     FsRtlInsertPerStreamContext @ 0x140334050 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 *     MmDecodeExportSection @ 0x14034BC6C (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BE08 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035CB14 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CD34 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x140361260 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366904 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374584 (CmpNotifyMachineHiveLoaded.c)
 *     MiLateInitializeSystemCache @ 0x1403AE058 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B2690 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5A00 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5FBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403D01AC (ExpAcquireFannedOutPushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x1403D05F8 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5D24 (ExpSaPageGroupDescriptorFree.c)
 *     DifExfAcquirePushLockExclusiveWrapper @ 0x1405DA7B0 (DifExfAcquirePushLockExclusiveWrapper.c)
 *     ExGetWakeTimerList @ 0x14060BB78 (ExGetWakeTimerList.c)
 *     ExWakeTimersPause @ 0x14060BF98 (ExWakeTimersPause.c)
 *     ExInitializeDeviceAts @ 0x14060C7C0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060CA5C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D5F0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D7C0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060EB08 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406106EC (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140613A20 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140613D10 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061BAF4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061BC14 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061BD34 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x140626E20 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x140643CF4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652D90 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x14065319C (MmOutSwapVirtualAddresses.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655860 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiClearPartitionPageBitMap @ 0x140659510 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A5F8 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x14067F798 (CmFcManagerRegisterFeatureUsageProvider.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x14067F890 (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x14067FC68 (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     NtAllocateUuids @ 0x140681EE0 (NtAllocateUuids.c)
 *     PdcAcquireRwLockExclusive @ 0x14068254C (PdcAcquireRwLockExclusive.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140688C2C (CmpVolumeContextDecrementRefCount.c)
 *     CmpLockContextListExclusive @ 0x14068F02C (CmpLockContextListExclusive.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     MmLinkJobProcess @ 0x14069FC10 (MmLinkJobProcess.c)
 *     MiSelectRelocationStartHint @ 0x1406AACDC (MiSelectRelocationStartHint.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpReportNotifyHelper @ 0x1406D5470 (CmpReportNotifyHelper.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8DC0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8F10 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701E18 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 *     HvpDoAllocateCell @ 0x14070A650 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     ExpWnfCreateNameInstance @ 0x140711A04 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711EC0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712184 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140713C00 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140714020 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x140714220 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1407147C0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiReturnImageBase @ 0x140721EA0 (MiReturnImageBase.c)
 *     MiInsertSharedCommitNode @ 0x140722220 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722F30 (MiFinishCreateSection.c)
 *     MiMarkSharedImageCfgBits @ 0x140746EF4 (MiMarkSharedImageCfgBits.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074755C (CmSiRWLockAcquireExclusive.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     CmLockHive @ 0x1407481A4 (CmLockHive.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 *     MmCommitSessionMappedView @ 0x140748590 (MmCommitSessionMappedView.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpTrimHive @ 0x14074EA74 (CmpTrimHive.c)
 *     CmpLockHiveListExclusive @ 0x14074EBA4 (CmpLockHiveListExclusive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751424 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     WbRemoveWarbirdProcess @ 0x1407610F4 (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407619C0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140761D00 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140761E2C (WbAddHeapExecutedBlockToLRU.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140762CFC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x140763394 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1407637F0 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764158 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140764490 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x14076475C (WbFreeMemoryBlockRegion.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769780 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A608 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     ExpWnfDeleteSubscription @ 0x14076CBEC (ExpWnfDeleteSubscription.c)
 *     MiInitializePartialVad @ 0x14076D8DC (MiInitializePartialVad.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A9D8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AF58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B3C0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpLoadDifferencingHive @ 0x14077BC8C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14077C0BC (VrpUnloadDifferencingHive.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C368 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077C820 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementSiloCount @ 0x14077D01C (VrpIncrementSiloCount.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D394 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079D8D8 (MiCaptureRetpolineImportInfo.c)
 *     MiPopulateCfgBitMap @ 0x1407A4B60 (MiPopulateCfgBitMap.c)
 *     MiGetNewSessionId @ 0x1407A9B8C (MiGetNewSessionId.c)
 *     MiInitializeSessionGlobals @ 0x1407A9C70 (MiInitializeSessionGlobals.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5FE0 (MiCreatePerSessionProtos.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9910 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1407C9CAC (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1407CC8F8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1407CCB2C (ExpWnfDeleteScopeById.c)
 *     ExpWnfCreateProcessContext @ 0x1407D03F4 (ExpWnfCreateProcessContext.c)
 *     WbReEncryptEncryptionSegment @ 0x1407D21B4 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D2294 (WbDecryptEncryptionSegment.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2550 (WbGetInitializedEncryptionSegment.c)
 *     CmpLockAppHiveLoadList @ 0x1407D7384 (CmpLockAppHiveLoadList.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DC884 (ExpWnfDispatchKernelSubscription.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1407DE0CC (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E0870 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E0988 (WbHeapExecutionUnloadModule.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2B50 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStore @ 0x1407E4310 (ExpWnfGetPermanentDataStore.c)
 *     CmpTransMgrSyncHive @ 0x1407E7C80 (CmpTransMgrSyncHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x14080DE90 (CmFcpManagerSoftwareHiveReady.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E430 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080EA2C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 *     ExRegisterExtension @ 0x1408216F0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140821910 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     MiInitializePartition @ 0x1408375A0 (MiInitializePartition.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140847A20 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x140847A74 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084F140 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     CmpLockCallbackListExclusive @ 0x1408511F8 (CmpLockCallbackListExclusive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408544AC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ECD4 (MiFreeRetpolineImportInfo.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     ExUnregisterExtension @ 0x140A01750 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A04D20 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A050E0 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A076C8 (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x140A077AC (ExpWnfDestroyPermanentDataStore.c)
 *     WheaSelLogCheckPoint @ 0x140A07A64 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A081D0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08350 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A08680 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheaExecuteRowFailureCheck @ 0x140A08BCC (WheaExecuteRowFailureCheck.c)
 *     WheapPfaReset @ 0x140A09130 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A092AC (WheapPredictiveFailureAnalysis.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F870 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFreezeRegistry @ 0x140A135B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1D134 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmLockHiveSecurityExclusive @ 0x140A1F72C (CmLockHiveSecurityExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F780 (CmpLockHashEntryByIndexExclusive.c)
 *     HvFoldBackDirtyData @ 0x140A20CB0 (HvFoldBackDirtyData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21388 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpMarkEntireIndexDirty @ 0x140A247C8 (CmpMarkEntireIndexDirty.c)
 *     HvIsRangeDirty @ 0x140A25BB4 (HvIsRangeDirty.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A27010 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A270CC (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2748C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A275A0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A279C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A27E50 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140A280F0 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     MiAllocatePartitionId @ 0x140A2FB30 (MiAllocatePartitionId.c)
 *     MiFreePartitionId @ 0x140A2FCA8 (MiFreePartitionId.c)
 *     MmEnumerateBadPages @ 0x140A2FE94 (MmEnumerateBadPages.c)
 *     MiFreeSessionId @ 0x140A32724 (MiFreeSessionId.c)
 *     MmGetPageFileForCrashDump @ 0x140A330A8 (MmGetPageFileForCrashDump.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33C8C (MiCreateFileOnlyImageFixupList.c)
 *     MiLockFileExtentsExclusive @ 0x140A343F0 (MiLockFileExtentsExclusive.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140A36A00 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140A36B14 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A37DF0 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x140A385A8 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3C330 (MiUnloadHotPatchForUserSid.c)
 *     MmDeleteShadowMapping @ 0x140A3CA80 (MmDeleteShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
 *     MiAcquireKernelCfgLock @ 0x140A44098 (MiAcquireKernelCfgLock.c)
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A47070 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A474F8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4761C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiLockNestedVad @ 0x140A47E58 (MiLockNestedVad.c)
 *     MiSelectOverflowDllBase @ 0x140A4846C (MiSelectOverflowDllBase.c)
 *     MiInsertChildVads @ 0x140A4933C (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A495FC (MiCopyLargeVad.c)
 *     VrpDecrementSiloCount @ 0x140A72214 (VrpDecrementSiloCount.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A7239C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A728A4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A72ADC (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A72C68 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreUnloadKey @ 0x140A73254 (VrpPreUnloadKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73360 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WheaConfigureErrorSource @ 0x140A90410 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB740 (WheaUnconfigureErrorSource.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABBE4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAD2D8 (MiDeleteEnclavePages.c)
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD5C0 (ExpOptimizePushLockList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  signed __int64 result; // rax
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  int i; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v8 = *a1;
  v9 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v8 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2, v6, v7);
    v11 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v9;
    Object[5] = 0LL;
    if ( (v8 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = (unsigned __int64)Object | v8 & 8 | 7;
      v11 = (v8 & 4) == 0;
    }
    else
    {
      v12 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v8 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v12 = v9;
      v6 = (unsigned __int64)Object | v12;
      if ( !(unsigned int)(v8 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v8);
    v13 = v8 == v14;
    v8 = v14;
    if ( !v13 )
      goto LABEL_13;
    if ( v11 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v7 = __rdtsc();
        v17 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v6 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v7;
          v19 = __rdtsc();
          v6 = (unsigned __int64)HIDWORD(v19) << 32;
          v7 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          v6 = HIDWORD(Object[6]);
          if ( (Object[6] & 0x200000000LL) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8 + 1, v8);
  if ( v8 != result )
  {
    if ( a2 )
      KeAbPreWait(a2, v6, v7);
LABEL_13:
    RtlBackoff(&v21);
    v8 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
