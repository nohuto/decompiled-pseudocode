/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402FCE10
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
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287C90 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288770 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x14028952C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289884 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14028A040 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x140292164 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029C7D0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C94C (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A0500 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AEED0 (MmResourcesAvailable.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402BC810 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FCDF0 (ExfAcquirePushLockExclusive.c)
 *     MiPerformVadSplitting @ 0x14030B5F4 (MiPerformVadSplitting.c)
 *     NtCancelTimer @ 0x14032E230 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 *     FsRtlInsertPerStreamContext @ 0x140333DC0 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MmDecodeExportSection @ 0x14034BACC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034BC68 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035C974 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CB94 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x1403610C0 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366764 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403743E4 (CmpNotifyMachineHiveLoaded.c)
 *     MiLateInitializeSystemCache @ 0x1403ADE78 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B24B0 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5820 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5DDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CFFCC (ExpAcquireFannedOutPushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x1403D0418 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D5B44 (ExpSaPageGroupDescriptorFree.c)
 *     DifExfAcquirePushLockExclusiveWrapper @ 0x1405DA240 (DifExfAcquirePushLockExclusiveWrapper.c)
 *     ExGetWakeTimerList @ 0x14060B628 (ExGetWakeTimerList.c)
 *     ExWakeTimersPause @ 0x14060BA48 (ExWakeTimersPause.c)
 *     ExInitializeDeviceAts @ 0x14060C270 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060C50C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D0A0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D270 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DBA0 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060E5B8 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061019C (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x1406134D0 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x1406137C0 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B5A4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B6C4 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061B7E4 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CA64 (MiSplitReducedCommitClonePage.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140625EFC (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x1406268D0 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x1406437A4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652840 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655310 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiClearPartitionPageBitMap @ 0x140658FC0 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A0A8 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
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
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpReportNotifyHelper @ 0x1406D5440 (CmpReportNotifyHelper.c)
 *     CmpLockKcbExclusive @ 0x1406D8468 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8D90 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8EE0 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701C08 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     MmAcquireLoadLock @ 0x1407045B0 (MmAcquireLoadLock.c)
 *     MmExtendSection @ 0x140706504 (MmExtendSection.c)
 *     HvpDoAllocateCell @ 0x14070A440 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     CmpFreeKeyByCell @ 0x14070B214 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     ExpWnfCreateNameInstance @ 0x1407117F4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711CB0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140711F74 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x140713368 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1407139F0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140713E10 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x140714010 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1407145B0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiSectionDelete @ 0x140721BC0 (MiSectionDelete.c)
 *     MiReturnImageBase @ 0x140721CA0 (MiReturnImageBase.c)
 *     MiInsertSharedCommitNode @ 0x140722020 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407223A0 (MiRemoveSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722D30 (MiFinishCreateSection.c)
 *     MiMarkSharedImageCfgBits @ 0x140746D04 (MiMarkSharedImageCfgBits.c)
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074736C (CmSiRWLockAcquireExclusive.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     CmLockHive @ 0x140747FB4 (CmLockHive.c)
 *     MiChargeSegmentCommit @ 0x140748008 (MiChargeSegmentCommit.c)
 *     MmCommitSessionMappedView @ 0x1407483A0 (MmCommitSessionMappedView.c)
 *     CmpDeleteHive @ 0x14074E6D4 (CmpDeleteHive.c)
 *     CmpTrimHive @ 0x14074E884 (CmpTrimHive.c)
 *     CmpLockHiveListExclusive @ 0x14074E9B4 (CmpLockHiveListExclusive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751234 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751D34 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140751EA8 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     WbRemoveWarbirdProcess @ 0x140760F04 (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407617D0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140761B10 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140761C3C (WbAddHeapExecutedBlockToLRU.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140762B0C (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763600 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140763F68 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407642A0 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x14076456C (WbFreeMemoryBlockRegion.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769590 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A418 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A4D0 (CmpLockHashEntryExclusiveByKcb.c)
 *     ExpWnfDeleteSubscription @ 0x14076C9FC (ExpWnfDeleteSubscription.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A7E8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077AD68 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B1D0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpLoadDifferencingHive @ 0x14077BA9C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14077BECC (VrpUnloadDifferencingHive.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C178 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077C630 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementSiloCount @ 0x14077CE2C (VrpIncrementSiloCount.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D1A4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079D6E8 (MiCaptureRetpolineImportInfo.c)
 *     MiPopulateCfgBitMap @ 0x1407A4970 (MiPopulateCfgBitMap.c)
 *     MiGetNewSessionId @ 0x1407A999C (MiGetNewSessionId.c)
 *     MiInitializeSessionGlobals @ 0x1407A9A80 (MiInitializeSessionGlobals.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5BB8 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5D00 (MiCreatePerSessionProtos.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9640 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1407C99DC (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1407CC628 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1407CC85C (ExpWnfDeleteScopeById.c)
 *     ExpWnfCreateProcessContext @ 0x1407D0124 (ExpWnfCreateProcessContext.c)
 *     WbReEncryptEncryptionSegment @ 0x1407D1EE4 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D1FC4 (WbDecryptEncryptionSegment.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2138 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2280 (WbGetInitializedEncryptionSegment.c)
 *     CmpLockAppHiveLoadList @ 0x1407D70B4 (CmpLockAppHiveLoadList.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DC5B4 (ExpWnfDispatchKernelSubscription.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1407DDDFC (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E05A0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E06B8 (WbHeapExecutionUnloadModule.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2880 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStore @ 0x1407E4040 (ExpWnfGetPermanentDataStore.c)
 *     CmpTransMgrSyncHive @ 0x1407E79B0 (CmpTransMgrSyncHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x14080DBC0 (CmFcpManagerSoftwareHiveReady.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E160 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080E75C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x14081DBB0 (MmCreateShadowMapping.c)
 *     ExRegisterExtension @ 0x1408213F0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140821610 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x140821CA8 (TlgRegisterAggregateProviderEx.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140834090 (MiInsertPageFileInList.c)
 *     MiInitializePartition @ 0x1408372A0 (MiInitializePartition.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140847720 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x140847774 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084EE40 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     CmpLockCallbackListExclusive @ 0x140850EF8 (CmpLockCallbackListExclusive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408541AC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x14085EA94 (MiFreeRetpolineImportInfo.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     ExUnregisterExtension @ 0x140A014C0 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A04A90 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A04E50 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A07438 (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x140A0751C (ExpWnfDestroyPermanentDataStore.c)
 *     WheaSelLogCheckPoint @ 0x140A077D4 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A07F20 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A080A0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A083D0 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheaExecuteRowFailureCheck @ 0x140A0891C (WheaExecuteRowFailureCheck.c)
 *     WheapPfaReset @ 0x140A08E80 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A08FFC (WheapPredictiveFailureAnalysis.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F5C0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CE84 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmLockHiveSecurityExclusive @ 0x140A1F47C (CmLockHiveSecurityExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F4D0 (CmpLockHashEntryByIndexExclusive.c)
 *     HvFoldBackDirtyData @ 0x140A20A00 (HvFoldBackDirtyData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A210D8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpMarkEntireIndexDirty @ 0x140A24518 (CmpMarkEntireIndexDirty.c)
 *     HvIsRangeDirty @ 0x140A25904 (HvIsRangeDirty.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A26D60 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A26E1C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A271DC (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A272F0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A27718 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A27BA0 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140A27E40 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     MiAllocatePartitionId @ 0x140A2F880 (MiAllocatePartitionId.c)
 *     MiFreePartitionId @ 0x140A2F9F8 (MiFreePartitionId.c)
 *     MmEnumerateBadPages @ 0x140A2FBE4 (MmEnumerateBadPages.c)
 *     MiFreeSessionId @ 0x140A32474 (MiFreeSessionId.c)
 *     MmGetPageFileForCrashDump @ 0x140A32DF8 (MmGetPageFileForCrashDump.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A339DC (MiCreateFileOnlyImageFixupList.c)
 *     MiLockFileExtentsExclusive @ 0x140A34140 (MiLockFileExtentsExclusive.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140A36750 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140A36864 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A37B40 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x140A382F8 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3C080 (MiUnloadHotPatchForUserSid.c)
 *     MmDeleteShadowMapping @ 0x140A3C7D0 (MmDeleteShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x140A3D788 (MiCreateHardwareEnclave.c)
 *     MiAcquireKernelCfgLock @ 0x140A43DE8 (MiAcquireKernelCfgLock.c)
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A46DC0 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A47248 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4736C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiLockNestedVad @ 0x140A47BA8 (MiLockNestedVad.c)
 *     MiSelectOverflowDllBase @ 0x140A481BC (MiSelectOverflowDllBase.c)
 *     MiInsertChildVads @ 0x140A4908C (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A4934C (MiCopyLargeVad.c)
 *     VrpDecrementSiloCount @ 0x140A71F64 (VrpDecrementSiloCount.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A720EC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A725F4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A7282C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A729B8 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreUnloadKey @ 0x140A72FA4 (VrpPreUnloadKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A730B0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WheaConfigureErrorSource @ 0x140A90590 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB8D0 (WheaUnconfigureErrorSource.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABD74 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD240 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAD468 (MiDeleteEnclavePages.c)
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD2B0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD330 (ExpOptimizePushLockList.c)
 *     memset @ 0x140435A00 (memset.c)
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
