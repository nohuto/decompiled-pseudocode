/*
 * XREFs of KeWaitForSingleObject @ 0x140243CC0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     CmSiWaitForSingleEvent @ 0x140208C58 (CmSiWaitForSingleEvent.c)
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B660 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcCanIWrite @ 0x14020F1A0 (CcCanIWrite.c)
 *     WmipFindRegEntryByProviderId @ 0x14022AA14 (WmipFindRegEntryByProviderId.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271270 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     PopFxActivateComponent @ 0x1402871E0 (PopFxActivateComponent.c)
 *     PopPepUpdateConstraints @ 0x14028D114 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D230 (PopIrpWorker.c)
 *     CcWriteBehind @ 0x14029B438 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x14029ECA0 (CcUnmapVacbArray.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     AlpcpSignalAndWait @ 0x1402B6B80 (AlpcpSignalAndWait.c)
 *     MiAsyncSlabReplenish @ 0x1402B9C54 (MiAsyncSlabReplenish.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFAEC (PopExecuteOnTargetProcessors.c)
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
 *     ExfWaitForRundownProtectionRelease @ 0x140309608 (ExfWaitForRundownProtectionRelease.c)
 *     KiSchedulerApc @ 0x14030A830 (KiSchedulerApc.c)
 *     PopFxProcessWorkPool @ 0x140310E14 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031CDCC (EtwpEnableMetaProviderGuid.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140321FD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14032242C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 *     PpmCheckPeriodicStart @ 0x14032BE40 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     ExpWaitForResource @ 0x1403410D0 (ExpWaitForResource.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403428E8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140342B74 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140342C4C (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403432C0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     EtwpStartLoggerThread @ 0x140343454 (EtwpStartLoggerThread.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140348290 (ExTimedWaitForUnblockPushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14034D8C0 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034D9B4 (CcWaitForUninitializeCacheMap.c)
 *     CcSetValidData @ 0x140354824 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140354C60 (IoSynchronousCallDriver.c)
 *     IopLoadDriverImage @ 0x14035A970 (IopLoadDriverImage.c)
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 *     WmipReceiveNotifications @ 0x140360F3C (WmipReceiveNotifications.c)
 *     SmKmStoreHelperWorker @ 0x14036AF80 (SmKmStoreHelperWorker.c)
 *     PpmTryAcquireLock @ 0x14036D3A8 (PpmTryAcquireLock.c)
 *     ExUnregisterCallback @ 0x14036E050 (ExUnregisterCallback.c)
 *     PopSetWatchdog @ 0x14036FA5C (PopSetWatchdog.c)
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x14038140C (WheapAddErrorSource.c)
 *     KeSwapProcessOrStack @ 0x140393930 (KeSwapProcessOrStack.c)
 *     CmpLazyWriteWorker @ 0x14039FE60 (CmpLazyWriteWorker.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A1D34 (LdrpSetAlternateResourceModuleHandle.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A2EBC (KiInvokeInterruptServiceRoutine.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1403A3118 (KiAcquireSecondaryPassiveConnectLock.c)
 *     WmipBuildTraceDeviceList @ 0x1403A3190 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x1403A5214 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1403A5570 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A622C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiStoreEvictThread @ 0x1403A7F20 (MiStoreEvictThread.c)
 *     PopIrpWorkerControl @ 0x1403B0E50 (PopIrpWorkerControl.c)
 *     MiModifiedPageWriter @ 0x1403B20D0 (MiModifiedPageWriter.c)
 *     PnpSerializeBoot @ 0x1403B2500 (PnpSerializeBoot.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B2C00 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5460 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageWrite @ 0x1403C1194 (MiZeroPageWrite.c)
 *     WmipFindRegEntryByDevice @ 0x1403C1F64 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403C2024 (WmipAllocRegEntry.c)
 *     PnpLockDeviceActionQueue @ 0x1403C383C (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C3A40 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D3FB0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     WmipDeregisterRegEntry @ 0x1403D4480 (WmipDeregisterRegEntry.c)
 *     PnpLockMountableDevice @ 0x1403D4B50 (PnpLockMountableDevice.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D64B0 (IoReleaseRemoveLockAndWaitEx.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040F674 (IopWaitForSynchronousIoEvent.c)
 *     ExpWaitForFastResource2 @ 0x140416164 (ExpWaitForFastResource2.c)
 *     FsFilterAllocateCompletionStack @ 0x14045EB7C (FsFilterAllocateCompletionStack.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140519CC8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x140536EF0 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140539004 (CcDeleteSectionsForPartition.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     FsRtlpPostStackOverflow @ 0x14053F4E4 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x140551184 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x140554A80 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554D18 (IopAllocateReserveIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14055995C (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055F508 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnprQuiesce @ 0x140563228 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x140564F94 (PnpProcessRebalance.c)
 *     KeAbCrossThreadDelete @ 0x140579600 (KeAbCrossThreadDelete.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A1FC (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A230 (KiSynchronizePassiveInterruptExecution.c)
 *     KiStallBugcheckThread @ 0x14057B648 (KiStallBugcheckThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582860 (NtSignalAndWaitForSingleObject.c)
 *     PopHaltDeviceIdle @ 0x140587550 (PopHaltDeviceIdle.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058AC48 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405903C0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopSleepDeviceList @ 0x140590AA8 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140590D4C (PopWakeDeviceList.c)
 *     PopRunMaximumIrpWorkers @ 0x140598B64 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598D3C (PopIgnoreBatteryStatusChange.c)
 *     PspIumFreePartitionState @ 0x1405A5FEC (PspIumFreePartitionState.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BEFE4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405C0310 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmTerminateStoreProcess @ 0x1405C9C78 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405CBB18 (SmKmStoreHelperWaitForCommand.c)
 *     SmpFpWaitForResource @ 0x1405CC51C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CD180 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405CDC10 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1405E64E0 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140601B3C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x140603108 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x140609520 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140609790 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140611090 (WheapProcessWorkQueueItem.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406198B8 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140631C10 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14063AD8C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B498 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140641D10 (MiCheckHoldFaultForHotPatch.c)
 *     MiContractWsSwapPageFileWorker @ 0x1406528B0 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForAvailablePages @ 0x14065395C (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
 *     MiZeroNodeExiting @ 0x1406557A8 (MiZeroNodeExiting.c)
 *     MiApplyCommitDelay @ 0x1406561BC (MiApplyCommitDelay.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A94 (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x14065C0A8 (MiStoreDeletePartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D0A4 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066CB80 @ 0x14066CB80 (sub_14066CB80.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpDisableTraceProviders @ 0x1406BF048 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x1406C55DC (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1406C64B4 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x1406C6968 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406C6A5C (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x1406C6CF0 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x1406C7090 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C7530 (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7F60 (WmipPrepareForWnodeAD.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBDD0 (PiControlGetSetDeviceStatus.c)
 *     ObWaitForSingleObject @ 0x1406E37F0 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     sub_1406F2550 @ 0x1406F2550 (sub_1406F2550.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140702150 (IoVolumeDeviceNameToGuidPath.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     IopGetFileInformation @ 0x14075B36C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14075B4A0 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C5B0 (RtlDecompressBufferLZNT1.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     PspUserThreadStartup @ 0x14076FBF0 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140773CD0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     WdtpCancelTimer @ 0x140785BDC (WdtpCancelTimer.c)
 *     PnpDeviceEventWorker @ 0x140786D70 (PnpDeviceEventWorker.c)
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14078F278 (IopDestroyActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x14078F9D4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140790740 (IopFilterResourceRequirementsCall.c)
 *     IopUncacheInterfaceInformation @ 0x140790DB0 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1407939E0 (PnpStartDeviceNode.c)
 *     PopBsdFlush @ 0x1407A69D4 (PopBsdFlush.c)
 *     AlpcpWaitForPortReferences @ 0x1407AB7CC (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x1407B3FD0 (NtNotifyChangeSession.c)
 *     IopCancelIrpsInThreadList @ 0x1407C2078 (IopCancelIrpsInThreadList.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C4164 (WmipGetGuidObjectInstanceInfo.c)
 *     NtGetMUIRegistryInfo @ 0x1407CAB20 (NtGetMUIRegistryInfo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D53FC (EtwpUpdateGlobalGroupMasks.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     WmipDisableCollectOrEvent @ 0x1407D62A4 (WmipDisableCollectOrEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6510 (WmipSendEnableDisableRequest.c)
 *     WmipQueryGuidInfo @ 0x1407D6CE0 (WmipQueryGuidInfo.c)
 *     WmipEnumerateMofResources @ 0x1407D6DB0 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x1407D91F0 (FsRtlQueryCachedVdl.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407DA400 (RtlDecompressFragmentLZNT1.c)
 *     IopGetSetObjectId @ 0x1407E523C (IopGetSetObjectId.c)
 *     EtwpStartTrace @ 0x1407E5360 (EtwpStartTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E80F0 (EtwpCrimsonProvEnableCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407E8954 (SPCallServerHandleWaitForDisplayWindow.c)
 *     FsRtlSetFileSize @ 0x1407EAC14 (FsRtlSetFileSize.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     PnpQueryInterface @ 0x1407FD8F0 (PnpQueryInterface.c)
 *     WmipUpdateDataSource @ 0x140800178 (WmipUpdateDataSource.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1408011BC (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     WmipAddMofResource @ 0x1408111EC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1408113AC (WmipFindMRByNames.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140813638 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140813664 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ArbBuildAssignmentOrdering @ 0x140815FF8 (ArbBuildAssignmentOrdering.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140817C90 (PopDirectedDripsWorkerRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140819210 (IopAllocateBootResources.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140829080 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140829610 (HalGetAdapterV2.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     MiZeroPageFileFirstPage @ 0x1408359D0 (MiZeroPageFileFirstPage.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835AC8 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140835BE0 (MiInsertPageFileInList.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1408376F0 (HalpPutAcpiHacksInRegistry.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1408498F4 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140849C90 (IopAcquireReleaseDispatcherLock.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14084A0E4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ArbArbiterHandler @ 0x14084D090 (ArbArbiterHandler.c)
 *     WmipLegacyEtwWorker @ 0x140850D90 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140850EA8 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x140852328 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408577F0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     PdcAcquireRwLockExclusive2 @ 0x14085B458 (PdcAcquireRwLockExclusive2.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408602E4 (IopInsertLegacyBusDeviceNode.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860638 (CmpWaitOnHiveWriteQueue.c)
 *     WheapProcessWaitingETWEvents @ 0x140861010 (WheapProcessWaitingETWEvents.c)
 *     IoWMISetNotificationCallback @ 0x140862DD0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x140865B50 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1408660F0 (FsRtlWaitForSmssEvent.c)
 *     WmipAddDataSource @ 0x14086A5B0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086AD1C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086B0BC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086B2E0 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x14086B530 (WmipFindISinGEbyName.c)
 *     WmipProcessSynchronousEtw @ 0x14086B628 (WmipProcessSynchronousEtw.c)
 *     PiDrvDbLoadNode @ 0x14086BFF4 (PiDrvDbLoadNode.c)
 *     WmipSetTraceNotify @ 0x14086C250 (WmipSetTraceNotify.c)
 *     IoWMIRegistrationControl @ 0x14086C380 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086C458 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14086C5C0 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14086C69C (WmipUpdateDeviceStackSize.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086D960 (FsRtlIssueDeviceIoControl.c)
 *     WmipRegistrationWorker @ 0x14086F590 (WmipRegistrationWorker.c)
 *     IopCreateArcName @ 0x14086FCF8 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     FsRtlBalanceReads @ 0x1408751C0 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14087589C (PnpSynchronizeDeviceEventQueue.c)
 *     IopLoadFileSystemDriver @ 0x140875D00 (IopLoadFileSystemDriver.c)
 *     IoReportTargetDeviceChange @ 0x1408821E0 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     WmipDeregisterDevice @ 0x140882A38 (WmipDeregisterDevice.c)
 *     WmipDSCleanup @ 0x140882B20 (WmipDSCleanup.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1408838E4 (WmipDisableCollectionForRemovedGuid.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408850D8 (PopFxUnregisterDeviceOrWait.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140932EB8 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140932FC8 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140933870 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140933974 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140934FAC (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093508C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140935B40 (HalpQueryPccInterface.c)
 *     DbgkpQueueMessage @ 0x140937EFC (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140938E90 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AF24 (DbgkpLkmdLaunchSnapApc.c)
 *     EmPowerPagingEnabled @ 0x14093CB5C (EmPowerPagingEnabled.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D098 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14093DB40 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1409403E0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14094442C (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x140944CEC (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140944E40 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140945894 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1409464A4 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140946DB0 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140947760 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1409510B8 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1409522AC (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140954CF0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140956AC8 (PnpRequestHwProfileChangeNotification.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140963B10 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D1CC (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14096D5F8 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14096DF98 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E100 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x14096F0B4 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14096F1EC (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopDeactiveThermalRequest @ 0x140982F78 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x140983158 (PopDisableCoolingExtension.c)
 *     PopFxNotifySxTransitionState @ 0x140985684 (PopFxNotifySxTransitionState.c)
 *     PopFxUnregisterDevice @ 0x140985E74 (PopFxUnregisterDevice.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987120 (PoUnregisterPowerSettingCallback.c)
 *     PopGetWakeSource @ 0x140987418 (PopGetWakeSource.c)
 *     PopClearHiberFileSignature @ 0x1409884FC (PopClearHiberFileSignature.c)
 *     PopReadPagesFromHiberFile @ 0x140988BDC (PopReadPagesFromHiberFile.c)
 *     PopResizeHiberFile @ 0x140988F90 (PopResizeHiberFile.c)
 *     PopSetSystemAwayMode @ 0x14098A940 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x14098B410 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x14098B850 (PopInitSystemSleeperThread.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993DBC (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994140 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x1409957F0 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1409973C0 (PopFanRemove.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A910 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopPepUnregisterDevice @ 0x14099D9D8 (PopPepUnregisterDevice.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A1848 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD28C (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0B68 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1409B39EC (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1409B3EDC (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1409B6760 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B78E0 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1409B8384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B84D8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B8924 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409C2390 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x1409C8C6C (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x1409D7310 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1409D7978 (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7C60 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409D95E4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D96A4 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409D9774 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D9ED8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9F74 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DEB90 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1409DFC78 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409E0630 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409E089C (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409E0A34 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E1970 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409E1CF8 (WmipWaitForCollectionEnabled.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPmcProfileSource @ 0x1409E6050 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1409E6AE0 (EtwpSetPmcProfileSource.c)
 *     EtwpEnableDisableUMGL @ 0x1409E7408 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E7A0C (EtwpUpdatePerProcessTracing.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409EC038 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409EC094 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1409ED590 (EtwpKsrCallback.c)
 *     EtwpSampledProfileRunDown @ 0x1409EFCC4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EFF90 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409F0FC0 (EtwpCovSampCaptureFlush.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     ExpWorkQueueDestroy @ 0x140A00B74 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140A032C0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A04940 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140A04B40 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A04F00 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140A07D60 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A07E30 (WheaAttemptPhysicalPageOffline.c)
 *     MiInjectThreadForHotPatch @ 0x140A379C4 (MiInjectThreadForHotPatch.c)
 *     sub_140A4C718 @ 0x140A4C718 (sub_140A4C718.c)
 *     sub_140A4D79C @ 0x140A4D79C (sub_140A4D79C.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F104 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73120 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A739E0 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A99FA4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C9D4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA0414 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA5400 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140AC2EB8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140ACB73C (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACEAA8 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140AD2BEC (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140AD2F70 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADB230 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140AE0600 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140AEDF7C (AnFwFadeCompletion.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B3D2CC (IopCreateArcNamesCd.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B69B38 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     IopGetBootDiskInformation @ 0x140B94A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9C95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9CB50 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140B9CF2C (SbpWaitForVmbus.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KiStartRescheduleContext @ 0x140238F00 (KiStartRescheduleContext.c)
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242580 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243B50 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246750 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1402BBBE0 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KeAbPostReleaseEx @ 0x1402BD4C0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307790 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x140307DDC (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308444 (KiCommitRescheduleContext.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
