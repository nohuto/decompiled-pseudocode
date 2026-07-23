/*
 * XREFs of KeWaitForSingleObject @ 0x140243DB0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     CmSiWaitForSingleEvent @ 0x140208C58 (CmSiWaitForSingleEvent.c)
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     WmipFindRegEntryByProviderId @ 0x14022AB04 (WmipFindRegEntryByProviderId.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271620 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     PopFxActivateComponent @ 0x140287590 (PopFxActivateComponent.c)
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D5E0 (PopIrpWorker.c)
 *     CcWriteBehind @ 0x14029B7E8 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     AlpcpSignalAndWait @ 0x1402B6E40 (AlpcpSignalAndWait.c)
 *     MiAsyncSlabReplenish @ 0x1402B9F14 (MiAsyncSlabReplenish.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFDAC (PopExecuteOnTargetProcessors.c)
 *     MiReadyToZeroNextLargePage @ 0x1402D06D0 (MiReadyToZeroNextLargePage.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3798 (MiRetryNonPagedAllocation.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F7080 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7D08 (LdrpGetFromMUIMemCache.c)
 *     IopWaitForLockAlertable @ 0x1402FCF64 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304C20 (FsRtlpWaitForIoAtEof.c)
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1403099C8 (ExfWaitForRundownProtectionRelease.c)
 *     KiSchedulerApc @ 0x14030ABF0 (KiSchedulerApc.c)
 *     PopFxProcessWorkPool @ 0x140311284 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031D23C (EtwpEnableMetaProviderGuid.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140322440 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14032289C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 *     PpmCheckPeriodicStart @ 0x14032C2B0 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     ExpWaitForResource @ 0x140341850 (ExpWaitForResource.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140343068 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1403432F4 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1403433CC (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140343A40 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     EtwpStartLoggerThread @ 0x140343BD4 (EtwpStartLoggerThread.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348A10 (ExTimedWaitForUnblockPushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14034E060 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034E154 (CcWaitForUninitializeCacheMap.c)
 *     CcSetValidData @ 0x140354FC4 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140355400 (IoSynchronousCallDriver.c)
 *     IopLoadDriverImage @ 0x14035B110 (IopLoadDriverImage.c)
 *     MiQueueWorkingSetRequest @ 0x14035F068 (MiQueueWorkingSetRequest.c)
 *     WmipReceiveNotifications @ 0x14036172C (WmipReceiveNotifications.c)
 *     SmKmStoreHelperWorker @ 0x14036B770 (SmKmStoreHelperWorker.c)
 *     PpmTryAcquireLock @ 0x14036DB98 (PpmTryAcquireLock.c)
 *     ExUnregisterCallback @ 0x14036E840 (ExUnregisterCallback.c)
 *     PopSetWatchdog @ 0x14037024C (PopSetWatchdog.c)
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x140380F5C (WheapAddErrorSource.c)
 *     KeSwapProcessOrStack @ 0x140395690 (KeSwapProcessOrStack.c)
 *     CmpLazyWriteWorker @ 0x1403A0330 (CmpLazyWriteWorker.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A26D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A37DC (KiInvokeInterruptServiceRoutine.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1403A3A38 (KiAcquireSecondaryPassiveConnectLock.c)
 *     WmipBuildTraceDeviceList @ 0x1403A3AD0 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x1403A5B54 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1403A5EB0 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A6B98 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiStoreEvictThread @ 0x1403A8830 (MiStoreEvictThread.c)
 *     PopIrpWorkerControl @ 0x1403B16C0 (PopIrpWorkerControl.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 *     PnpSerializeBoot @ 0x1403B2D70 (PnpSerializeBoot.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3470 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5CD0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageWrite @ 0x1403C19D4 (MiZeroPageWrite.c)
 *     WmipFindRegEntryByDevice @ 0x1403C27A4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403C2864 (WmipAllocRegEntry.c)
 *     PnpLockDeviceActionQueue @ 0x1403C407C (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C4280 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D47F0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     WmipDeregisterRegEntry @ 0x1403D4CC0 (WmipDeregisterRegEntry.c)
 *     PnpLockMountableDevice @ 0x1403D5390 (PnpLockMountableDevice.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D6CF0 (IoReleaseRemoveLockAndWaitEx.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040FFC0 (IopWaitForSynchronousIoEvent.c)
 *     ExpWaitForFastResource2 @ 0x140416BA8 (ExpWaitForFastResource2.c)
 *     FsFilterAllocateCompletionStack @ 0x14045F5DC (FsFilterAllocateCompletionStack.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14051A158 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x140537390 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405394A4 (CcDeleteSectionsForPartition.c)
 *     CcWriteBehindAsync @ 0x14053A9D0 (CcWriteBehindAsync.c)
 *     FsRtlpPostStackOverflow @ 0x14053FAF4 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x1405550A0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140555338 (IopAllocateReserveIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x140559F7C (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055FB28 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnprQuiesce @ 0x140563848 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405655B4 (PnpProcessRebalance.c)
 *     KeAbCrossThreadDelete @ 0x140579A60 (KeAbCrossThreadDelete.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A65C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A690 (KiSynchronizePassiveInterruptExecution.c)
 *     KiStallBugcheckThread @ 0x14057BAA8 (KiStallBugcheckThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582CC0 (NtSignalAndWaitForSingleObject.c)
 *     PopHaltDeviceIdle @ 0x1405879B0 (PopHaltDeviceIdle.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058B0A8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590820 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopSleepDeviceList @ 0x140590F08 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x1405911AC (PopWakeDeviceList.c)
 *     PopRunMaximumIrpWorkers @ 0x140598FC4 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059919C (PopIgnoreBatteryStatusChange.c)
 *     PspIumFreePartitionState @ 0x1405A64CC (PspIumFreePartitionState.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BF4C4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405C07F0 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmTerminateStoreProcess @ 0x1405CA158 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBFF8 (SmKmStoreHelperWaitForCommand.c)
 *     SmpFpWaitForResource @ 0x1405CC9FC (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CD660 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405CE0F0 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1405E69C0 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14060201C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1406035E8 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x140609A00 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140609C70 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140611570 (WheapProcessWorkQueueItem.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619D98 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1406320F0 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14063B26C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B978 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1406421F0 (MiCheckHoldFaultForHotPatch.c)
 *     MiContractWsSwapPageFileWorker @ 0x140652D90 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForAvailablePages @ 0x140653E3C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiZeroNodeExiting @ 0x140655C88 (MiZeroNodeExiting.c)
 *     MiApplyCommitDelay @ 0x14065669C (MiApplyCommitDelay.c)
 *     MiDrainCrossPartitionUsage @ 0x140659F74 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x14065C588 (MiStoreDeletePartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D584 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD81C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpDisableTraceProviders @ 0x1406BF028 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x1406C555C (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1406C6434 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x1406C68E8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406C69DC (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x1406C6C70 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x1406C7010 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C74B0 (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7EE0 (WmipPrepareForWnodeAD.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     ObWaitForSingleObject @ 0x1406E3770 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x1406E69B0 (CmpParseKey.c)
 *     sub_1406F24D0 @ 0x1406F24D0 (sub_1406F24D0.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140702140 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407022B0 (IoVolumeDeviceNameToGuidPath.c)
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730680 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x140750DB4 (CmpFileFlushAndPurge.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     IopGetFileInformation @ 0x14075B04C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075B180 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C290 (RtlDecompressBufferLZNT1.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PspUserThreadStartup @ 0x14076F8D0 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1407707E0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 *     FsRtlQueryKernelEaFile @ 0x1407737A0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407739B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     WdtpCancelTimer @ 0x1407858BC (WdtpCancelTimer.c)
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     IoDisconnectInterrupt @ 0x14078E3C0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14078EF58 (IopDestroyActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x14078F6B4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140790420 (IopFilterResourceRequirementsCall.c)
 *     IopUncacheInterfaceInformation @ 0x140790A90 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     PopBsdFlush @ 0x1407A66B4 (PopBsdFlush.c)
 *     AlpcpWaitForPortReferences @ 0x1407AB40C (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x1407B3C10 (NtNotifyChangeSession.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1DB8 (IopCancelIrpsInThreadList.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C3EA4 (WmipGetGuidObjectInstanceInfo.c)
 *     NtGetMUIRegistryInfo @ 0x1407CA860 (NtGetMUIRegistryInfo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D514C (EtwpUpdateGlobalGroupMasks.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5C30 (FsRtlSetKernelEaFile.c)
 *     WmipDisableCollectOrEvent @ 0x1407D5FF4 (WmipDisableCollectOrEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6260 (WmipSendEnableDisableRequest.c)
 *     WmipQueryGuidInfo @ 0x1407D6A30 (WmipQueryGuidInfo.c)
 *     WmipEnumerateMofResources @ 0x1407D6B00 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8F40 (FsRtlQueryCachedVdl.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407DA150 (RtlDecompressFragmentLZNT1.c)
 *     IopGetSetObjectId @ 0x1407E4F8C (IopGetSetObjectId.c)
 *     EtwpStartTrace @ 0x1407E50B0 (EtwpStartTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E7E40 (EtwpCrimsonProvEnableCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E86A4 (SPCallServerHandleWaitForDisplayWindow.c)
 *     FsRtlSetFileSize @ 0x1407EA964 (FsRtlSetFileSize.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     WmipUpdateDataSource @ 0x1407FFD98 (WmipUpdateDataSource.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140800DDC (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x14080190C (PopAcquireTransitionLock.c)
 *     CmCompleteRegistryInitialization @ 0x14080ABF0 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     WmipAddMofResource @ 0x14080EF3C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x14080F0FC (WmipFindMRByNames.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140811388 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1408113B4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ArbBuildAssignmentOrdering @ 0x140813D48 (ArbBuildAssignmentOrdering.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1408159E0 (PopDirectedDripsWorkerRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140815B14 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140816F60 (IopAllocateBootResources.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 *     MiZeroPageFileFirstPage @ 0x140834180 (MiZeroPageFileFirstPage.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140835EA0 (HalpPutAcpiHacksInRegistry.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140848954 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140848B30 (IopAcquireReleaseDispatcherLock.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140849184 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ArbArbiterHandler @ 0x14084C130 (ArbArbiterHandler.c)
 *     WmipLegacyEtwWorker @ 0x140850180 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140850298 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x140851718 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140856B20 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     PdcAcquireRwLockExclusive2 @ 0x14085AEC8 (PdcAcquireRwLockExclusive2.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408603C4 (IopInsertLegacyBusDeviceNode.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860718 (CmpWaitOnHiveWriteQueue.c)
 *     WheapProcessWaitingETWEvents @ 0x140861180 (WheapProcessWaitingETWEvents.c)
 *     IoWMISetNotificationCallback @ 0x140862DF0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x140865970 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x140865E60 (FsRtlWaitForSmssEvent.c)
 *     WmipAddDataSource @ 0x14086A320 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086AA8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086AE2C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086B050 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x14086B2A0 (WmipFindISinGEbyName.c)
 *     WmipProcessSynchronousEtw @ 0x14086B398 (WmipProcessSynchronousEtw.c)
 *     PiDrvDbLoadNode @ 0x14086BD64 (PiDrvDbLoadNode.c)
 *     WmipSetTraceNotify @ 0x14086BFC0 (WmipSetTraceNotify.c)
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086C1C8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14086C330 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14086C40C (WmipUpdateDeviceStackSize.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D6D0 (FsRtlIssueDeviceIoControl.c)
 *     WmipRegistrationWorker @ 0x14086F300 (WmipRegistrationWorker.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     FsRtlBalanceReads @ 0x140874F30 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14087560C (PnpSynchronizeDeviceEventQueue.c)
 *     IopLoadFileSystemDriver @ 0x140875A70 (IopLoadFileSystemDriver.c)
 *     IoReportTargetDeviceChange @ 0x140881F50 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     WmipDeregisterDevice @ 0x1408827A8 (WmipDeregisterDevice.c)
 *     WmipDSCleanup @ 0x140882890 (WmipDSCleanup.c)
 *     IoSetInformation @ 0x140883430 (IoSetInformation.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140883654 (WmipDisableCollectionForRemovedGuid.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140884E48 (PopFxUnregisterDeviceOrWait.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140933008 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140933118 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140933AA0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140933BA4 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x1409350FC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1409351DC (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935C90 (HalpQueryPccInterface.c)
 *     DbgkpQueueMessage @ 0x14093804C (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140938FE0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093B074 (DbgkpLkmdLaunchSnapApc.c)
 *     EmPowerPagingEnabled @ 0x14093CCAC (EmPowerPagingEnabled.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D1E8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14093DC90 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14093EF20 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140940530 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14094457C (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x140944E3C (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140944F90 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x1409459E4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1409465F4 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1409478B0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951208 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140951B2C (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1409523FC (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140954E40 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956C18 (PnpRequestHwProfileChangeNotification.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140963C60 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D31C (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14096D748 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14096E0E8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E250 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x14096F204 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14096F33C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x1409819CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopDeactiveThermalRequest @ 0x1409830C8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1409832A8 (PopDisableCoolingExtension.c)
 *     PopFxNotifySxTransitionState @ 0x1409857D4 (PopFxNotifySxTransitionState.c)
 *     PopFxUnregisterDevice @ 0x140985FC4 (PopFxUnregisterDevice.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987270 (PoUnregisterPowerSettingCallback.c)
 *     PopGetWakeSource @ 0x140987568 (PopGetWakeSource.c)
 *     PopClearHiberFileSignature @ 0x14098864C (PopClearHiberFileSignature.c)
 *     PopReadPagesFromHiberFile @ 0x140988D2C (PopReadPagesFromHiberFile.c)
 *     PopResizeHiberFile @ 0x1409890E0 (PopResizeHiberFile.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x14098B560 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993F0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994290 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409947D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x140995940 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x140997510 (PopFanRemove.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099AA60 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopPepUnregisterDevice @ 0x14099DB28 (PopPepUnregisterDevice.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A1998 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD3DC (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0CB8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1409B3B3C (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1409B402C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1409B68B0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B7A30 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1409B84D4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B8628 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8A74 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409C24E0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x1409C8DBC (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x1409D7460 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1409D7AC8 (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7DB0 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8EFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409D9734 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D97F4 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409D98C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409DA028 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409DA0C4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DECE0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1409DFDC8 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409E0780 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409E09EC (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E1B50 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409E1ED8 (WmipWaitForCollectionEnabled.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPmcProfileSource @ 0x1409E6230 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1409E6CC0 (EtwpSetPmcProfileSource.c)
 *     EtwpEnableDisableUMGL @ 0x1409E75E8 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E7BEC (EtwpUpdatePerProcessTracing.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409EC218 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409EC274 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1409ED770 (EtwpKsrCallback.c)
 *     EtwpSampledProfileRunDown @ 0x1409EFEA4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F0170 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409F11A0 (EtwpCovSampCaptureFlush.c)
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 *     ExpWorkQueueDestroy @ 0x140A00D54 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140A048B0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A04B20 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140A04D20 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A050E0 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140A07F60 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08030 (WheaAttemptPhysicalPageOffline.c)
 *     MiInjectThreadForHotPatch @ 0x140A37C04 (MiInjectThreadForHotPatch.c)
 *     sub_140A4C958 @ 0x140A4C958 (sub_140A4C958.c)
 *     sub_140A4D9DC @ 0x140A4D9DC (sub_140A4D9DC.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F344 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73360 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     VhdiMountVhdFile @ 0x140A734CC (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A73C20 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99D54 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C784 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA01C4 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140AA6FAC (PopBuildDeviceNotifyList.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABBE4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140AC1EA8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAC8 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140AD1C0C (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140AD1F90 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADA250 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140ADF620 (ViFilterDispatchPnp.c)
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
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1402BBEA0 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
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
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
      if ( (_DWORD)KiIrqlFlags )
      {
        v48 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v48 - 2) <= 0xDu )
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
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
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
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
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
    RtlRaiseStatus(-1073741423);
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
    if ( (_DWORD)KiIrqlFlags )
    {
      v75 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v75 - 2) <= 0xDu )
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
  if ( (_DWORD)KiIrqlFlags )
  {
    v78 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v78 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v78 >= 2u )
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
