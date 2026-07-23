/*
 * XREFs of ExQueueWorkItem @ 0x1402B7C00
 * Callers:
 *     PspRequestDeferredJobNotification @ 0x140200C90 (PspRequestDeferredJobNotification.c)
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     MiFreeCombineBlock @ 0x1402194E8 (MiFreeCombineBlock.c)
 *     MiWakeBadPageSignalThread @ 0x14021D9D8 (MiWakeBadPageSignalThread.c)
 *     MiCheckLogPinDriverAddresses @ 0x14021EBE8 (MiCheckLogPinDriverAddresses.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E728 (PopDeepSleepSetDisengageReason.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B953C (CmpArmDelayedCloseTimer.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304D34 (LZNT1DecompressChunkNewThread.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     SepQueueWorkItem @ 0x140309480 (SepQueueWorkItem.c)
 *     PfSnGetFileInformation @ 0x1403140E0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1403147FC (PfSnTraceGetLogEntry.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14031D550 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmCheckPeriodicStart @ 0x14032BE40 (PpmCheckPeriodicStart.c)
 *     PopCheckForWork @ 0x14032C9D8 (PopCheckForWork.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     ExpWaitForResource @ 0x1403410D0 (ExpWaitForResource.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140342C4C (SmKmStoreDeleteWhenEmpty.c)
 *     PspHardDereferenceSiloWorker @ 0x140353F7C (PspHardDereferenceSiloWorker.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x140357E50 (KiIdealProcessorRebalancerTimerCallback.c)
 *     PnpRequestDeviceAction @ 0x140358A44 (PnpRequestDeviceAction.c)
 *     IopLoadDriverImage @ 0x14035A970 (IopLoadDriverImage.c)
 *     PfSnTraceTimerRoutine @ 0x14035B320 (PfSnTraceTimerRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x140363180 (HalpGenericPolledDpcRoutine.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140363AFC (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwTelemetryCoverageReport @ 0x140364BF0 (EtwTelemetryCoverageReport.c)
 *     ExpHpGCTimerCallback @ 0x140365330 (ExpHpGCTimerCallback.c)
 *     MmSetAccessLogging @ 0x14036A840 (MmSetAccessLogging.c)
 *     PoLatencySensitivityHint @ 0x14036D210 (PoLatencySensitivityHint.c)
 *     WdipTimeoutTimerRoutine @ 0x14036D7C0 (WdipTimeoutTimerRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14036DB60 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14036E8B0 (EtwpCoverageFlushTimerCallback.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14036E900 (CmpDelayFreeRMDpcRoutine.c)
 *     CmpWorkItemQueueWork @ 0x140374BF0 (CmpWorkItemQueueWork.c)
 *     EmpQueueRuleUpdateState @ 0x1403878C8 (EmpQueueRuleUpdateState.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038D050 (MiFreeUnusedPfnPagesDpc.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     PopFxReinitializeAccountingInstance @ 0x140396094 (PopFxReinitializeAccountingInstance.c)
 *     IoWMIWriteEvent @ 0x1403A7D50 (IoWMIWriteEvent.c)
 *     SepAdtDetermineInsertQueue @ 0x1403AD110 (SepAdtDetermineInsertQueue.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1403ADC94 (CcQueueAsyncGetDeviceGuid.c)
 *     PoNotifyMediaBuffering @ 0x1403AEF50 (PoNotifyMediaBuffering.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403B1B4C (CcSetupWatchForRegistryChanges.c)
 *     PopFanIrpComplete @ 0x1403B2F50 (PopFanIrpComplete.c)
 *     PopThermalIrpComplete @ 0x1403B4990 (PopThermalIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1403B5610 (PopBatteryWakeDpc.c)
 *     HalpCmcDeferredRoutine @ 0x1403B57F0 (HalpCmcDeferredRoutine.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B5A30 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     ExpDebuggerDpcRoutine @ 0x1403B65A0 (ExpDebuggerDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C38B4 (PnpUnlockDeviceActionQueue.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x1403C6CB0 (IoWriteErrorLogEntry.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CC640 (ExpTimeRefreshDpcRoutine.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1403D5420 (CcTelemetryPeriodicTimerDpc.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1403D5FB0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     PopWatchdogDpc @ 0x1403D63B0 (PopWatchdogDpc.c)
 *     PfSnPowerBoostDpc @ 0x1403D7630 (PfSnPowerBoostDpc.c)
 *     CcBcbProfiler @ 0x1403E2CE0 (CcBcbProfiler.c)
 *     ExpWaitForFastResource2 @ 0x140416164 (ExpWaitForFastResource2.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140467808 (EtwpQueuePerfMemInfoWorkItem.c)
 *     HalpQueueMapBufferWorker @ 0x140505114 (HalpQueueMapBufferWorker.c)
 *     IoFreeAdapterChannelV3 @ 0x1405102C0 (IoFreeAdapterChannelV3.c)
 *     HalpBlkWdTimerRoutine @ 0x14052B210 (HalpBlkWdTimerRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140548384 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x140548480 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140556B20 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140556E00 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140558060 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1405581C0 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14055EA10 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x140564C50 (IopDeviceEjectComplete.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x14057B5E0 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x14057BF58 (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405802A4 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x140580330 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x140582B20 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582B68 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x140582D90 (PfpPowerActionDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x1405830B0 (PfSnTracingStateDpcRoutine.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA90 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUserPresentSet @ 0x14058DFF4 (PopUserPresentSet.c)
 *     PopWakeInfoDereference @ 0x14058E8E8 (PopWakeInfoDereference.c)
 *     PopPowerActionWatchdog @ 0x14058F4C0 (PopPowerActionWatchdog.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x140598370 (PopSleepstudyScenarioStopTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405984B0 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140598F60 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DB84 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059E140 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x14059E8E0 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405A3750 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405A3790 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B976C (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BFD40 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CD288 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarDoLiveDump @ 0x1405D5A60 (CarDoLiveDump.c)
 *     EtwpContainerStateWnfCallback @ 0x1405FC010 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x1405FFB80 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140602670 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140605DE0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140606150 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406062A0 (ExpTimeZoneDpcRoutine.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608AF4 (ExpTrackRaiseLimitNotification.c)
 *     ExpHotAddProcessorToWorkers @ 0x14060CEB8 (ExpHotAddProcessorToWorkers.c)
 *     ExpSvmDpcRoutine @ 0x14060E870 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140612DB0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612FE4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140613060 (WheaFlushETWEventsDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140613A00 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x140613A60 (WheapWorkQueueDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x1406162D0 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x140616500 (CmpLazyCommitDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x1406245A4 (MiFlushControlArea.c)
 *     MiRemovePendingBadPageNode @ 0x14062A978 (MiRemovePendingBadPageNode.c)
 *     MiWakeFileOnlyReaper @ 0x1406404BC (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x14064DB1C (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x140650F64 (MiNoPagesLastChance.c)
 *     MmReportParkedProcessors @ 0x140655EB8 (MmReportParkedProcessors.c)
 *     WdtpTimerCallback @ 0x140674200 (WdtpTimerCallback.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpClaimGlobalQuota @ 0x14070304C (CmpClaimGlobalQuota.c)
 *     PfSnPrefetchSections @ 0x14074D088 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074D354 (PfSnPrefetchSectionsCleanup.c)
 *     CmpCanGrowHive @ 0x140750668 (CmpCanGrowHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     CmpSignalDeferredPosts @ 0x1407687C4 (CmpSignalDeferredPosts.c)
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786840 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140788430 (PiDqObjectManagerHandleObjectEvent.c)
 *     NtNotifyChangeSession @ 0x1407B3FD0 (NtNotifyChangeSession.c)
 *     PsSetProcessWin32Process @ 0x1407D42A0 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x1407D8D58 (PspScheduleEnforcementWorker.c)
 *     PfSnPrefetchScenario @ 0x1407DB6B0 (PfSnPrefetchScenario.c)
 *     ExpWnfStartKernelDispatcher @ 0x1407DCA8C (ExpWnfStartKernelDispatcher.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE3E4 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1407E2904 (SepScheduleImageVerificationCallbacks.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2A28 (PiProcessNewDeviceNodeAsync.c)
 *     PfSnEndProcessTrace @ 0x1407E58A0 (PfSnEndProcessTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407E80F0 (EtwpCrimsonProvEnableCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407E8B60 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PnpBootPhaseComplete @ 0x140813690 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x1408247B0 (PopThermalZoneAdd.c)
 *     WdipSemStartTimeoutCheck @ 0x140831664 (WdipSemStartTimeoutCheck.c)
 *     ExpWorkQueueManagerThread @ 0x14083A910 (ExpWorkQueueManagerThread.c)
 *     WmipQueueLegacyEtwWork @ 0x140853C20 (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140858110 (PopFanAdd.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     PerfDiagpRequestState @ 0x14085F3AC (PerfDiagpRequestState.c)
 *     PopDiagTraceControlCallback @ 0x140862C00 (PopDiagTraceControlCallback.c)
 *     PiDrvDbLoadNode @ 0x14086BFF4 (PiDrvDbLoadNode.c)
 *     WmipQueueRegWork @ 0x14086C5C0 (WmipQueueRegWork.c)
 *     PopEsWorkItemSchedule @ 0x140870D10 (PopEsWorkItemSchedule.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875FC0 (PopPowerAggregatorScheduleWorker.c)
 *     PnpChainDereferenceComplete @ 0x140881878 (PnpChainDereferenceComplete.c)
 *     CmpForceFlushForCoalescing @ 0x1408ABD10 (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x1409397BC (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14093B708 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14093CCE0 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x140945894 (IopSendMessageToTrackService.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952220 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     IoReplacePartitionUnit @ 0x140954CF0 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C538 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x1409637A4 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140984960 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxNotifySxTransitionState @ 0x140985684 (PopFxNotifySxTransitionState.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993B40 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x140995030 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14099CBF0 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4B54 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACB48 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AD28C (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409B0B68 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1409B3E3C (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1409C2350 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1409D00EC (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x1409DBF94 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409ECE10 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00880 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140A07D60 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A07E30 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140A0FB78 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x140A11AF8 (CmpDiskFullWarning.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     PnprInitiateReplaceOperation @ 0x140A9C9D4 (PnprInitiateReplaceOperation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     KdpTimeSlipDpcRoutine @ 0x140AB2000 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140AC2EB8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140ADD8FC (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140AED0B8 (LogFwReport.c)
 *     sub_140B10838 @ 0x140B10838 (sub_140B10838.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
 *     WmipInitializeRegistration @ 0x140B3CAE8 (WmipInitializeRegistration.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     HalpAcpiDetectPiix4 @ 0x140B66778 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B667EC (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140B6960C (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExpValidateWorkItem @ 0x1402B7E50 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x1402B7EA0 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1402B7EF0 (KeInsertPriQueue.c)
 *     MmGetNextNode @ 0x14034E6C0 (MmGetNextNode.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
