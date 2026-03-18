/*
 * XREFs of KeWaitForSingleObject @ 0x140243CE0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     CmSiWaitForSingleEvent @ 0x140208C58 (CmSiWaitForSingleEvent.c)
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     WmipFindRegEntryByProviderId @ 0x14022A9F4 (WmipFindRegEntryByProviderId.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271390 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     PopFxActivateComponent @ 0x140287300 (PopFxActivateComponent.c)
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D350 (PopIrpWorker.c)
 *     CcWriteBehind @ 0x14029B558 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x14029EDC0 (CcUnmapVacbArray.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     AlpcpSignalAndWait @ 0x1402B6BB0 (AlpcpSignalAndWait.c)
 *     MiAsyncSlabReplenish @ 0x1402B9C84 (MiAsyncSlabReplenish.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFB1C (PopExecuteOnTargetProcessors.c)
 *     MiReadyToZeroNextLargePage @ 0x1402D0440 (MiReadyToZeroNextLargePage.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F6DF0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7A78 (LdrpGetFromMUIMemCache.c)
 *     IopWaitForLockAlertable @ 0x1402FCCD4 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140309738 (ExfWaitForRundownProtectionRelease.c)
 *     KiSchedulerApc @ 0x14030A960 (KiSchedulerApc.c)
 *     PopFxProcessWorkPool @ 0x140310FF4 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031CFAC (EtwpEnableMetaProviderGuid.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1403221B0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14032260C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 *     PpmCheckPeriodicStart @ 0x14032C020 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     ExpWaitForResource @ 0x1403415C0 (ExpWaitForResource.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140342DD8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140343064 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14034313C (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403437B0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     EtwpStartLoggerThread @ 0x140343944 (EtwpStartLoggerThread.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348780 (ExTimedWaitForUnblockPushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14034DEC0 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034DFB4 (CcWaitForUninitializeCacheMap.c)
 *     CcSetValidData @ 0x140354E24 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140355260 (IoSynchronousCallDriver.c)
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 *     MiQueueWorkingSetRequest @ 0x14035EEC8 (MiQueueWorkingSetRequest.c)
 *     WmipReceiveNotifications @ 0x14036158C (WmipReceiveNotifications.c)
 *     SmKmStoreHelperWorker @ 0x14036B5D0 (SmKmStoreHelperWorker.c)
 *     PpmTryAcquireLock @ 0x14036D9F8 (PpmTryAcquireLock.c)
 *     ExUnregisterCallback @ 0x14036E6A0 (ExUnregisterCallback.c)
 *     PopSetWatchdog @ 0x1403700AC (PopSetWatchdog.c)
 *     WheaLogInternalEvent @ 0x140380A50 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x140380DBC (WheapAddErrorSource.c)
 *     KeSwapProcessOrStack @ 0x1403954B0 (KeSwapProcessOrStack.c)
 *     CmpLazyWriteWorker @ 0x1403A0150 (CmpLazyWriteWorker.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A24F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A35FC (KiInvokeInterruptServiceRoutine.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1403A3858 (KiAcquireSecondaryPassiveConnectLock.c)
 *     WmipBuildTraceDeviceList @ 0x1403A38F0 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x1403A5974 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1403A5CD0 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A69B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiStoreEvictThread @ 0x1403A8650 (MiStoreEvictThread.c)
 *     PopIrpWorkerControl @ 0x1403B14E0 (PopIrpWorkerControl.c)
 *     MiModifiedPageWriter @ 0x1403B2760 (MiModifiedPageWriter.c)
 *     PnpSerializeBoot @ 0x1403B2B90 (PnpSerializeBoot.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3290 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5AF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageWrite @ 0x1403C17F4 (MiZeroPageWrite.c)
 *     WmipFindRegEntryByDevice @ 0x1403C25C4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403C2684 (WmipAllocRegEntry.c)
 *     PnpLockDeviceActionQueue @ 0x1403C3E9C (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C40A0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D4610 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     WmipDeregisterRegEntry @ 0x1403D4AE0 (WmipDeregisterRegEntry.c)
 *     PnpLockMountableDevice @ 0x1403D51B0 (PnpLockMountableDevice.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D6B10 (IoReleaseRemoveLockAndWaitEx.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040FDE0 (IopWaitForSynchronousIoEvent.c)
 *     ExpWaitForFastResource2 @ 0x140416814 (ExpWaitForFastResource2.c)
 *     FsFilterAllocateCompletionStack @ 0x14045F1DC (FsFilterAllocateCompletionStack.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140519C08 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x140536E40 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140538F54 (CcDeleteSectionsForPartition.c)
 *     CcWriteBehindAsync @ 0x14053A480 (CcWriteBehindAsync.c)
 *     FsRtlpPostStackOverflow @ 0x14053F434 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405510E4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x1405549E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554C78 (IopAllocateReserveIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405598BC (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055F468 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnprQuiesce @ 0x140563188 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x140564EF4 (PnpProcessRebalance.c)
 *     KeAbCrossThreadDelete @ 0x140579570 (KeAbCrossThreadDelete.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A16C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A1A0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiStallBugcheckThread @ 0x14057B5B8 (KiStallBugcheckThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405827D0 (NtSignalAndWaitForSingleObject.c)
 *     PopHaltDeviceIdle @ 0x1405874C0 (PopHaltDeviceIdle.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058ABB8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590330 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopSleepDeviceList @ 0x140590A18 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140590CBC (PopWakeDeviceList.c)
 *     PopRunMaximumIrpWorkers @ 0x140598AD4 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598CAC (PopIgnoreBatteryStatusChange.c)
 *     PspIumFreePartitionState @ 0x1405A5F5C (PspIumFreePartitionState.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BEF54 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405C0280 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmTerminateStoreProcess @ 0x1405C9BE8 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBA88 (SmKmStoreHelperWaitForCommand.c)
 *     SmpFpWaitForResource @ 0x1405CC48C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CD0F0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405CDB80 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1405E6450 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140601ACC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x140603098 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1406094B0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140609720 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140611020 (WheapProcessWorkQueueItem.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619848 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140631BA0 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14063AD1C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B428 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140641CA0 (MiCheckHoldFaultForHotPatch.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652840 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForAvailablePages @ 0x1406538EC (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653A48 (MiWaitForFreePage.c)
 *     MiZeroNodeExiting @ 0x140655738 (MiZeroNodeExiting.c)
 *     MiApplyCommitDelay @ 0x14065614C (MiApplyCommitDelay.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A24 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x14065C038 (MiStoreDeletePartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D034 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECCC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpDisableTraceProviders @ 0x1406BEFF8 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x1406C552C (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1406C6404 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x1406C68B8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406C69AC (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x1406C6C40 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x1406C6FE0 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7EB0 (WmipPrepareForWnodeAD.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     ObWaitForSingleObject @ 0x1406E3740 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x1406E6980 (CmpParseKey.c)
 *     sub_1406F24A0 @ 0x1406F24A0 (sub_1406F24A0.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701F30 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407020A0 (IoVolumeDeviceNameToGuidPath.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     IopGetFileInformation @ 0x14075AE5C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075AF90 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C0A0 (RtlDecompressBufferLZNT1.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     PspUserThreadStartup @ 0x14076F6E0 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     FsRtlQueryKernelEaFile @ 0x1407735B0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407737C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     WdtpCancelTimer @ 0x1407856CC (WdtpCancelTimer.c)
 *     PnpDeviceEventWorker @ 0x140786860 (PnpDeviceEventWorker.c)
 *     IoDisconnectInterrupt @ 0x14078E1D0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14078ED68 (IopDestroyActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x14078F4C4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     IopUncacheInterfaceInformation @ 0x1407908A0 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1407934D0 (PnpStartDeviceNode.c)
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 *     AlpcpWaitForPortReferences @ 0x1407AB21C (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x1407B3A20 (NtNotifyChangeSession.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1AE8 (IopCancelIrpsInThreadList.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C3BD4 (WmipGetGuidObjectInstanceInfo.c)
 *     NtGetMUIRegistryInfo @ 0x1407CA590 (NtGetMUIRegistryInfo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D4E7C (EtwpUpdateGlobalGroupMasks.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5960 (FsRtlSetKernelEaFile.c)
 *     WmipDisableCollectOrEvent @ 0x1407D5D24 (WmipDisableCollectOrEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1407D5F90 (WmipSendEnableDisableRequest.c)
 *     WmipQueryGuidInfo @ 0x1407D6760 (WmipQueryGuidInfo.c)
 *     WmipEnumerateMofResources @ 0x1407D6830 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8C70 (FsRtlQueryCachedVdl.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407D9E80 (RtlDecompressFragmentLZNT1.c)
 *     IopGetSetObjectId @ 0x1407E4CBC (IopGetSetObjectId.c)
 *     EtwpStartTrace @ 0x1407E4DE0 (EtwpStartTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E7B70 (EtwpCrimsonProvEnableCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E83D4 (SPCallServerHandleWaitForDisplayWindow.c)
 *     FsRtlSetFileSize @ 0x1407EA694 (FsRtlSetFileSize.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5970 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     PnpQueryInterface @ 0x1407FD240 (PnpQueryInterface.c)
 *     WmipUpdateDataSource @ 0x1407FFAC8 (WmipUpdateDataSource.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140800B0C (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x14080163C (PopAcquireTransitionLock.c)
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     WmipAddMofResource @ 0x14080EC6C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x14080EE2C (WmipFindMRByNames.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1408110B8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1408110E4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ArbBuildAssignmentOrdering @ 0x140813A78 (ArbBuildAssignmentOrdering.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140815710 (PopDirectedDripsWorkerRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140816C90 (IopAllocateBootResources.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
 *     SepRmCommandServerThread @ 0x14082B780 (SepRmCommandServerThread.c)
 *     MiZeroPageFileFirstPage @ 0x140833E80 (MiZeroPageFileFirstPage.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140833F78 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140834090 (MiInsertPageFileInList.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140835BA0 (HalpPutAcpiHacksInRegistry.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140848654 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140848830 (IopAcquireReleaseDispatcherLock.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140848E84 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ArbArbiterHandler @ 0x14084BE30 (ArbArbiterHandler.c)
 *     WmipLegacyEtwWorker @ 0x14084FE80 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14084FF98 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x140851418 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408568E0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     PdcAcquireRwLockExclusive2 @ 0x14085AC88 (PdcAcquireRwLockExclusive2.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140860184 (IopInsertLegacyBusDeviceNode.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F40 (WheapProcessWaitingETWEvents.c)
 *     IoWMISetNotificationCallback @ 0x140862BB0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x140865730 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x140865C20 (FsRtlWaitForSmssEvent.c)
 *     WmipAddDataSource @ 0x14086A0E0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086A84C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086ABEC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086AE10 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x14086B060 (WmipFindISinGEbyName.c)
 *     WmipProcessSynchronousEtw @ 0x14086B158 (WmipProcessSynchronousEtw.c)
 *     PiDrvDbLoadNode @ 0x14086BB24 (PiDrvDbLoadNode.c)
 *     WmipSetTraceNotify @ 0x14086BD80 (WmipSetTraceNotify.c)
 *     IoWMIRegistrationControl @ 0x14086BEB0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14086C0F0 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14086C1CC (WmipUpdateDeviceStackSize.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D490 (FsRtlIssueDeviceIoControl.c)
 *     WmipRegistrationWorker @ 0x14086F0C0 (WmipRegistrationWorker.c)
 *     IopCreateArcName @ 0x14086F828 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     FsRtlBalanceReads @ 0x140874CF0 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408753CC (PnpSynchronizeDeviceEventQueue.c)
 *     IopLoadFileSystemDriver @ 0x140875830 (IopLoadFileSystemDriver.c)
 *     IoReportTargetDeviceChange @ 0x140881D10 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     WmipDeregisterDevice @ 0x140882568 (WmipDeregisterDevice.c)
 *     WmipDSCleanup @ 0x140882650 (WmipDSCleanup.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883414 (WmipDisableCollectionForRemovedGuid.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140884C08 (PopFxUnregisterDeviceOrWait.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932E08 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932F18 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1409338A0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x1409339A4 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140934EFC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140934FDC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935A90 (HalpQueryPccInterface.c)
 *     DbgkpQueueMessage @ 0x140937E4C (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140938DE0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AE74 (DbgkpLkmdLaunchSnapApc.c)
 *     EmPowerPagingEnabled @ 0x14093CAAC (EmPowerPagingEnabled.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093CFE8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14093DA90 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14093ED20 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940330 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14094437C (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x140944C3C (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140944D90 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x1409457E4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1409463F4 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140946D00 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1409476B0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951008 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1409521FC (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140954C40 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956A18 (PnpRequestHwProfileChangeNotification.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140963A60 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D11C (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14096D548 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14096DEE8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E050 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x14096F004 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14096F13C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F168 (PfTCleanup.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409817CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopDeactiveThermalRequest @ 0x140982EC8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1409830A8 (PopDisableCoolingExtension.c)
 *     PopFxNotifySxTransitionState @ 0x1409855D4 (PopFxNotifySxTransitionState.c)
 *     PopFxUnregisterDevice @ 0x140985DC4 (PopFxUnregisterDevice.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987070 (PoUnregisterPowerSettingCallback.c)
 *     PopGetWakeSource @ 0x140987368 (PopGetWakeSource.c)
 *     PopClearHiberFileSignature @ 0x14098844C (PopClearHiberFileSignature.c)
 *     PopReadPagesFromHiberFile @ 0x140988B2C (PopReadPagesFromHiberFile.c)
 *     PopResizeHiberFile @ 0x140988EE0 (PopResizeHiberFile.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x14098B010 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x14098B360 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993D0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409945D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x140995740 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x140997310 (PopFanRemove.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopPepUnregisterDevice @ 0x14099D928 (PopPepUnregisterDevice.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A1798 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD1DC (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0AB8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1409B393C (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1409B3E2C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1409B66B0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1409B6800 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B7830 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1409B82D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8428 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8874 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409C22E0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x1409C8BBC (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x1409D7260 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1409D78C8 (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7BB0 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8CFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409D9534 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D95F4 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409D96C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D9E28 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9EC4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DEAE0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1409DFBC8 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409E0580 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409E07EC (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409E0984 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E18C0 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409E1C48 (WmipWaitForCollectionEnabled.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPmcProfileSource @ 0x1409E5FA0 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1409E6A30 (EtwpSetPmcProfileSource.c)
 *     EtwpEnableDisableUMGL @ 0x1409E7358 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E795C (EtwpUpdatePerProcessTracing.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409EBF88 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409EBFE4 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1409ED4E0 (EtwpKsrCallback.c)
 *     EtwpSampledProfileRunDown @ 0x1409EFC14 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EFEE0 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409F0F10 (EtwpCovSampCaptureFlush.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     ExpWorkQueueDestroy @ 0x140A00AC4 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140A03210 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140A04620 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A04890 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140A04A90 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A04E50 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140A07CB0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A07D80 (WheaAttemptPhysicalPageOffline.c)
 *     MiInjectThreadForHotPatch @ 0x140A37954 (MiInjectThreadForHotPatch.c)
 *     sub_140A4C6A8 @ 0x140A4C6A8 (sub_140A4C6A8.c)
 *     sub_140A4D72C @ 0x140A4D72C (sub_140A4D72C.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F094 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A730B0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73970 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99EE4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C914 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DE60 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA0354 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA5340 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABD74 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140AC1EB8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140ACA76C (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAD8 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140AD1C1C (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140AD1FA0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADA260 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140ADF630 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B68BDC (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9B95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9BB50 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140B9BF2C (SbpWaitForVmbus.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KiStartRescheduleContext @ 0x140238F20 (KiStartRescheduleContext.c)
 *     KiCommitThreadWait @ 0x140241F20 (KiCommitThreadWait.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402425A0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243B70 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246770 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252760 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1402BBC10 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KeAbPostReleaseEx @ 0x1402BD4F0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1403078C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x140307F0C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308574 (KiCommitRescheduleContext.c)
 *     KiDeliverApc @ 0x14030F890 (KiDeliverApc.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD2C0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r13
  __int64 v8; // r8
  unsigned __int8 v9; // r14
  BOOLEAN v10; // di
  KPROCESSOR_MODE v11; // r12
  unsigned __int8 v12; // r12
  bool v13; // zf
  ULONG_PTR v14; // rdi
  __int64 v15; // rcx
  volatile __int64 WaitStatus; // rsi
  unsigned __int8 v17; // al
  __int64 *v18; // r11
  unsigned int v19; // r14d
  struct _KPRCB *v20; // r15
  struct _LIST_ENTRY *ThreadTimerDelay; // rdx
  __int64 v22; // r9
  unsigned int v23; // r10d
  unsigned __int64 v24; // rax
  __int64 **v25; // rcx
  __int64 v26; // r15
  unsigned __int8 v27; // dl
  int v28; // eax
  unsigned __int64 v29; // rdi
  _KWAIT_STATUS_REGISTER v30; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v33; // r11
  unsigned __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  volatile unsigned __int8 DpcRoutineActive; // cl
  volatile signed __int32 v38; // eax
  char v39; // al
  __int64 *p_AbWaitObject; // r9
  struct _LIST_ENTRY *v41; // rcx
  __int64 v42; // rcx
  _KWAIT_STATUS_REGISTER v43; // al
  _DWORD *v44; // r10
  __int64 v45; // rdx
  struct _KPRCB *v46; // rcx
  unsigned __int8 v47; // cl
  unsigned __int8 v48; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v50; // rdx
  _DWORD *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // bl
  _QWORD *v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r9
  _DWORD *v60; // r11
  char v61; // r10
  __int64 v62; // rdx
  unsigned int v63; // r10d
  _DWORD *v64; // rcx
  char v65; // bl
  _QWORD *RescheduleContextEntryForPrcb; // rax
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r9
  _DWORD *v70; // r11
  char v71; // r10
  __int64 v72; // rdx
  unsigned int v73; // r10d
  _DWORD *v74; // rcx
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  unsigned __int8 v78; // cl
  struct _KPRCB *v79; // r9
  _DWORD *v80; // r8
  int v81; // eax
  signed __int32 v82[8]; // [rsp+0h] [rbp-100h] BYREF
  KPROCESSOR_MODE v83; // [rsp+30h] [rbp-D0h]
  bool v84; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v85; // [rsp+32h] [rbp-CEh]
  BOOLEAN v86; // [rsp+33h] [rbp-CDh]
  unsigned int v87; // [rsp+34h] [rbp-CCh]
  LONGLONG QuadPart; // [rsp+38h] [rbp-C8h]
  __int64 v89; // [rsp+40h] [rbp-C0h]
  int v90; // [rsp+48h] [rbp-B8h] BYREF
  KWAIT_REASON v91; // [rsp+4Ch] [rbp-B4h]
  int v92; // [rsp+50h] [rbp-B0h] BYREF
  int v93; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v94; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v95; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v96; // [rsp+68h] [rbp-98h] BYREF
  __int64 v97; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v98[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  __int128 v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+A0h] [rbp-60h]
  _DWORD v102[84]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v103[84]; // [rsp+200h] [rbp+100h] BYREF

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = (ULONG_PTR)Object;
  v86 = Alertable;
  v83 = WaitMode;
  v91 = WaitReason;
  v98[0] = 0LL;
  QuadPart = 0LL;
  v84 = 0;
  v89 = 0LL;
  v85 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( v85 )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v33) = 4;
      else
        v33 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v33;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 1LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v87 = 1;
    }
    else
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v87 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v87 = 0;
  }
  while ( 1 )
  {
    v9 = *p_WaitIrql;
    v10 = v86;
    v11 = v83;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v11;
      if ( v10 )
        CurrentThread->MiscFlags |= 0x10u;
      v90 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v90);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || v9 || CurrentThread->SpecialApcDisable )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v48 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v48 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v50 = CurrentPrcb->SchedulerAssist;
          v13 = (v50[5] & 0xFFFF0003) == 0;
          v50[5] &= 0xFFFF0003;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v47 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
      {
        v51 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v47 == 2 )
          LODWORD(v52) = 4;
        else
          v52 = (-1LL << (v47 + 1)) & 4;
        v8 = (unsigned int)v52 | v51[5];
        v51[5] = v8;
      }
      *p_WaitIrql = 0;
    }
    v12 = v85;
    v13 = v10 == 0;
    v14 = BugCheckParameter2;
    if ( v13 )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v83 )
      {
        LODWORD(WaitStatus) = 192;
LABEL_99:
        CurrentThread->ThreadLock = 0LL;
        v45 = v9;
        v46 = KeGetCurrentPrcb();
LABEL_100:
        KiCheckForThreadDispatch(v46, v45, v8);
        return WaitStatus;
      }
      v15 = 0LL;
    }
    else
    {
      v8 = v83;
      if ( CurrentThread->Alerted[v83] )
      {
        CurrentThread->Alerted[v83] = 0;
        LODWORD(WaitStatus) = 257;
        v15 = 0LL;
      }
      else if ( !v83
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v15 = 0LL;
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          LODWORD(WaitStatus) = 257;
        }
        else
        {
          LODWORD(WaitStatus) = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        LODWORD(WaitStatus) = 192;
        v15 = 0LL;
      }
      if ( (_DWORD)WaitStatus )
        goto LABEL_99;
    }
    v17 = v91;
    v18 = (__int64 *)&CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitReason = v17;
    v19 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v20 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v14;
    if ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v14 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
      v18 = (__int64 *)&CurrentThread->320;
    }
    ThreadTimerDelay = (struct _LIST_ENTRY *)*(unsigned int *)(v14 + 4);
    if ( (*(_BYTE *)v14 & 0x7F) == 2 )
      break;
    if ( (int)ThreadTimerDelay > 0 )
    {
      if ( (*(_BYTE *)v14 & 7) == 1 )
      {
        v28 = 0;
      }
      else
      {
        if ( (*(_BYTE *)v14 & 0x7F) != 5 )
          goto LABEL_36;
        v28 = (_DWORD)ThreadTimerDelay - 1;
      }
      *(_DWORD *)(v14 + 4) = v28;
      goto LABEL_36;
    }
LABEL_23:
    v22 = QuadPart;
    v23 = v87;
    v24 = QuadPart;
    if ( v87 == 2 )
    {
      ThreadTimerDelay = (struct _LIST_ENTRY *)CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v24 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*p_WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v24 = (unsigned __int64)ThreadTimerDelay + QuadPart;
      }
    }
    else
    {
      if ( !v87 )
        goto LABEL_25;
      if ( !QuadPart )
      {
LABEL_55:
        LODWORD(WaitStatus) = 258;
        goto LABEL_36;
      }
      v34 = MEMORY[0xFFFFF78000000014];
    }
    if ( v34 > v24 )
      goto LABEL_55;
LABEL_25:
    v25 = *(__int64 ***)(v14 + 16);
    if ( *v25 != (__int64 *)(v14 + 8) )
      goto LABEL_156;
    *v18 = v14 + 8;
    v18[1] = (__int64)v25;
    *v25 = v18;
    *(_QWORD *)(v14 + 16) = v18;
    _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    v13 = !v84;
    CurrentThread->WaitBlockCount = 1;
    if ( v13 )
    {
      v26 = v89;
    }
    else
    {
      v53 = KeAbPreAcquire(v14, 0LL);
      v22 = QuadPart;
      v18 = (__int64 *)&CurrentThread->320;
      v23 = v87;
      v26 = v53;
      v89 = v53;
    }
    if ( v26 )
    {
      KeAbPreWait(v26, ThreadTimerDelay, v8);
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait(
                                            (ULONG_PTR)CurrentThread,
                                            (__int64 *)&CurrentThread->320,
                                            v87,
                                            QuadPart,
                                            v98);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPreAcquire(v14, v26);
        KeAbPostReleaseEx(v14);
        v89 = 0LL;
      }
      else
      {
        v89 = KeAbPreAcquire(v14, v26);
        *(_BYTE *)(v89 + 18) = 1;
      }
    }
    else
    {
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, v18, v23, v22, v98);
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v85 = 0;
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v27 == 2 )
        v8 = 4LL;
      else
        v8 = (-1LL << (v27 + 1)) & 4;
      v44[5] |= v8;
    }
    *p_WaitIrql = v27;
  }
  v84 = (*(_BYTE *)(v14 + 48) & 2) != 0;
  if ( (int)ThreadTimerDelay <= 0
    && (CurrentThread != *(struct _KTHREAD **)(v14 + 40) || *(_BYTE *)(v14 + 2) != v20->DpcRoutineActive) )
  {
    goto LABEL_23;
  }
  v35 = *(_DWORD *)(v14 + 4);
  if ( v35 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    KiFastExitThreadWait(v20, CurrentThread, v12);
    RtlRaiseStatus(3221225873LL);
  }
  v36 = v35 - 1;
  *(_DWORD *)(v14 + 4) = v36;
  if ( v36 )
  {
LABEL_36:
    v8 = 4294967167LL;
    _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v82, 0);
    if ( CurrentThread->ThreadLock )
    {
      v93 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v93);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->ThreadLock = 0LL;
    }
    v29 = *p_WaitIrql;
    v30.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    v96 = 0LL;
    if ( (v30.Flags & 0x38) != 0 )
    {
      if ( (v30.Flags & 0x18) != 0 )
      {
        if ( (v30.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v97 = 0LL;
        v65 = 0;
        memset(v103, 0, sizeof(v103));
        KiAcquirePrcbLocksForIsolationUnit(v20, 0LL, &v96);
        if ( !v20->NextThread )
        {
          KiStartRescheduleContext((__int64)v103, &v96, 0LL);
          RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v103, (__int64)v20);
          LOBYTE(v67) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v68, 0LL, v67);
          if ( (v71 & 2) != 0 )
          {
            v72 = LOBYTE(v103[0]);
            v73 = 0;
            if ( LOBYTE(v103[0]) )
            {
              do
              {
                v74 = &v103[10 * v73 + 4];
                if ( v74 != v70 )
                {
                  LOBYTE(v69) = 1;
                  KiAdjustRescheduleContextEntryForThreadRemoval(v74, v72, 0LL, v69);
                  v72 = LOBYTE(v103[0]);
                }
                ++v73;
              }
              while ( v73 < (unsigned __int8)v72 );
            }
            v103[1] = 0;
          }
          KiSearchForNewThreadsForRescheduleContext(v103, (__int64)&v97);
          v65 = KiCommitRescheduleContext(v103, v20, 0LL, &v97);
        }
        KiReleasePrcbLocksForIsolationUnit(&v96);
        if ( v65 )
        {
          KiCompleteRescheduleContext(v103, (__int64)v20);
          KiFlushSoftwareInterruptBatch(&v20->DeferredDispatchInterrupts);
        }
        KiProcessDeferredReadyList(v20, &v97, (unsigned __int8)v29);
        return WaitStatus;
      }
      goto LABEL_171;
    }
    goto LABEL_38;
  }
  CurrentThread->WaitStatus = 0LL;
  v92 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v92);
    while ( CurrentThread->ThreadLock );
  }
  if ( *(_BYTE *)(v14 + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v20->CurrentThread == CurrentThread )
    DpcRoutineActive = v20->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v101 = 0LL;
  v38 = *(_DWORD *)v14;
  v100 = 0LL;
  LODWORD(v100) = v38;
  BYTE2(v100) = DpcRoutineActive;
  *(_DWORD *)v14 = v100;
  v39 = *(_BYTE *)(v14 + 48);
  *(_QWORD *)(v14 + 40) = CurrentThread;
  if ( (v39 & 1) != 0 )
  {
    *(_BYTE *)(v14 + 48) = v39 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
  }
  if ( (*(_BYTE *)(v14 + 48) & 2) != 0 )
    CurrentThread->AbWaitObject = (void *volatile)v14;
  else
    CurrentThread->AbWaitObject = 0LL;
  p_AbWaitObject = (__int64 *)&CurrentThread->AbWaitObject;
  ThreadTimerDelay = CurrentThread->MutantListHead.Blink;
  v41 = (struct _LIST_ENTRY *)(v14 + 24);
  if ( ThreadTimerDelay->Flink != &CurrentThread->MutantListHead )
LABEL_156:
    __fastfail(3u);
  v41->Flink = &CurrentThread->MutantListHead;
  *(_QWORD *)(v14 + 32) = ThreadTimerDelay;
  ThreadTimerDelay->Flink = v41;
  CurrentThread->MutantListHead.Blink = v41;
  _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  WaitStatus = CurrentThread->WaitStatus;
  v42 = *p_AbWaitObject;
  if ( *p_AbWaitObject )
  {
    *p_AbWaitObject = 0LL;
    v54 = KeAbPreAcquire(v42, 0LL);
    if ( v54 )
      *(_BYTE *)(v54 + 18) = 1;
  }
  v29 = *p_WaitIrql;
  v43.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  v94 = 0LL;
  if ( (v43.Flags & 0x38) != 0 )
  {
    if ( (v43.Flags & 0x18) != 0 )
    {
      if ( (v43.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v95 = 0LL;
      v55 = 0;
      memset(v102, 0, sizeof(v102));
      KiAcquirePrcbLocksForIsolationUnit(v20, 0LL, &v94);
      if ( !v20->NextThread )
      {
        KiStartRescheduleContext((__int64)v102, &v94, 0LL);
        v56 = KiFindRescheduleContextEntryForPrcb(v102, (__int64)v20);
        LOBYTE(v57) = 1;
        KiAdjustRescheduleContextEntryForThreadRemoval(v56, v58, 0LL, v57);
        if ( (v61 & 2) != 0 )
        {
          v62 = LOBYTE(v102[0]);
          v63 = 0;
          if ( LOBYTE(v102[0]) )
          {
            do
            {
              v64 = &v102[10 * v63 + 4];
              if ( v64 != v60 )
              {
                LOBYTE(v59) = 1;
                KiAdjustRescheduleContextEntryForThreadRemoval(v64, v62, 0LL, v59);
                v62 = LOBYTE(v102[0]);
              }
              ++v63;
            }
            while ( v63 < (unsigned __int8)v62 );
          }
          v102[1] = 0;
        }
        KiSearchForNewThreadsForRescheduleContext(v102, (__int64)&v95);
        v55 = KiCommitRescheduleContext(v102, v20, 0LL, &v95);
      }
      KiReleasePrcbLocksForIsolationUnit(&v94);
      if ( v55 )
      {
        KiCompleteRescheduleContext(v102, (__int64)v20);
        KiFlushSoftwareInterruptBatch(&v20->DeferredDispatchInterrupts);
      }
      KiProcessDeferredReadyList(v20, &v95, (unsigned __int8)v29);
      return WaitStatus;
    }
LABEL_171:
    LOBYTE(ThreadTimerDelay) = 1;
    KiCheckForThreadDispatch(v20, ThreadTimerDelay, v8);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      v75 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v75 - 2) <= 0xDu )
      {
        v76 = KeGetCurrentPrcb();
        v77 = v76->SchedulerAssist;
        v13 = (v77[5] & 0xFFFF0001) == 0;
        v77[5] &= 0xFFFF0001;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
    __writecr8(0LL);
    return WaitStatus;
  }
LABEL_38:
  if ( v12 )
  {
    v46 = v20;
    v45 = (unsigned __int8)v29;
    goto LABEL_100;
  }
  if ( KiIrqlFlags )
  {
    v78 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v78 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v78 >= 2u )
    {
      v79 = KeGetCurrentPrcb();
      v80 = v79->SchedulerAssist;
      v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
      v13 = (v81 & v80[5]) == 0;
      v80[5] &= v81;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v79);
    }
  }
  __writecr8(v29);
  return WaitStatus;
}
