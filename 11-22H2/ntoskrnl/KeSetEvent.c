/*
 * XREFs of KeSetEvent @ 0x14023C5C0
 * Callers:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     VfPoolDelayFreeIfPossible @ 0x14020A950 (VfPoolDelayFreeIfPossible.c)
 *     CcCanIWrite @ 0x14020F1A0 (CcCanIWrite.c)
 *     ExReferenceCallBackBlock @ 0x140214F10 (ExReferenceCallBackBlock.c)
 *     MiDecrementControlAreaCount @ 0x140219AC0 (MiDecrementControlAreaCount.c)
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 *     MiScheduleZeroPageThreads @ 0x14021F3EC (MiScheduleZeroPageThreads.c)
 *     MiProcessWorkingSets @ 0x14021FA30 (MiProcessWorkingSets.c)
 *     MiWakeZeroingThreads @ 0x1402224F4 (MiWakeZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x140222594 (MiAddZeroingThreads.c)
 *     KiDecrementProcessStackCount @ 0x140222D14 (KiDecrementProcessStackCount.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F90 (MiStoreUpdateMemoryConditions.c)
 *     EtwpSwitchBuffer @ 0x140227BF8 (EtwpSwitchBuffer.c)
 *     WmipUnreferenceRegEntry @ 0x14022AAD4 (WmipUnreferenceRegEntry.c)
 *     KiDetachProcess @ 0x14022DD20 (KiDetachProcess.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     CcFreeVirtualAddress @ 0x140262360 (CcFreeVirtualAddress.c)
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     MiFinishVadDeletion @ 0x140289BF0 (MiFinishVadDeletion.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiInsertUnusedSubsection @ 0x14028BBE0 (MiInsertUnusedSubsection.c)
 *     IopCopyCompleteReadRequest @ 0x14028C4B0 (IopCopyCompleteReadRequest.c)
 *     PopPepUpdateConstraints @ 0x14028D114 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D230 (PopIrpWorker.c)
 *     PopFxReleasePowerIrp @ 0x14028DC24 (PopFxReleasePowerIrp.c)
 *     PopRequestCompletion @ 0x14028DFA0 (PopRequestCompletion.c)
 *     PopFxAllocatePowerIrp @ 0x14028ED0C (PopFxAllocatePowerIrp.c)
 *     PopRequestPowerIrp @ 0x14028F110 (PopRequestPowerIrp.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140299EA0 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029B740 (CcWriteBehindPreProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14029C310 (CcDereferencePartition.c)
 *     CcFlushCacheOneRange @ 0x14029E530 (CcFlushCacheOneRange.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiIssueHardFaultIo @ 0x1402A1AC0 (MiIssueHardFaultIo.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     AlpcpSignal @ 0x1402B6C40 (AlpcpSignal.c)
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExpWakePushLock @ 0x1402BD960 (ExpWakePushLock.c)
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 *     PopQueueTargetDpc @ 0x1402BFC20 (PopQueueTargetDpc.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0BD4 (CcPostWorkQueueAsyncRead.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiIncreaseAvailablePages @ 0x1402DD9A8 (MiIncreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x1402DF520 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1402E25B4 (PfSnReferenceProcessTrace.c)
 *     MiDecreaseAvailablePages @ 0x1402E8620 (MiDecreaseAvailablePages.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1402E9010 (MiReplenishSlabAllocatorWorker.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     PfpEventHandleFullBuffer @ 0x1402F4D90 (PfpEventHandleFullBuffer.c)
 *     PfSnRemoveProcessTrace @ 0x1402F52FC (PfSnRemoveProcessTrace.c)
 *     MiQueuePageAccessLog @ 0x1402F54F0 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F55F4 (PfpReturnAccessBuffer.c)
 *     IoAcquireRemoveLockEx @ 0x140312310 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140312D1C (PopFxCompleteComponentActivation.c)
 *     SepRmCallLsa @ 0x14031C700 (SepRmCallLsa.c)
 *     PoFxPrepareDevice @ 0x140321634 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 *     PopPowerRequestCallbackWorker @ 0x14032B9D0 (PopPowerRequestCallbackWorker.c)
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CB34 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1403316C0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140334160 (ExfReleaseRundownProtection.c)
 *     ExNotifyWithProcessing @ 0x14033BD60 (ExNotifyWithProcessing.c)
 *     PoFxPowerControl @ 0x140340EA0 (PoFxPowerControl.c)
 *     IoReleaseRemoveLockEx @ 0x140340F40 (IoReleaseRemoveLockEx.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403428E8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140342BC4 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140342D90 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140344E20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiInswapAndReadyThread @ 0x14034D43C (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14034D654 (KiRequestProcessInSwap.c)
 *     MiSignalZeroingPassComplete @ 0x14034DD24 (MiSignalZeroingPassComplete.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140357C50 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x140358660 (CmpCompleteFlushAndPurgeIrp.c)
 *     PnpDeviceActionWorker @ 0x140358E30 (PnpDeviceActionWorker.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035D810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopQueueDirectedDripsWork @ 0x14035E054 (PopQueueDirectedDripsWork.c)
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140361390 (ExpPartitionCreateThreadIfNecessary.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140362580 (LZNT1DecompressChunkWorkItem.c)
 *     PopFxComponentWork @ 0x140364670 (PopFxComponentWork.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140365380 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x1403657A0 (CmpLazyFlushDpcRoutine.c)
 *     MiReclaimSystemVa @ 0x14036716C (MiReclaimSystemVa.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcPrepareMdlWrite @ 0x140368B40 (CcPrepareMdlWrite.c)
 *     SmKmStoreHelperWorker @ 0x14036AF80 (SmKmStoreHelperWorker.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14036DEB0 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036E3C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14036FDA0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14037D520 (HalpReleaseSecondaryIcEntryShared.c)
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x14038140C (WheapAddErrorSource.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     MiSyncCommitSignals @ 0x140394660 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140396C88 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x14039FB68 (ExCompareExchangeCallBack.c)
 *     PnpCompleteSystemStartProcess @ 0x1403A0B38 (PnpCompleteSystemStartProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x1403A2544 (KiConnectSecondaryInterrupt.c)
 *     KiProcessDisconnectList @ 0x1403A2B28 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A2EBC (KiInvokeInterruptServiceRoutine.c)
 *     MiStoreEvictThread @ 0x1403A7F20 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE090 (MiUpdateAvailableEvents.c)
 *     MiZeroPageThread @ 0x1403AF9A0 (MiZeroPageThread.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403AFC90 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     MiModifiedPageWriter @ 0x1403B20D0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B2C00 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroEngineSetOptimalCount @ 0x1403B4450 (MiZeroEngineSetOptimalCount.c)
 *     EtwpLoggerDpc @ 0x1403B5290 (EtwpLoggerDpc.c)
 *     PopBatteryWakeDpc @ 0x1403B5610 (PopBatteryWakeDpc.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C175C (CcNotifyWriteBehindVolume.c)
 *     CcPostDeferredWrites @ 0x1403C17E8 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C1A14 (CcDeletePrivateVolumeCacheMap.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C38B4 (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x1403C6008 (CcDeleteBcbs.c)
 *     ExpEnumerateCallback @ 0x1403D0180 (ExpEnumerateCallback.c)
 *     PnpUnlockMountableDevice @ 0x1403D502C (PnpUnlockMountableDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D5EE0 (PnpRemoveDeviceActionRequests.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1404197C0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PspGetSetContextSpecialApc @ 0x1404285E0 (PspGetSetContextSpecialApc.c)
 *     FsFilterFreeCompletionStack @ 0x14045EC7A (FsFilterFreeCompletionStack.c)
 *     PopFxReleaseDevice @ 0x14046273C (PopFxReleaseDevice.c)
 *     SmFpFree @ 0x140465A48 (SmFpFree.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140469A58 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140469AD0 (EtwpCovSampCaptureQueueDpc.c)
 *     ExReleaseRundownProtectionEx @ 0x14046AD40 (ExReleaseRundownProtectionEx.c)
 *     HalpProcessSecondarySignalList @ 0x14051A3E0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x14051A558 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1405351B0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x140536B4C (CcNotifyWriteBehindInternal.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorker @ 0x1405398EC (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A1E4 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053ACC4 (CcAsyncLazywriteWorkerMulti.c)
 *     FsRtlStackOverflowRead @ 0x14053F470 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1405555DC (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x14055564C (IopFreeReserveIrp.c)
 *     IopCompleteIoRingEntry @ 0x1405593FC (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x14055EFB0 (IopMcDereferenceMdl.c)
 *     PnprQuiesce @ 0x140563228 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564CB0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14056F660 (KeRetryOutswapProcess.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140571AD8 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140579C40 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14057A1C0 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A1FC (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A230 (KiSynchronizePassiveInterruptExecution.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582860 (NtSignalAndWaitForSingleObject.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140582E30 (PfpScenCtxWaiterTimedOut.c)
 *     PopPropogateCoolingChange @ 0x140586D90 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x1405874A0 (PopDeviceIdleCompletion.c)
 *     PoFxAddComponentRelation @ 0x140587700 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587B20 (PoFxAddDeviceRelation.c)
 *     PoFxNotifySurprisePowerOn @ 0x140588040 (PoFxNotifySurprisePowerOn.c)
 *     PoFxRemoveComponentRelation @ 0x1405881A0 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588590 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x140589310 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140589628 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14058972C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140589910 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140589DE4 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x14058A000 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14058A0E0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14058B2F0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14058B4F0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14058B6AC (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14058C490 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058C5A0 (PopFxUpdateProcessorIdleState.c)
 *     PopUnregisterPowerSettingCallback @ 0x14058DCB4 (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x14058DFF4 (PopUserPresentSet.c)
 *     PopUserPresentSetWorker @ 0x14058E240 (PopUserPresentSetWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405903C0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14059052C (PopCompleteNotifyTransitionCommon.c)
 *     PopBatteryIrpComplete @ 0x140598CC0 (PopBatteryIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x14059D6D0 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepPlatformStateRegistered @ 0x14059FA24 (PopPepPlatformStateRegistered.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14059FE30 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1405A0C38 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405A0CDC (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A0D78 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BE7D4 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405BE89C (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2910 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmKmGenericCompletion @ 0x1405CB5D0 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CC658 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD370 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405CD450 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIoRequestComplete @ 0x1405CD51C (SmIoRequestComplete.c)
 *     DifKeSetEventWrapper @ 0x1405E5A10 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x1405FF230 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140601B00 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140602FD8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140603760 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1406094D0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140609520 (ExRegisterBootDevice.c)
 *     WheapProcessWorkQueueItem @ 0x140611090 (WheapProcessWorkQueueItem.c)
 *     MiDecrementVadsBeingDeleted @ 0x140618208 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140619BE0 (MiZeroPageFile.c)
 *     MiFreeExcessSegments @ 0x140624A8C (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x140625124 (MiProcessDereferenceList.c)
 *     MiProcessingPageExtendComplete @ 0x1406256D0 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140625AB0 (MiQueueControlAreaDelete.c)
 *     MiFinishResume @ 0x140626940 (MiFinishResume.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140631C10 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140631E1C (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1406327F8 (MiMarkMdlComplete.c)
 *     MiHandleForceTrimWorkingSets @ 0x140634B30 (MiHandleForceTrimWorkingSets.c)
 *     MiObtainFreePages @ 0x140634F9C (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140635ED0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140636050 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140637DE0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140639B48 (MiFinishPageFileExtension.c)
 *     MiFlushAllPagesWorker @ 0x140639D54 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x140639E5C (MiFlushAllStoreSwapPages.c)
 *     MiIrpCompletionApcRoutine @ 0x14063AD70 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14063B660 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWakeModifiedPageWriter @ 0x14063BCA8 (MiWakeModifiedPageWriter.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishHoldingDirtyFaults @ 0x140642638 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x14064DB1C (MiPageNotZero.c)
 *     MiWakeAllZeroConductors @ 0x14065567C (MiWakeAllZeroConductors.c)
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B3C4 (MiReturnCrossPartitionCharges.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14065BF3C (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14065C070 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreDeletePartition @ 0x14065C0A8 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14065C950 (MiStoreRundownWritesApc.c)
 *     MiStoreSetEvictPageFile @ 0x14065C9D0 (MiStoreSetEvictPageFile.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CA3C (MiStoreSetPageFileRunEvicted.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D0A4 (MmStoreFlushOutstandingEvictions.c)
 *     MiReadFromMemoryPagefile @ 0x1406609B8 (MiReadFromMemoryPagefile.c)
 *     MiDecrementCloneHeaderCount @ 0x140663E7C (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140663EB0 (MiDeleteCloneDescriptor.c)
 *     MiInSwapStoreWorker @ 0x1406817B0 (MiInSwapStoreWorker.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     EtwpDisassociateConsumer @ 0x1406828FC (EtwpDisassociateConsumer.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     sub_1406F2550 @ 0x1406F2550 (sub_1406F2550.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140708F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExpWnfNotifySubscription @ 0x140711148 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407144D8 (ExpWnfNotifyNameSubscribers.c)
 *     MiPfExecuteReadList @ 0x140724164 (MiPfExecuteReadList.c)
 *     AlpcpTrackPortReferences @ 0x140738494 (AlpcpTrackPortReferences.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     NtCopyFileChunk @ 0x140749DA0 (NtCopyFileChunk.c)
 *     PfSnEndTrace @ 0x14074AD58 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14074BF10 (PfTReplaceCurrentBuffer.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     CmpWakeWriteQueueWaiters @ 0x14075268C (CmpWakeWriteQueueWaiters.c)
 *     PfGetCompletedTrace @ 0x14075EF48 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075F1E8 (PfTTraceListAdd.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     CmpPostNotify @ 0x140766D70 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1407687C4 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C5B0 (RtlDecompressBufferLZNT1.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1407730F4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 *     EtwpQueueNotification @ 0x1407816F4 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x140782728 (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x140784280 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x140786D70 (PnpDeviceEventWorker.c)
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14078E6A0 (EtwpRealtimeDisconnectAllConsumers.c)
 *     IopDestroyActiveConnectBlock @ 0x14078F278 (IopDestroyActiveConnectBlock.c)
 *     PopBsdFlush @ 0x1407A69D4 (PopBsdFlush.c)
 *     PopSystemIdleWorker @ 0x1407A72B0 (PopSystemIdleWorker.c)
 *     NtSetEvent @ 0x1407ADAE0 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3FD0 (NtNotifyChangeSession.c)
 *     MmSetSessionObjectIoEvent @ 0x1407B42F4 (MmSetSessionObjectIoEvent.c)
 *     MiStartZeroEngineThreads @ 0x1407BE6FC (MiStartZeroEngineThreads.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1407C21C0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopLoadUnloadDriver @ 0x1407CF3E0 (IopLoadUnloadDriver.c)
 *     PfGenerateTrace @ 0x1407D4180 (PfGenerateTrace.c)
 *     CmpPostApc @ 0x1407D5050 (CmpPostApc.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407DA400 (RtlDecompressFragmentLZNT1.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1407E4780 (CmpGetVolumeClusterSizeCompletion.c)
 *     IopTrackLink @ 0x1407E4898 (IopTrackLink.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F69E4 (EtwpStopLoggerInstance.c)
 *     PopThermalWorker @ 0x140801D90 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140802170 (PopFanWorker.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080CCC4 (CmpInitializeSystemHivesLoad.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140815FF8 (ArbBuildAssignmentOrdering.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140829080 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140829610 (HalGetAdapterV2.c)
 *     MmStoreRegister @ 0x140834954 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140835BE0 (MiInsertPageFileInList.c)
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 *     MUIRegistrySystemRoutine @ 0x140846700 (MUIRegistrySystemRoutine.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1408498F4 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140849C90 (IopAcquireReleaseDispatcherLock.c)
 *     ExpPartitionCreatePool @ 0x14084A758 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x14084D090 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14084E90C (CmpWaitForHiveMount.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1408515B0 (MiHotAddBootDeferredDescriptors.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085BA90 (SshpSessionManagerFlushControlEventBuffer.c)
 *     WheapProcessWaitingETWEvents @ 0x140861010 (WheapProcessWaitingETWEvents.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140867450 (PiDrvDbLoadNodeWorkerCallback.c)
 *     WmipProcessSynchronousEtw @ 0x14086B628 (WmipProcessSynchronousEtw.c)
 *     WmipReleaseCollectionEnabled @ 0x1408758FC (WmipReleaseCollectionEnabled.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140880200 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408850D8 (PopFxUnregisterDeviceOrWait.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8D20 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A99FA (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140933870 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140933974 (HalpGetDynamicDevicePointer.c)
 *     DbgkpCloseObject @ 0x1409371C0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140937EFC (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1409381F8 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409384E8 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140938990 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x1409399C4 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14093B1A0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14093E690 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x140941024 (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x1409448B0 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140945894 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140947760 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1409522AC (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14096F1EC (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140980040 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x140980230 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x140985E74 (PopFxUnregisterDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986000 (PopFxUpdateVetoMaskWork.c)
 *     PopCompleteAction @ 0x140989810 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopBatteryReadTag @ 0x140995764 (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409ABFF8 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC358 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1409ACE30 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ACF40 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409B1AA0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1409B77BC (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1409B78E0 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1409B7B60 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409C236C (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C8AF0 (Pdcv2pActivationClientCallback.c)
 *     SmpFlushStorePages @ 0x1409D8760 (SmpFlushStorePages.c)
 *     SmcCacheAdd @ 0x1409DAA80 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1409DAC2C (SmcCacheDelete.c)
 *     WmipQueueNotification @ 0x1409E14F4 (WmipQueueNotification.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409F0A3C (EtwpCovSampCaptureContextSetPaused.c)
 *     ExpPartitionDestroy @ 0x140A00998 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140A08430 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     CmpPostApcRunDown @ 0x140A0F7D0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     WdtpBarkWorkerThread @ 0x140A6F0D0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140A73B30 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x140A87EA4 (EmpReleasePagingReference.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C9D4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140AA0330 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0F1C (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA5400 (PopTransitionToSleep.c)
 *     PopFlushVolumeWorker @ 0x140AA6370 (PopFlushVolumeWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6980 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140AA7320 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSetSwappingKernelApc @ 0x140AAB1D0 (ExpSetSwappingKernelApc.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     KdpTimeSlipWork @ 0x140AB1480 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140ACEE60 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140AD2EB0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140AE09F0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEE0D0 (AnFwpFadeAnimationTimer.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     MiInitializePagedPoolEvents @ 0x140B73D5C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238CB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     KiWakeQueueWaiter @ 0x1402B8750 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056EE70 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
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
