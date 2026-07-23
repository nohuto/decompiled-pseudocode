/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140AA91B0
 * Callers:
 *     NtSetSystemPowerState @ 0x140AA6910 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AF8D0 (PsIsHostSilo.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFAEC (PopExecuteOnTargetProcessors.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KeSuspendThread @ 0x140309CE8 (KeSuspendThread.c)
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032C9D8 (PopCheckForWork.c)
 *     StringCchPrintfW @ 0x140365C98 (StringCchPrintfW.c)
 *     RtlBootStatusDisableFlushing @ 0x14036EB88 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x14041DDE0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140556E00 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x14058365C (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14058B46C (PopFxPrepareDevicesForShutdown.c)
 *     PoSetUserPresent @ 0x14058DE50 (PoSetUserPresent.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopActionRetrieveInitialState @ 0x14058F3E0 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x14058F554 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F588 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x14058FCD8 (PopThermalSxEntry.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405903C0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059042C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596418 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14059645C (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x140598B64 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x140598D3C (PopIgnoreBatteryStatusChange.c)
 *     PopFanSxEntry @ 0x1405996AC (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x14059973C (PopFanSxExit.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PsIumResumeAfterHibernate @ 0x1405A5974 (PsIumResumeAfterHibernate.c)
 *     ExDeleteWakeTimerInfo @ 0x14060B604 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersPause @ 0x14060BAB8 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14060BC40 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x140610394 (WheaResumedFromHibernate.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5800 (MmLockPagableSectionByHandle.c)
 *     PsLookupProcessByProcessId @ 0x1406FA420 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAFC0 (PsLookupThreadByThreadId.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ExReleaseTimeRefreshLock @ 0x14075FE40 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopInitSIdle @ 0x140825874 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x1408610F4 (PopInitializePowerPolicySimulate.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x1408647DC (PopCancelIgnoreBatteryStatusChange.c)
 *     PopResetActionDefaults @ 0x140865478 (PopResetActionDefaults.c)
 *     PopCurrentPowerStatePrecise @ 0x140873C98 (PopCurrentPowerStatePrecise.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BA60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopFastS4Check @ 0x1409809A4 (PopFastS4Check.c)
 *     PopFindNextSystemPowerState @ 0x1409809E0 (PopFindNextSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980BB4 (PopIsDozeSupported.c)
 *     PopSetShutdownMarker @ 0x14098153C (PopSetShutdownMarker.c)
 *     PopSetSleepMarker @ 0x140981550 (PopSetSleepMarker.c)
 *     PopAdvanceSystemPowerState @ 0x14098417C (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x140986A84 (PpmPerfReApplyStates.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceProcess @ 0x140988490 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x140989540 (PopZeroHiberFile.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopSaveLidReliabilityState @ 0x14098AC18 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x14098B6C4 (PopDeferDoze.c)
 *     PopInitSystemSleeperThread @ 0x14098B850 (PopInitSystemSleeperThread.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BB2C (PopNotifyCallbacksPreSleep.c)
 *     PopQueryPowerSettingUlong @ 0x14098BB7C (PopQueryPowerSettingUlong.c)
 *     PoClearBroadcast @ 0x14098BC3C (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x14098BC94 (PoInitializeBroadcast.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14098FDF0 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x1409913F8 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x140991B54 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopNotifyTelemetryOsState @ 0x1409926B4 (PopNotifyTelemetryOsState.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140993EC0 (PopPowerAggregatorNotifySystemWake.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PopTransitionGetWakeTimerType @ 0x140994650 (PopTransitionGetWakeTimerType.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140996FE0 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x1409983A8 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x1409983FC (PopEsExitSleep.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x1409A1AAC (SshSessionManagerTracePostSleepNotification.c)
 *     PsTerminateServerSilo @ 0x1409AC950 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BDD60 (RtlSetSystemBootStatusEx.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A11978 (CmSetLazyFlushState.c)
 *     MmZeroPageFileAtShutdown @ 0x140A2B594 (MmZeroPageFileAtShutdown.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E814 (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x140A9FF34 (PfPowerActionNotify.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140AA0F1C (PopHandleWakeSources.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA113C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140AA1168 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA1244 (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA622C (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 *     PopSetDevicesSystemState @ 0x140AA7500 (PopSetDevicesSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA795C (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7C70 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140AA7F24 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140AA7FB4 (PopDiagTraceMtrrError.c)
 *     PopDiagTracePostSleepNotification @ 0x140AA8044 (PopDiagTracePostSleepNotification.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA9120 (PopAcquireTransitionLockAfterSleep.c)
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 *     ExGetNextWakeTime @ 0x140AAAFAC (ExGetNextWakeTime.c)
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
  if ( *(int *)a1 < 4 && dword_140C3CE34 >= 16 )
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
  v12 = dword_140C3CE34;
  v13 = dword_140C3CE34 < 16;
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
  PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C3CEE8);
  if ( byte_140C3CE21 )
  {
    if ( byte_140C3CE21 != 2 )
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
  *(_QWORD *)&qword_140C3CE58 = qword_140C3CDB0;
  PopExecutePowerAction((unsigned int *)(a1 + 120), 0, (_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 4), 1u);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios((int *)(a1 + 248));
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *(_DWORD *)a1 == 6 )
    LODWORD(qword_140C3CE24) = 6;
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
        if ( !(_DWORD)qword_140C3CE24 )
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
          if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && dword_140C3CE2C >= 0 && (dword_140C3CE2C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            *v1 = 8;
            goto LABEL_80;
          }
          PopActionRetrieveInitialState(
            (_DWORD *)&qword_140C3CE24 + 1,
            (_DWORD *)(a1 + 28),
            &dword_140C3CE40,
            (_BYTE *)(a1 + 88));
          if ( (unsigned int)(qword_140C3CE24 - 4) <= 2 )
          {
            byte_140C3CE22 = 1;
            dword_140C3CE2C = *(_DWORD *)(a1 + 8);
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
        if ( (dword_140C3CE2C & 0x40000000) != 0 )
        {
          *(_DWORD *)(a1 + 368) = 0;
          *v20 = 0;
        }
        if ( !byte_140C3CF06 && !byte_140C3CEF4 && !byte_140C3CEFB )
          *v20 = 0;
        PopInitializePowerPolicySimulate();
        dword_140C3CE44 = dword_140C3CE40;
        v21 = ((unsigned int)dword_140C3CE2C >> 27) & 2;
        *(_DWORD *)(a1 + 108) = v21;
        PopAdvanceSystemPowerState(&dword_140C3CE44, v21, SHIDWORD(qword_140C3CE24), *v18);
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          byte_140C3D040 = 1;
          *(_BYTE *)(a1 + 36) = 0;
          dword_140C3CE48 = 5;
          *(_DWORD *)(a1 + 44) = 6;
          v22 = dword_140C3CE40;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            *(_DWORD *)(a1 + 44) = dword_140C3CE40;
            v23 = 6;
            dword_140C3CE48 = 5;
            *(_BYTE *)(a1 + 36) = 1;
            *(_DWORD *)(a1 + 68) = 6;
            goto LABEL_66;
          }
          dword_140C3CE48 = dword_140C3CE40;
          *(_DWORD *)(a1 + 44) = dword_140C3CE40;
          v22 = dword_140C3CE40;
          *(_BYTE *)(a1 + 36) = 0;
        }
        v23 = PopPowerStateHandlerLookup[v22];
        *(_DWORD *)(a1 + 68) = v23;
        if ( v23 > 6 )
          goto LABEL_111;
LABEL_66:
        if ( !qword_140C3DA08[3 * (int)v23] )
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
          if ( byte_140C3CE22 )
          {
            PopSetShutdownMarker();
            PopSaveLidReliabilityState(v25);
            goto LABEL_73;
          }
          v24 = dword_140C3CE40;
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
        byte_140C3CE3C = 3;
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
                              (unsigned int)qword_140C3CE24,
                              dword_140C3CE40,
                              dword_140C3CE48,
                              *(unsigned int *)(a1 + 8),
                              1);
    PopTransitionCheckpoint(9, 0);
    if ( !byte_140C3CE22 )
    {
      PopCurrentPowerState((_OWORD *)(a1 + 160));
      PopDiagTracePreSleepNotification(
        *(_DWORD *)(a1 + 44),
        dword_140C3CE48,
        dword_140C3CE34,
        dword_140C3CE38,
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
      if ( byte_140C3CE22 )
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
      v38 = dword_140C3CE40;
    PopFlushVolumes(v38);
    if ( dword_140C3CE48 < dword_140C3CE40 )
      dword_140C3CE48 = dword_140C3CE40;
    byte_140C3CE3C = 2;
    if ( byte_140C3CE22 )
      break;
    v39 = *(_DWORD *)(a1 + 68);
    KeMtrrComparisonFailed = 0;
    inited = PopInitSystemSleeperThread(v39, (struct _KEVENT *)(a1 + 264), ProcessId);
    *(_DWORD *)(a1 + 104) = inited;
    if ( inited >= 0 )
    {
      if ( !byte_140C3CED0 )
      {
        ExWakeTimersPause();
        byte_140C3CED0 = 1;
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
             || dword_140C3CE40 == 5
             || !PopIsDozeSupported(&PopCapabilities)
             || (dword_140C3CE2C & 0x40000000) != 0 )
      {
        if ( byte_140C3DAD4 && dword_140C3CE40 == 5 && !byte_140C3D040 && qword_140C3CD68 && dword_140C3CE34 == 11 )
        {
          v47 = qword_140C3CD68 - v42;
          *(_QWORD *)(a1 + 352) = qword_140C3CD68 - v42;
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
        if ( !qword_140C3CEE0 )
          qword_140C3CEE0 = v45;
      }
      v51 = &qword_140C3CE88;
      memset(&qword_140C3CE88, 0, 0x48uLL);
      dword_140C3CE80 = 3;
      if ( *(_QWORD *)(a1 + 224) == -3LL )
      {
        qword_140C3CE88 = v43;
        qword_140C3CE98[0] = -3LL;
        qword_140C3CEB0 = *(_QWORD *)(a1 + 224);
        qword_140C3CEA0 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140C3D040 && dword_140C3CE34 != 14 )
      {
        v52 = (_DWORD *)(a1 + 368);
        v53 = (_DWORD *)(a1 + 372);
        if ( dword_140C3CE40 == 5 && *v52 != 1 && *v53 != 1 )
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
              qword_140C3CE88 = *(_QWORD *)(a1 + 216);
              qword_140C3CE98[0] = *(_QWORD *)(a1 + 224);
            }
            if ( *v53 )
            {
              qword_140C3CEA0 = *(_QWORD *)(a1 + 216);
              qword_140C3CEB0 = *(_QWORD *)(a1 + 224);
            }
          }
          else
          {
            do
            {
              *v51 = *(_QWORD *)(a1 + 216);
              v51 += 3;
            }
            while ( (__int64)v51 < (__int64)&unk_140C3CEB8 );
            v54 = qword_140C3CE98;
            do
            {
              *v54 = *(_QWORD *)(a1 + 224);
              v54 += 3;
            }
            while ( (__int64)v54 < (__int64)&qword_140C3CEC8 );
          }
        }
        v55 = qword_140C3CED8;
        *(_QWORD *)(a1 + 80) = qword_140C3CED8;
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
            qword_140C3CE88 = *v58;
            qword_140C3CE98[0] = *v59;
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
            qword_140C3CEA0 = *v58;
            qword_140C3CEB0 = *v59;
          }
        }
      }
      qword_140C3CE90[0] = qword_140C3CE88;
      if ( qword_140C3CE88 && qword_140C3CE88 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 380) )
        qword_140C3CE90[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 380);
      qword_140C3CEA8 = qword_140C3CEA0;
      if ( qword_140C3CEA0 && qword_140C3CEA0 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 380) )
        qword_140C3CEA8 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 380);
      *(_DWORD *)(a1 + 360) = PopTransitionGetWakeTimerType(qword_140C3CE98[0]);
      *(_DWORD *)(a1 + 364) = PopTransitionGetWakeTimerType(qword_140C3CEB0);
      qword_140C3D330 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLock(1u);
      ExUpdateSystemTimeFromCmos(1, 1u);
      ExReleaseTimeRefreshLock();
      ((void (__fastcall *)(__int64, __int64))off_140C019D0)(qword_140C3CE90[0], qword_140C3CEA8);
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
      *(_DWORD *)(a1 + 152) = dword_140C3D90C;
      v68 = PoPushPowerStateTransitionRecordWithCallback(v67, v66, 0LL, 0LL);
      KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
      KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
      if ( v68 >= 0 )
        PoDelistPowerStateTransitionBlocker();
      qword_140C3D0D0 = 0LL;
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
      PopSetPowerActionWatchdogState(2u);
      CurrentThread = KeGetCurrentThread();
      v70 = dword_140C3CE40;
      if ( PoResumeFromHibernate )
        v70 = dword_140C3CE48;
      dword_140C3CE4C = v70;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
      {
        *(_DWORD *)(a1 + 44) = 6;
      }
      else
      {
        *(_DWORD *)(a1 + 44) = dword_140C3CE40;
        v5 = dword_140C3CE40;
      }
      v71 = dword_140C3CE4C;
      CheckStamp = *(_DWORD *)(a1 + 364);
      v72 = *(_DWORD *)(a1 + 360);
      *(_DWORD *)(a1 + 40) = dword_140C3CE4C;
      PopDiagTracePostSleepNotification(v5, dword_140C3CE48, v71, qword_140C3CE90[0], qword_140C3CEA8, v72, CheckStamp);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      if ( *(int *)(a1 + 104) < 0 && dword_140C3CE40 == 5 )
      {
        DestinationString = 0LL;
        StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
        RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus(*(_DWORD *)(a1 + 104));
      }
LABEL_80:
      if ( byte_140C3D040 )
      {
        qword_140C3D520 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_140C3D024 = PopQpcTimeInMs(&qword_140C3D518, &qword_140C3D520);
      }
      if ( *(int *)(a1 + 104) >= 0 )
      {
        qword_140C3CE70 = *(_QWORD *)(a1 + 344);
        ExUpdateSystemTimeFromCmos(1, 1u);
        LOBYTE(v32) = 1;
        if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C01D58[0])(v32) )
          *(_BYTE *)(a1 + 208) = 1;
        qword_140C3D348 = KeQueryPerformanceCounter(0LL).QuadPart;
        PfPowerActionNotify(2, 0, 0);
        qword_140C3CE68 = MEMORY[0xFFFFF78000000008];
        PopDiagComputeEarlyHiberStats();
        if ( *(_DWORD *)(a1 + 40) == 4 )
          PopDiagTraceFirmwareS3Stats();
      }
      byte_140C3CE3D = 1;
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
                                (unsigned int)qword_140C3CE24,
                                dword_140C3CE40,
                                dword_140C3CE48,
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
      *(_QWORD *)&qword_140C3CE58 = 0LL;
      PopFanSxExit();
      PopEsExitSleep();
      *(_DWORD *)(a1 + 156) = dword_140C3D90C;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
      if ( *(int *)(a1 + 104) >= 0 )
      {
        PopCurrentPowerState((_OWORD *)(a1 + 160));
        SshSessionManagerTracePostSleepNotification(
          qword_140C3CE90[0],
          qword_140C3CEA8,
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
      if ( (unsigned __int64)dword_140C3CE80 >= 3 )
      {
        if ( !PopIsMostRecentWakeAttended() )
        {
          PopFullWake = 0;
          PopPendingUserPresenceDuringSystemSleep = 0;
          PopPendingUserPresenceMonitorOnReason = 0;
        }
        goto LABEL_224;
      }
      qword_140C3CED8 = qword_140C3CE90[3 * dword_140C3CE80];
      v73 = qword_140C3CE98[3 * dword_140C3CE80];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v73 )
      {
        case -1LL:
          if ( PopDeferDoze(*(_DWORD *)(a1 + 368), *(_DWORD *)(a1 + 372), (_BYTE *)(a1 + 160)) )
            qword_140C3CE24 = *(_QWORD *)a1;
          else
            qword_140C3CE24 = 0x500000002LL;
          LOBYTE(PopAction) = PopAction | 2;
          break;
        case -2LL:
          if ( !qword_140C3CE78 )
            qword_140C3CE78 = qword_140C3CE68;
          goto LABEL_224;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          goto LABEL_224;
        default:
          v74 = (_DWORD *)(a1 + 372);
          if ( dword_140C3D90C != 1 )
          {
            if ( !*v74 && *(_DWORD *)(a1 + 152) == *(_DWORD *)(a1 + 156) )
              PopCheckPowerSourceAfterRtcWakeSet();
            goto LABEL_224;
          }
          if ( *v74 )
          {
LABEL_224:
            if ( byte_140C3CED0 && *(_BYTE *)(a1 + 256) )
            {
              ExWakeTimersResume();
              byte_140C3CED0 = 0;
              qword_140C3CED8 = 0LL;
            }
            if ( PoResumeFromHibernate )
              PopBootLoaderTraceProcess();
            byte_140C3D040 = 0;
            PopResetActionDefaults();
            PopSetPowerActionState(2);
            PopReleasePolicyLock();
            if ( PopPendingUserPresenceDuringSystemSleep )
              PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
            ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
            PopCheckForWork();
            if ( *(int *)(a1 + 104) >= 0 )
              PpmPerfReApplyStates();
            dword_140C3CE34 = 16;
            qword_140C3D4B0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450;
            v75 = *(void **)(a1 + 240);
            if ( v75 )
            {
              ExDeleteWakeTimerInfo(v75);
              *(_QWORD *)(a1 + 240) = 0LL;
            }
            PopTransitionCritialResumeThread = 0LL;
            goto LABEL_237;
          }
          qword_140C3CE24 = *(_QWORD *)a1;
          LOBYTE(PopAction) = 2;
          break;
      }
      *(_BYTE *)(a1 + 256) = 0;
      goto LABEL_224;
    }
    *v1 = 20;
  }
  PopFxPrepareDevicesForShutdown();
  IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140C3CE58 + 48LL));
  if ( dword_140C3CE34 == 2 )
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
