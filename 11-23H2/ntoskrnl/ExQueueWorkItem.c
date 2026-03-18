/*
 * XREFs of ExQueueWorkItem @ 0x1402B7C30
 * Callers:
 *     PspRequestDeferredJobNotification @ 0x140200C90 (PspRequestDeferredJobNotification.c)
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     MiFreeCombineBlock @ 0x1402194C8 (MiFreeCombineBlock.c)
 *     MiWakeBadPageSignalThread @ 0x14021D9B8 (MiWakeBadPageSignalThread.c)
 *     MiCheckLogPinDriverAddresses @ 0x14021EBC8 (MiCheckLogPinDriverAddresses.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E75C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E848 (PopDeepSleepSetDisengageReason.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B956C (CmpArmDelayedCloseTimer.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304D34 (LZNT1DecompressChunkNewThread.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     SepQueueWorkItem @ 0x1403095B0 (SepQueueWorkItem.c)
 *     PfSnGetFileInformation @ 0x1403142C0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1403149DC (PfSnTraceGetLogEntry.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D730 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmCheckPeriodicStart @ 0x14032C020 (PpmCheckPeriodicStart.c)
 *     PopCheckForWork @ 0x14032CBB8 (PopCheckForWork.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     MiDereferenceIoPages @ 0x1403360F4 (MiDereferenceIoPages.c)
 *     ExpWaitForResource @ 0x1403415C0 (ExpWaitForResource.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14034313C (SmKmStoreDeleteWhenEmpty.c)
 *     PspHardDereferenceSiloWorker @ 0x14035457C (PspHardDereferenceSiloWorker.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x140358450 (KiIdealProcessorRebalancerTimerCallback.c)
 *     PnpRequestDeviceAction @ 0x140359044 (PnpRequestDeviceAction.c)
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 *     PfSnTraceTimerRoutine @ 0x14035B970 (PfSnTraceTimerRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x1403637D0 (HalpGenericPolledDpcRoutine.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x14036414C (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwTelemetryCoverageReport @ 0x140365240 (EtwTelemetryCoverageReport.c)
 *     ExpHpGCTimerCallback @ 0x140365980 (ExpHpGCTimerCallback.c)
 *     MmSetAccessLogging @ 0x14036AE90 (MmSetAccessLogging.c)
 *     PoLatencySensitivityHint @ 0x14036D860 (PoLatencySensitivityHint.c)
 *     WdipTimeoutTimerRoutine @ 0x14036DE10 (WdipTimeoutTimerRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14036E1B0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14036EF00 (EtwpCoverageFlushTimerCallback.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14036EF50 (CmpDelayFreeRMDpcRoutine.c)
 *     CmpWorkItemQueueWork @ 0x14037459C (CmpWorkItemQueueWork.c)
 *     EmpQueueRuleUpdateState @ 0x14038B334 (EmpQueueRuleUpdateState.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EBD0 (MiFreeUnusedPfnPagesDpc.c)
 *     KeBalanceSetManager @ 0x140394500 (KeBalanceSetManager.c)
 *     PopFxReinitializeAccountingInstance @ 0x140397C14 (PopFxReinitializeAccountingInstance.c)
 *     IoWMIWriteEvent @ 0x1403A8480 (IoWMIWriteEvent.c)
 *     SepAdtDetermineInsertQueue @ 0x1403AD7A0 (SepAdtDetermineInsertQueue.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1403AE324 (CcQueueAsyncGetDeviceGuid.c)
 *     PoNotifyMediaBuffering @ 0x1403AF5E0 (PoNotifyMediaBuffering.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403B21DC (CcSetupWatchForRegistryChanges.c)
 *     PopFanIrpComplete @ 0x1403B35E0 (PopFanIrpComplete.c)
 *     PopThermalIrpComplete @ 0x1403B5020 (PopThermalIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1403B5CA0 (PopBatteryWakeDpc.c)
 *     HalpCmcDeferredRoutine @ 0x1403B5E80 (HalpCmcDeferredRoutine.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B60C0 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     ExpDebuggerDpcRoutine @ 0x1403B6C00 (ExpDebuggerDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C3F14 (PnpUnlockDeviceActionQueue.c)
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x1403C7310 (IoWriteErrorLogEntry.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CCCA0 (ExpTimeRefreshDpcRoutine.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1403D5A80 (CcTelemetryPeriodicTimerDpc.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1403D6610 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     PopWatchdogDpc @ 0x1403D6A10 (PopWatchdogDpc.c)
 *     PfSnPowerBoostDpc @ 0x1403D7C90 (PfSnPowerBoostDpc.c)
 *     CcBcbProfiler @ 0x1403E3340 (CcBcbProfiler.c)
 *     ExpWaitForFastResource2 @ 0x140416814 (ExpWaitForFastResource2.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140467E68 (EtwpQueuePerfMemInfoWorkItem.c)
 *     HalpQueueMapBufferWorker @ 0x140505004 (HalpQueueMapBufferWorker.c)
 *     IoFreeAdapterChannelV3 @ 0x140510200 (IoFreeAdapterChannelV3.c)
 *     HalpBlkWdTimerRoutine @ 0x14052B160 (HalpBlkWdTimerRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1405482E4 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x1405483E0 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140556A80 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140556D60 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140557FC0 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140558120 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14055E970 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14055FDD0 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x140564BB0 (IopDeviceEjectComplete.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x14057B550 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x14057BEC8 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x140580214 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x1405802A0 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x140582A90 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582AD8 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x140582D00 (PfpPowerActionDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x140583020 (PfSnTracingStateDpcRoutine.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA00 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUserPresentSet @ 0x14058DF64 (PopUserPresentSet.c)
 *     PopWakeInfoDereference @ 0x14058E858 (PopWakeInfoDereference.c)
 *     PopPowerActionWatchdog @ 0x14058F430 (PopPowerActionWatchdog.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x1405982E0 (PopSleepstudyScenarioStopTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x140598420 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140598ED0 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DAF4 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059E0B0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x14059E850 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405A36C0 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405A3700 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B96DC (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BFCB0 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CD1F8 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarDoLiveDump @ 0x1405D59D0 (CarDoLiveDump.c)
 *     EtwpContainerStateWnfCallback @ 0x1405FBF80 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x1405FFAF0 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140602600 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140605D70 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1406060E0 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140606230 (ExpTimeZoneDpcRoutine.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608A84 (ExpTrackRaiseLimitNotification.c)
 *     ExpHotAddProcessorToWorkers @ 0x14060CE48 (ExpHotAddProcessorToWorkers.c)
 *     ExpSvmDpcRoutine @ 0x14060E800 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140612D40 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612F74 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140612FF0 (WheaFlushETWEventsDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140613990 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x1406139F0 (WheapWorkQueueDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x140616260 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x140616490 (CmpLazyCommitDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F08 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x140624534 (MiFlushControlArea.c)
 *     MiRemovePendingBadPageNode @ 0x14062A908 (MiRemovePendingBadPageNode.c)
 *     MiWakeFileOnlyReaper @ 0x14064044C (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x14064DAAC (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x140650EF4 (MiNoPagesLastChance.c)
 *     MmReportParkedProcessors @ 0x140655E48 (MmReportParkedProcessors.c)
 *     WdtpTimerCallback @ 0x140674190 (WdtpTimerCallback.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpClaimGlobalQuota @ 0x140702F9C (CmpClaimGlobalQuota.c)
 *     PfSnPrefetchSections @ 0x14074CB78 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074CE44 (PfSnPrefetchSectionsCleanup.c)
 *     CmpCanGrowHive @ 0x140750158 (CmpCanGrowHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751D34 (CmpDoQueueLateUnloadWorker.c)
 *     CmpSignalDeferredPosts @ 0x1407682B4 (CmpSignalDeferredPosts.c)
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786330 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140787F20 (PiDqObjectManagerHandleObjectEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3A20 (NtNotifyChangeSession.c)
 *     PsSetProcessWin32Process @ 0x1407D3D20 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x1407D87D8 (PspScheduleEnforcementWorker.c)
 *     PfSnPrefetchScenario @ 0x1407DB130 (PfSnPrefetchScenario.c)
 *     ExpWnfStartKernelDispatcher @ 0x1407DC50C (ExpWnfStartKernelDispatcher.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DDE64 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1407E2384 (SepScheduleImageVerificationCallbacks.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E24A8 (PiProcessNewDeviceNodeAsync.c)
 *     PfSnEndProcessTrace @ 0x1407E5320 (PfSnEndProcessTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E7B70 (EtwpCrimsonProvEnableCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407E85E0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpBootPhaseComplete @ 0x140811110 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x140823850 (PopThermalZoneAdd.c)
 *     WdipSemStartTimeoutCheck @ 0x14082FB14 (WdipSemStartTimeoutCheck.c)
 *     ExpWorkQueueManagerThread @ 0x140838DC0 (ExpWorkQueueManagerThread.c)
 *     WmipQueueLegacyEtwWork @ 0x140852D10 (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140857200 (PopFanAdd.c)
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 *     PerfDiagpRequestState @ 0x14085F24C (PerfDiagpRequestState.c)
 *     PopDiagTraceControlCallback @ 0x1408629E0 (PopDiagTraceControlCallback.c)
 *     PiDrvDbLoadNode @ 0x14086BB24 (PiDrvDbLoadNode.c)
 *     WmipQueueRegWork @ 0x14086C0F0 (WmipQueueRegWork.c)
 *     PopEsWorkItemSchedule @ 0x140870840 (PopEsWorkItemSchedule.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875AF0 (PopPowerAggregatorScheduleWorker.c)
 *     PnpChainDereferenceComplete @ 0x1408813A8 (PnpChainDereferenceComplete.c)
 *     CmpForceFlushForCoalescing @ 0x1408AB830 (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x14093970C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14093B658 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14093CC30 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x1409457E4 (IopSendMessageToTrackService.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952170 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     IoReplacePartitionUnit @ 0x140954C40 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C488 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x1409636F4 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x14096CD18 (IopEjectDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409848B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxNotifySxTransitionState @ 0x1409855D4 (PopFxNotifySxTransitionState.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993A90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x140994F80 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14099CB40 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4AA4 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACA98 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD1DC (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0AB8 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1409B3D8C (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1409C22A0 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1409D003C (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x1409DBEE4 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409ECD60 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A007D0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140A07CB0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A07D80 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0FAC8 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x140A11A48 (CmpDiskFullWarning.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C914 (PnprInitiateReplaceOperation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABD74 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     KdpTimeSlipDpcRoutine @ 0x140AB1000 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140AC1EB8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140ADC92C (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     sub_140B0F838 @ 0x140B0F838 (sub_140B0F838.c)
 *     sub_140B18070 @ 0x140B18070 (sub_140B18070.c)
 *     WmipInitializeRegistration @ 0x140B393E8 (WmipInitializeRegistration.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     HalpAcpiDetectPiix4 @ 0x140B653D8 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B6544C (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140B686B0 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExpValidateWorkItem @ 0x1402B7E80 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x1402B7ED0 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1402B7F20 (KeInsertPriQueue.c)
 *     MmGetNextNode @ 0x14034ECC0 (MmGetNextNode.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rdi
  int v4; // r13d
  char v5; // bl
  __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int NextNode; // eax
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  ExpValidateWorkItem((ULONG_PTR)WorkItem);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = ExpBuiltinPriorities[v3];
  v5 = 0;
  LODWORD(v6) = 0;
  v22 = 0;
  v7 = *((_QWORD *)PspSystemPartition + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  NextNode = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v10 = NextNode;
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v11 != (unsigned __int16 *)((char *)&KiNodeInit + 304 * (unsigned __int16)NextNode) )
      {
        if ( v11 )
        {
          v12 = 8LL * *v11;
          if ( *(_QWORD *)(*(_QWORD *)(v12 + *(_QWORD *)(v7 + 16)) + 264LL) >= 2uLL )
          {
            v13 = **(_QWORD **)(v12 + *(_QWORD *)(v7 + 8));
            if ( (v13 & 1) == 0 )
            {
              if ( v13 )
              {
                v14 = *(_DWORD *)(v13 + 712) & 0x3FFF;
                if ( (*(_DWORD *)(v13 + 712) & 0x4000) != 0 )
                  --v14;
                if ( v14 >= (2 * *(_DWORD *)(v13 + 716)) >> 1 )
                  break;
              }
            }
          }
        }
      }
      NextNode = MmGetNextNode(v10, &v22);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_18;
    }
    v15 = **(_QWORD **)(*(_QWORD *)(v7 + 8) + 8LL * *v11);
    if ( (v15 & 1) != 0 )
      v15 = 0LL;
    KeInsertPriQueue(v15, (_DWORD)WorkItem, v4, v6, 0);
    if ( (unsigned __int8)ExpNewThreadNecessary(v15, *(unsigned int *)(v15 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL * *v11) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_18:
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
