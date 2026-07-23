/*
 * XREFs of NtPowerInformation @ 0x140784430
 * Callers:
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405A23C4 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405A25C4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A2968 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140782BCC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140784394 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140867DA8 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096ED9C (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A32F8 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A339C (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1409A33FC (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A3480 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14022BF00 (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopPowerRequestReferenceRelease @ 0x14032B248 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032B648 (PopPowerRequestReferenceAcquire.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 *     KeQueryActiveGroupCount @ 0x140361E20 (KeQueryActiveGroupCount.c)
 *     PopDisksRegisteredForIdle @ 0x14036A9DC (PopDisksRegisteredForIdle.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     ExVerifySuite @ 0x1403735F0 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403ABBD4 (PpmHeteroHgsBackupInit.c)
 *     PopEventCalloutDispatch @ 0x1403B5F0C (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1403D6130 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140584094 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1405840DC (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140585C1C (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140585CFC (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1405871E8 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058A85C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PopShutdownListenerInsertCallback @ 0x140598930 (PopShutdownListenerInsertCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140599558 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14059D31C (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14060B698 (ExGetWakeTimerList.c)
 *     PopFreeSessionState @ 0x140682954 (PopFreeSessionState.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PopBlackBoxUpdate @ 0x140785850 (PopBlackBoxUpdate.c)
 *     PopProcessorInformation @ 0x1407A5E74 (PopProcessorInformation.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A60F0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestActionInfo @ 0x1407A61D4 (PopPowerRequestActionInfo.c)
 *     TtmIsEnabled @ 0x1407A65A0 (TtmIsEnabled.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopMonitorInvocation @ 0x1407A94DC (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A9788 (PopProcessSessionDisplayStateChange.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B897C (PopEtEnergyTrackerQuery.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     PopCapturePlatformRole @ 0x1407E62B4 (PopCapturePlatformRole.c)
 *     PopDiagTraceSessionStates @ 0x1407EBDDC (PopDiagTraceSessionStates.c)
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBFB8 (PopIsRunningAsLocalSystem.c)
 *     PopGetSettingValue @ 0x1407EC720 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140804218 (PopHibernateEvaluation.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140825404 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     PopPdcInvocation @ 0x14085A91C (PopPdcInvocation.c)
 *     PopCurrentPowerStatePrecise @ 0x140873C98 (PopCurrentPowerStatePrecise.c)
 *     PopUpdateConsoleDisplayState @ 0x140873D64 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14087404C (PopLogSleepDisabled.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopSetDisplayStatus @ 0x140885638 (PopSetDisplayStatus.c)
 *     PopLoggingInformation @ 0x140980E94 (PopLoggingInformation.c)
 *     PopReadHiberbootPolicy @ 0x1409810AC (PopReadHiberbootPolicy.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981800 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopApplyAdminPolicy @ 0x140984228 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x140984300 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1409868A0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140986C54 (PpmSetSimulatedLoad.c)
 *     PopGetWakeSource @ 0x140987418 (PopGetWakeSource.c)
 *     PopSetHiberFileSize @ 0x140989134 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1409891D8 (PopSetHiberFileType.c)
 *     PopSetHiberPersistedRegValue @ 0x140989288 (PopSetHiberPersistedRegValue.c)
 *     PopSendSuspendResumeNotifications @ 0x14098A6F8 (PopSendSuspendResumeNotifications.c)
 *     PopThermalProcessUsermodeEvent @ 0x14098AE78 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x14098C864 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x14098C984 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x14098E934 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceServiceNotification @ 0x14099151C (PopDiagTraceServiceNotification.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993C60 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PopBatteryDeviceState @ 0x14099517C (PopBatteryDeviceState.c)
 *     PopBlackBoxDirectAccess @ 0x140997028 (PopBlackBoxDirectAccess.c)
 *     PopUmpoSendLegacyEvent @ 0x140997950 (PopUmpoSendLegacyEvent.c)
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x1409982E4 (PopScreenOff.c)
 *     PpmParkApplyForcedMask @ 0x140999F04 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A004 (PpmParkClearForcedMask.c)
 *     PopUserPresentOverride @ 0x14099BC00 (PopUserPresentOverride.c)
 *     TtmCleanupCurrentSession @ 0x1409A3F40 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A4050 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A43D4 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1409A603C (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     PopInitPlatformSettings @ 0x140B522C0 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  _QWORD *Pool2; // r15
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r15
  ULONG v13; // ebx
  char *v14; // r12
  _WNF_STATE_NAME *v15; // r13
  unsigned __int64 v16; // rax
  int v17; // r14d
  int v18; // r14d
  ULONG v19; // r14d
  int v20; // eax
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  bool v22; // sf
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  LUID v33; // rcx
  int v34; // r14d
  int v35; // r14d
  NTSTATUS SettingValue; // eax
  int v37; // r14d
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // r14d
  int v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  int v52; // r14d
  int v53; // r14d
  char IsDevicePotentialDripsConstraint; // al
  HANDLE *v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  bool v58; // sf
  _DWORD *v59; // rax
  int v60; // r14d
  int v61; // r14d
  int v62; // r14d
  __int64 *v63; // rax
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  USHORT v67; // bx
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  _BYTE *v72; // rcx
  int v73; // r9d
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // ebx
  char v79; // al
  int v80; // ecx
  int v81; // eax
  int v82; // r14d
  unsigned int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  bool v87; // zf
  int v88; // r14d
  int v89; // r14d
  int v90; // r14d
  unsigned int v91; // eax
  int v92; // ebx
  HANDLE *v93; // rax
  int v94; // ecx
  bool v95; // sf
  __int128 *v96; // rax
  int v97; // r14d
  int v98; // r14d
  int v99; // r14d
  int v100; // r14d
  unsigned int *v101; // r14
  int v102; // ecx
  unsigned int v103; // eax
  unsigned int v104; // ecx
  unsigned int ProcessSessionId; // eax
  int v106; // r14d
  int v107; // r14d
  int v108; // r14d
  int v109; // r14d
  __int64 v110; // rax
  _DWORD *v111; // rbx
  void *v112; // rax
  NTSTATUS WakeSource; // eax
  int v114; // r14d
  int v115; // r14d
  _QWORD *v116; // rdx
  int v117; // eax
  int WakeTimerList; // eax
  int v119; // r14d
  int v120; // r14d
  int v121; // r14d
  int v122; // r14d
  int v123; // ecx
  __int64 v124; // rcx
  int v125; // ecx
  int v126; // r14d
  __int64 v127; // rcx
  __int64 v128; // rcx
  int v129; // r14d
  int v130; // r14d
  char v131; // r14
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  unsigned int v135; // eax
  bool v136; // bl
  int v137; // r14d
  unsigned int v138; // edx
  _DWORD *v139; // rcx
  int v140; // r14d
  ULONG Length; // [rsp+50h] [rbp-6E8h]
  unsigned int Length_4; // [rsp+54h] [rbp-6E4h] BYREF
  char v143; // [rsp+58h] [rbp-6E0h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+59h] [rbp-6DFh]
  void *Src; // [rsp+60h] [rbp-6D8h] BYREF
  char v146; // [rsp+68h] [rbp-6D0h]
  char v147; // [rsp+69h] [rbp-6CFh]
  _BYTE *v148; // [rsp+70h] [rbp-6C8h]
  int v149; // [rsp+78h] [rbp-6C0h]
  BOOL v150; // [rsp+7Ch] [rbp-6BCh] BYREF
  _DWORD Size[3]; // [rsp+84h] [rbp-6B4h] BYREF
  int *v152; // [rsp+90h] [rbp-6A8h]
  PVOID P[3]; // [rsp+98h] [rbp-6A0h] BYREF
  HANDLE v154[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v155[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v152 = (int *)OutputBuffer;
  v8 = InformationLevel;
  v147 = 0;
  memset(v154, 0, sizeof(v154));
  v150 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  v148 = 0LL;
  P[0] = 0LL;
  LOBYTE(v11) = 0;
  v146 = 0;
  v143 = 0;
  if ( (unsigned int)v8 > 0x61 )
    goto LABEL_626;
  v12 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v12;
  v13 = InputBuffer != 0LL ? InputBufferLength : 0;
  Size[0] = v13;
  v14 = (char *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  P[1] = v14;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v15 = (_WNF_STATE_NAME *)((unsigned __int64)v152 & -(__int64)(Length != 0));
  if ( v12 )
  {
    if ( (unsigned int)v8 <= 0x22 && (v11 = 0x7C30200C0LL, _bittest64(&v11, v8))
      || (v24 = (unsigned int)(v8 - 39), (unsigned int)v24 <= 0x3A)
      && (v11 = 0x4104F0071C2E50FLL, _bittest64(&v11, v24)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = v14;
      Pool2 = v148;
      goto LABEL_22;
    }
    v25 = (unsigned int)(v8 - 37);
    if ( (unsigned int)v25 <= 0x3A && (v11 = 0x608801808940903LL, _bittest64(&v11, v25)) || (unsigned int)(v8 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v149 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v14;
        Pool2 = v148;
        goto LABEL_22;
      }
    }
    if ( (unsigned int)(v8 - 92) <= 1 )
    {
      LOBYTE(v11) = v12;
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v11);
      v149 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v14;
        Pool2 = v148;
        goto LABEL_22;
      }
    }
    v26 = (unsigned int)(v8 - 28);
    if ( (unsigned int)v26 <= 0x32 )
    {
      v11 = 0x4000000420001LL;
      if ( _bittest64(&v11, v26) )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v149 = -1073741790;
          InputBuffer = v14;
          Pool2 = v148;
          goto LABEL_22;
        }
      }
    }
    if ( (_DWORD)v8 == 71 && !(unsigned __int8)PopIsRunningAsLocalSystem() )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v149 = -1073741790;
      InputBuffer = v14;
      Pool2 = v148;
      goto LABEL_22;
    }
    if ( v14 )
    {
      v27 = (unsigned int)(v8 - 11);
      if ( (unsigned int)v27 > 0x3D || (v28 = 0x2001800900000001LL, !_bittest64(&v28, v27)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v149 = -1073741637;
          InputBuffer = v14;
          Pool2 = v148;
          goto LABEL_22;
        }
      }
      v29 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v29 <= 0x39 && (v30 = 0x218000004422401LL, _bittest64(&v30, v29)) || (_DWORD)v8 == 9 )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v149 = -1073741790;
          InputBuffer = v14;
          Pool2 = v148;
          goto LABEL_22;
        }
      }
      v31 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v31 > 0x3B || (v32 = 0xFAE005C28F40BC3LL, !_bittest64(&v32, v31)) )
      {
        if ( (unsigned int)(v8 - 2) > 1 && (_DWORD)v8 != 11 )
        {
          v33 = SeShutdownPrivilege;
          if ( (_DWORD)v8 == 10 )
            v33 = SeCreatePagefilePrivilege;
          v152 = (int *)v33;
          if ( !SeSinglePrivilegeCheck(v33, v12) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v149 = -1073741727;
            InputBuffer = v14;
            Pool2 = v148;
            goto LABEL_22;
          }
        }
      }
      v13 = Size[0];
      if ( Size[0] && ((unsigned __int64)&v14[Size[0]] > 0x7FFFFFFF0000LL || &v14[Size[0]] < v14) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( Size[0] > 0x40u )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, Size[0], 544040269LL);
        v148 = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v149 = -1073741670;
          InputBuffer = v14;
          goto LABEL_22;
        }
      }
      else
      {
        Pool2 = v155;
        v148 = v155;
      }
      memmove(Pool2, v14, Size[0]);
    }
    else
    {
      Pool2 = v148;
      v13 = Size[0];
    }
    if ( v15 )
      ProbeForWrite(v15, Length, 1u);
    LOBYTE(v11) = v146;
  }
  else
  {
    Pool2 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
    v148 = Pool2;
  }
  v16 = (unsigned int)(v8 - 38);
  if ( (unsigned int)v16 > 0x3B || (v9 = 0xFFFE3BE75BE26EDLL, !_bittest64(&v9, v16)) )
  {
    if ( (unsigned int)v8 > 0x1F || (v42 = -234812256, !_bittest(&v42, v8)) )
    {
      PopAcquirePolicyLock(v11);
      LOBYTE(v11) = 1;
      v146 = 1;
    }
  }
  if ( (int)v8 <= 50 )
  {
    if ( (_DWORD)v8 == 50 )
    {
      if ( Pool2 || !v15 )
        goto LABEL_307;
      WakeTimerList = ExGetWakeTimerList(&Src, &Length_4);
    }
    else
    {
      if ( (int)v8 <= 24 )
      {
        if ( (_DWORD)v8 != 24 )
        {
          if ( (int)v8 > 12 )
          {
            if ( (int)v8 > 18 )
            {
              v97 = v8 - 19;
              if ( v97 )
              {
                v98 = v97 - 1;
                if ( v98 )
                {
                  v99 = v98 - 1;
                  if ( v99 )
                  {
                    v100 = v99 - 1;
                    if ( v100 )
                    {
                      if ( v100 == 1 && !Pool2 && v15 )
                      {
                        IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v150);
                        InputBuffer = v14;
                        if ( IsAppContainerOrIdentifyLevelContext < 0 )
                          goto LABEL_22;
                        Src = P[0];
                        Length_4 = v150;
                        goto LABEL_123;
                      }
                      goto LABEL_307;
                    }
                  }
                }
              }
            }
            else if ( (_DWORD)v8 != 18 )
            {
              v45 = v8 - 13;
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( !v46 )
                {
                  if ( Pool2 || !v15 )
                    goto LABEL_307;
                  v63 = &qword_140C3CE68;
                  goto LABEL_238;
                }
                v47 = v46 - 1;
                if ( !v47 )
                {
                  if ( Pool2 || !v15 )
                    goto LABEL_307;
                  v63 = &qword_140C3CE70;
                  goto LABEL_238;
                }
                v48 = v47 - 1;
                if ( v48 )
                {
                  if ( v48 == 1 && Pool2 && !v15 )
                  {
                    if ( v13 < 0x10 )
                      goto LABEL_358;
                    if ( !(_QWORD)PopPowerStateNotifyHandler || !*Pool2 )
                    {
                      PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                      goto LABEL_123;
                    }
                  }
                  goto LABEL_307;
                }
                if ( Pool2 || !v15 )
                  goto LABEL_307;
                if ( dword_140C035B8 )
                  LODWORD(v154[0]) |= 1u;
                if ( dword_140C03588 )
                  LODWORD(v154[0]) |= 2u;
LABEL_122:
                Src = v154;
                Length_4 = 4;
                goto LABEL_123;
              }
            }
            goto LABEL_564;
          }
          if ( (_DWORD)v8 == 12 )
          {
            if ( Pool2 || !v15 )
              goto LABEL_307;
            HIDWORD(v154[0]) = dword_140C3CD44;
            LODWORD(v154[1]) = dword_140C3CD4C - dword_140C3CD48;
            BYTE4(v154[1]) = PopCoolingMode;
            Src = v154;
            Length_4 = 16;
            goto LABEL_123;
          }
          if ( (_DWORD)v8 != 6 )
          {
            if ( (int)v8 <= 6 )
            {
              if ( (_DWORD)v8 && (v37 = v8 - 1) != 0 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  v39 = v38 - 1;
                  if ( v39 )
                  {
                    v40 = v39 - 1;
                    if ( !v40 )
                    {
                      if ( Pool2 )
                      {
                        if ( (PopSimulate & 1) == 0 )
                          goto LABEL_307;
                        if ( v13 < 0x4C )
                          goto LABEL_358;
                        PopCapabilities = *(_OWORD *)Pool2;
                        unk_140C3DAD0 = *((_OWORD *)Pool2 + 1);
                        xmmword_140C3DAE0 = *((_OWORD *)Pool2 + 2);
                        xmmword_140C3DAF0 = *((_OWORD *)Pool2 + 3);
                        qword_140C3DB00 = Pool2[8];
                        dword_140C3DB08 = *((_DWORD *)Pool2 + 18);
                        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
                        InputBuffer = v14;
                        if ( IsAppContainerOrIdentifyLevelContext < 0 )
                          goto LABEL_22;
                      }
                      else if ( !v15 )
                      {
                        goto LABEL_307;
                      }
                      BYTE9(PopCapabilities) = PopFullWake & 1;
                      byte_140C3DAD5 = PopDisksRegisteredForIdle();
                      PopFilterCapabilities(&PopCapabilities, v154);
                      Src = v154;
                      Length_4 = 76;
                      goto LABEL_173;
                    }
                    if ( v40 != 1 || Pool2 || !v15 )
                      goto LABEL_307;
                    PopCurrentPowerState(v154);
                    goto LABEL_114;
                  }
                }
                if ( !Pool2 || !v15 )
                  goto LABEL_307;
                if ( v13 < 0xE8 )
                  goto LABEL_358;
                IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, v154);
                InputBuffer = v14;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
                v93 = v154;
              }
              else
              {
                if ( Pool2 )
                {
                  if ( v13 < 0xE8 )
                    goto LABEL_358;
                  IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, Pool2, v13);
                  InputBuffer = v14;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_22;
                }
                else if ( !v15 )
                {
                  goto LABEL_307;
                }
                v93 = (HANDLE *)&unk_140C3D824;
              }
LABEL_351:
              Src = v93;
              Length_4 = 232;
              goto LABEL_123;
            }
            v82 = v8 - 7;
            if ( !v82 )
            {
              if ( !Pool2 && v15 )
              {
                PpmHeteroHgsBackupInit();
                Src = &PpmProcessorDriverDispatchTable;
                Length_4 = 288;
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            v88 = v82 - 1;
            if ( !v88 )
            {
              if ( Pool2 || !v15 )
                goto LABEL_307;
              v93 = (HANDLE *)PopPolicy;
              goto LABEL_351;
            }
            v89 = v88 - 1;
            if ( !v89 )
            {
              if ( Pool2 )
              {
                if ( v13 < 0x18 )
                  goto LABEL_358;
                IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v11, Pool2);
                InputBuffer = v14;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
                IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
              }
              else if ( !v15 )
              {
                goto LABEL_307;
              }
              v96 = &PopAdminPolicy;
              goto LABEL_373;
            }
            v90 = v89 - 1;
            if ( !v90 )
            {
              if ( !Pool2 || v15 )
                goto LABEL_307;
              if ( !v13 )
                goto LABEL_358;
              PopAcquireTransitionLock(3LL);
              PopAcquirePolicyLock(v94);
              PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
              PopSetHiberPersistedRegValue(0LL);
              IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
              PopReleasePolicyLock();
              PopReleaseTransitionLock(3LL);
              v95 = IsAppContainerOrIdentifyLevelContext < 0;
              goto LABEL_531;
            }
            if ( v90 != 1 || Pool2 || !v15 )
              goto LABEL_307;
            v69 = PopProcessorInformation(v154, v9, KeGetCurrentPrcb()->Group, &Length_4);
            Pool2 = v148;
LABEL_251:
            InputBuffer = v14;
            IsAppContainerOrIdentifyLevelContext = v69;
            if ( v69 < 0 )
              goto LABEL_22;
            Src = v154;
            goto LABEL_123;
          }
          if ( !Pool2 || v15 )
            goto LABEL_307;
          if ( v13 < 0x18 )
            goto LABEL_358;
          v70 = *(unsigned int *)Pool2;
          if ( (unsigned int)v70 >= 7 )
            goto LABEL_307;
          v71 = 3 * v70;
          if ( *((_QWORD *)&PopPowerStateHandlers + 3 * v70 + 1) )
          {
            if ( (_DWORD)v70 != 5
              && ((_DWORD)v70 != 4 || (void (__fastcall __noreturn *)())qword_140C3DA68 != PopShutdownHandler) )
            {
              goto LABEL_307;
            }
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v70) = *(_OWORD *)Pool2;
          *((_QWORD *)&PopPowerStateHandlers + 3 * v70 + 2) = Pool2[2];
          *(_WORD *)((char *)&PopPowerStateHandlers + 24 * v70 + 5) = 0;
          *((_BYTE *)&PopPowerStateHandlers + 24 * v70 + 7) = 0;
          v72 = 0LL;
          v73 = 0;
          if ( (_DWORD)v70 )
          {
            v74 = v70 - 1;
            if ( v74 )
            {
              v75 = v74 - 1;
              if ( v75 )
              {
                v76 = v75 - 1;
                if ( v76 )
                {
                  v77 = v76 - 1;
                  if ( !v77 )
                  {
                    v72 = (char *)&PopCapabilities + 7;
LABEL_299:
                    if ( (*((_BYTE *)&PopPowerStateHandlers + 8 * v71 + 4) != 0 ? v73 : 0) > (int)qword_140C3DB00 )
                      LODWORD(qword_140C3DB00) = *((_BYTE *)&PopPowerStateHandlers + 8 * v71 + 4) != 0 ? v73 : 0;
                    if ( v72 && *v72 != 1 )
                    {
                      *v72 = 1;
                      PopResetCurrentPolicies();
                    }
                    goto LABEL_123;
                  }
                  if ( v77 != 2 )
                    goto LABEL_299;
                  v73 = 4;
                  v87 = (PopSimulate & 0x2000) == 0;
                  v72 = &unk_140C3DAD1;
                }
                else
                {
                  v73 = 5;
                  v87 = (PopSimulate & 0x2000) == 0;
                  v72 = (char *)&PopCapabilities + 6;
                }
              }
              else
              {
                v73 = 4;
                v87 = (PopSimulate & 0x20) == 0;
                v72 = (char *)&PopCapabilities + 5;
              }
            }
            else
            {
              v73 = 3;
              v87 = (PopSimulate & 0x40) == 0;
              v72 = (char *)&PopCapabilities + 4;
            }
          }
          else
          {
            v73 = 2;
            v87 = (PopSimulate & 8) == 0;
            v72 = (char *)&PopCapabilities + 3;
          }
          if ( !v87 )
            v72 = 0LL;
          goto LABEL_299;
        }
        if ( !Pool2 || v15 )
          goto LABEL_307;
        if ( v13 < 8 )
          goto LABEL_358;
        v57 = PopLogSleepDisabled(*(unsigned int *)Pool2, *((unsigned int *)Pool2 + 1), 0LL, 0LL);
LABEL_200:
        IsAppContainerOrIdentifyLevelContext = v57;
        v58 = v57 < 0;
        goto LABEL_201;
      }
      if ( (int)v8 <= 38 )
      {
        if ( (_DWORD)v8 != 38 )
        {
          if ( (int)v8 > 32 )
          {
            v106 = v8 - 33;
            if ( !v106 )
              goto LABEL_564;
            v107 = v106 - 1;
            if ( !v107 )
              goto LABEL_564;
            v108 = v107 - 1;
            if ( v108 )
            {
              v109 = v108 - 1;
              if ( v109 )
              {
                if ( v109 != 1 || !Pool2 || v15 )
                  goto LABEL_307;
                if ( PreviousMode == 1 )
                {
                  if ( v13 >= 4 )
                  {
                    IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2 + 2, v13 - 4, 0LL);
                    if ( IsAppContainerOrIdentifyLevelContext >= 0 )
                      IsAppContainerOrIdentifyLevelContext = 0;
                  }
                  else
                  {
                    IsAppContainerOrIdentifyLevelContext = -1073741811;
                  }
                  InputBuffer = v14;
                  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
                  {
                    PopDiagTraceServiceNotification(Pool2);
                    goto LABEL_123;
                  }
                  goto LABEL_22;
                }
                goto LABEL_425;
              }
              if ( !v15 )
                goto LABEL_307;
              if ( !(_DWORD)dword_140C3D020 || !qword_140C3D018 )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741275;
                goto LABEL_21;
              }
              Length_4 = dword_140C3D020 + 8;
              v110 = ExAllocatePool2(256LL, (unsigned int)(dword_140C3D020 + 8), 544040269LL);
              v111 = (_DWORD *)v110;
              if ( v110 )
              {
                Src = (void *)v110;
                v143 = 1;
                memmove((void *)(v110 + 8), qword_140C3D018, (unsigned int)dword_140C3D020);
                *v111 = (unsigned int)dword_140C3D020 >> 4;
                goto LABEL_123;
              }
            }
            else
            {
              if ( Pool2 || !v15 )
                goto LABEL_307;
              if ( (_BYTE)v11 )
              {
                PopReleasePolicyLock();
                v146 = 0;
              }
              IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Length_4);
              if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
                goto LABEL_445;
              v112 = (void *)ExAllocatePool2(64LL, Length_4, 544040269LL);
              Src = v112;
              if ( v112 )
              {
                v143 = 1;
                WakeSource = PopGetWakeSource(v112, &Length_4);
                goto LABEL_443;
              }
            }
          }
          else
          {
            switch ( (_DWORD)v8 )
            {
              case 0x20:
                goto LABEL_564;
              case 0x19:
                if ( !Pool2 )
                  goto LABEL_307;
                if ( v15 )
                  goto LABEL_307;
                if ( Length )
                  goto LABEL_307;
                if ( v13 < 0x1C )
                  goto LABEL_307;
                v101 = (unsigned int *)(Pool2 + 3);
                v102 = *((_DWORD *)Pool2 + 6);
                if ( !v102 )
                  goto LABEL_307;
                v152 = (int *)Pool2 + 5;
                if ( *((_DWORD *)Pool2 + 5) > 2u )
                  goto LABEL_307;
                InputBuffer = v14;
                if ( *(_DWORD *)Pool2 != 1 )
                {
                  IsAppContainerOrIdentifyLevelContext = -1073741736;
                  goto LABEL_22;
                }
                v103 = v102 + 28;
                v104 = -1;
                if ( v103 >= 0x1C )
                  v104 = v103;
                Length_4 = v104;
                IsAppContainerOrIdentifyLevelContext = v103 < 0x1C ? 0xC0000095 : 0;
                if ( v103 < 0x1C )
                  goto LABEL_22;
                if ( Size[0] < v104 )
                  goto LABEL_307;
                ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v148;
                v57 = PopSetPowerSettingValue((const GUID *)(v148 + 4), ProcessSessionId, *v152, *v101, v148 + 28);
                goto LABEL_200;
              case 0x1C:
                if ( qword_140C6B030 )
                  qword_140C6B030(1LL);
                PopHiberBootForceMonitorOff = 1;
                SettingValue = PoPowerOffMonitor();
                goto LABEL_97;
            }
            if ( (_DWORD)v8 != 29 )
            {
              if ( (unsigned int)(v8 - 30) <= 1 && Pool2 && !v15 )
              {
                if ( v13 < 8 )
                  goto LABEL_358;
                if ( (_DWORD)v8 == 30 )
                  PopDiagTraceAppPowerMessage(Pool2);
                else
                  PopDiagTraceAppPowerMessageEnd(Pool2);
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            if ( Pool2 || !v15 )
              goto LABEL_307;
            Length_4 = 4;
            v59 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            Src = v59;
            if ( v59 )
            {
              v143 = 1;
              *v59 = PopConsoleDisplayState;
              goto LABEL_123;
            }
          }
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          goto LABEL_21;
        }
        if ( !Pool2 || v15 )
          goto LABEL_307;
        if ( v13 == 8 )
        {
          WakeSource = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
        }
        else
        {
          if ( v13 != 4 )
            goto LABEL_444;
          WakeSource = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
        }
LABEL_443:
        IsAppContainerOrIdentifyLevelContext = WakeSource;
LABEL_445:
        v58 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_201:
        InputBuffer = v14;
        if ( v58 )
          goto LABEL_22;
LABEL_123:
        v19 = Length;
        goto LABEL_19;
      }
      if ( (_DWORD)v8 == 44 )
      {
        if ( !Pool2 || v15 )
          goto LABEL_307;
        if ( v13 != 24 )
          goto LABEL_358;
        v57 = PopPowerRequestActionInfo(Pool2);
        goto LABEL_200;
      }
      if ( (int)v8 <= 44 )
      {
        switch ( (_DWORD)v8 )
        {
          case '\'':
            if ( Pool2 && !v15 && v13 == 24 )
            {
              PopShutdownListenerInsertCallback(Pool2);
              goto LABEL_123;
            }
            goto LABEL_307;
          case '(':
            if ( Pool2 && v13 == 4 && !v15 )
            {
              v150 = *(_DWORD *)Pool2 != 0;
              PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v150);
              goto LABEL_123;
            }
            goto LABEL_307;
          case ')':
            if ( Pool2 )
              goto LABEL_307;
            if ( !v15 )
              goto LABEL_307;
            v19 = Length;
            if ( Length != 64 )
              goto LABEL_307;
            PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
            v78 = PopEsState;
            PopReleaseRwLock(&PopEsLock);
            v79 = (char)v154[6];
            if ( v78 == 1 )
              v79 = 1;
            LOBYTE(v154[6]) = v79;
            LOBYTE(v154[7]) = TtmIsEnabled();
            if ( (unsigned __int8)TtmIsEnabled() )
            {
              IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
              v149 = IsAppContainerOrIdentifyLevelContext;
              InputBuffer = v14;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_22;
              PopPowerRequestNotifyTtmSessionInitialized();
            }
            PopAcquirePolicyLock(v80);
            LODWORD(v154[2]) = 0;
            v154[0] = &PopNoMoreInput;
            v154[1] = &PopHiberBootForceMonitorOff;
            LODWORD(v154[3]) = byte_140C3D911 != 0;
            HIDWORD(v154[3]) = dword_140C3D90C;
            HIDWORD(v154[2]) = dword_140C3D92C;
            v154[4] = (HANDLE)qword_140C3D930;
            HIDWORD(v154[6]) = HIDWORD(qword_140C3D938);
            v154[5] = (HANDLE)__PAIR64__(dword_140C3D940, qword_140C3D938);
            BYTE1(v154[6]) = PopLidOpened;
            _m_prefetchw(&PopLidStateIsReliable);
            BYTE1(v154[7]) = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
            Src = v154;
            Length_4 = 64;
            v81 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", v81);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
            PopReleasePolicyLock();
            Pool2 = v148;
            goto LABEL_19;
        }
        v56 = (unsigned int)(v8 - 42);
        if ( (_DWORD)v8 != 42 )
          goto LABEL_232;
        if ( !Pool2 || v13 != 16 || v15 )
          goto LABEL_307;
        if ( !*((_BYTE *)Pool2 + 13) || !*((_BYTE *)Pool2 + 12) )
        {
LABEL_191:
          if ( *((_BYTE *)Pool2 + 14) )
          {
            if ( *((_BYTE *)Pool2 + 12) )
              ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)Pool2 + 4, 4u, 0LL, 0LL, 0, 0);
            if ( *((_BYTE *)Pool2 + 14) )
              PopDiagTraceSessionDisplayStateChange(
                *((_DWORD *)Pool2 + 1) == 0,
                *(_DWORD *)Pool2,
                *((unsigned __int8 *)Pool2 + 12),
                *((_DWORD *)Pool2 + 2));
          }
          goto LABEL_123;
        }
        if ( PopPlatformAoAc && !PopConsoleDisplayState )
        {
          if ( *((_DWORD *)Pool2 + 1) != 2 )
          {
LABEL_188:
            LOBYTE(v56) = *((_BYTE *)Pool2 + 15);
            PopProcessSessionDisplayStateChange(v56, *((unsigned int *)Pool2 + 2));
LABEL_189:
            PopSetDisplayStatus(*((unsigned int *)Pool2 + 1));
            PopUpdateConsoleDisplayState(*((unsigned int *)Pool2 + 1));
            if ( *((_DWORD *)Pool2 + 1) == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_191;
          }
          DbgkWerCaptureLiveKernelDump(
            (unsigned int)L"InvalidDisplayStateTransition",
            160,
            2049,
            *((_DWORD *)Pool2 + 2),
            *(unsigned int *)Pool2,
            0LL,
            0LL,
            0LL,
            0);
        }
        if ( *((_DWORD *)Pool2 + 1) == 2 )
          goto LABEL_189;
        goto LABEL_188;
      }
      v65 = v8 - 45;
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( !Pool2 )
            goto LABEL_307;
          if ( v13 < 2 )
            goto LABEL_307;
          if ( !v15 )
            goto LABEL_307;
          v67 = *(_WORD *)Pool2;
          if ( v67 >= KeQueryActiveGroupCount() )
            goto LABEL_307;
          v69 = PopProcessorInformation(v154, v68, v67, &Length_4);
          goto LABEL_251;
        }
        v114 = v66 - 1;
        if ( !v114 )
        {
          if ( !Pool2 || v13 != 16 )
            goto LABEL_307;
          v117 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v117;
          if ( v117 >= 0 )
            goto LABEL_123;
          InputBuffer = v14;
          if ( v117 == -1073741536 )
            goto LABEL_123;
          goto LABEL_22;
        }
        v115 = v114 - 1;
        if ( v115 )
        {
LABEL_563:
          if ( v115 != 1 )
            goto LABEL_307;
          goto LABEL_564;
        }
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_425;
        if ( !Pool2 || v15 )
          goto LABEL_307;
        if ( v13 == 16 )
        {
          v116 = 0LL;
LABEL_474:
          WakeSource = PpmParkApplyForcedMask(Pool2, v116);
          goto LABEL_443;
        }
        if ( v13 == 24 )
        {
          v116 = Pool2 + 2;
          goto LABEL_474;
        }
        if ( v13 != 2 )
          goto LABEL_444;
        WakeSource = PpmParkClearForcedMask(Pool2);
        goto LABEL_443;
      }
      if ( Pool2 || !v15 )
        goto LABEL_307;
      WakeTimerList = PopGetPowerRequestListInfo(&Src, &Length_4);
    }
    IsAppContainerOrIdentifyLevelContext = WakeTimerList;
    InputBuffer = v14;
    if ( WakeTimerList < 0 )
      goto LABEL_22;
    v143 = 1;
    goto LABEL_123;
  }
  if ( (int)v8 <= 74 )
  {
    if ( (_DWORD)v8 == 74 )
    {
      if ( PreviousMode )
        goto LABEL_425;
      if ( !Pool2 || v13 != 16 || v15 || Length )
        goto LABEL_307;
      SettingValue = PopPdcCsDeviceNotification(Pool2);
      goto LABEL_97;
    }
    if ( (int)v8 <= 62 )
    {
      if ( (_DWORD)v8 == 62 )
      {
        if ( Pool2 )
        {
          if ( v13 == 40 )
          {
            if ( v15 )
            {
              v19 = Length;
              if ( Length == 16 )
              {
                v83 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                PopSessionConnectionChange(v83, v148, v15);
                v85 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v148;
                if ( qword_140C6B028 )
                {
                  LOBYTE(v84) = v148[1];
                  LOBYTE(v86) = *v148;
                  qword_140C6B028(v85, v84, v86);
                }
                goto LABEL_19;
              }
            }
          }
        }
        goto LABEL_307;
      }
      if ( (int)v8 > 56 )
      {
        v34 = v8 - 57;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v49 = v35 - 1;
            if ( v49 )
            {
              v126 = v49 - 1;
              if ( v126 )
              {
                if ( v126 == 1 )
                {
                  if ( Pool2 )
                  {
                    if ( v13 == 16 )
                    {
                      if ( v15 )
                      {
                        v19 = Length;
                        if ( Length == 8 )
                          goto LABEL_19;
                      }
                    }
                  }
                }
              }
              else if ( Pool2 && !v15 )
              {
                if ( v13 < 8 )
                  goto LABEL_358;
                PopEnforceResiliencyScenarios(Pool2);
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            if ( !Pool2 || !v15 )
              goto LABEL_307;
            if ( v13 != 16 || Length < 4 )
              goto LABEL_358;
            SettingValue = PopGetSettingValue(Pool2, v15, Length);
          }
          else
          {
            if ( !v15 )
              goto LABEL_307;
            if ( v14 && v13 != 20 || Length != 8 )
              goto LABEL_358;
            SettingValue = PopGetSettingNotificationName((__int64)Pool2, v15);
          }
          goto LABEL_97;
        }
        if ( !ExVerifySuite(PhoneNT) )
          goto LABEL_564;
        if ( !Pool2 || v13 != 1 || v15 )
          goto LABEL_307;
        LOBYTE(v127) = *(_BYTE *)Pool2;
        IsAppContainerOrIdentifyLevelContext = PopUserPresentOverride(v127);
        v95 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_531:
        if ( v95 )
          goto LABEL_21;
        goto LABEL_123;
      }
      if ( (_DWORD)v8 == 56 )
      {
        if ( Pool2 && v15 )
        {
          if ( v13 != 8 )
            goto LABEL_358;
          v19 = Length;
          if ( Length != 4 )
            goto LABEL_358;
          IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                                   *(_DWORD *)Pool2,
                                                   *((_DWORD *)Pool2 + 1),
                                                   (unsigned int *)v154);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_21;
          Src = v154;
          Length_4 = Length;
          goto LABEL_19;
        }
        goto LABEL_307;
      }
      v119 = v8 - 51;
      if ( !v119 )
      {
        if ( !Pool2 || !v15 )
          goto LABEL_307;
        if ( v13 < 4 )
          goto LABEL_358;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v123);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(unsigned int *)Pool2, &Size[1]);
        PopReleasePolicyLock();
        v124 = 5LL;
LABEL_507:
        PopReleaseTransitionLock(v124);
        InputBuffer = v14;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_22;
        v63 = (__int64 *)&Size[1];
LABEL_238:
        Src = v63;
        Length_4 = 8;
        goto LABEL_123;
      }
      v120 = v119 - 1;
      if ( v120 )
      {
        v121 = v120 - 1;
        if ( v121 )
        {
          v122 = v121 - 1;
          if ( v122 )
          {
            if ( v122 != 1 )
              goto LABEL_307;
            if ( !(_BYTE)KdDebuggerEnabled )
              goto LABEL_425;
            if ( !Pool2 || v15 )
              goto LABEL_307;
            if ( v13 == 8 )
            {
              WakeSource = PpmSetSimulatedIdle((__int64)Pool2);
              goto LABEL_443;
            }
            if ( v13 == 4 )
            {
              WakeSource = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)Pool2);
              goto LABEL_443;
            }
LABEL_444:
            IsAppContainerOrIdentifyLevelContext = -1073741811;
            goto LABEL_445;
          }
        }
      }
LABEL_564:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_21;
    }
    if ( (_DWORD)v8 == 68 )
    {
      if ( !Pool2 || v13 != 8 || v15 || Length )
        goto LABEL_307;
      SettingValue = PopMonitorInvocation(Pool2);
      goto LABEL_97;
    }
    if ( (int)v8 <= 68 )
    {
      v50 = v8 - 63;
      if ( !v50 )
      {
        if ( Pool2 || v15 )
          goto LABEL_307;
        v92 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v92);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v92);
        if ( (unsigned __int8)TtmIsEnabled() )
        {
          PopPowerRequestNotifyTtmSessionUninitialized();
          TtmCleanupCurrentSession();
        }
        goto LABEL_173;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        if ( Pool2 && v13 == 8 && !v15 )
        {
          v91 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          Pool2 = v148;
          PopSessionWinlogonNotification(v91, (__int64)v148);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_210;
        if ( Pool2 || !v15 )
          goto LABEL_307;
        PopFilterCapabilities(&PopCapabilities, v154);
        if ( BYTE2(v154[2]) )
          PopReadHiberbootPolicy((char *)&v154[2] + 2);
        v55 = (HANDLE *)((char *)&v154[2] + 2);
LABEL_164:
        Src = v55;
        Length_4 = 1;
        goto LABEL_123;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        if ( Pool2 || !v15 )
          goto LABEL_307;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
LABEL_163:
        LOBYTE(v154[0]) = IsDevicePotentialDripsConstraint;
        v55 = v154;
        goto LABEL_164;
      }
      if ( v53 != 1 || !Pool2 || v13 != 216 || v15 && Length != 160 )
        goto LABEL_307;
      SettingValue = PopPdcInvocation(Pool2, v15);
LABEL_97:
      IsAppContainerOrIdentifyLevelContext = SettingValue;
      goto LABEL_21;
    }
    switch ( (_DWORD)v8 )
    {
      case 'E':
        if ( !Pool2 && !v15 )
        {
          IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings((unsigned int)(v8 - 69));
          byte_140C3DAD4 = PopPlatformAoAc;
          goto LABEL_21;
        }
        goto LABEL_307;
      case 'F':
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_123;
      case 'G':
        goto LABEL_210;
    }
    if ( (_DWORD)v8 != 72 )
      goto LABEL_542;
LABEL_232:
    if ( !Pool2 || !v15 )
      goto LABEL_307;
    if ( v13 != 40 || Length != 8 )
      goto LABEL_358;
    IsAppContainerOrIdentifyLevelContext = PopPowerRequestCreateUserModeRequest(
                                             (unsigned __int64)Pool2,
                                             (_DWORD)v8 == 72,
                                             v154);
    InputBuffer = v14;
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_22;
    v63 = (__int64 *)v154;
    goto LABEL_238;
  }
  if ( (int)v8 <= 86 )
  {
    if ( (_DWORD)v8 == 86 )
    {
      if ( !Pool2 || !v15 )
        goto LABEL_307;
      IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2, v13, 0LL);
      InputBuffer = v14;
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, v154);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          Src = v154;
          Length_4 = 52;
          goto LABEL_123;
        }
      }
      goto LABEL_22;
    }
    if ( (int)v8 <= 80 )
    {
      if ( (_DWORD)v8 == 80 )
        goto LABEL_564;
      v41 = v8 - 75;
      if ( !v41 )
      {
        if ( Pool2 || !v15 )
          goto LABEL_307;
        LODWORD(v154[0]) = PopCapturePlatformRole();
        goto LABEL_122;
      }
      v129 = v41 - 1;
      if ( v129 )
      {
        v130 = v129 - 1;
        if ( v130 )
        {
          v115 = v130 - 1;
          if ( !v115 )
          {
            if ( PreviousMode == 1 )
            {
              if ( v15 )
                goto LABEL_307;
              v19 = Length;
              if ( Length )
                goto LABEL_307;
              if ( Pool2 )
              {
                if ( v13 != 4 )
                  goto LABEL_307;
                PpmSetExitLatencySamplingPercentage((int *)Pool2);
              }
              else
              {
                PpmClearExitLatencySamplingPercentage();
              }
LABEL_19:
              if ( !Src || !v15 )
                goto LABEL_20;
              if ( v19 >= Length_4 )
              {
                memmove(v15, Src, Length_4);
LABEL_20:
                IsAppContainerOrIdentifyLevelContext = 0;
LABEL_21:
                InputBuffer = v14;
                goto LABEL_22;
              }
LABEL_358:
              IsAppContainerOrIdentifyLevelContext = -1073741789;
              goto LABEL_21;
            }
LABEL_425:
            IsAppContainerOrIdentifyLevelContext = -1073741790;
            goto LABEL_21;
          }
          goto LABEL_563;
        }
        if ( Pool2 || v15 )
          goto LABEL_307;
        v131 = PopErrataReportingIncorrectLidState;
        if ( !(unsigned __int8)TtmIsEnabled() )
        {
          v136 = 0;
          if ( !PopLidOpened )
            v136 = PopConsoleExternalDisplayConnected == 0;
          if ( !v136 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v131 )
          {
            LOBYTE(v134) = v136;
            PopDiagTraceDisplayBurstWin32kCallout(v133, v132, v134);
          }
          goto LABEL_123;
        }
        v135 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( v135 != -1 )
          TtmNotifySessionDisplayBurst(v135, 6LL);
LABEL_173:
        Pool2 = v148;
        goto LABEL_123;
      }
      if ( Pool2 || !v15 )
        goto LABEL_307;
      LODWORD(v154[0]) = qword_140C3D3E8;
      v154[1] = (HANDLE)qword_140C3D580;
      v154[2] = (HANDLE)qword_140C3D588;
      if ( !PopSleepStats )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        goto LABEL_21;
      }
      v96 = (__int128 *)v154;
LABEL_373:
      Src = v96;
      Length_4 = 24;
      goto LABEL_123;
    }
    v60 = v8 - 81;
    if ( !v60 )
      goto LABEL_564;
    v61 = v60 - 1;
    if ( !v61 )
      goto LABEL_564;
    v62 = v61 - 1;
    if ( v62 )
    {
      v137 = v62 - 1;
      if ( v137 )
      {
        if ( v137 == 1 )
        {
          v138 = *((_DWORD *)Pool2 + 2);
          v139 = (_DWORD *)*Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            PopPowerRequestReferenceAcquire(v139, v138);
          else
            PopPowerRequestReferenceRelease(v139, v138);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      if ( !Pool2 || v15 )
        goto LABEL_307;
      if ( v13 < 0x10 || v13 < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
        goto LABEL_358;
      v57 = PopThermalProcessUsermodeEvent(Pool2);
      goto LABEL_200;
    }
    if ( Pool2 || !v15 )
      goto LABEL_307;
    PopCurrentPowerStatePrecise(v154, 0LL);
LABEL_114:
    Src = v154;
    Length_4 = 32;
    goto LABEL_123;
  }
  if ( (int)v8 <= 92 )
  {
    if ( (_DWORD)v8 == 92 )
    {
      if ( !Pool2 || !v15 )
        goto LABEL_307;
      if ( v13 != 12 )
        goto LABEL_358;
      v19 = Length;
      if ( Length != 8 )
        goto LABEL_358;
      IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerCreate(Pool2, v154);
      InputBuffer = v14;
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        Src = v154;
        Length_4 = Length;
        goto LABEL_19;
      }
      goto LABEL_22;
    }
    if ( (_DWORD)v8 == 87 )
    {
      if ( Pool2 )
      {
        if ( v13 >= 8 )
        {
          v43 = *(_DWORD *)Pool2;
          if ( (unsigned int)(*(_DWORD *)Pool2 - 92) > 0xFA3 && v43 < 4107 )
          {
            if ( (unsigned int)(v43 - 4096) <= 0xA )
            {
              if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
                && !PopCapabilityCheck(L"terminalPowerManagement") )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741727;
                goto LABEL_21;
              }
              v19 = Length;
              v44 = TtmDispatchApi(
                      v43,
                      (_DWORD)Pool2,
                      v13,
                      (_DWORD)v15,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v143);
            }
            else
            {
              v19 = Length;
              v44 = PopPowerInformationInternal(
                      v43,
                      *((_DWORD *)Pool2 + 1),
                      (_DWORD)Pool2,
                      v13,
                      (__int64)v15,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v143);
            }
            IsAppContainerOrIdentifyLevelContext = v44;
            v22 = v44 < 0;
            goto LABEL_18;
          }
        }
      }
      goto LABEL_307;
    }
    if ( (_DWORD)v8 != 88 )
    {
      if ( (_DWORD)v8 != 89 )
      {
        if ( (_DWORD)v8 == 90 )
        {
          if ( Pool2 && v13 >= 4 && !v15 )
          {
            PopUpdatePowerButtonHoldState(*(_DWORD *)Pool2 != 0);
            goto LABEL_123;
          }
          goto LABEL_307;
        }
        if ( !PopPlatformAoAc )
        {
LABEL_210:
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          goto LABEL_21;
        }
        if ( !Pool2 || v13 != 336 || !v15 )
          goto LABEL_307;
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(Pool2);
        goto LABEL_163;
      }
      if ( !Pool2 || !v15 )
        goto LABEL_307;
      if ( v13 < 4 )
        goto LABEL_358;
      PopAcquireTransitionLock(6LL);
      PopAcquirePolicyLock(v125);
      IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(unsigned int *)Pool2, &Size[1]);
      PopReleasePolicyLock();
      v124 = 6LL;
      goto LABEL_507;
    }
LABEL_542:
    if ( !Pool2 && !v15 )
    {
      v128 = 23LL;
      if ( (_DWORD)v8 != 88 )
        v128 = 11LL;
      PopScreenOff(v128);
      goto LABEL_20;
    }
    goto LABEL_307;
  }
  v17 = v8 - 93;
  if ( !v17 )
  {
    if ( Pool2 && v15 )
    {
      if ( v13 != 8 )
        goto LABEL_358;
      v19 = Length;
      if ( Length < 0xC )
        goto LABEL_358;
      v20 = PopEtEnergyTrackerQuery(*Pool2, v15, Length);
LABEL_17:
      IsAppContainerOrIdentifyLevelContext = v20;
      v22 = v20 < 0;
LABEL_18:
      InputBuffer = v14;
      if ( v22 )
        goto LABEL_22;
      goto LABEL_19;
    }
    goto LABEL_307;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( Pool2 )
    {
      if ( !v15 )
      {
        v19 = Length;
        if ( !Length )
        {
          if ( v13 != 32 )
            goto LABEL_358;
          LOBYTE(v9) = PreviousMode;
          v20 = PopBlackBoxUpdate(Pool2, v9);
          goto LABEL_17;
        }
      }
    }
    goto LABEL_307;
  }
  v64 = v18 - 1;
  if ( !v64 )
  {
    if ( Pool2 && v13 == 1 && !v15 )
    {
      ExNotifyCallback(PipCslCallbackObject, Pool2, 0LL);
      goto LABEL_123;
    }
LABEL_307:
    InputBuffer = v14;
LABEL_626:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    goto LABEL_22;
  }
  v140 = v64 - 1;
  if ( !v140 )
  {
    if ( !Pool2 || v15 )
      goto LABEL_307;
    if ( !v13 )
      goto LABEL_358;
    LOBYTE(v11) = *(_BYTE *)Pool2;
    v57 = PopSendSuspendResumeNotifications(v11);
    goto LABEL_200;
  }
  if ( v140 != 1 )
    goto LABEL_307;
  if ( !Pool2 )
    goto LABEL_307;
  if ( !v13 )
    goto LABEL_307;
  if ( !v15 )
    goto LABEL_307;
  v19 = Length;
  if ( !Length )
    goto LABEL_307;
  if ( v13 < 0x20 || Length < 0x10 )
    goto LABEL_358;
  IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, v154);
  InputBuffer = v14;
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    Src = v154;
    Length_4 = 16;
    goto LABEL_19;
  }
LABEL_22:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v143 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v146 )
    PopReleasePolicyLock();
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (_QWORD *)v155 )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
