/*
 * XREFs of KeSetEvent @ 0x14023C6B0
 * Callers:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 *     CcCanIWrite @ 0x14020F180 (CcCanIWrite.c)
 *     ExReferenceCallBackBlock @ 0x140214EF0 (ExReferenceCallBackBlock.c)
 *     MiDecrementControlAreaCount @ 0x140219AA0 (MiDecrementControlAreaCount.c)
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiScheduleZeroPageThreads @ 0x14021F3CC (MiScheduleZeroPageThreads.c)
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x140222574 (MiAddZeroingThreads.c)
 *     KiDecrementProcessStackCount @ 0x140222CF4 (KiDecrementProcessStackCount.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     WmipUnreferenceRegEntry @ 0x14022ABC4 (WmipUnreferenceRegEntry.c)
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcFreeVirtualAddress @ 0x140262710 (CcFreeVirtualAddress.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     MiFinishVadDeletion @ 0x140289FA0 (MiFinishVadDeletion.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiInsertUnusedSubsection @ 0x14028BF90 (MiInsertUnusedSubsection.c)
 *     IopCopyCompleteReadRequest @ 0x14028C860 (IopCopyCompleteReadRequest.c)
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D5E0 (PopIrpWorker.c)
 *     PopFxReleasePowerIrp @ 0x14028DFD4 (PopFxReleasePowerIrp.c)
 *     PopRequestCompletion @ 0x14028E350 (PopRequestCompletion.c)
 *     PopFxAllocatePowerIrp @ 0x14028F0BC (PopFxAllocatePowerIrp.c)
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     CcWorkerThread @ 0x140298BD0 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029BAF0 (CcWriteBehindPreProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BED0 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     CcFlushCacheOneRange @ 0x14029E8E0 (CcFlushCacheOneRange.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MiIssueHardFaultIo @ 0x1402A1E70 (MiIssueHardFaultIo.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     AlpcpSignal @ 0x1402B6F00 (AlpcpSignal.c)
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExpWakePushLock @ 0x1402BDC20 (ExpWakePushLock.c)
 *     ExpWorkerThread @ 0x1402BEE20 (ExpWorkerThread.c)
 *     PopQueueTargetDpc @ 0x1402BFEE0 (PopQueueTargetDpc.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0E94 (CcPostWorkQueueAsyncRead.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D8C50 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiInsertPagesInList @ 0x1402DD7B0 (MiInsertPagesInList.c)
 *     MiIncreaseAvailablePages @ 0x1402DDC38 (MiIncreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x1402DF7B0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1402E2844 (PfSnReferenceProcessTrace.c)
 *     MiDecreaseAvailablePages @ 0x1402E88B0 (MiDecreaseAvailablePages.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1402E92A0 (MiReplenishSlabAllocatorWorker.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     PfpEventHandleFullBuffer @ 0x1402F5020 (PfpEventHandleFullBuffer.c)
 *     PfSnRemoveProcessTrace @ 0x1402F558C (PfSnRemoveProcessTrace.c)
 *     MiQueuePageAccessLog @ 0x1402F5780 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F5884 (PfpReturnAccessBuffer.c)
 *     IoAcquireRemoveLockEx @ 0x140312780 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x14031318C (PopFxCompleteComponentActivation.c)
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 *     PoFxPrepareDevice @ 0x140321AA4 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BE40 (PopPowerRequestCallbackWorker.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CFA4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140331AF0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140334590 (ExfReleaseRundownProtection.c)
 *     ExNotifyWithProcessing @ 0x14033C1F0 (ExNotifyWithProcessing.c)
 *     PoFxPowerControl @ 0x140341620 (PoFxPowerControl.c)
 *     IoReleaseRemoveLockEx @ 0x1403416C0 (IoReleaseRemoveLockEx.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140343068 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140343344 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140343510 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403455A0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14034DDF4 (KiRequestProcessInSwap.c)
 *     MiSignalZeroingPassComplete @ 0x14034E4C4 (MiSignalZeroingPassComplete.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1403583F0 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x140358E00 (CmpCompleteFlushAndPurgeIrp.c)
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035E000 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopQueueDirectedDripsWork @ 0x14035E844 (PopQueueDirectedDripsWork.c)
 *     MiQueueWorkingSetRequest @ 0x14035F068 (MiQueueWorkingSetRequest.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140361B80 (ExpPartitionCreateThreadIfNecessary.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140362D70 (LZNT1DecompressChunkWorkItem.c)
 *     PopFxComponentWork @ 0x140364E60 (PopFxComponentWork.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140365B70 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140365F90 (CmpLazyFlushDpcRoutine.c)
 *     MiReclaimSystemVa @ 0x14036795C (MiReclaimSystemVa.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcPrepareMdlWrite @ 0x140369330 (CcPrepareMdlWrite.c)
 *     SmKmStoreHelperWorker @ 0x14036B770 (SmKmStoreHelperWorker.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14036E6A0 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140370590 (PopUpdateWatchdogNoWorkersEvent.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14037D070 (HalpReleaseSecondaryIcEntryShared.c)
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x140380F5C (WheapAddErrorSource.c)
 *     KeBalanceSetManager @ 0x1403946E0 (KeBalanceSetManager.c)
 *     MiSyncCommitSignals @ 0x1403963C0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403989E8 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x1403A0038 (ExCompareExchangeCallBack.c)
 *     PnpCompleteSystemStartProcess @ 0x1403A1008 (PnpCompleteSystemStartProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x1403A2E6C (KiConnectSecondaryInterrupt.c)
 *     KiProcessDisconnectList @ 0x1403A3448 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A37DC (KiInvokeInterruptServiceRoutine.c)
 *     MiStoreEvictThread @ 0x1403A8830 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE900 (MiUpdateAvailableEvents.c)
 *     MiZeroPageThread @ 0x1403B0210 (MiZeroPageThread.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0500 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3470 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroEngineSetOptimalCount @ 0x1403B4CC0 (MiZeroEngineSetOptimalCount.c)
 *     EtwpLoggerDpc @ 0x1403B5B00 (EtwpLoggerDpc.c)
 *     PopBatteryWakeDpc @ 0x1403B5E80 (PopBatteryWakeDpc.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C1F9C (CcNotifyWriteBehindVolume.c)
 *     CcPostDeferredWrites @ 0x1403C2028 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C40F4 (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x1403C6848 (CcDeleteBcbs.c)
 *     ExpEnumerateCallback @ 0x1403D09C0 (ExpEnumerateCallback.c)
 *     PnpUnlockMountableDevice @ 0x1403D586C (PnpUnlockMountableDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6720 (PnpRemoveDeviceActionRequests.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x14041A200 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PspGetSetContextSpecialApc @ 0x140429030 (PspGetSetContextSpecialApc.c)
 *     FsFilterFreeCompletionStack @ 0x14045F6DA (FsFilterFreeCompletionStack.c)
 *     PopFxReleaseDevice @ 0x14046319C (PopFxReleaseDevice.c)
 *     SmFpFree @ 0x1404664A8 (SmFpFree.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A4B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14046A530 (EtwpCovSampCaptureQueueDpc.c)
 *     ExReleaseRundownProtectionEx @ 0x14046B7A0 (ExReleaseRundownProtectionEx.c)
 *     HalpProcessSecondarySignalList @ 0x14051A870 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x14051A9E8 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140535650 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x140536FEC (CcNotifyWriteBehindInternal.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorker @ 0x140539D8C (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A684 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053B164 (CcAsyncLazywriteWorkerMulti.c)
 *     FsRtlStackOverflowRead @ 0x14053FA80 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140555BFC (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x140555C6C (IopFreeReserveIrp.c)
 *     IopCompleteIoRingEntry @ 0x140559A1C (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x14055F5D0 (IopMcDereferenceMdl.c)
 *     PnprQuiesce @ 0x140563848 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405652D0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14056FB00 (KeRetryOutswapProcess.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140571F78 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14057A0A0 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14057A620 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A65C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A690 (KiSynchronizePassiveInterruptExecution.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057B2D0 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582CC0 (NtSignalAndWaitForSingleObject.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140583290 (PfpScenCtxWaiterTimedOut.c)
 *     PopPropogateCoolingChange @ 0x1405871F0 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x140587900 (PopDeviceIdleCompletion.c)
 *     PoFxAddComponentRelation @ 0x140587B60 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587F80 (PoFxAddDeviceRelation.c)
 *     PoFxNotifySurprisePowerOn @ 0x1405884A0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxRemoveComponentRelation @ 0x140588600 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405889F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x140589770 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140589A88 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140589B8C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140589D70 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14058A244 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x14058A460 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14058A540 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14058B750 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14058B950 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14058BB0C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14058C8F0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058CA00 (PopFxUpdateProcessorIdleState.c)
 *     PopUnregisterPowerSettingCallback @ 0x14058E114 (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x14058E454 (PopUserPresentSet.c)
 *     PopUserPresentSetWorker @ 0x14058E6A0 (PopUserPresentSetWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590820 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14059098C (PopCompleteNotifyTransitionCommon.c)
 *     PopBatteryIrpComplete @ 0x140599120 (PopBatteryIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x14059DB30 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepPlatformStateRegistered @ 0x14059FE84 (PopPepPlatformStateRegistered.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1405A0290 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1405A1098 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405A113C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A11D8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BECB4 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405BED7C (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2DF0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmKmGenericCompletion @ 0x1405CBAB0 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CCB38 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD850 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405CD930 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIoRequestComplete @ 0x1405CD9FC (SmIoRequestComplete.c)
 *     DifKeSetEventWrapper @ 0x1405E5EF0 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x1405FF710 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140601FE0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1406034B8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140603C40 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1406099B0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140609A00 (ExRegisterBootDevice.c)
 *     WheapProcessWorkQueueItem @ 0x140611570 (WheapProcessWorkQueueItem.c)
 *     MiDecrementVadsBeingDeleted @ 0x1406186E8 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14061A0C0 (MiZeroPageFile.c)
 *     MiFreeExcessSegments @ 0x140624F6C (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x140625604 (MiProcessDereferenceList.c)
 *     MiProcessingPageExtendComplete @ 0x140625BB0 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140625F90 (MiQueueControlAreaDelete.c)
 *     MiFinishResume @ 0x140626E20 (MiFinishResume.c)
 *     MiFlushAllFilesystemPages @ 0x1406297E4 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1406320F0 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1406322FC (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140632CD8 (MiMarkMdlComplete.c)
 *     MiHandleForceTrimWorkingSets @ 0x140635010 (MiHandleForceTrimWorkingSets.c)
 *     MiObtainFreePages @ 0x14063547C (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1406363B0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140636530 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x1406382C0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14063A028 (MiFinishPageFileExtension.c)
 *     MiFlushAllPagesWorker @ 0x14063A234 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 *     MiIrpCompletionApcRoutine @ 0x14063B250 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14063BB40 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWakeModifiedPageWriter @ 0x14063C188 (MiWakeModifiedPageWriter.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishHoldingDirtyFaults @ 0x140642B18 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x14064DFFC (MiPageNotZero.c)
 *     MiWakeAllZeroConductors @ 0x140655B5C (MiWakeAllZeroConductors.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14065C41C (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14065C550 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreDeletePartition @ 0x14065C588 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14065CE30 (MiStoreRundownWritesApc.c)
 *     MiStoreSetEvictPageFile @ 0x14065CEB0 (MiStoreSetEvictPageFile.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CF1C (MiStoreSetPageFileRunEvicted.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D584 (MmStoreFlushOutstandingEvictions.c)
 *     MiReadFromMemoryPagefile @ 0x140660E98 (MiReadFromMemoryPagefile.c)
 *     MiDecrementCloneHeaderCount @ 0x14066435C (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140664390 (MiDeleteCloneDescriptor.c)
 *     MiInSwapStoreWorker @ 0x1406817B0 (MiInSwapStoreWorker.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     EtwpDisassociateConsumer @ 0x1406828FC (EtwpDisassociateConsumer.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 *     IopWriteFile @ 0x1406B6F80 (IopWriteFile.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     sub_1406F24D0 @ 0x1406F24D0 (sub_1406F24D0.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1407090D0 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExpWnfNotifySubscription @ 0x1407112A8 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714638 (ExpWnfNotifyNameSubscribers.c)
 *     MiPfExecuteReadList @ 0x1407242F4 (MiPfExecuteReadList.c)
 *     AlpcpTrackPortReferences @ 0x140738170 (AlpcpTrackPortReferences.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     PfSnEndTrace @ 0x14074AA38 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14074BBF0 (PfTReplaceCurrentBuffer.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     CmpWakeWriteQueueWaiters @ 0x14075236C (CmpWakeWriteQueueWaiters.c)
 *     PfGetCompletedTrace @ 0x14075EC28 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075EEC8 (PfTTraceListAdd.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     NtLockFile @ 0x140765680 (NtLockFile.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C290 (RtlDecompressBufferLZNT1.c)
 *     CmNotifyRunDown @ 0x14076E7D4 (CmNotifyRunDown.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140772DD4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 *     EtwpQueueNotification @ 0x1407813D4 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x140782408 (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x140783F60 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14078E380 (EtwpRealtimeDisconnectAllConsumers.c)
 *     IopDestroyActiveConnectBlock @ 0x14078EF58 (IopDestroyActiveConnectBlock.c)
 *     PopBsdFlush @ 0x1407A66B4 (PopBsdFlush.c)
 *     PopSystemIdleWorker @ 0x1407A6F90 (PopSystemIdleWorker.c)
 *     NtSetEvent @ 0x1407AD720 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3C10 (NtNotifyChangeSession.c)
 *     MmSetSessionObjectIoEvent @ 0x1407B3F34 (MmSetSessionObjectIoEvent.c)
 *     MiStartZeroEngineThreads @ 0x1407BE43C (MiStartZeroEngineThreads.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1407C1F00 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     PfGenerateTrace @ 0x1407D3ED0 (PfGenerateTrace.c)
 *     CmpPostApc @ 0x1407D4DA0 (CmpPostApc.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407DA150 (RtlDecompressFragmentLZNT1.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1407E44D0 (CmpGetVolumeClusterSizeCompletion.c)
 *     IopTrackLink @ 0x1407E45E8 (IopTrackLink.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6644 (EtwpStopLoggerInstance.c)
 *     PopReleaseTransitionLock @ 0x140801968 (PopReleaseTransitionLock.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080AA14 (CmpInitializeSystemHivesLoad.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140813D48 (ArbBuildAssignmentOrdering.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 *     MmStoreRegister @ 0x140833104 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     PfTLoggingWorker @ 0x140838ED0 (PfTLoggingWorker.c)
 *     MUIRegistrySystemRoutine @ 0x140844C70 (MUIRegistrySystemRoutine.c)
 *     PopThermalWorker @ 0x140847B30 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140847F10 (PopFanWorker.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140848954 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140848B30 (IopAcquireReleaseDispatcherLock.c)
 *     ExpPartitionCreatePool @ 0x1408497F8 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x14084C130 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14084DD8C (CmpWaitForHiveMount.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1408509A0 (MiHotAddBootDeferredDescriptors.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B500 (SshpSessionManagerFlushControlEventBuffer.c)
 *     WheapProcessWaitingETWEvents @ 0x140861180 (WheapProcessWaitingETWEvents.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408671C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     WmipProcessSynchronousEtw @ 0x14086B398 (WmipProcessSynchronousEtw.c)
 *     WmipReleaseCollectionEnabled @ 0x14087566C (WmipReleaseCollectionEnabled.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14087FF70 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140884E48 (PopFxUnregisterDeviceOrWait.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8A90 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A976A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140933AA0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140933BA4 (HalpGetDynamicDevicePointer.c)
 *     DbgkpCloseObject @ 0x140937310 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x14093804C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140938348 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140938638 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140938AE0 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14093B2F0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14093E7E0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x140941174 (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x140944A00 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x1409459E4 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x1409478B0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1409523FC (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14096F33C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140980190 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x140980380 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x140985FC4 (PopFxUnregisterDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986150 (PopFxUpdateVetoMaskWork.c)
 *     PopCompleteAction @ 0x140989960 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409941E0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopBatteryReadTag @ 0x1409958B4 (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409AC148 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC4A8 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1409ACF80 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409AD090 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409B1BF0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1409B790C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1409B7A30 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1409B7CB0 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409C24BC (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C8C40 (Pdcv2pActivationClientCallback.c)
 *     SmpFlushStorePages @ 0x1409D88B0 (SmpFlushStorePages.c)
 *     SmcCacheAdd @ 0x1409DABD0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1409DAD7C (SmcCacheDelete.c)
 *     WmipQueueNotification @ 0x1409E16C8 (WmipQueueNotification.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409F0C1C (EtwpCovSampCaptureContextSetPaused.c)
 *     ExpPartitionDestroy @ 0x140A00B78 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140A08630 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     CmpPostApcRunDown @ 0x140A0F9D0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     WdtpBarkWorkerThread @ 0x140A6F310 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140A73D70 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x140A87EA4 (EmpReleasePagingReference.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C784 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140AA00E0 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0CCC (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 *     PopFlushVolumeWorker @ 0x140AA6120 (PopFlushVolumeWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6730 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140AA70D0 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     ExpSetSwappingKernelApc @ 0x140AAAF80 (ExpSetSwappingKernelApc.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABBE4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140ACDE80 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140AD1ED0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140ADFA10 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238DA0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiWakeQueueWaiter @ 0x1402B8A10 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // ebp
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  __int64 v12; // r10
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  char v17; // al
  bool v18; // zf
  char v19; // cl
  __int64 v20; // r8
  unsigned __int8 v21; // cl
  _QWORD *v22; // r9
  __int64 v23; // rcx
  char v24; // al
  int v25; // r10d
  struct _LIST_ENTRY *v26; // r8
  _DWORD *v27; // r9
  __int64 v28; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int8 v32; // cl
  struct _LIST_ENTRY **p_Blink; // r10
  struct _LIST_ENTRY *v34; // rcx
  char v35; // al
  int Flink_high; // r9d
  struct _LIST_ENTRY *v37; // r8
  unsigned __int8 v38; // al
  __int64 v39; // r9
  __int64 v40; // r10
  _DWORD *v41; // r9
  __int64 v42; // rdx
  LIST_ENTRY *v43; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v44; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v46; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  _KTHREAD *v48; // [rsp+48h] [rbp-40h]
  int v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v51; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v52; // [rsp+A8h] [rbp+20h]
  struct _LIST_ENTRY *v53; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v49 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v49 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v49 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v11 = Flink->Flink;
          v12 = (__int64)Flink;
          v52 = Flink;
          Blink = Flink->Blink;
          v43 = v11;
          if ( v11->Blink != (struct _LIST_ENTRY *)v12 || Blink->Flink != (struct _LIST_ENTRY *)v12 )
            goto LABEL_8;
          Blink->Flink = v11;
          v11->Blink = Blink;
          v17 = *(_BYTE *)(v12 + 16);
          switch ( v17 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
              {
                v18 = Event->Header.SignalState-- == 1;
                if ( v18 )
                  goto LABEL_11;
              }
              break;
            case 2:
              *(_BYTE *)(v12 + 17) = 5;
              v50 = *(_QWORD *)(v12 + 24);
              *(_QWORD *)v12 = 0LL;
              v21 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
              {
                v27 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v21 == 2 )
                  LODWORD(v28) = 4;
                else
                  v28 = (-1LL << (v21 + 1)) & 4;
                v27[5] |= v28;
              }
              v46 = KeGetCurrentPrcb();
              CurrentThread = v46->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v46->CurrentThread);
                EtwTraceEnqueueWork(v30, v31, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v50);
              v22 = (_QWORD *)(v50 + 8);
              v23 = v50;
              if ( (_QWORD *)*v22 == v22
                || *(_DWORD *)(v50 + 40) >= *(_DWORD *)(v50 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v50 && CurrentThread->WaitReason == 15 )
              {
LABEL_45:
                v25 = *(_DWORD *)(v23 + 4);
                *(_DWORD *)(v23 + 4) = v25 + 1;
                v26 = *(struct _LIST_ENTRY **)(v23 + 32);
                if ( v26->Flink != (struct _LIST_ENTRY *)(v23 + 24) )
                  goto LABEL_8;
                v52->Flink = (struct _LIST_ENTRY *)(v23 + 24);
                v52->Blink = v26;
                v26->Flink = v52;
                *(_QWORD *)(v23 + 32) = v52;
                if ( !v25 && (_QWORD *)*v22 != v22 )
                {
                  KiWakeOtherQueueWaiters(v46, v23);
                  v23 = v50;
                }
              }
              else
              {
                v24 = KiWakeQueueWaiter(v46, v50, v52);
                v23 = v50;
                if ( !v24 )
                {
                  v22 = (_QWORD *)(v50 + 8);
                  goto LABEL_45;
                }
                v52->Flink = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              break;
            case 4:
              *(_BYTE *)(v12 + 17) = 5;
              Event->Header.SignalState = 0;
              KiInsertQueueDpc(*(_QWORD *)(v12 + 24), 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
              break;
          }
          Flink = v43;
          if ( v43 == p_WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
LABEL_11:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v53 = Flink;
      v44 = Flink->Flink;
      v19 = (char)Flink[1].Flink;
      switch ( v19 )
      {
        case 1:
          v20 = WORD1(Flink[1].Flink);
          break;
        case 2:
          BYTE1(Flink[1].Flink) = 5;
          v51 = Flink[1].Blink;
          Flink->Flink = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v41 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v32 == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (v32 + 1)) & 4;
            v41[5] |= v42;
          }
          v45 = KeGetCurrentPrcb();
          v48 = v45->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v38 = KeIsThreadRunning(v45->CurrentThread);
            EtwTraceEnqueueWork(v39, v40, v38);
          }
          KiAcquireKobjectLockSafe(v51);
          p_Blink = &v51->Blink;
          v34 = v51;
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(v51[2].Blink) >= HIDWORD(v51[2].Blink)
            || (struct _LIST_ENTRY *)v48->Queue == v51 && v48->WaitReason == 15 )
          {
LABEL_64:
            Flink_high = HIDWORD(v34->Flink);
            HIDWORD(v34->Flink) = Flink_high + 1;
            v37 = v34[2].Flink;
            if ( v37->Flink != (struct _LIST_ENTRY *)&v34[1].Blink )
LABEL_8:
              __fastfail(3u);
            v53->Flink = (struct _LIST_ENTRY *)((char *)v34 + 24);
            v53->Blink = v37;
            v37->Flink = v53;
            v34[2].Flink = v53;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
            {
              KiWakeOtherQueueWaiters(v45, v34);
              v34 = v51;
            }
          }
          else
          {
            v35 = KiWakeQueueWaiter(v45, v51, v53);
            v34 = v51;
            if ( !v35 )
            {
              p_Blink = &v51->Blink;
              goto LABEL_64;
            }
            v53->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
          goto LABEL_28;
        case 4:
          BYTE1(Flink[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)Flink[1].Blink, 0);
          goto LABEL_28;
        default:
          v20 = 256LL;
          break;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)Flink, v20, 0LL);
LABEL_28:
      Flink = v44;
      if ( v44 == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
