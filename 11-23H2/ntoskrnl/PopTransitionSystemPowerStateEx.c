/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140AA90F0
 * Callers:
 *     NtSetSystemPowerState @ 0x140AA6850 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AF900 (PsIsHostSilo.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFB1C (PopExecuteOnTargetProcessors.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     KeSuspendThread @ 0x140309E18 (KeSuspendThread.c)
 *     PopGetPolicyWorker @ 0x14032CB64 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CBB8 (PopCheckForWork.c)
 *     StringCchPrintfW @ 0x1403662E8 (StringCchPrintfW.c)
 *     RtlBootStatusDisableFlushing @ 0x14036F1D8 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x14041E4A0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140556D60 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1405835CC (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14058B3DC (PopFxPrepareDevicesForShutdown.c)
 *     PoSetUserPresent @ 0x14058DDC0 (PoSetUserPresent.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopActionRetrieveInitialState @ 0x14058F350 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x14058F4C4 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F4F8 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x14058FC48 (PopThermalSxEntry.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590330 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059039C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596388 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1405963CC (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x140598AD4 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598CAC (PopIgnoreBatteryStatusChange.c)
 *     PopFanSxEntry @ 0x14059961C (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x1405996AC (PopFanSxExit.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14059974C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PsIumResumeAfterHibernate @ 0x1405A58E4 (PsIumResumeAfterHibernate.c)
 *     ExDeleteWakeTimerInfo @ 0x14060B594 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersPause @ 0x14060BA48 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14060BBD0 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x140610324 (WheaResumedFromHibernate.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5750 (MmLockPagableSectionByHandle.c)
 *     PsLookupProcessByProcessId @ 0x1406FA370 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAF10 (PsLookupThreadByThreadId.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     ExReleaseTimeRefreshLock @ 0x14075F930 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075F954 (ExAcquireTimeRefreshLock.c)
 *     PopCurrentPowerState @ 0x1407A6D48 (PopCurrentPowerState.c)
 *     PopFilterCapabilities @ 0x1407A8694 (PopFilterCapabilities.c)
 *     PopInitSIdle @ 0x140824914 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140861024 (PopInitializePowerPolicySimulate.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086441C (PopCancelIgnoreBatteryStatusChange.c)
 *     PopResetActionDefaults @ 0x140865058 (PopResetActionDefaults.c)
 *     PopCurrentPowerStatePrecise @ 0x1408737C8 (PopCurrentPowerStatePrecise.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopFastS4Check @ 0x1409808F4 (PopFastS4Check.c)
 *     PopFindNextSystemPowerState @ 0x140980930 (PopFindNextSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980B04 (PopIsDozeSupported.c)
 *     PopSetShutdownMarker @ 0x14098148C (PopSetShutdownMarker.c)
 *     PopSetSleepMarker @ 0x1409814A0 (PopSetSleepMarker.c)
 *     PopAdvanceSystemPowerState @ 0x1409840CC (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x1409869D4 (PpmPerfReApplyStates.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceProcess @ 0x1409883E0 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x140989490 (PopZeroHiberFile.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopSaveLidReliabilityState @ 0x14098AB68 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x14098B614 (PopDeferDoze.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BA7C (PopNotifyCallbacksPreSleep.c)
 *     PopQueryPowerSettingUlong @ 0x14098BACC (PopQueryPowerSettingUlong.c)
 *     PoClearBroadcast @ 0x14098BB8C (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x14098BBE4 (PoInitializeBroadcast.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14098FD40 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x140991348 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x140991AA4 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopNotifyTelemetryOsState @ 0x140992604 (PopNotifyTelemetryOsState.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140993E10 (PopPowerAggregatorNotifySystemWake.c)
 *     PopEnforceResiliencyScenarios @ 0x140994238 (PopEnforceResiliencyScenarios.c)
 *     PopTransitionGetWakeTimerType @ 0x1409945A0 (PopTransitionGetWakeTimerType.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140996F30 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x1409982F8 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x14099834C (PopEsExitSleep.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x1409A19FC (SshSessionManagerTracePostSleepNotification.c)
 *     PsTerminateServerSilo @ 0x1409AC8A0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BDCB0 (RtlSetSystemBootStatusEx.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A118C8 (CmSetLazyFlushState.c)
 *     MmZeroPageFileAtShutdown @ 0x140A2B524 (MmZeroPageFileAtShutdown.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E754 (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0E5C (PopHandleWakeSources.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA107C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140AA10A8 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA1184 (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA616C (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 *     PopSetDevicesSystemState @ 0x140AA7440 (PopSetDevicesSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA789C (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7BB0 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140AA7E64 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140AA7EF4 (PopDiagTraceMtrrError.c)
 *     PopDiagTracePostSleepNotification @ 0x140AA7F84 (PopDiagTracePostSleepNotification.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA9060 (PopAcquireTransitionLockAfterSleep.c)
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 *     ExGetNextWakeTime @ 0x140AAAEEC (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(unsigned int *a1)
{
  int *v1; // r15
  _DWORD *v3; // r13
  unsigned int v4; // ecx
  int v5; // r12d
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int8 *v17; // rbx
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int HiberContext; // eax
  int v38; // ecx
  LONG v39; // ecx
  int inited; // eax
  char NextSystemPowerState; // al
  __int64 v42; // r10
  __int64 v43; // r14
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rbx
  _DWORD *v52; // r8
  _DWORD *v53; // r14
  __int64 *v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // edx
  unsigned __int64 v57; // rax
  __int64 *v58; // rbx
  __int64 *v59; // r13
  char NextWakeTime; // al
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  PETHREAD v66; // rdx
  PEPROCESS v67; // rcx
  int v68; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v70; // ecx
  int v71; // r8d
  unsigned int v72; // eax
  __int64 v73; // rax
  _DWORD *v74; // rax
  void *v75; // rcx
  unsigned int v76; // [rsp+30h] [rbp-49h]
  HANDLE ProcessId[2]; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  int v79; // [rsp+60h] [rbp-19h] BYREF
  char *v80; // [rsp+68h] [rbp-11h]
  int v81; // [rsp+70h] [rbp-9h]
  int v82; // [rsp+78h] [rbp-1h]
  unsigned __int64 v83; // [rsp+80h] [rbp+7h]
  int v84; // [rsp+88h] [rbp+Fh]
  char v85; // [rsp+E0h] [rbp+67h] BYREF
  PEPROCESS Process; // [rsp+E8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v88; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = (int *)(a1 + 37);
  *((_BYTE *)a1 + 24) = 0;
  v3 = a1 + 59;
  *((_BYTE *)a1 + 36) = 0;
  a1[10] = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  a1[38] = 1;
  a1[39] = 1;
  *((_BYTE *)a1 + 256) = 1;
  *((_QWORD *)a1 + 46) = 1LL;
  *((_QWORD *)a1 + 7) = 0LL;
  a1[29] = 0;
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_BYTE *)a1 + 376) = 0;
  *((_QWORD *)a1 + 45) = 0LL;
  a1[58] = 0;
  a1[37] = 0;
  a1[59] = 0;
  Process = 0LL;
  Thread = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  v88 = 0LL;
  v4 = (PopSimulate & 0x10000) != 0 ? 0xEE1E5D00 : 0;
  a1[26] = 0;
  a1[95] = v4 + 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( a1[1] - 1 > 5 || (v5 = 6, *a1 - 1 > 6) || (a1[2] & 0xCFFFFC0) != 0 )
  {
    *v1 = 1;
    a1[26] = -1073741811;
    goto LABEL_237;
  }
  if ( (int)*a1 < 4 && dword_140C3D0D4 >= 16 )
  {
    a1[26] = -1073741811;
    *v1 = 2;
LABEL_241:
    if ( *v1 )
      PopDiagTraceStateTransitionFailurePoint(a1[26], *v1);
    return a1[26];
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *((_BYTE *)a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*a1, a1[1]);
    a1[26] = -1073741727;
    *v1 = 2;
    goto LABEL_241;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v9 = *a1;
  *((_QWORD *)a1 + 12) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v9 - 4) > 2 )
    {
      *v1 = 4;
      v11 = -1073741637;
    }
    else
    {
      v10 = -2147483599;
      if ( v9 != 5 )
        v10 = -1073741077;
      a1[8] = v10;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
      v11 = 0;
    }
    a1[26] = v11;
    goto LABEL_237;
  }
  if ( v9 == 2 )
    PnpSurpriseFailUnsafeDmaDevices();
  if ( *a1 == 4 )
    PopReadShutdownPolicy();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C3D0D4;
  v13 = dword_140C3D0D4 < 16;
  a1[31] = 128;
  if ( !v13 )
    v12 = 5;
  a1[30] = v12;
  PopAcquireTransitionLockAfterSleep();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v14 = PoInitializeBroadcast();
  a1[26] = v14;
  if ( v14 < 0 )
  {
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    *v1 = 5;
LABEL_237:
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    goto LABEL_241;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopCurrentPowerStatePrecise((_OWORD *)a1 + 10, (__int64)&v88);
  PopAcquirePolicyLock();
  *((_BYTE *)a1 + 64) = 1;
  PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C3D188);
  if ( byte_140C3D0C1 )
  {
    if ( byte_140C3D0C1 != 2 )
    {
      PopReleasePolicyLock();
      PoClearBroadcast();
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      *v1 = 6;
      a1[26] = -1073741791;
      goto LABEL_237;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  PopSetPowerActionState(3);
  *(_QWORD *)&qword_140C3D0F8 = qword_140C3CD70;
  PopExecutePowerAction(a1 + 30, 0, a1 + 3, a1[1], 1u);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios((int *)a1 + 62);
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *a1 == 6 )
    LODWORD(qword_140C3D0C4) = 6;
  v15 = *a1;
  if ( *a1 - 4 <= 2 )
  {
    PoPowerDownActionInProgress = 1;
    if ( v15 == 5 )
      PoPowerResetActionInProgress = 1;
    if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  }
  v16 = *a1;
  v17 = (unsigned __int8 *)(a1 + 22);
  *((_BYTE *)a1 + 88) = 0;
  v18 = (int *)(a1 + 7);
  a1[7] = 0;
  if ( (unsigned int)(v16 - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
  *((_BYTE *)a1 + 112) = 0;
LABEL_42:
  a1[26] = -1073741536;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)a1 + 64) )
        {
          PopAcquirePolicyLock();
          *((_BYTE *)a1 + 64) = 1;
        }
        if ( !(_DWORD)qword_140C3D0C4 )
        {
          *v1 = 6;
          a1[26] = 0;
          goto LABEL_80;
        }
        *((_BYTE *)a1 + 144) = PopAction;
        LOBYTE(PopAction) = 0;
        v19 = a1[26];
        if ( v19 == -1073741536 )
        {
          if ( (a1[36] & 2) != 0 && dword_140C3D0CC >= 0 && (dword_140C3D0CC & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            *v1 = 8;
            goto LABEL_80;
          }
          PopActionRetrieveInitialState((_DWORD *)&qword_140C3D0C4 + 1, a1 + 7, &dword_140C3D0E0, (_BYTE *)a1 + 88);
          if ( (unsigned int)(qword_140C3D0C4 - 4) <= 2 )
          {
            byte_140C3D0C2 = 1;
            dword_140C3D0CC = a1[2];
          }
          a1[26] = 0;
        }
        else if ( v19 < 0 )
        {
          goto LABEL_80;
        }
        PopReleasePolicyLock();
        *((_BYTE *)a1 + 64) = 0;
        a1[92] = 1;
        a1[93] = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 92, a1 + 93);
        v20 = a1 + 93;
        if ( (dword_140C3D0CC & 0x40000000) != 0 )
        {
          a1[92] = 0;
          *v20 = 0;
        }
        if ( !byte_140C3D1A6 && !byte_140C3D194 && !byte_140C3D19B )
          *v20 = 0;
        PopInitializePowerPolicySimulate();
        dword_140C3D0E4 = dword_140C3D0E0;
        v21 = ((unsigned int)dword_140C3D0CC >> 27) & 2;
        a1[27] = v21;
        PopAdvanceSystemPowerState(&dword_140C3D0E4, v21, SHIDWORD(qword_140C3D0C4), *v18);
        if ( (a1[2] & 8) != 0 )
        {
          byte_140C3CE00 = 1;
          *((_BYTE *)a1 + 36) = 0;
          dword_140C3D0E8 = 5;
          a1[11] = 6;
          v22 = dword_140C3D0E0;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            a1[11] = dword_140C3D0E0;
            v23 = 6;
            dword_140C3D0E8 = 5;
            *((_BYTE *)a1 + 36) = 1;
            a1[17] = 6;
            goto LABEL_66;
          }
          dword_140C3D0E8 = dword_140C3D0E0;
          a1[11] = dword_140C3D0E0;
          v22 = dword_140C3D0E0;
          *((_BYTE *)a1 + 36) = 0;
        }
        v23 = PopPowerStateHandlerLookup[v22];
        a1[17] = v23;
        if ( v23 > 6 )
          goto LABEL_111;
LABEL_66:
        if ( !qword_140C3D968[3 * (int)v23] )
        {
LABEL_111:
          NextSystemPowerState = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
          *((_BYTE *)a1 + 48) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_80;
          goto LABEL_112;
        }
        if ( (a1[2] & 8) != 0 )
        {
          v24 = 6;
        }
        else
        {
          if ( byte_140C3D0C2 )
          {
            PopSetShutdownMarker();
            PopSaveLidReliabilityState(v25);
            goto LABEL_73;
          }
          v24 = dword_140C3D0E0;
        }
        PopSetSleepMarker(v24);
LABEL_73:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *((_BYTE *)a1 + 64) = 1;
          goto LABEL_42;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C3D0DC = 3;
        PopDiagTraceKernelQueriesAllowed(*v17);
        if ( !*v17 )
          break;
        v30 = PopSetDevicesSystemState(v27, v26, v28, v29);
        a1[26] = v30;
        if ( v30 >= 0 )
        {
          *((_BYTE *)a1 + 112) = 1;
          break;
        }
        if ( v30 == -1073741536 )
          break;
        v31 = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = v31;
        if ( !v31 )
        {
          *v1 = 9;
          goto LABEL_80;
        }
LABEL_112:
        a1[26] = 0;
      }
      if ( (a1[26] & 0x80000000) == 0 )
      {
        PopCheckpointSystemSleep(13LL);
        HiberContext = PopAllocateHiberContext(v1);
        a1[26] = HiberContext;
        if ( HiberContext >= 0 )
          break;
      }
    }
    a1[29] = PopNotifyTelemetryOsState((unsigned int)qword_140C3D0C4, dword_140C3D0E0, dword_140C3D0E8, a1[2], 1);
    PopTransitionCheckpoint(9, 0);
    if ( !byte_140C3D0C2 )
    {
      PopCurrentPowerState((_OWORD *)a1 + 10);
      PopDiagTracePreSleepNotification(
        a1[11],
        dword_140C3D0E8,
        dword_140C3D0D4,
        dword_140C3D0D8,
        a1[29],
        (__int64)(a1 + 40));
      PopCheckpointSystemSleep(16LL);
      PopUmpoSendFlushSleepStudyLoggerNotification();
    }
    PopEsEnterSleepShutdown();
    PopThermalSxEntry();
    PopFanSxEntry();
    if ( !*((_BYTE *)a1 + 24) )
    {
      if ( byte_140C3D0C2 )
      {
        v85 = 1;
        v79 = 5;
        v81 = 1;
        v80 = &v85;
        v82 = 11;
        v83 = 0xFFFFF780000002C4uLL;
        v84 = 4;
        RtlSetSystemBootStatusEx((__int64)&v79, 2u, 0LL);
      }
      *((_BYTE *)a1 + 24) = 1;
    }
    v38 = 5;
    if ( !*((_BYTE *)a1 + 36) )
      v38 = dword_140C3D0E0;
    PopFlushVolumes(v38);
    if ( dword_140C3D0E8 < dword_140C3D0E0 )
      dword_140C3D0E8 = dword_140C3D0E0;
    byte_140C3D0DC = 2;
    if ( byte_140C3D0C2 )
      break;
    v39 = a1[17];
    KeMtrrComparisonFailed = 0;
    inited = PopInitSystemSleeperThread(v39, (struct _KEVENT *)a1 + 11, ProcessId);
    a1[26] = inited;
    if ( inited >= 0 )
    {
      if ( !byte_140C3D170 )
      {
        ExWakeTimersPause();
        byte_140C3D170 = 1;
      }
      *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
      v42 = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)a1 + 28) = 0LL;
      v43 = PopWakeAlarmTimeOverrideAc;
      *((_QWORD *)a1 + 25) = v42;
      if ( v43 || PopWakeAlarmTimeOverrideDc )
      {
        *((_QWORD *)a1 + 28) = -3LL;
      }
      else if ( !*((_DWORD *)PopPolicy + 22)
             || dword_140C3D0E0 == 5
             || !PopIsDozeSupported(&PopCapabilities)
             || (dword_140C3D0CC & 0x40000000) != 0 )
      {
        if ( byte_140C3DA34 && dword_140C3D0E0 == 5 && !byte_140C3CE00 && qword_140C3CD28 && dword_140C3D0D4 == 11 )
        {
          v47 = qword_140C3CD28 - v42;
          *((_QWORD *)a1 + 44) = qword_140C3CD28 - v42;
          v48 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
          *((_QWORD *)a1 + 28) = -2LL;
          v49 = v48 + v47;
          v50 = *((_QWORD *)a1 + 24);
          *((_QWORD *)a1 + 44) = v49;
          *((_QWORD *)a1 + 27) = v49 + v50;
        }
      }
      else
      {
        v45 = *((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 27) = v45;
        v46 = *(unsigned int *)(v44 + 88);
        *((_QWORD *)a1 + 28) = -1LL;
        *((_QWORD *)a1 + 27) = v45 + 10000000 * v46;
        if ( !qword_140C3D180 )
          qword_140C3D180 = v45;
      }
      v51 = &qword_140C3D128;
      memset(&qword_140C3D128, 0, 0x48uLL);
      dword_140C3D120 = 3;
      if ( *((_QWORD *)a1 + 28) == -3LL )
      {
        qword_140C3D128 = v43;
        qword_140C3D138[0] = -3LL;
        qword_140C3D150 = *((_QWORD *)a1 + 28);
        qword_140C3D140 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140C3CE00 && dword_140C3D0D4 != 14 )
      {
        v52 = a1 + 92;
        v53 = a1 + 93;
        if ( dword_140C3D0E0 == 5 && *v52 != 1 && *v53 != 1 )
        {
          PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, a1 + 58, v3);
          if ( a1[58] || *v3 )
          {
            v52 = a1 + 92;
            a1[92] = 0;
            v53 = a1 + 93;
            a1[93] = 0;
          }
          else
          {
            v53 = a1 + 93;
            v52 = a1 + 92;
          }
        }
        if ( *((_QWORD *)a1 + 27) )
        {
          if ( *((_QWORD *)a1 + 28) == -2LL )
          {
            if ( *v52 )
            {
              qword_140C3D128 = *((_QWORD *)a1 + 27);
              qword_140C3D138[0] = *((_QWORD *)a1 + 28);
            }
            if ( *v53 )
            {
              qword_140C3D140 = *((_QWORD *)a1 + 27);
              qword_140C3D150 = *((_QWORD *)a1 + 28);
            }
          }
          else
          {
            do
            {
              *v51 = *((_QWORD *)a1 + 27);
              v51 += 3;
            }
            while ( (__int64)v51 < (__int64)&unk_140C3D158 );
            v54 = qword_140C3D138;
            do
            {
              *v54 = *((_QWORD *)a1 + 28);
              v54 += 3;
            }
            while ( (__int64)v54 < (__int64)&qword_140C3D168 );
          }
        }
        v55 = qword_140C3D178;
        *((_QWORD *)a1 + 10) = qword_140C3D178;
        v56 = v55;
        if ( v55 )
        {
          v57 = *((_QWORD *)a1 + 24) + 20000000LL;
          if ( v55 < v57 )
          {
            *((_QWORD *)a1 + 10) = v57;
            v56 = v57;
          }
        }
        if ( *v52 )
        {
          LOBYTE(v52) = *v52 == 2 && PopSimulate >= 0;
          *((_BYTE *)a1 + 209) = (_BYTE)v52;
          v58 = (__int64 *)(a1 + 14);
          v59 = (__int64 *)(a1 + 60);
          NextWakeTime = ExGetNextWakeTime(v56 + 1, *((_QWORD *)a1 + 27), (_DWORD)v52, (int)a1 + 56, (__int64)(a1 + 60));
          *((_BYTE *)a1 + 376) = NextWakeTime;
          if ( NextWakeTime )
          {
            qword_140C3D128 = *v58;
            qword_140C3D138[0] = *v59;
          }
        }
        else
        {
          v58 = (__int64 *)(a1 + 14);
          v59 = (__int64 *)(a1 + 60);
        }
        if ( *v53 )
        {
          if ( *v53 != 2 || (LOBYTE(v52) = 1, PopSimulate < 0) )
            LOBYTE(v52) = 0;
          *((_BYTE *)a1 + 209) = (_BYTE)v52;
          v61 = ExGetNextWakeTime(
                  (unsigned int)*((_QWORD *)a1 + 10) + 1,
                  *((_QWORD *)a1 + 27),
                  (_DWORD)v52,
                  (_DWORD)v58,
                  (__int64)v59);
          *((_BYTE *)a1 + 376) = v61;
          if ( v61 )
          {
            qword_140C3D140 = *v58;
            qword_140C3D150 = *v59;
          }
        }
      }
      qword_140C3D130[0] = qword_140C3D128;
      if ( qword_140C3D128 && qword_140C3D128 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
        qword_140C3D130[0] = *((_QWORD *)a1 + 24) + a1[95];
      qword_140C3D148 = qword_140C3D140;
      if ( qword_140C3D140 && qword_140C3D140 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
        qword_140C3D148 = *((_QWORD *)a1 + 24) + a1[95];
      a1[90] = PopTransitionGetWakeTimerType(qword_140C3D138[0]);
      a1[91] = PopTransitionGetWakeTimerType(qword_140C3D150);
      qword_140C3D2D0 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLock(1u);
      ExUpdateSystemTimeFromCmos(1, 1u);
      ExReleaseTimeRefreshLock();
      ((void (__fastcall *)(__int64, __int64))off_140C019D0)(qword_140C3D130[0], qword_140C3D148);
      PopBootStatCheckpointAvailable = 0;
      PpmCheckPausePpmEngineForSx();
      PsLookupProcessByProcessId(ProcessId[0], &Process);
      PsLookupThreadByThreadId(ProcessId[1], &Thread);
      PopSetDevicesSystemState(v63, v62, v64, v65);
      *((_BYTE *)a1 + 112) = 1;
      PopNewWakeInfo();
      v66 = Thread;
      v67 = Process;
      *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
      a1[38] = dword_140C3D86C;
      v68 = PoPushPowerStateTransitionRecordWithCallback(v67, v66, 0LL, 0LL);
      KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
      KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
      if ( v68 >= 0 )
        PoDelistPowerStateTransitionBlocker();
      qword_140C3CE90 = 0LL;
      a1[26] = a1[85];
      PopSetPowerActionWatchdogState(2u);
      CurrentThread = KeGetCurrentThread();
      v70 = dword_140C3D0E0;
      if ( PoResumeFromHibernate )
        v70 = dword_140C3D0E8;
      dword_140C3D0EC = v70;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (a1[2] & 8) != 0 )
      {
        a1[11] = 6;
      }
      else
      {
        a1[11] = dword_140C3D0E0;
        v5 = dword_140C3D0E0;
      }
      v71 = dword_140C3D0EC;
      v76 = a1[91];
      v72 = a1[90];
      a1[10] = dword_140C3D0EC;
      PopDiagTracePostSleepNotification(v5, dword_140C3D0E8, v71, qword_140C3D130[0], qword_140C3D148, v72, v76);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      if ( (a1[26] & 0x80000000) != 0 && dword_140C3D0E0 == 5 )
      {
        DestinationString = 0LL;
        StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
        RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus(a1[26]);
      }
LABEL_80:
      if ( byte_140C3CE00 )
      {
        qword_140C3D4C0 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_140C3CDE4 = PopQpcTimeInMs(&qword_140C3D4B8, &qword_140C3D4C0);
      }
      if ( (a1[26] & 0x80000000) == 0 )
      {
        qword_140C3D110 = *((_QWORD *)a1 + 43);
        ExUpdateSystemTimeFromCmos(1, 1u);
        LOBYTE(v32) = 1;
        if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C01D58[0])(v32) )
          *((_BYTE *)a1 + 208) = 1;
        qword_140C3D2E8 = KeQueryPerformanceCounter(0LL).QuadPart;
        PfPowerActionNotify(2, 0, 0);
        qword_140C3D108 = MEMORY[0xFFFFF78000000008];
        PopDiagComputeEarlyHiberStats();
        if ( a1[10] == 4 )
          PopDiagTraceFirmwareS3Stats();
      }
      byte_140C3D0DD = 1;
      PoPowerDownActionInProgress = 0;
      PoPowerResetActionInProgress = 0;
      PsIumResumeAfterHibernate();
      if ( *((_BYTE *)a1 + 112) )
      {
        PfPowerActionNotify(3, 0, 0);
        PopSetDevicesSystemState(v34, v33, v35, v36);
        PfPowerActionNotify(3, 1, 0);
      }
      if ( (a1[26] & 0x80000000) == 0 )
        WheaResumedFromHibernate();
      PpmCheckResumePpmEngineFromSx();
      PopCurrentPowerStatePrecise((_OWORD *)a1 + 10, (__int64)&v88);
      if ( *((_BYTE *)a1 + 208) )
        ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
      if ( PopIsDetailedSleepReliabilityDiagEnabled() )
        PopBootStatCheckpointAvailable = 1;
      else
        RtlBootStatusDisableFlushing(1);
      PopCheckpointSystemSleep(56LL);
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C019D0)(0LL, 0LL);
      a1[29] = PopNotifyTelemetryOsState((unsigned int)qword_140C3D0C4, dword_140C3D0E0, dword_140C3D0E8, a1[2], 0);
      PopCancelIgnoreBatteryStatusChange();
      PopExecuteOnTargetProcessors(
        (__int64)KeActiveProcessors,
        (__int64)PpmStartIllegalProcessorThrottleLogging,
        0LL,
        0LL);
      if ( *((_BYTE *)a1 + 64) )
      {
        PopReleasePolicyLock();
        *((_BYTE *)a1 + 64) = 0;
      }
      if ( *((_BYTE *)a1 + 112) )
        PopProcessDeviceWakeSource();
      PoClearBroadcast();
      *(_QWORD *)&qword_140C3D0F8 = 0LL;
      PopFanSxExit();
      PopEsExitSleep();
      a1[39] = dword_140C3D86C;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
      if ( (a1[26] & 0x80000000) == 0 )
      {
        PopCurrentPowerState((_OWORD *)a1 + 10);
        SshSessionManagerTracePostSleepNotification(qword_140C3D130[0], qword_140C3D148, a1[90], a1[91], a1[43], a1[42]);
      }
      if ( *((_BYTE *)a1 + 112) )
        PopHandleWakeSources();
      if ( !*((_BYTE *)a1 + 64) )
      {
        PopAcquirePolicyLock();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( (a1[26] & 0x80000000) != 0 )
        goto LABEL_224;
      PopInitSIdle(1u);
      PopPowerAggregatorNotifySystemWake(a1[10]);
      LOBYTE(PopAction) = 0;
      if ( (unsigned __int64)dword_140C3D120 >= 3 )
      {
        if ( !PopIsMostRecentWakeAttended() )
        {
          PopFullWake = 0;
          PopPendingUserPresenceDuringSystemSleep = 0;
          PopPendingUserPresenceMonitorOnReason = 0;
        }
        goto LABEL_224;
      }
      qword_140C3D178 = qword_140C3D130[3 * dword_140C3D120];
      v73 = qword_140C3D138[3 * dword_140C3D120];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v73 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[92], a1[93], (_BYTE *)a1 + 160) )
            qword_140C3D0C4 = *(_QWORD *)a1;
          else
            qword_140C3D0C4 = 0x500000002LL;
          LOBYTE(PopAction) = PopAction | 2;
          break;
        case -2LL:
          if ( !qword_140C3D118 )
            qword_140C3D118 = qword_140C3D108;
          goto LABEL_224;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          goto LABEL_224;
        default:
          v74 = a1 + 93;
          if ( dword_140C3D86C != 1 )
          {
            if ( !*v74 && a1[38] == a1[39] )
              PopCheckPowerSourceAfterRtcWakeSet();
            goto LABEL_224;
          }
          if ( *v74 )
          {
LABEL_224:
            if ( byte_140C3D170 && *((_BYTE *)a1 + 256) )
            {
              ExWakeTimersResume();
              byte_140C3D170 = 0;
              qword_140C3D178 = 0LL;
            }
            if ( PoResumeFromHibernate )
              PopBootLoaderTraceProcess();
            byte_140C3CE00 = 0;
            PopResetActionDefaults();
            PopSetPowerActionState(2);
            PopReleasePolicyLock();
            if ( PopPendingUserPresenceDuringSystemSleep )
              PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
            ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
            PopCheckForWork();
            if ( (a1[26] & 0x80000000) == 0 )
              PpmPerfReApplyStates();
            dword_140C3D0D4 = 16;
            qword_140C3D450 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450;
            v75 = (void *)*((_QWORD *)a1 + 30);
            if ( v75 )
            {
              ExDeleteWakeTimerInfo(v75);
              *((_QWORD *)a1 + 30) = 0LL;
            }
            PopTransitionCritialResumeThread = 0LL;
            goto LABEL_237;
          }
          qword_140C3D0C4 = *(_QWORD *)a1;
          LOBYTE(PopAction) = 2;
          break;
      }
      *((_BYTE *)a1 + 256) = 0;
      goto LABEL_224;
    }
    *v1 = 20;
  }
  PopFxPrepareDevicesForShutdown();
  IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140C3D0F8 + 48LL));
  if ( dword_140C3D0D4 == 2 )
    PopCriticalShutdownInProgress = 1;
  PopTransitionCheckpoint(8, 2);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
    PopGracefulShutdown();
  PopShutdownWorkItem.Parameter = 0LL;
  PopShutdownWorkItem.List.Flink = 0LL;
  PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
  ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
  KeSuspendThread((__int64)KeGetCurrentThread());
  return 3221226219LL;
}
