/*
 * XREFs of ExQueueWorkItem @ 0x1402B7EC0
 * Callers:
 *     PspRequestDeferredJobNotification @ 0x140200C90 (PspRequestDeferredJobNotification.c)
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     MiFreeCombineBlock @ 0x1402194C8 (MiFreeCombineBlock.c)
 *     MiWakeBadPageSignalThread @ 0x14021D9B8 (MiWakeBadPageSignalThread.c)
 *     MiCheckLogPinDriverAddresses @ 0x14021EBC8 (MiCheckLogPinDriverAddresses.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E9EC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028EAD8 (PopDeepSleepSetDisengageReason.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B97FC (CmpArmDelayedCloseTimer.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304FC4 (LZNT1DecompressChunkNewThread.c)
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     SepQueueWorkItem @ 0x140309840 (SepQueueWorkItem.c)
 *     PfSnGetFileInformation @ 0x140314550 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140314C6C (PfSnTraceGetLogEntry.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D9C0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmCheckPeriodicStart @ 0x14032C2B0 (PpmCheckPeriodicStart.c)
 *     PopCheckForWork @ 0x14032CE48 (PopCheckForWork.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     ExpWaitForResource @ 0x140341850 (ExpWaitForResource.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1403433CC (SmKmStoreDeleteWhenEmpty.c)
 *     PspHardDereferenceSiloWorker @ 0x14035471C (PspHardDereferenceSiloWorker.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x1403585F0 (KiIdealProcessorRebalancerTimerCallback.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     IopLoadDriverImage @ 0x14035B110 (IopLoadDriverImage.c)
 *     PfSnTraceTimerRoutine @ 0x14035BB10 (PfSnTraceTimerRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x140363970 (HalpGenericPolledDpcRoutine.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403642EC (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     ExpHpGCTimerCallback @ 0x140365B20 (ExpHpGCTimerCallback.c)
 *     MmSetAccessLogging @ 0x14036B030 (MmSetAccessLogging.c)
 *     PoLatencySensitivityHint @ 0x14036DA00 (PoLatencySensitivityHint.c)
 *     WdipTimeoutTimerRoutine @ 0x14036DFB0 (WdipTimeoutTimerRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14036E350 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14036F0A0 (EtwpCoverageFlushTimerCallback.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14036F0F0 (CmpDelayFreeRMDpcRoutine.c)
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 *     EmpQueueRuleUpdateState @ 0x14038B514 (EmpQueueRuleUpdateState.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EDB0 (MiFreeUnusedPfnPagesDpc.c)
 *     KeBalanceSetManager @ 0x1403946E0 (KeBalanceSetManager.c)
 *     PopFxReinitializeAccountingInstance @ 0x140397DF4 (PopFxReinitializeAccountingInstance.c)
 *     IoWMIWriteEvent @ 0x1403A8660 (IoWMIWriteEvent.c)
 *     SepAdtDetermineInsertQueue @ 0x1403AD980 (SepAdtDetermineInsertQueue.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1403AE504 (CcQueueAsyncGetDeviceGuid.c)
 *     PoNotifyMediaBuffering @ 0x1403AF7C0 (PoNotifyMediaBuffering.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403B23BC (CcSetupWatchForRegistryChanges.c)
 *     PopFanIrpComplete @ 0x1403B37C0 (PopFanIrpComplete.c)
 *     PopThermalIrpComplete @ 0x1403B5200 (PopThermalIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1403B5E80 (PopBatteryWakeDpc.c)
 *     HalpCmcDeferredRoutine @ 0x1403B6060 (HalpCmcDeferredRoutine.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B62A0 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     ExpDebuggerDpcRoutine @ 0x1403B6DE0 (ExpDebuggerDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C40F4 (PnpUnlockDeviceActionQueue.c)
 *     PopBatteryQueueWork @ 0x1403C6638 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x1403C74F0 (IoWriteErrorLogEntry.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CCE80 (ExpTimeRefreshDpcRoutine.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1403D5C60 (CcTelemetryPeriodicTimerDpc.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1403D67F0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     PopWatchdogDpc @ 0x1403D6BF0 (PopWatchdogDpc.c)
 *     PfSnPowerBoostDpc @ 0x1403D7E70 (PfSnPowerBoostDpc.c)
 *     CcBcbProfiler @ 0x1403E3520 (CcBcbProfiler.c)
 *     ExpWaitForFastResource2 @ 0x140416BA8 (ExpWaitForFastResource2.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140468268 (EtwpQueuePerfMemInfoWorkItem.c)
 *     HalpQueueMapBufferWorker @ 0x140505554 (HalpQueueMapBufferWorker.c)
 *     IoFreeAdapterChannelV3 @ 0x140510750 (IoFreeAdapterChannelV3.c)
 *     HalpBlkWdTimerRoutine @ 0x14052B6B0 (HalpBlkWdTimerRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1405489A4 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x140548AA0 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140557140 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557420 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140558680 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1405587E0 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14055F030 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x140560490 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x140565270 (IopDeviceEjectComplete.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x14057BA40 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x14057C3B8 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x140580704 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x140580790 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x140582F80 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582FC8 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x1405831F0 (PfpPowerActionDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x140583510 (PfSnTracingStateDpcRoutine.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DEF0 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUserPresentSet @ 0x14058E454 (PopUserPresentSet.c)
 *     PopWakeInfoDereference @ 0x14058ED48 (PopWakeInfoDereference.c)
 *     PopPowerActionWatchdog @ 0x14058F920 (PopPowerActionWatchdog.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x1405987D0 (PopSleepstudyScenarioStopTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x140598910 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1405993C0 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DFE4 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059E5A0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x14059ED40 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405A3BB0 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405A3BF0 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B9C4C (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405C0220 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CD768 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarDoLiveDump @ 0x1405D5F40 (CarDoLiveDump.c)
 *     EtwpContainerStateWnfCallback @ 0x1405FC4F0 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x140600060 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140602B50 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x1406062C0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140606630 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140606780 (ExpTimeZoneDpcRoutine.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608FD4 (ExpTrackRaiseLimitNotification.c)
 *     ExpHotAddProcessorToWorkers @ 0x14060D398 (ExpHotAddProcessorToWorkers.c)
 *     ExpSvmDpcRoutine @ 0x14060ED50 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140613290 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406134C4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140613540 (WheaFlushETWEventsDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140613EE0 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x140613F40 (WheapWorkQueueDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x1406167B0 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x1406169E0 (CmpLazyCommitDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x140624A84 (MiFlushControlArea.c)
 *     MiRemovePendingBadPageNode @ 0x14062AE58 (MiRemovePendingBadPageNode.c)
 *     MiWakeFileOnlyReaper @ 0x14064099C (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x14064DFFC (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x140651444 (MiNoPagesLastChance.c)
 *     MmReportParkedProcessors @ 0x140656398 (MmReportParkedProcessors.c)
 *     WdtpTimerCallback @ 0x1406746E0 (WdtpTimerCallback.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpClaimGlobalQuota @ 0x1407031AC (CmpClaimGlobalQuota.c)
 *     PfSnPrefetchSections @ 0x14074CD68 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074D034 (PfSnPrefetchSectionsCleanup.c)
 *     CmpCanGrowHive @ 0x140750348 (CmpCanGrowHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     PiUEventNotifyUserMode @ 0x140783BDC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786520 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140788110 (PiDqObjectManagerHandleObjectEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3C10 (NtNotifyChangeSession.c)
 *     PsSetProcessWin32Process @ 0x1407D3FF0 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x1407D8AA8 (PspScheduleEnforcementWorker.c)
 *     PfSnPrefetchScenario @ 0x1407DB400 (PfSnPrefetchScenario.c)
 *     ExpWnfStartKernelDispatcher @ 0x1407DC7DC (ExpWnfStartKernelDispatcher.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE134 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1407E2654 (SepScheduleImageVerificationCallbacks.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2778 (PiProcessNewDeviceNodeAsync.c)
 *     PfSnEndProcessTrace @ 0x1407E55F0 (PfSnEndProcessTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E7E40 (EtwpCrimsonProvEnableCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407E88B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpBootPhaseComplete @ 0x1408113E0 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x140823B50 (PopThermalZoneAdd.c)
 *     WdipSemStartTimeoutCheck @ 0x14082FE14 (WdipSemStartTimeoutCheck.c)
 *     ExpWorkQueueManagerThread @ 0x1408390C0 (ExpWorkQueueManagerThread.c)
 *     WmipQueueLegacyEtwWork @ 0x140853010 (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140857440 (PopFanAdd.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     PerfDiagpRequestState @ 0x14085F48C (PerfDiagpRequestState.c)
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 *     PiDrvDbLoadNode @ 0x14086BD64 (PiDrvDbLoadNode.c)
 *     WmipQueueRegWork @ 0x14086C330 (WmipQueueRegWork.c)
 *     PopEsWorkItemSchedule @ 0x140870A80 (PopEsWorkItemSchedule.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875D30 (PopPowerAggregatorScheduleWorker.c)
 *     PnpChainDereferenceComplete @ 0x1408815E8 (PnpChainDereferenceComplete.c)
 *     CmpForceFlushForCoalescing @ 0x1408ABA80 (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x14093990C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14093B858 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14093CE30 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x1409459E4 (IopSendMessageToTrackService.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952370 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     IoReplacePartitionUnit @ 0x140954E40 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C688 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x1409638F4 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140984AB0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxNotifySxTransitionState @ 0x1409857D4 (PopFxNotifySxTransitionState.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993C90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x140995180 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14099CD40 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4CA4 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACC98 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD3DC (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0CB8 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1409B3F8C (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1409C24A0 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1409D023C (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x1409DC0E4 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409ECFF0 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00A60 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140A07F60 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08030 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0FD78 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x140A11CF8 (CmpDiskFullWarning.c)
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C784 (PnprInitiateReplaceOperation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABBE4 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     KdpTimeSlipDpcRoutine @ 0x140AB1000 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140AC1EA8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140ADC91C (VfIrpLogRecordEvent.c)
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
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpValidateWorkItem @ 0x1402B8110 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x1402B8160 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1402B81B0 (KeInsertPriQueue.c)
 *     MmGetNextNode @ 0x14034EE60 (MmGetNextNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
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
