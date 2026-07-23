/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140AA8F60
 * Callers:
 *     NtSetSystemPowerState @ 0x140AA66C0 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFDAC (PopExecuteOnTargetProcessors.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KeSuspendThread @ 0x14030A0A8 (KeSuspendThread.c)
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032CE48 (PopCheckForWork.c)
 *     StringCchPrintfW @ 0x140366488 (StringCchPrintfW.c)
 *     RtlBootStatusDisableFlushing @ 0x14036F378 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x14041E830 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140557420 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x140583ABC (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14058B8CC (PopFxPrepareDevicesForShutdown.c)
 *     PoSetUserPresent @ 0x14058E2B0 (PoSetUserPresent.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopActionRetrieveInitialState @ 0x14058F840 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x14058F9B4 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F9E8 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x140590138 (PopThermalSxEntry.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590820 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059088C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596878 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1405968BC (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x140598FC4 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059919C (PopIgnoreBatteryStatusChange.c)
 *     PopFanSxEntry @ 0x140599B0C (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x140599B9C (PopFanSxExit.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140599C3C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PsIumResumeAfterHibernate @ 0x1405A5E54 (PsIumResumeAfterHibernate.c)
 *     ExDeleteWakeTimerInfo @ 0x14060BAE4 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersPause @ 0x14060BF98 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14060C120 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x140610874 (WheaResumedFromHibernate.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5960 (MmLockPagableSectionByHandle.c)
 *     PsLookupProcessByProcessId @ 0x1406FA580 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FB120 (PsLookupThreadByThreadId.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExReleaseTimeRefreshLock @ 0x14075FB20 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FB44 (ExAcquireTimeRefreshLock.c)
 *     PopCurrentPowerState @ 0x1407A6F38 (PopCurrentPowerState.c)
 *     PopFilterCapabilities @ 0x1407A8884 (PopFilterCapabilities.c)
 *     PopInitSIdle @ 0x140824C14 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140861264 (PopInitializePowerPolicySimulate.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14086465C (PopCancelIgnoreBatteryStatusChange.c)
 *     PopResetActionDefaults @ 0x140865298 (PopResetActionDefaults.c)
 *     PopCurrentPowerStatePrecise @ 0x140873A08 (PopCurrentPowerStatePrecise.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BBB0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopFastS4Check @ 0x140980AF4 (PopFastS4Check.c)
 *     PopFindNextSystemPowerState @ 0x140980B30 (PopFindNextSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980D04 (PopIsDozeSupported.c)
 *     PopSetShutdownMarker @ 0x14098168C (PopSetShutdownMarker.c)
 *     PopSetSleepMarker @ 0x1409816A0 (PopSetSleepMarker.c)
 *     PopAdvanceSystemPowerState @ 0x1409842CC (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x140986BD4 (PpmPerfReApplyStates.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceProcess @ 0x1409885E0 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x140989690 (PopZeroHiberFile.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopSaveLidReliabilityState @ 0x14098AD68 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x14098B814 (PopDeferDoze.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BC7C (PopNotifyCallbacksPreSleep.c)
 *     PopQueryPowerSettingUlong @ 0x14098BCCC (PopQueryPowerSettingUlong.c)
 *     PoClearBroadcast @ 0x14098BD8C (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x14098BDE4 (PoInitializeBroadcast.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14098FF40 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x140991548 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x140991CA4 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopNotifyTelemetryOsState @ 0x140992804 (PopNotifyTelemetryOsState.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140994010 (PopPowerAggregatorNotifySystemWake.c)
 *     PopEnforceResiliencyScenarios @ 0x140994438 (PopEnforceResiliencyScenarios.c)
 *     PopTransitionGetWakeTimerType @ 0x1409947A0 (PopTransitionGetWakeTimerType.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140997130 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x1409984F8 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x14099854C (PopEsExitSleep.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x1409A1BFC (SshSessionManagerTracePostSleepNotification.c)
 *     PsTerminateServerSilo @ 0x1409ACAA0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BDEB0 (RtlSetSystemBootStatusEx.c)
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A11B78 (CmSetLazyFlushState.c)
 *     MmZeroPageFileAtShutdown @ 0x140A2B7D4 (MmZeroPageFileAtShutdown.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E5C4 (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0CCC (PopHandleWakeSources.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA0EEC (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140AA0F18 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA0FF4 (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumes @ 0x140AA6358 (PopFlushVolumes.c)
 *     PopSetDevicesSystemState @ 0x140AA72B0 (PopSetDevicesSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA770C (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7A20 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140AA7CD4 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140AA7D64 (PopDiagTraceMtrrError.c)
 *     PopDiagTracePostSleepNotification @ 0x140AA7DF4 (PopDiagTracePostSleepNotification.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA8ED0 (PopAcquireTransitionLockAfterSleep.c)
 *     PopCheckpointSystemSleep @ 0x140AAA358 (PopCheckpointSystemSleep.c)
 *     ExGetNextWakeTime @ 0x140AAAD5C (ExGetNextWakeTime.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(__int64 a1)
{
  int *v1; // r15
  _DWORD *v3; // r13
  unsigned int v4; // ecx
  int v5; // r12d
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  POWER_ACTION v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  POWER_ACTION v15; // ecx
  POWER_ACTION v16; // eax
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
  int v72; // eax
  __int64 v73; // rax
  _DWORD *v74; // rax
  void *v75; // rcx
  LOGICAL CheckStamp; // [rsp+30h] [rbp-49h]
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

  v1 = (int *)(a1 + 148);
  *(_BYTE *)(a1 + 24) = 0;
  v3 = (_DWORD *)(a1 + 236);
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 156) = 1;
  *(_BYTE *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 368) = 1LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_BYTE *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  Process = 0LL;
  Thread = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  v88 = 0LL;
  v4 = (PopSimulate & 0x10000) != 0 ? 0xEE1E5D00 : 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 380) = v4 + 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - 1) > 5
    || (v5 = 6, (unsigned int)(*(_DWORD *)a1 - 1) > 6)
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0 )
  {
    *v1 = 1;
    *(_DWORD *)(a1 + 104) = -1073741811;
    goto LABEL_237;
  }
  if ( *(int *)a1 < 4 && dword_140C3CD94 >= 16 )
  {
    *(_DWORD *)(a1 + 104) = -1073741811;
    *v1 = 2;
LABEL_241:
    if ( *v1 )
      PopDiagTraceStateTransitionFailurePoint(*(_DWORD *)(a1 + 104), *v1);
    return *(_DWORD *)(a1 + 104);
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_BYTE *)(a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*(POWER_ACTION *)a1, *(SYSTEM_POWER_STATE *)(a1 + 4), *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 104) = -1073741727;
    *v1 = 2;
    goto LABEL_241;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v9 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 96) = CurrentServerSilo;
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
      if ( v9 != PowerActionShutdownReset )
        v10 = -1073741077;
      *(_DWORD *)(a1 + 32) = v10;
      PsTerminateServerSilo(*(_QWORD *)(a1 + 96));
      v11 = 0;
    }
    *(_DWORD *)(a1 + 104) = v11;
    goto LABEL_237;
  }
  if ( v9 == PowerActionSleep )
    PnpSurpriseFailUnsafeDmaDevices();
  if ( *(_DWORD *)a1 == 4 )
    PopReadShutdownPolicy();
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 8);
  *(_OWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v12 = dword_140C3CD94;
  v13 = dword_140C3CD94 < 16;
  *(_DWORD *)(a1 + 124) = 128;
  if ( !v13 )
    v12 = 5;
  *(_DWORD *)(a1 + 120) = v12;
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
  *(_DWORD *)(a1 + 104) = v14;
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
  PopCurrentPowerStatePrecise((_OWORD *)(a1 + 160), (__int64)&v88);
  PopAcquirePolicyLock();
  *(_BYTE *)(a1 + 64) = 1;
  PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C3CE48);
  if ( byte_140C3CD81 )
  {
    if ( byte_140C3CD81 != 2 )
    {
      PopReleasePolicyLock();
      PoClearBroadcast();
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      *v1 = 6;
      *(_DWORD *)(a1 + 104) = -1073741791;
      goto LABEL_237;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  PopSetPowerActionState(3);
  *(_QWORD *)&qword_140C3CDB8 = qword_140C3CD10;
  PopExecutePowerAction((unsigned int *)(a1 + 120), 0, (_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 4), 1u);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios((int *)(a1 + 248));
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *(_DWORD *)a1 == 6 )
    LODWORD(qword_140C3CD84) = 6;
  v15 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 4) <= 2 )
  {
    PoPowerDownActionInProgress = 1;
    if ( v15 == PowerActionShutdownReset )
      PoPowerResetActionInProgress = 1;
    if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  }
  v16 = *(_DWORD *)a1;
  v17 = (unsigned __int8 *)(a1 + 88);
  *(_BYTE *)(a1 + 88) = 0;
  v18 = (int *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = 0;
  if ( (unsigned int)(v16 - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
  *(_BYTE *)(a1 + 112) = 0;
LABEL_42:
  *(_DWORD *)(a1 + 104) = -1073741536;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(a1 + 64) )
        {
          PopAcquirePolicyLock();
          *(_BYTE *)(a1 + 64) = 1;
        }
        if ( !(_DWORD)qword_140C3CD84 )
        {
          *v1 = 6;
          *(_DWORD *)(a1 + 104) = 0;
          goto LABEL_80;
        }
        *(_BYTE *)(a1 + 144) = PopAction;
        LOBYTE(PopAction) = 0;
        v19 = *(_DWORD *)(a1 + 104);
        if ( v19 == -1073741536 )
        {
          if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && dword_140C3CD8C >= 0 && (dword_140C3CD8C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            *v1 = 8;
            goto LABEL_80;
          }
          PopActionRetrieveInitialState(
            (_DWORD *)&qword_140C3CD84 + 1,
            (_DWORD *)(a1 + 28),
            &dword_140C3CDA0,
            (_BYTE *)(a1 + 88));
          if ( (unsigned int)(qword_140C3CD84 - 4) <= 2 )
          {
            byte_140C3CD82 = 1;
            dword_140C3CD8C = *(_DWORD *)(a1 + 8);
          }
          *(_DWORD *)(a1 + 104) = 0;
        }
        else if ( v19 < 0 )
        {
          goto LABEL_80;
        }
        PopReleasePolicyLock();
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 368) = 1;
        *(_DWORD *)(a1 + 372) = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, (_DWORD *)(a1 + 368), (_DWORD *)(a1 + 372));
        v20 = (_DWORD *)(a1 + 372);
        if ( (dword_140C3CD8C & 0x40000000) != 0 )
        {
          *(_DWORD *)(a1 + 368) = 0;
          *v20 = 0;
        }
        if ( !byte_140C3CE66 && !byte_140C3CE54 && !byte_140C3CE5B )
          *v20 = 0;
        PopInitializePowerPolicySimulate();
        dword_140C3CDA4 = dword_140C3CDA0;
        v21 = ((unsigned int)dword_140C3CD8C >> 27) & 2;
        *(_DWORD *)(a1 + 108) = v21;
        PopAdvanceSystemPowerState(&dword_140C3CDA4, v21, SHIDWORD(qword_140C3CD84), *v18);
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          byte_140C3CFA0 = 1;
          *(_BYTE *)(a1 + 36) = 0;
          dword_140C3CDA8 = 5;
          *(_DWORD *)(a1 + 44) = 6;
          v22 = dword_140C3CDA0;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            *(_DWORD *)(a1 + 44) = dword_140C3CDA0;
            v23 = 6;
            dword_140C3CDA8 = 5;
            *(_BYTE *)(a1 + 36) = 1;
            *(_DWORD *)(a1 + 68) = 6;
            goto LABEL_66;
          }
          dword_140C3CDA8 = dword_140C3CDA0;
          *(_DWORD *)(a1 + 44) = dword_140C3CDA0;
          v22 = dword_140C3CDA0;
          *(_BYTE *)(a1 + 36) = 0;
        }
        v23 = PopPowerStateHandlerLookup[v22];
        *(_DWORD *)(a1 + 68) = v23;
        if ( v23 > 6 )
          goto LABEL_111;
LABEL_66:
        if ( !qword_140C3D7C8[3 * (int)v23] )
        {
LABEL_111:
          NextSystemPowerState = PopFindNextSystemPowerState(*v18, *(_BYTE *)(a1 + 36), (_BYTE *)(a1 + 88));
          *(_BYTE *)(a1 + 48) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_80;
          goto LABEL_112;
        }
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          v24 = 6;
        }
        else
        {
          if ( byte_140C3CD82 )
          {
            PopSetShutdownMarker();
            PopSaveLidReliabilityState(v25);
            goto LABEL_73;
          }
          v24 = dword_140C3CDA0;
        }
        PopSetSleepMarker(v24);
LABEL_73:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *(_BYTE *)(a1 + 64) = 1;
          goto LABEL_42;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C3CD9C = 3;
        PopDiagTraceKernelQueriesAllowed(*v17);
        if ( !*v17 )
          break;
        v30 = PopSetDevicesSystemState(v27, v26, v28, v29);
        *(_DWORD *)(a1 + 104) = v30;
        if ( v30 >= 0 )
        {
          *(_BYTE *)(a1 + 112) = 1;
          break;
        }
        if ( v30 == -1073741536 )
          break;
        v31 = PopFindNextSystemPowerState(*v18, *(_BYTE *)(a1 + 36), (_BYTE *)(a1 + 88));
        *(_BYTE *)(a1 + 48) = v31;
        if ( !v31 )
        {
          *v1 = 9;
          goto LABEL_80;
        }
LABEL_112:
        *(_DWORD *)(a1 + 104) = 0;
      }
      if ( *(int *)(a1 + 104) >= 0 )
      {
        PopCheckpointSystemSleep(13LL);
        HiberContext = PopAllocateHiberContext(v1);
        *(_DWORD *)(a1 + 104) = HiberContext;
        if ( HiberContext >= 0 )
          break;
      }
    }
    *(_DWORD *)(a1 + 116) = PopNotifyTelemetryOsState(
                              (unsigned int)qword_140C3CD84,
                              dword_140C3CDA0,
                              dword_140C3CDA8,
                              *(unsigned int *)(a1 + 8),
                              1);
    PopTransitionCheckpoint(9, 0);
    if ( !byte_140C3CD82 )
    {
      PopCurrentPowerState((_OWORD *)(a1 + 160));
      PopDiagTracePreSleepNotification(
        *(_DWORD *)(a1 + 44),
        dword_140C3CDA8,
        dword_140C3CD94,
        dword_140C3CD98,
        *(_DWORD *)(a1 + 116),
        a1 + 160);
      PopCheckpointSystemSleep(16LL);
      PopUmpoSendFlushSleepStudyLoggerNotification();
    }
    PopEsEnterSleepShutdown();
    PopThermalSxEntry();
    PopFanSxEntry();
    if ( !*(_BYTE *)(a1 + 24) )
    {
      if ( byte_140C3CD82 )
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
      *(_BYTE *)(a1 + 24) = 1;
    }
    v38 = 5;
    if ( !*(_BYTE *)(a1 + 36) )
      v38 = dword_140C3CDA0;
    PopFlushVolumes(v38);
    if ( dword_140C3CDA8 < dword_140C3CDA0 )
      dword_140C3CDA8 = dword_140C3CDA0;
    byte_140C3CD9C = 2;
    if ( byte_140C3CD82 )
      break;
    v39 = *(_DWORD *)(a1 + 68);
    KeMtrrComparisonFailed = 0;
    inited = PopInitSystemSleeperThread(v39, (struct _KEVENT *)(a1 + 264), ProcessId);
    *(_DWORD *)(a1 + 104) = inited;
    if ( inited >= 0 )
    {
      if ( !byte_140C3CE30 )
      {
        ExWakeTimersPause();
        byte_140C3CE30 = 1;
      }
      *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
      v42 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(a1 + 224) = 0LL;
      v43 = PopWakeAlarmTimeOverrideAc;
      *(_QWORD *)(a1 + 200) = v42;
      if ( v43 || PopWakeAlarmTimeOverrideDc )
      {
        *(_QWORD *)(a1 + 224) = -3LL;
      }
      else if ( !*((_DWORD *)PopPolicy + 22)
             || dword_140C3CDA0 == 5
             || !PopIsDozeSupported(&PopCapabilities)
             || (dword_140C3CD8C & 0x40000000) != 0 )
      {
        if ( byte_140C3DA14 && dword_140C3CDA0 == 5 && !byte_140C3CFA0 && qword_140C3CCC8 && dword_140C3CD94 == 11 )
        {
          v47 = qword_140C3CCC8 - v42;
          *(_QWORD *)(a1 + 352) = qword_140C3CCC8 - v42;
          v48 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
          *(_QWORD *)(a1 + 224) = -2LL;
          v49 = v48 + v47;
          v50 = *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 352) = v49;
          *(_QWORD *)(a1 + 216) = v49 + v50;
        }
      }
      else
      {
        v45 = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 216) = v45;
        v46 = *(unsigned int *)(v44 + 88);
        *(_QWORD *)(a1 + 224) = -1LL;
        *(_QWORD *)(a1 + 216) = v45 + 10000000 * v46;
        if ( !qword_140C3CE40 )
          qword_140C3CE40 = v45;
      }
      v51 = &qword_140C3CDE8;
      memset(&qword_140C3CDE8, 0, 0x48uLL);
      dword_140C3CDE0 = 3;
      if ( *(_QWORD *)(a1 + 224) == -3LL )
      {
        qword_140C3CDE8 = v43;
        qword_140C3CDF8[0] = -3LL;
        qword_140C3CE10 = *(_QWORD *)(a1 + 224);
        qword_140C3CE00 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140C3CFA0 && dword_140C3CD94 != 14 )
      {
        v52 = (_DWORD *)(a1 + 368);
        v53 = (_DWORD *)(a1 + 372);
        if ( dword_140C3CDA0 == 5 && *v52 != 1 && *v53 != 1 )
        {
          PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, (_DWORD *)(a1 + 232), v3);
          if ( *(_DWORD *)(a1 + 232) || *v3 )
          {
            v52 = (_DWORD *)(a1 + 368);
            *(_DWORD *)(a1 + 368) = 0;
            v53 = (_DWORD *)(a1 + 372);
            *(_DWORD *)(a1 + 372) = 0;
          }
          else
          {
            v53 = (_DWORD *)(a1 + 372);
            v52 = (_DWORD *)(a1 + 368);
          }
        }
        if ( *(_QWORD *)(a1 + 216) )
        {
          if ( *(_QWORD *)(a1 + 224) == -2LL )
          {
            if ( *v52 )
            {
              qword_140C3CDE8 = *(_QWORD *)(a1 + 216);
              qword_140C3CDF8[0] = *(_QWORD *)(a1 + 224);
            }
            if ( *v53 )
            {
              qword_140C3CE00 = *(_QWORD *)(a1 + 216);
              qword_140C3CE10 = *(_QWORD *)(a1 + 224);
            }
          }
          else
          {
            do
            {
              *v51 = *(_QWORD *)(a1 + 216);
              v51 += 3;
            }
            while ( (__int64)v51 < (__int64)&unk_140C3CE18 );
            v54 = qword_140C3CDF8;
            do
            {
              *v54 = *(_QWORD *)(a1 + 224);
              v54 += 3;
            }
            while ( (__int64)v54 < (__int64)&qword_140C3CE28 );
          }
        }
        v55 = qword_140C3CE38;
        *(_QWORD *)(a1 + 80) = qword_140C3CE38;
        v56 = v55;
        if ( v55 )
        {
          v57 = *(_QWORD *)(a1 + 192) + 20000000LL;
          if ( v55 < v57 )
          {
            *(_QWORD *)(a1 + 80) = v57;
            v56 = v57;
          }
        }
        if ( *v52 )
        {
          LOBYTE(v52) = *v52 == 2 && PopSimulate >= 0;
          *(_BYTE *)(a1 + 209) = (_BYTE)v52;
          v58 = (__int64 *)(a1 + 56);
          v59 = (__int64 *)(a1 + 240);
          NextWakeTime = ExGetNextWakeTime(v56 + 1, *(_QWORD *)(a1 + 216), (_DWORD)v52, (int)a1 + 56, a1 + 240);
          *(_BYTE *)(a1 + 376) = NextWakeTime;
          if ( NextWakeTime )
          {
            qword_140C3CDE8 = *v58;
            qword_140C3CDF8[0] = *v59;
          }
        }
        else
        {
          v58 = (__int64 *)(a1 + 56);
          v59 = (__int64 *)(a1 + 240);
        }
        if ( *v53 )
        {
          if ( *v53 != 2 || (LOBYTE(v52) = 1, PopSimulate < 0) )
            LOBYTE(v52) = 0;
          *(_BYTE *)(a1 + 209) = (_BYTE)v52;
          v61 = ExGetNextWakeTime(
                  (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                  *(_QWORD *)(a1 + 216),
                  (_DWORD)v52,
                  (_DWORD)v58,
                  (__int64)v59);
          *(_BYTE *)(a1 + 376) = v61;
          if ( v61 )
          {
            qword_140C3CE00 = *v58;
            qword_140C3CE10 = *v59;
          }
        }
      }
      qword_140C3CDF0[0] = qword_140C3CDE8;
      if ( qword_140C3CDE8 && qword_140C3CDE8 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 380) )
        qword_140C3CDF0[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 380);
      qword_140C3CE08 = qword_140C3CE00;
      if ( qword_140C3CE00 && qword_140C3CE00 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 380) )
        qword_140C3CE08 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 380);
      *(_DWORD *)(a1 + 360) = PopTransitionGetWakeTimerType(qword_140C3CDF8[0]);
      *(_DWORD *)(a1 + 364) = PopTransitionGetWakeTimerType(qword_140C3CE10);
      qword_140C3D290 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLock(1u);
      ExUpdateSystemTimeFromCmos(1, 1u);
      ExReleaseTimeRefreshLock();
      ((void (__fastcall *)(__int64, __int64))off_140C019D0)(qword_140C3CDF0[0], qword_140C3CE08);
      PopBootStatCheckpointAvailable = 0;
      PpmCheckPausePpmEngineForSx();
      PsLookupProcessByProcessId(ProcessId[0], &Process);
      PsLookupThreadByThreadId(ProcessId[1], &Thread);
      PopSetDevicesSystemState(v63, v62, v64, v65);
      *(_BYTE *)(a1 + 112) = 1;
      PopNewWakeInfo();
      v66 = Thread;
      v67 = Process;
      *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)(a1 + 152) = dword_140C3D96C;
      v68 = PoPushPowerStateTransitionRecordWithCallback(v67, v66, 0LL, 0LL);
      KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
      KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
      if ( v68 >= 0 )
        PoDelistPowerStateTransitionBlocker();
      qword_140C3D030 = 0LL;
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
      PopSetPowerActionWatchdogState(2u);
      CurrentThread = KeGetCurrentThread();
      v70 = dword_140C3CDA0;
      if ( PoResumeFromHibernate )
        v70 = dword_140C3CDA8;
      dword_140C3CDAC = v70;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      {
        *(_DWORD *)(a1 + 44) = 6;
      }
      else
      {
        *(_DWORD *)(a1 + 44) = dword_140C3CDA0;
        v5 = dword_140C3CDA0;
      }
      v71 = dword_140C3CDAC;
      CheckStamp = *(_DWORD *)(a1 + 364);
      v72 = *(_DWORD *)(a1 + 360);
      *(_DWORD *)(a1 + 40) = dword_140C3CDAC;
      PopDiagTracePostSleepNotification(v5, dword_140C3CDA8, v71, qword_140C3CDF0[0], qword_140C3CE08, v72, CheckStamp);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      if ( *(int *)(a1 + 104) < 0 && dword_140C3CDA0 == 5 )
      {
        DestinationString = 0LL;
        StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
        RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus(*(_DWORD *)(a1 + 104));
      }
LABEL_80:
      if ( byte_140C3CFA0 )
      {
        qword_140C3D480 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_140C3CF84 = PopQpcTimeInMs(&qword_140C3D478, &qword_140C3D480);
      }
      if ( *(int *)(a1 + 104) >= 0 )
      {
        qword_140C3CDD0 = *(_QWORD *)(a1 + 344);
        ExUpdateSystemTimeFromCmos(1, 1u);
        LOBYTE(v32) = 1;
        if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C01D58[0])(v32) )
          *(_BYTE *)(a1 + 208) = 1;
        qword_140C3D2A8 = KeQueryPerformanceCounter(0LL).QuadPart;
        PfPowerActionNotify(2, 0, 0);
        qword_140C3CDC8 = MEMORY[0xFFFFF78000000008];
        PopDiagComputeEarlyHiberStats();
        if ( *(_DWORD *)(a1 + 40) == 4 )
          PopDiagTraceFirmwareS3Stats();
      }
      byte_140C3CD9D = 1;
      PoPowerDownActionInProgress = 0;
      PoPowerResetActionInProgress = 0;
      PsIumResumeAfterHibernate();
      if ( *(_BYTE *)(a1 + 112) )
      {
        PfPowerActionNotify(3, 0, 0);
        PopSetDevicesSystemState(v34, v33, v35, v36);
        PfPowerActionNotify(3, 1, 0);
      }
      if ( *(int *)(a1 + 104) >= 0 )
        WheaResumedFromHibernate();
      PpmCheckResumePpmEngineFromSx();
      PopCurrentPowerStatePrecise((_OWORD *)(a1 + 160), (__int64)&v88);
      if ( *(_BYTE *)(a1 + 208) )
        ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
      if ( PopIsDetailedSleepReliabilityDiagEnabled() )
        PopBootStatCheckpointAvailable = 1;
      else
        RtlBootStatusDisableFlushing(1);
      PopCheckpointSystemSleep(56LL);
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C019D0)(0LL, 0LL);
      *(_DWORD *)(a1 + 116) = PopNotifyTelemetryOsState(
                                (unsigned int)qword_140C3CD84,
                                dword_140C3CDA0,
                                dword_140C3CDA8,
                                *(unsigned int *)(a1 + 8),
                                0);
      PopCancelIgnoreBatteryStatusChange();
      PopExecuteOnTargetProcessors(
        (__int64)KeActiveProcessors,
        (__int64)PpmStartIllegalProcessorThrottleLogging,
        0LL,
        0LL);
      if ( *(_BYTE *)(a1 + 64) )
      {
        PopReleasePolicyLock();
        *(_BYTE *)(a1 + 64) = 0;
      }
      if ( *(_BYTE *)(a1 + 112) )
        PopProcessDeviceWakeSource();
      PoClearBroadcast();
      *(_QWORD *)&qword_140C3CDB8 = 0LL;
      PopFanSxExit();
      PopEsExitSleep();
      *(_DWORD *)(a1 + 156) = dword_140C3D96C;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
      if ( *(int *)(a1 + 104) >= 0 )
      {
        PopCurrentPowerState((_OWORD *)(a1 + 160));
        SshSessionManagerTracePostSleepNotification(
          qword_140C3CDF0[0],
          qword_140C3CE08,
          *(_DWORD *)(a1 + 360),
          *(_DWORD *)(a1 + 364),
          *(_DWORD *)(a1 + 172),
          *(_DWORD *)(a1 + 168));
      }
      if ( *(_BYTE *)(a1 + 112) )
        PopHandleWakeSources();
      if ( !*(_BYTE *)(a1 + 64) )
      {
        PopAcquirePolicyLock();
        *(_BYTE *)(a1 + 64) = 1;
      }
      if ( *(int *)(a1 + 104) < 0 )
        goto LABEL_224;
      PopInitSIdle(1u);
      PopPowerAggregatorNotifySystemWake(*(_DWORD *)(a1 + 40));
      LOBYTE(PopAction) = 0;
      if ( (unsigned __int64)dword_140C3CDE0 >= 3 )
      {
        if ( !PopIsMostRecentWakeAttended() )
        {
          PopFullWake = 0;
          PopPendingUserPresenceDuringSystemSleep = 0;
          PopPendingUserPresenceMonitorOnReason = 0;
        }
        goto LABEL_224;
      }
      qword_140C3CE38 = qword_140C3CDF0[3 * dword_140C3CDE0];
      v73 = qword_140C3CDF8[3 * dword_140C3CDE0];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v73 )
      {
        case -1LL:
          if ( PopDeferDoze(*(_DWORD *)(a1 + 368), *(_DWORD *)(a1 + 372), (_BYTE *)(a1 + 160)) )
            qword_140C3CD84 = *(_QWORD *)a1;
          else
            qword_140C3CD84 = 0x500000002LL;
          LOBYTE(PopAction) = PopAction | 2;
          break;
        case -2LL:
          if ( !qword_140C3CDD8 )
            qword_140C3CDD8 = qword_140C3CDC8;
          goto LABEL_224;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          goto LABEL_224;
        default:
          v74 = (_DWORD *)(a1 + 372);
          if ( dword_140C3D96C != 1 )
          {
            if ( !*v74 && *(_DWORD *)(a1 + 152) == *(_DWORD *)(a1 + 156) )
              PopCheckPowerSourceAfterRtcWakeSet();
            goto LABEL_224;
          }
          if ( *v74 )
          {
LABEL_224:
            if ( byte_140C3CE30 && *(_BYTE *)(a1 + 256) )
            {
              ExWakeTimersResume();
              byte_140C3CE30 = 0;
              qword_140C3CE38 = 0LL;
            }
            if ( PoResumeFromHibernate )
              PopBootLoaderTraceProcess();
            byte_140C3CFA0 = 0;
            PopResetActionDefaults();
            PopSetPowerActionState(2);
            PopReleasePolicyLock();
            if ( PopPendingUserPresenceDuringSystemSleep )
              PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
            ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
            PopCheckForWork();
            if ( *(int *)(a1 + 104) >= 0 )
              PpmPerfReApplyStates();
            dword_140C3CD94 = 16;
            qword_140C3D410 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C393D0;
            v75 = *(void **)(a1 + 240);
            if ( v75 )
            {
              ExDeleteWakeTimerInfo(v75);
              *(_QWORD *)(a1 + 240) = 0LL;
            }
            PopTransitionCritialResumeThread = 0LL;
            goto LABEL_237;
          }
          qword_140C3CD84 = *(_QWORD *)a1;
          LOBYTE(PopAction) = 2;
          break;
      }
      *(_BYTE *)(a1 + 256) = 0;
      goto LABEL_224;
    }
    *v1 = 20;
  }
  PopFxPrepareDevicesForShutdown();
  IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140C3CDB8 + 48LL));
  if ( dword_140C3CD94 == 2 )
    PopCriticalShutdownInProgress = 1;
  PopTransitionCheckpoint(8, 2);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
    PopGracefulShutdown();
  PopShutdownWorkItem.Parameter = 0LL;
  PopShutdownWorkItem.List.Flink = 0LL;
  PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
  ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
  KeSuspendThread((__int64)KeGetCurrentThread());
  return -1073741077;
}
