/*
 * XREFs of KeSetEvent @ 0x14023C5E0
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
 *     EtwpSwitchBuffer @ 0x140227BD8 (EtwpSwitchBuffer.c)
 *     WmipUnreferenceRegEntry @ 0x14022AAB4 (WmipUnreferenceRegEntry.c)
 *     KiDetachProcess @ 0x14022DD00 (KiDetachProcess.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcFreeVirtualAddress @ 0x140262480 (CcFreeVirtualAddress.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     CcPinFileData @ 0x140263890 (CcPinFileData.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MmFlushSection @ 0x140287490 (MmFlushSection.c)
 *     MiFinishVadDeletion @ 0x140289D10 (MiFinishVadDeletion.c)
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiInsertUnusedSubsection @ 0x14028BD00 (MiInsertUnusedSubsection.c)
 *     IopCopyCompleteReadRequest @ 0x14028C5D0 (IopCopyCompleteReadRequest.c)
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x14028D350 (PopIrpWorker.c)
 *     PopFxReleasePowerIrp @ 0x14028DD44 (PopFxReleasePowerIrp.c)
 *     PopRequestCompletion @ 0x14028E0C0 (PopRequestCompletion.c)
 *     PopFxAllocatePowerIrp @ 0x14028EE2C (PopFxAllocatePowerIrp.c)
 *     PopRequestPowerIrp @ 0x14028F230 (PopRequestPowerIrp.c)
 *     MiReleasePageFileInfo @ 0x1402952DC (MiReleasePageFileInfo.c)
 *     CcWorkerThread @ 0x140298940 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140299FC0 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029B038 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029B860 (CcWriteBehindPreProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BC40 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14029C430 (CcDereferencePartition.c)
 *     CcFlushCacheOneRange @ 0x14029E650 (CcFlushCacheOneRange.c)
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     MiIssueHardFaultIo @ 0x1402A1BE0 (MiIssueHardFaultIo.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     AlpcpSignal @ 0x1402B6C70 (AlpcpSignal.c)
 *     ExpQueueWorkItem @ 0x1402B76A0 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     ExpWakePushLock @ 0x1402BD990 (ExpWakePushLock.c)
 *     ExpWorkerThread @ 0x1402BEB90 (ExpWorkerThread.c)
 *     PopQueueTargetDpc @ 0x1402BFC50 (PopQueueTargetDpc.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0C04 (CcPostWorkQueueAsyncRead.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
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
 *     IoAcquireRemoveLockEx @ 0x1403124F0 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x140312634 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140312EFC (PopFxCompleteComponentActivation.c)
 *     SepRmCallLsa @ 0x14031C8E0 (SepRmCallLsa.c)
 *     PoFxPrepareDevice @ 0x140321814 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 *     PopPowerRequestCallbackWorker @ 0x14032BBB0 (PopPowerRequestCallbackWorker.c)
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CD14 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140331860 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140334300 (ExfReleaseRundownProtection.c)
 *     ExNotifyWithProcessing @ 0x14033BF60 (ExNotifyWithProcessing.c)
 *     PoFxPowerControl @ 0x140341390 (PoFxPowerControl.c)
 *     IoReleaseRemoveLockEx @ 0x140341430 (IoReleaseRemoveLockEx.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140342DD8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1403430B4 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140343280 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140345310 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiInswapAndReadyThread @ 0x14034DA3C (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14034DC54 (KiRequestProcessInSwap.c)
 *     MiSignalZeroingPassComplete @ 0x14034E324 (MiSignalZeroingPassComplete.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140358250 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x140358C60 (CmpCompleteFlushAndPurgeIrp.c)
 *     PnpDeviceActionWorker @ 0x140359430 (PnpDeviceActionWorker.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035DE60 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopQueueDirectedDripsWork @ 0x14035E6A4 (PopQueueDirectedDripsWork.c)
 *     MiQueueWorkingSetRequest @ 0x14035EEC8 (MiQueueWorkingSetRequest.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1403619E0 (ExpPartitionCreateThreadIfNecessary.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140362BD0 (LZNT1DecompressChunkWorkItem.c)
 *     PopFxComponentWork @ 0x140364CC0 (PopFxComponentWork.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1403659D0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140365DF0 (CmpLazyFlushDpcRoutine.c)
 *     MiReclaimSystemVa @ 0x1403677BC (MiReclaimSystemVa.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcPrepareMdlWrite @ 0x140369190 (CcPrepareMdlWrite.c)
 *     SmKmStoreHelperWorker @ 0x14036B5D0 (SmKmStoreHelperWorker.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14036E500 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EA10 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403703F0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x14037CED0 (HalpReleaseSecondaryIcEntryShared.c)
 *     WheaLogInternalEvent @ 0x140380A50 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x140380DBC (WheapAddErrorSource.c)
 *     KeBalanceSetManager @ 0x140394500 (KeBalanceSetManager.c)
 *     MiSyncCommitSignals @ 0x1403961E0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140398808 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x14039FE58 (ExCompareExchangeCallBack.c)
 *     PnpCompleteSystemStartProcess @ 0x1403A0E28 (PnpCompleteSystemStartProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x1403A2C8C (KiConnectSecondaryInterrupt.c)
 *     KiProcessDisconnectList @ 0x1403A3268 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A35FC (KiInvokeInterruptServiceRoutine.c)
 *     MiStoreEvictThread @ 0x1403A8650 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403AE720 (MiUpdateAvailableEvents.c)
 *     MiZeroPageThread @ 0x1403B0030 (MiZeroPageThread.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403B0320 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     MiModifiedPageWriter @ 0x1403B2760 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3290 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroEngineSetOptimalCount @ 0x1403B4AE0 (MiZeroEngineSetOptimalCount.c)
 *     EtwpLoggerDpc @ 0x1403B5920 (EtwpLoggerDpc.c)
 *     PopBatteryWakeDpc @ 0x1403B5CA0 (PopBatteryWakeDpc.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C1DBC (CcNotifyWriteBehindVolume.c)
 *     CcPostDeferredWrites @ 0x1403C1E48 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2074 (CcDeletePrivateVolumeCacheMap.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C3F14 (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x1403C6668 (CcDeleteBcbs.c)
 *     ExpEnumerateCallback @ 0x1403D07E0 (ExpEnumerateCallback.c)
 *     PnpUnlockMountableDevice @ 0x1403D568C (PnpUnlockMountableDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6540 (PnpRemoveDeviceActionRequests.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x140419E70 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PspGetSetContextSpecialApc @ 0x140428CA0 (PspGetSetContextSpecialApc.c)
 *     FsFilterFreeCompletionStack @ 0x14045F2DA (FsFilterFreeCompletionStack.c)
 *     PopFxReleaseDevice @ 0x140462D9C (PopFxReleaseDevice.c)
 *     SmFpFree @ 0x1404660A8 (SmFpFree.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A0B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14046A130 (EtwpCovSampCaptureQueueDpc.c)
 *     ExReleaseRundownProtectionEx @ 0x14046B3A0 (ExReleaseRundownProtectionEx.c)
 *     HalpProcessSecondarySignalList @ 0x14051A320 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x14051A498 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140535100 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x140536A9C (CcNotifyWriteBehindInternal.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorker @ 0x14053983C (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A134 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053AC14 (CcAsyncLazywriteWorkerMulti.c)
 *     FsRtlStackOverflowRead @ 0x14053F3C0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14055553C (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1405555AC (IopFreeReserveIrp.c)
 *     IopCompleteIoRingEntry @ 0x14055935C (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x14055EF10 (IopMcDereferenceMdl.c)
 *     PnprQuiesce @ 0x140563188 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564C10 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14056F5C0 (KeRetryOutswapProcess.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140571A38 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140579BB0 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14057A130 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x14057A16C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14057A1A0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057ADE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405827D0 (NtSignalAndWaitForSingleObject.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140582DA0 (PfpScenCtxWaiterTimedOut.c)
 *     PopPropogateCoolingChange @ 0x140586D00 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x140587410 (PopDeviceIdleCompletion.c)
 *     PoFxAddComponentRelation @ 0x140587670 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587A90 (PoFxAddDeviceRelation.c)
 *     PoFxNotifySurprisePowerOn @ 0x140587FB0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxRemoveComponentRelation @ 0x140588110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588500 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x140589280 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x140589598 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14058969C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140589880 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140589D54 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x140589F70 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14058A050 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14058B260 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14058B460 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14058B61C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14058C400 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058C510 (PopFxUpdateProcessorIdleState.c)
 *     PopUnregisterPowerSettingCallback @ 0x14058DC24 (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x14058DF64 (PopUserPresentSet.c)
 *     PopUserPresentSetWorker @ 0x14058E1B0 (PopUserPresentSetWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590330 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14059049C (PopCompleteNotifyTransitionCommon.c)
 *     PopBatteryIrpComplete @ 0x140598C30 (PopBatteryIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x14059D640 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepPlatformStateRegistered @ 0x14059F994 (PopPepPlatformStateRegistered.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14059FDA0 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1405A0BA8 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405A0C4C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A0CE8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BE744 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405BE80C (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2880 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmKmGenericCompletion @ 0x1405CB540 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CC5C8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD2E0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405CD3C0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIoRequestComplete @ 0x1405CD48C (SmIoRequestComplete.c)
 *     DifKeSetEventWrapper @ 0x1405E5980 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x1405FF1A0 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140601A90 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140602F68 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1406036F0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140609460 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1406094B0 (ExRegisterBootDevice.c)
 *     WheapProcessWorkQueueItem @ 0x140611020 (WheapProcessWorkQueueItem.c)
 *     MiDecrementVadsBeingDeleted @ 0x140618198 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F08 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140619B70 (MiZeroPageFile.c)
 *     MiFreeExcessSegments @ 0x140624A1C (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x1406250B4 (MiProcessDereferenceList.c)
 *     MiProcessingPageExtendComplete @ 0x140625660 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140625A40 (MiQueueControlAreaDelete.c)
 *     MiFinishResume @ 0x1406268D0 (MiFinishResume.c)
 *     MiFlushAllFilesystemPages @ 0x140629294 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140631BA0 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140631DAC (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140632788 (MiMarkMdlComplete.c)
 *     MiHandleForceTrimWorkingSets @ 0x140634AC0 (MiHandleForceTrimWorkingSets.c)
 *     MiObtainFreePages @ 0x140634F2C (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140635E60 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140635FE0 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140637D70 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140639AD8 (MiFinishPageFileExtension.c)
 *     MiFlushAllPagesWorker @ 0x140639CE4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x140639DEC (MiFlushAllStoreSwapPages.c)
 *     MiIrpCompletionApcRoutine @ 0x14063AD00 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14063B5F0 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWakeModifiedPageWriter @ 0x14063BC38 (MiWakeModifiedPageWriter.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C2C4 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406425C8 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x14064DAAC (MiPageNotZero.c)
 *     MiWakeAllZeroConductors @ 0x14065560C (MiWakeAllZeroConductors.c)
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B354 (MiReturnCrossPartitionCharges.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14065BECC (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14065C000 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreDeletePartition @ 0x14065C038 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14065C8E0 (MiStoreRundownWritesApc.c)
 *     MiStoreSetEvictPageFile @ 0x14065C960 (MiStoreSetEvictPageFile.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065C9CC (MiStoreSetPageFileRunEvicted.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065D034 (MmStoreFlushOutstandingEvictions.c)
 *     MiReadFromMemoryPagefile @ 0x140660948 (MiReadFromMemoryPagefile.c)
 *     MiDecrementCloneHeaderCount @ 0x140663E0C (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140663E40 (MiDeleteCloneDescriptor.c)
 *     MiInSwapStoreWorker @ 0x1406817B0 (MiInSwapStoreWorker.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     EtwpDisassociateConsumer @ 0x1406828FC (EtwpDisassociateConsumer.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     sub_1406F24A0 @ 0x1406F24A0 (sub_1406F24A0.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140708EC0 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExpWnfNotifySubscription @ 0x140711098 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714428 (ExpWnfNotifyNameSubscribers.c)
 *     MiPfExecuteReadList @ 0x1407240F4 (MiPfExecuteReadList.c)
 *     AlpcpTrackPortReferences @ 0x140737F80 (AlpcpTrackPortReferences.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     PfSnEndTrace @ 0x14074A848 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14074BA00 (PfTReplaceCurrentBuffer.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     CmpWakeWriteQueueWaiters @ 0x14075217C (CmpWakeWriteQueueWaiters.c)
 *     PfGetCompletedTrace @ 0x14075EA38 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075ECD8 (PfTTraceListAdd.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     CmpPostNotify @ 0x140766860 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1407682B4 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     RtlDecompressBufferLZNT1 @ 0x14076C0A0 (RtlDecompressBufferLZNT1.c)
 *     CmNotifyRunDown @ 0x14076E5E4 (CmNotifyRunDown.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140772BE4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     EtwpQueueNotification @ 0x1407811E4 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x140782218 (PiUEventDereferenceEventEntry.c)
 *     PnpCompleteDeviceEvent @ 0x140783D70 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x140786860 (PnpDeviceEventWorker.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14078E190 (EtwpRealtimeDisconnectAllConsumers.c)
 *     IopDestroyActiveConnectBlock @ 0x14078ED68 (IopDestroyActiveConnectBlock.c)
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 *     PopSystemIdleWorker @ 0x1407A6DA0 (PopSystemIdleWorker.c)
 *     NtSetEvent @ 0x1407AD530 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3A20 (NtNotifyChangeSession.c)
 *     MmSetSessionObjectIoEvent @ 0x1407B3D44 (MmSetSessionObjectIoEvent.c)
 *     MiStartZeroEngineThreads @ 0x1407BE16C (MiStartZeroEngineThreads.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1407C1C30 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     PfGenerateTrace @ 0x1407D3C00 (PfGenerateTrace.c)
 *     CmpPostApc @ 0x1407D4AD0 (CmpPostApc.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407D9E80 (RtlDecompressFragmentLZNT1.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1407E4200 (CmpGetVolumeClusterSizeCompletion.c)
 *     IopTrackLink @ 0x1407E4318 (IopTrackLink.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5970 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6374 (EtwpStopLoggerInstance.c)
 *     PopReleaseTransitionLock @ 0x140801698 (PopReleaseTransitionLock.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080A744 (CmpInitializeSystemHivesLoad.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140813A78 (ArbBuildAssignmentOrdering.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
 *     MmStoreRegister @ 0x140832E04 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140834090 (MiInsertPageFileInList.c)
 *     PfTLoggingWorker @ 0x140838BD0 (PfTLoggingWorker.c)
 *     MUIRegistrySystemRoutine @ 0x140844970 (MUIRegistrySystemRoutine.c)
 *     PopThermalWorker @ 0x140847830 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140847C10 (PopFanWorker.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140848654 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140848830 (IopAcquireReleaseDispatcherLock.c)
 *     ExpPartitionCreatePool @ 0x1408494F8 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x14084BE30 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14084DA8C (CmpWaitForHiveMount.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1408506A0 (MiHotAddBootDeferredDescriptors.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F40 (WheapProcessWaitingETWEvents.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140866F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     WmipProcessSynchronousEtw @ 0x14086B158 (WmipProcessSynchronousEtw.c)
 *     WmipReleaseCollectionEnabled @ 0x14087542C (WmipReleaseCollectionEnabled.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14087FD30 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140884C08 (PopFxUnregisterDeviceOrWait.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8840 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A951A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x1409338A0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x1409339A4 (HalpGetDynamicDevicePointer.c)
 *     DbgkpCloseObject @ 0x140937110 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140937E4C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140938148 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140938438 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1409388E0 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14093B0F0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14093E5E0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x140940F74 (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x140944800 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x1409457E4 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x1409476B0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1409521FC (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x140964AF0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14096F13C (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097F168 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14097FF90 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x140980180 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x140985DC4 (PopFxUnregisterDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140985F50 (PopFxUpdateVetoMaskWork.c)
 *     PopCompleteAction @ 0x140989760 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140993FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopBatteryReadTag @ 0x1409956B4 (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409ABF48 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC2A8 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1409ACD80 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ACE90 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409B19F0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1409B770C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1409B7830 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1409B7AB0 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409C22BC (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C8A40 (Pdcv2pActivationClientCallback.c)
 *     SmpFlushStorePages @ 0x1409D86B0 (SmpFlushStorePages.c)
 *     SmcCacheAdd @ 0x1409DA9D0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1409DAB7C (SmcCacheDelete.c)
 *     WmipQueueNotification @ 0x1409E1444 (WmipQueueNotification.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409F098C (EtwpCovSampCaptureContextSetPaused.c)
 *     ExpPartitionDestroy @ 0x140A008E8 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140A08380 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     CmpPostApcRunDown @ 0x140A0F720 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     WdtpBarkWorkerThread @ 0x140A6F060 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140A73AC0 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x140A87EA4 (EmpReleasePagingReference.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C914 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9DE60 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140AA0270 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0E5C (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA5340 (PopTransitionToSleep.c)
 *     PopFlushVolumeWorker @ 0x140AA62B0 (PopFlushVolumeWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA68C0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140AA7260 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSetSwappingKernelApc @ 0x140AAB110 (ExpSetSwappingKernelApc.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABD74 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140ACDE90 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140AD1EE0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140ADFA20 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238CD0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140252030 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     KiWakeQueueWaiter @ 0x1402B8780 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AC98 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056EDD0 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD0C (EtwTraceEnqueueWork.c)
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
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
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
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
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
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
