/*
 * XREFs of PoInitSystem @ 0x140B50BBC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C5C0 (PoFxSendSystemLatencyUpdate.c)
 *     HalGetInterruptTargetInformation @ 0x140380980 (HalGetInterruptTargetInformation.c)
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140384344 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopComputeCounterShifts @ 0x140384894 (PopComputeCounterShifts.c)
 *     PopInitilizeAcDcSettings @ 0x140384A34 (PopInitilizeAcDcSettings.c)
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     PopLidReliabilityInit @ 0x140389F8C (PopLidReliabilityInit.c)
 *     PpmInitIllegalThrottleLogging @ 0x14038A0C4 (PpmInitIllegalThrottleLogging.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C34B0 (ExInitializeNPagedLookasideListInternal.c)
 *     PopBatteryQueueWork @ 0x1403C6638 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopDiagTraceAbnormalReset @ 0x140591F2C (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x1405956D0 (PopTraceBootError.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     RtlSetSystemBootStatus @ 0x1407A6740 (RtlSetSystemBootStatus.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14080AB70 (PopIdleInitAoAcDozeS4Timer.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     PopInitializeWorkItem @ 0x14082245C (PopInitializeWorkItem.c)
 *     PpmIdleRegisterDefaultStates @ 0x140822478 (PpmIdleRegisterDefaultStates.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822990 (KeRegisterProcessorChangeCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822C24 (PopSetupHighPerfPowerRequest.c)
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     EmpProviderRegister @ 0x140825320 (EmpProviderRegister.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PopIdleWakeInitialize @ 0x1408509C8 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x140850EE0 (PpmEnableWmiInterface.c)
 *     PopThermalHandlePreviousShutdown @ 0x140860288 (PopThermalHandlePreviousShutdown.c)
 *     PopInitializePowerPolicySimulate @ 0x140861264 (PopInitializePowerPolicySimulate.c)
 *     PopUpdateUpgradeInProgress @ 0x140862210 (PopUpdateUpgradeInProgress.c)
 *     PopDefaultPolicy @ 0x1408628B8 (PopDefaultPolicy.c)
 *     RtlGetSystemBootStatus @ 0x140863E10 (RtlGetSystemBootStatus.c)
 *     PopSendFanNoiseChangeWnf @ 0x1408644EC (PopSendFanNoiseChangeWnf.c)
 *     PopSetupMixedRealitytNotification @ 0x1408646A8 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x140864B90 (PopInitializePreSleepNotifications.c)
 *     PopCheckSkipTick @ 0x140864C30 (PopCheckSkipTick.c)
 *     PopResetActionDefaults @ 0x140865298 (PopResetActionDefaults.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1408653B8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140865AF8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140865B34 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140865B70 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140865BAC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140865BE8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x140865C24 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140865C60 (PopSetupAirplaneModeNotification.c)
 *     PopUpdateConsoleDisplayState @ 0x140873AD4 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x140873DBC (PopLogSleepDisabled.c)
 *     PopDiagTraceSkipTick @ 0x14099173C (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 *     PpmParkInitialize @ 0x140B34A10 (PpmParkInitialize.c)
 *     PopInitializeAdpm @ 0x140B35EB4 (PopInitializeAdpm.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B4EE5C (PopCreateTimebrokerServiceSid.c)
 *     PopInitShutdownList @ 0x140B4EEFC (PopInitShutdownList.c)
 *     PopDiagInitialize @ 0x140B4F1E0 (PopDiagInitialize.c)
 *     HalReportResourceUsage @ 0x140B50B50 (HalReportResourceUsage.c)
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140B51C00 (PopUserShutdownScenarioInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140B51C3C (PopPowerAggregatorInitialize.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140B51F08 (PopInitializeDirectedDrips.c)
 *     PopDeepSleepInitialize @ 0x140B51F3C (PopDeepSleepInitialize.c)
 *     PopEsInit @ 0x140B51F88 (PopEsInit.c)
 *     PopSleepstudyInitialize @ 0x140B51FE0 (PopSleepstudyInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140B520A4 (PopInitializePowerButtonHold.c)
 *     PopBatteryInitPhaseTwo @ 0x140B5226C (PopBatteryInitPhaseTwo.c)
 *     PpmInitPolicyConfiguration @ 0x140B5BF50 (PpmInitPolicyConfiguration.c)
 *     PoFxRegisterDebugger @ 0x140B5DC20 (PoFxRegisterDebugger.c)
 *     PopCoalescingInitialize @ 0x140B60E60 (PopCoalescingInitialize.c)
 *     PpmInitHeteroPolicy @ 0x140B621B8 (PpmInitHeteroPolicy.c)
 *     PopThermalInit @ 0x140B64A38 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140B64B2C (PpmPerfInitialize.c)
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 *     PpmInitIdlePolicy @ 0x140B670B8 (PpmInitIdlePolicy.c)
 *     PopInitializePowerSettingCallbacks @ 0x140B67C9C (PopInitializePowerSettingCallbacks.c)
 *     PoFxInitPowerManagement @ 0x140B681B8 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140B6A7E0 (PopEtInit.c)
 *     PopFanReportBootStartDevices @ 0x140B6AF50 (PopFanReportBootStartDevices.c)
 *     PopRecorderInit @ 0x140B6BA48 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140B6CD6C (PopInitDripsWakeAccounting.c)
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 *     PopBatteryInit @ 0x140B6F9F4 (PopBatteryInit.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B711D4 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140B717D4 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B71EFC (PopInitializeHighPerfPowerRequest.c)
 *     PopInitializePowerSettings @ 0x140B7382C (PopInitializePowerSettings.c)
 *     PpmInitCoreParkingPolicy @ 0x140B73AC4 (PpmInitCoreParkingPolicy.c)
 *     PopWatchdogInit @ 0x140B73F7C (PopWatchdogInit.c)
 *     PpmCheckInit @ 0x140B74810 (PpmCheckInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B749C4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitializeSystemIdleDetection @ 0x140B74CD4 (PopInitializeSystemIdleDetection.c)
 *     PopInitVideoWnfState @ 0x140B74F0C (PopInitVideoWnfState.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B75398 (PopCreateIdlePhaseWatchdog.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140B7559C (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B75658 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPowerButtonSuppressionInit @ 0x140B756B4 (PopPowerButtonSuppressionInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B758B0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopSetupKsrCallbacks @ 0x140B75B90 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140B968BC (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140B9691C (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B969A4 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // edi
  unsigned __int8 v12; // r14
  int v13; // eax
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-30h] BYREF
  int Buffer; // [rsp+48h] [rbp-28h] BYREF
  __int128 DataBuffer; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v21 = 0LL;
  DataBuffer = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopSleepstudyInitialize(0LL);
    TimebrokerServiceSid = PopPowerAggregatorInitialize(0LL);
    if ( TimebrokerServiceSid >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      qword_140C3D588 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140C3D598 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      qword_140C3A6E8 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140C3A648 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140C3E878 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140C3A5D8 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      memset(PopStateTransitonBlameStack, 0, 0xA18uLL);
      dword_140C3E5E0 = -1;
      BootStatFileHandle = 0LL;
      BootStatDisableFlush = (qword_140C31AB8 & 4) != 0;
      BootStatFileHandleAcquired = 0;
      xmmword_140C3E5E8 = 0LL;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      *(_QWORD *)&xmmword_140C3E5E8 = 0LL;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140C3F688 = 0LL;
      PopBsdUpdateLock = 0LL;
      LOWORD(PopBsdFlushInactiveEvent.Header.Lock) = 1;
      PopBsdFlushInactiveEvent.Header.Size = 6;
      PopBsdFlushInactiveEvent.Header.SignalState = 1;
      PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
      PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
      PopInitializeWorkItem((__int64)&PopBsdFlushWorkItem, (__int64)PopBsdFlushWorker, v5);
      PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v6);
      PopWdiCurrentScenarioInstanceId = 0LL;
      PopWdiCurrentScenario = (__int64)&NullGuid;
      PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v7);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v8);
      qword_140C3A5B8 = 0LL;
      PopInputSuppressionLock = 0LL;
      qword_140C3F5F8 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      qword_140C3F618 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140C3D5B8 = (__int64)&qword_140C3D5B0;
        qword_140C3D5B0 = (__int64)&qword_140C3D5B0;
        qword_140C3D5C8 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140C3D5D8 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140C3D628 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140C3F0C8 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140C3D5F8 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140CF7D88 = 0LL;
        word_140C3D5A8 = 1;
        byte_140C3D5AA = 6;
        dword_140C3D5AC = 1;
        PopWorkerLock = 0LL;
        LOWORD(PopTransitionLock.Header.Lock) = 1;
        PopTransitionLock.Header.Size = 6;
        PopTransitionLock.Header.SignalState = 1;
        PopDisableSleepMutex.Count = 1;
        PopDisableSleepMutex.Owner = 0LL;
        PopDisableSleepMutex.Contention = 0;
        LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
        PopDisableSleepMutex.Event.Header.Size = 6;
        PopDisableSleepMutex.Event.Header.SignalState = 0;
        PopInitShutdownList();
        v9 = PopIdleScanInterval;
        qword_140C3D648 = (__int64)&PopIdleDetectList;
        PopIdleDetectList = (__int64)&PopIdleDetectList;
        PopDopeGlobalLock = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v9 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v9 = 300;
            PopIdleScanInterval = 300;
          }
          PopIdleBackgroundIgnoreCount = (v9 + 59) / v9;
          PopBackgroundTaskIgnoreCount = (v9 + 179) / v9;
        }
        PopWorkerSpinLock = 0LL;
        PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
        PopPolicyWorker.List.Flink = 0LL;
        PopPolicyWorker.Parameter = (void *)0x80000000LL;
        PopWorkerStatus = -1;
        ExInitializeResourceLite(&PopPolicyLock);
        PopAwaymodeLock = 0LL;
        PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
        PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
        PopVolumeLock.Count = 1;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        qword_140C3D7A8 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140C3D658 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140C3D668 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140C3D678 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        PopWaitingForTransitionLock = 0;
        qword_140C3C648 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140C3D688 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140C3D884;
        PopDefaultPolicy(dword_140C3D884);
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        LODWORD(PopAdminPolicy) = 2;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140C3D9F0 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        PopCoolingMode = 0;
        dword_140CF7D80 = -1;
        dword_140CF7D84 = 2;
        PpmInitPolicyConfiguration();
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0LL);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140C3C868 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        qword_140C3CBA8 = 0LL;
        qword_140C3CBB8 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionLock = 0LL;
        dword_140C3D820 = 4;
        byte_140C3D824 = 0;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140C3D828 = (__int64)PopShutdownHandler;
        qword_140C3E6C8 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140C3E708 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140C3A358 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140D16BF0 = (__int64)&qword_140D16BE8;
        qword_140D16BE8 = (__int64)&qword_140D16BE8;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopAwayModeUserPresenceTimer = 8LL;
        qword_140C3EF78 = (__int64)&qword_140C3EF70;
        qword_140C3EF70 = (__int64)&qword_140C3EF70;
        PopWakeInfoCount = 0;
        PopCurrentWakeInfo = 0LL;
        PopWakeSourceLock = 0LL;
        LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
        PopWakeSourceAvailable.Header.Size = 6;
        PopWakeSourceAvailable.Header.SignalState = 1;
        PopWakeSourceWorkState = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140C3A360 = 0LL;
        qword_140C3A378 = 0LL;
        qword_140C3A350 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140D16BF8 = 0LL;
        dword_140D16C1C = 0;
        word_140D16C18 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        word_140C3EF68 = 1;
        byte_140C3EF6A = 6;
        dword_140C3EF6C = 1;
        PoFxInitPowerManagement();
        dword_140C3D98C = 0;
        qword_140C3D990 = 100LL;
        qword_140C3D998 = 100LL;
        dword_140C3D9A0 = 100;
        PopNetInitialize(0LL);
        PopInitializePowerButtonHold(0LL);
        qword_140C39F88 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        v10 = *(_QWORD *)(a2 + 240);
        LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v10 + 3440);
        if ( *(_BYTE *)(v10 + 3440) )
        {
          *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v10 + 3448);
          xmmword_140C6AED8 = *(_OWORD *)(v10 + 3456);
          xmmword_140C6AEE8 = *(_OWORD *)(v10 + 3472);
        }
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0LL);
          SshInitialize(0LL);
LABEL_84:
          TimebrokerServiceSid = 0;
          return TimebrokerServiceSid >= 0;
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    qword_140C3C878 = 0LL;
    PopFanLock = 0LL;
    dword_140C3C90C = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140C3DB50 = 0LL;
    qword_140C3DB58 = 0LL;
    qword_140C3DB48 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1LL);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopEsInit(1LL);
    PopInitializePowerSettingCallbacks();
    TimebrokerServiceSid = PopEtInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopPowerRequestInitialize();
      if ( TimebrokerServiceSid >= 0 )
      {
        TimebrokerServiceSid = PopPowerAggregatorInitialize(1LL);
        if ( TimebrokerServiceSid >= 0 )
        {
          TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopCheckPowerSourceAfterRtcWakeInitialize();
            PopUserShutdownScenarioInitialize(1LL);
            PopWatchdogInit();
            PopInitializePowerButtonHold(1LL);
            PopInitDripsWakeAccounting();
            TimebrokerServiceSid = EmpProviderRegister(
                                     0LL,
                                     (__int64)&PopEmEntry,
                                     1u,
                                     (__int64)&PopEmCallback,
                                     2u,
                                     (__int64 *)&PerformanceFrequency);
            if ( TimebrokerServiceSid >= 0 )
            {
              PerformanceFrequency.LowPart = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &PerformanceFrequency);
              if ( PerformanceFrequency.LowPart == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              goto LABEL_84;
            }
          }
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
      goto LABEL_84;
    TimebrokerServiceSid = PopDiagInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    SshInitialize(3LL);
    PopSleepstudyInitialize(3LL);
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    TimebrokerServiceSid = PopUserShutdownScenarioInitialize(3LL);
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    v11 = 2;
    v12 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v11 = 0;
        v13 = 0;
LABEL_42:
        PoSkipTickMode = v13;
        PopDiagTraceSkipTick(v11 == 2, v12);
        goto LABEL_43;
      }
      v12 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&DataBuffer) >= 0 )
      {
        PopApicMode = HIDWORD(v21);
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_43:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        LODWORD(v21) = 0;
        DataBuffer = 0LL;
        if ( RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL) >= 0 && HIDWORD(DataBuffer) )
        {
          PopTraceBootError();
          LODWORD(v21) = 0;
          DataBuffer = 0LL;
          RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
        }
        if ( (unsigned __int8)off_140C01CE0[0]()
          || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
        {
          PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock();
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( byte_140C3DA14 )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v14 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          PopSecureLaunched = 1;
          v14 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v14 )
            goto LABEL_61;
        }
        else
        {
          LOBYTE(v14) = 31;
        }
        PopLogSleepDisabled(21, v14, 0LL, 0LL);
LABEL_61:
        PopDeepSleepInitialize(3LL);
        PopInitializePowerPolicySimulate();
        if ( (PopSimulate & 1) != 0 )
        {
          byte_140C3DA1E = 1;
          *(_QWORD *)&xmmword_140C3DA20 = 0x19000000064LL;
          *((_QWORD *)&xmmword_140C3DA20 + 1) = 0xFFFF0000000ALL;
          LODWORD(qword_140C3DA40) = 4;
          dword_140C3DA48 = 2;
        }
        if ( (PopSimulate & 2) != 0 )
        {
          LODWORD(PopCapabilities) = 16843009;
          WORD2(PopCapabilities) = 257;
          BYTE6(PopCapabilities) = 1;
          unk_140C3DA11 = 257;
        }
        PopResetCurrentPolicies();
        PopInitializeAdpm();
        PopEsInit(3LL);
        PopInitilizeAcDcSettings();
        Buffer = 1;
        PopUpdateConsoleDisplayState(1u);
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
        PopNetInitialize(3LL);
        PopReleasePolicyLock();
        PopIdleInitAoAcDozeS4Timer();
        PopCreateIdlePhaseWatchdog();
        PopInitializeSystemIdleDetection();
        PopInitializePreSleepNotifications();
        v15 = *(_QWORD *)(a2 + 240);
        PopHiberLoaderScratchPages = *(_DWORD *)(v15 + 272);
        PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v15 + 132) & 0x10000000) != 0;
        PopSetupHighPerfPowerRequest();
        PpmEnableWmiInterface();
        if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 2648LL) & 0x8000LL) != 0 )
          PopFasr = 1;
        PopAcquirePolicyLock();
        PopCoalescingInitialize();
        PopReleasePolicyLock();
        PopInitializeDirectedDrips(3LL);
        ExInitializeResourceLite(&PopDripsWatchdogContext);
        if ( PopPlatformAoAc )
        {
          if ( (int)PopDripsWatchdogInitializeActions() < 0
            || (int)PopDripsWatchdogInitializeCallbackTimer() < 0
            || (int)PopDripsWatchdogInitializeDiagnosticTimer() < 0 )
          {
            goto LABEL_73;
          }
          dword_140C398E8 |= 2u;
        }
        dword_140C398E8 |= 1u;
LABEL_73:
        PopSetupAudioEventNotification();
        PopSetupMixedRealitytNotification();
        PopSetupFullScrenVideoNotification();
        PopSetupUserPresencePredictionNotification();
        PopSetupSprActiveSessionChangeNotification();
        PopSetupAirplaneModeNotification();
        PopSetupBluetoothChargingNotification();
        PopSetupMobileHotspotNotification();
        PopThermalHandlePreviousShutdown();
        PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
        TtmInit();
        if ( PopPlatformAoAc )
        {
          PerformanceFrequency.LowPart = 1;
          EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &PerformanceFrequency);
          if ( PerformanceFrequency.LowPart == 2 )
            PopErrataReportingIncorrectLidState = 1;
        }
        PopLidReliabilityInit(v16);
        if ( PopPlatformAoAc )
        {
          if ( PopLidStateForInputSuppressionOverride != -1 )
            PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
          PerformanceFrequency.LowPart = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &PerformanceFrequency);
          if ( PerformanceFrequency.LowPart == 2 )
          {
            PopEnableInputSuppression = 1;
          }
          else
          {
            PopEnableInputSuppression = 0;
            if ( PopEnableInputSuppressionOverride != -1 )
              PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
          }
        }
        PopPowerButtonSuppressionInit();
        PopBatteryQueueWork(1u);
        PopSetupKsrCallbacks();
        PopHiberEvaluateSkippingMemoryMapValidation();
        PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
        goto LABEL_84;
      }
    }
    v13 = 2;
    goto LABEL_42;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = EtwRegister(
                           &PPM_ETW_PROVIDER,
                           (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                           0LL,
                           &PpmEtwHandle);
  if ( TimebrokerServiceSid >= 0 )
  {
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock(&PopFxSystemLatencyLock);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      PopInitVideoWnfState();
      goto LABEL_84;
    }
  }
  return TimebrokerServiceSid >= 0;
}
