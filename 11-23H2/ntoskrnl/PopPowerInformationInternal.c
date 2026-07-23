/*
 * XREFs of PopPowerInformationInternal @ 0x1407ED33C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B114 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x14022BFF0 (RtlStringCbLengthW.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E9EC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028EAD8 (PopDeepSleepSetDisengageReason.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 *     PoLatencySensitivityHint @ 0x14036DA00 (PoLatencySensitivityHint.c)
 *     PsGetProcessSessionIdEx @ 0x14036FBA0 (PsGetProcessSessionIdEx.c)
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     PopSetWatchdog @ 0x14037024C (PopSetWatchdog.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1403A3A70 (SSHSupportQueryIsLibraryEnabled.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1403AC530 (PoDirectedDripsSetDeviceFlags.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1403D6970 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopGetEnergyEstimationInfo @ 0x140583F34 (PopGetEnergyEstimationInfo.c)
 *     PpmInternalPlatformIdleVeto @ 0x140585E04 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x140585E58 (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x140587330 (PoDirectedDripsClearDeviceFlags.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140587714 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopFxClearDeviceConstraints @ 0x140589770 (PopFxClearDeviceConstraints.c)
 *     PpmPerfGetVmPerfConfig @ 0x14058D614 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x14058D814 (PpmPerfGetVmPerfSupport.c)
 *     PopShutdownListenerRemoveCallback @ 0x140598E98 (PopShutdownListenerRemoveCallback.c)
 *     PopPlRegisterPowerPlane @ 0x1405A1D84 (PopPlRegisterPowerPlane.c)
 *     PoUserShutdownCancelled @ 0x140682290 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1406822C0 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6144 (PopEvaluateGlobalUserStatus.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6540 (PpmPerfUpdateDomainPolicy.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     PspIsContextAdmin @ 0x1407D0548 (PspIsContextAdmin.c)
 *     PopUpdateExternalDisplayState @ 0x1407EAA7C (PopUpdateExternalDisplayState.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBD08 (PopIsRunningAsLocalSystem.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EC070 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 *     PopBootStatGet @ 0x1407EC7B8 (PopBootStatGet.c)
 *     RtlIsMultiSessionSku @ 0x1407ECFF0 (RtlIsMultiSessionSku.c)
 *     PopBootStatSet @ 0x1407EED48 (PopBootStatSet.c)
 *     PopAcquireTransitionLock @ 0x14080190C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140801968 (PopReleaseTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x140825214 (PopBroadcastSessionInfo.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1408400F8 (PpmPerfGetFrequencyBandStats.c)
 *     PopBootStatCheckIntegrity @ 0x14084D83C (PopBootStatCheckIntegrity.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084EA60 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopFanReadFanNoiseInfo @ 0x1408598A0 (PopFanReadFanNoiseInfo.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085EA38 (PpmIdleGetConcurrencyStats.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x1408629F8 (PpmPerfQueryProcMeasurementValues.c)
 *     PopFxPlatformRegisterInterface @ 0x1408640C8 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1408653B8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopEsQueueStateEvaluation @ 0x140870A60 (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x140873AD4 (PopUpdateConsoleDisplayState.c)
 *     PopSetDisplayStatus @ 0x1408853A8 (PopSetDisplayStatus.c)
 *     PopCheckTestsigningEnabled @ 0x140980860 (PopCheckTestsigningEnabled.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140981A14 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopManageTransitionRecordRequest @ 0x140984698 (PopManageTransitionRecordRequest.c)
 *     PopS0LowPowerIdleInfo @ 0x140984730 (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x140986B18 (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x140988D2C (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x140988F88 (PopReadResumeContext.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1409917FC (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993DB0 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopNetUpdateStandbyRequest @ 0x140996BAC (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140996E88 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatRestoreDefaults @ 0x1409972B0 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140997390 (PopBootStatUnlock.c)
 *     PopScreenOff @ 0x140998434 (PopScreenOff.c)
 *     PopScreenOn @ 0x140998480 (PopScreenOn.c)
 *     PopSuspendResumeInvocation @ 0x1409984D0 (PopSuspendResumeInvocation.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099BAC4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099BB98 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C16C (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x14099FB80 (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4958 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A49E8 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BC1B0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  signed int v9; // ebx
  __m256i *v10; // rdi
  __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int PagesFromHiberFile; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v19; // rcx
  unsigned __int64 v20; // rax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  char *v25; // rbx
  char PowerButtonBugcheckEnabled; // al
  BOOLEAN *p_IsMember; // rdx
  const WNF_STATE_NAME *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  ULONG v32; // edx
  void *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  unsigned int v39; // r14d
  __int64 v40; // rax
  _OWORD *v41; // rax
  __int128 v42; // xmm1
  __int64 v43; // rsi
  int v44; // ecx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  int v49; // ebx
  int v50; // ebx
  int v51; // ebx
  int v52; // ebx
  int v53; // ecx
  bool v54; // zf
  __int32 v55; // ecx
  _OWORD *v56; // rax
  char **v57; // rbx
  char *v58; // rax
  _OWORD *v59; // rax
  __int64 v60; // rcx
  unsigned __int32 v61; // eax
  unsigned __int64 v62; // rcx
  int v63; // r14d
  _DWORD *v64; // rcx
  char v65; // bl
  int v66; // eax
  _BYTE *v67; // rax
  int v68; // ebx
  int v69; // ebx
  int v70; // ebx
  int v71; // ebx
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  int v76; // ecx
  __int64 v77; // rax
  _PROCESSOR_NUMBER *v78; // rcx
  int VmPerfConfig; // eax
  char *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // ebx
  int v88; // ebx
  int v89; // ebx
  char v90; // bl
  __int64 v91; // rcx
  unsigned __int64 *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rbx
  _DWORD *v95; // rcx
  __int64 v96; // rcx
  unsigned __int64 v97; // rbx
  unsigned __int64 *v98; // rax
  __int64 v99; // rax
  int FanNoiseInfo; // eax
  unsigned int v101; // ebx
  unsigned __int32 v102; // esi
  unsigned int v103; // edi
  _DWORD *v104; // rcx
  _DWORD *v105; // rax
  _DWORD *v106; // rbx
  __int64 *i; // rax
  __int64 v108; // rcx
  int v109; // eax
  __int64 Pool2; // rax
  int v111; // ebx
  __int8 v112; // al
  _KPROCESS *Process; // rcx
  unsigned int ProcessSessionId; // eax
  int v115; // ebx
  int v116; // ebx
  int v117; // ebx
  int v118; // ebx
  int v119; // ebx
  int v120; // ebx
  int v121; // ebx
  int v122; // ebx
  _DWORD *v123; // rax
  __int64 v124; // rax
  _DWORD *v125; // rax
  __int64 v126; // rcx
  BOOLEAN IsMember; // [rsp+40h] [rbp-69h] BYREF
  BOOLEAN HasCapability; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v130; // [rsp+44h] [rbp-65h] BYREF
  __int64 v131; // [rsp+48h] [rbp-61h] BYREF
  int v132; // [rsp+50h] [rbp-59h] BYREF
  int v133; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h] BYREF
  __int64 v135; // [rsp+60h] [rbp-49h] BYREF
  __int64 v136; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+70h] [rbp-39h] BYREF
  __int64 v138; // [rsp+80h] [rbp-29h]
  _DWORD v139[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  CapabilityName = 0LL;
  v11 = a4;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v131) = a2;
  HasCapability = 0;
  IsMember = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v132 = 0;
  v135 = 0LL;
  v136 = 0LL;
  v133 = 0;
  v138 = 0LL;
  PreviousMode = a1;
  if ( (_BYTE)a1 )
  {
    if ( (unsigned int)v9 <= 0x17 )
    {
      v12 = 12058885;
      if ( _bittest(&v12, v9) )
        return (unsigned int)-1073741790;
    }
    v13 = (unsigned int)(v9 - 26);
    if ( (unsigned int)v13 <= 0x3D )
    {
      a1 = 0x208002A38000C005LL;
      if ( _bittest64(&a1, v13) )
        return (unsigned int)-1073741790;
    }
    v14 = (unsigned int)(v9 - 29);
    if ( (unsigned int)v14 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v14) )
      {
        if ( !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v9 - 82) <= 1 && !(unsigned __int8)PopCheckTestsigningEnabled() )
      return (unsigned int)-1073741790;
    if ( (v16 = (unsigned int)(v9 - 35), (unsigned int)v16 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v16))
      || v9 == 24 )
    {
      if ( !PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
    }
    switch ( v9 )
    {
      case 80:
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return (unsigned int)-1073741727;
LABEL_401:
        if ( (_DWORD)v11 == 8 && v10 && !a6 && !a5 )
        {
          qword_140D532A8 = PopAdaptiveGetSystemInitiatedRebootTargetState(v17, a2, a3, 0LL);
          byte_140D532A0 = 1;
          return 0;
        }
        return (unsigned int)-1073741811;
      case 61:
        if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
LABEL_336:
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741811;
        if ( a5 )
        {
          PopAcquireTransitionLock(8LL);
          PagesFromHiberFile = PopReadPagesFromHiberFile(v10->m256i_u32[2], 1LL, a7);
          PopReleaseTransitionLock(8LL);
          v29 = 0;
          if ( PagesFromHiberFile < 0 )
          {
            *a7 = 0LL;
            return (unsigned int)PagesFromHiberFile;
          }
          *a8 = 4096;
          *a9 = 1;
          return v29;
        }
        return (unsigned int)-1073741789;
      case 45:
        PagesFromHiberFile = 0;
        if ( !PopIsRunningAsLocalSystem() && (!(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
          return (unsigned int)-1073741790;
        goto LABEL_261;
      case 25:
        v18 = 0x7FFFLL;
        v19 = L"systemManagement";
        while ( *v19 )
        {
          ++v19;
          if ( !--v18 )
            goto LABEL_34;
        }
        CapabilityName.Buffer = L"systemManagement";
        CapabilityName.Length = 2 * (0x7FFF - v18);
        CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_34:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !HasCapability )
          return (unsigned int)-1073741790;
LABEL_36:
        if ( (unsigned int)v11 >= 0xC )
        {
          if ( !a5 )
          {
            if ( v10->m256i_i8[8] )
              PopScreenOn(a1, a2, a3, 0LL);
            else
              PopScreenOff(30LL);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
    }
    a2 = (unsigned int)v131;
    LOBYTE(a1) = PreviousMode;
  }
  else
  {
    v20 = (unsigned int)(v9 - 24);
    if ( (unsigned int)v20 <= 0x3B )
    {
      a3 = 0xD00811169F09201LL;
      if ( _bittest64(&a3, v20) )
        return (unsigned int)-1073741637;
    }
    if ( v9 == 7 || v9 == 5 )
      return (unsigned int)-1073741637;
  }
  if ( v9 > 49 )
  {
    if ( v9 > 72 )
    {
      if ( v9 <= 82 )
      {
        switch ( v9 )
        {
          case 'R':
            if ( (_DWORD)v11 != 12 || !v10 || a6 || a5 )
              return (unsigned int)-1073741811;
            v131 = 0LL;
            LODWORD(v131) = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v112 = v10->m256i_i8[8];
            BYTE4(v131) = 1;
            Process = KeGetCurrentThread()->ApcState.Process;
            BYTE5(v131) = v112;
            ProcessSessionId = PsGetProcessSessionIdEx((__int64)Process);
            PopSessionWinlogonNotification(ProcessSessionId, (__int64)&v131);
            break;
          case 'I':
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            v111 = v10->m256i_i32[2];
            PopAcquireAdaptiveLock(1);
            if ( PopHostGlobalUserPresenceState != v111 )
            {
              PopHostGlobalUserPresenceState = v111;
              PopEvaluateGlobalUserStatus();
            }
            PopReleaseAdaptiveLock();
            break;
          case 'J':
          case 'K':
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            if ( v9 == 74 )
              v39 = 296;
            else
              v39 = 592;
            Pool2 = ExAllocatePool2(256LL, v39, 544040269LL);
            v35 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats((unsigned int)v9, v10->m256i_u16[4], Pool2);
            if ( PagesFromHiberFile < 0 )
            {
LABEL_91:
              v32 = 544040269;
LABEL_92:
              v33 = (void *)v35;
              goto LABEL_83;
            }
            *a7 = v35;
LABEL_106:
            *a8 = v39;
            goto LABEL_86;
          case 'L':
          case 'M':
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            PagesFromHiberFile = PpmIdleGetConcurrencyStats((unsigned int)v9, v10->m256i_u16[4], &v136, &v133);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v136;
            *a8 = v133;
            goto LABEL_86;
          case 'N':
            if ( !a5 )
              return (unsigned int)-1073741811;
            v106 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v106 )
              return (unsigned int)-1073741670;
            for ( i = (__int64 *)PpmPerfDomainHead; ; i = (__int64 *)*i )
            {
              if ( i == &PpmPerfDomainHead )
              {
                v109 = 0;
                goto LABEL_422;
              }
              v108 = i[52];
              if ( v108 )
                break;
            }
            v109 = ((__int64 (__fastcall *)(__int64, __int64 *))i[52])(v108, &PpmPerfDomainHead);
LABEL_422:
            *v106 = v109;
            *a7 = (__int64)v106;
            *a8 = 4;
            goto LABEL_69;
          case 'O':
            if ( !v10 || (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v102 = v10->m256i_u32[2];
            v130 = 0;
            PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v102, &v130, 0LL, 0LL);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            v103 = 24 * v130 + 8;
            if ( a6 != 4 )
            {
              if ( a6 < v103 )
                return (unsigned int)-1073741789;
              v105 = (_DWORD *)ExAllocatePool2(64LL, v103, 544040269LL);
              if ( !v105 )
                return (unsigned int)-1073741670;
              *a8 = v103;
              *a9 = 1;
              *a7 = (__int64)v105;
              *v105 = v130;
              return (unsigned int)PpmPerfQueryProcMeasurementValues(v102, &v130, v105 + 2, (unsigned int)(24 * v130));
            }
            v104 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v104 )
              return (unsigned int)-1073741670;
            *v104 = v130;
            *a7 = (__int64)v104;
            *a8 = 4;
LABEL_86:
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          default:
            v17 = (unsigned int)(v9 - 80);
            if ( v9 == 80 )
              goto LABEL_401;
            if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
              return (unsigned int)-1073741811;
            v101 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopAcquireAdaptiveLock(1);
            PopAdaptiveGetSessionStateUnsafe(v101, &v10->m256i_i64[1], a5);
            PopReleaseAdaptiveLock();
            return 0;
        }
        return 0;
      }
      v115 = v9 - 83;
      if ( !v115 )
      {
        if ( (_DWORD)v11 != 16 || !v10 || a6 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(v10);
      }
      v116 = v115 - 1;
      if ( v116 )
      {
        v117 = v116 - 1;
        if ( v117 )
        {
          v118 = v117 - 1;
          if ( !v118 )
          {
            if ( (unsigned int)v11 < 8 || !a5 )
              return (unsigned int)-1073741789;
            v125 = (_DWORD *)ExAllocatePool2(256LL, 8LL, 544040269LL);
            if ( !v125 )
              return (unsigned int)-1073741670;
            *v125 = ExBootAppErrorDiagCode;
            v125[1] = ExBootAppFailureStatus;
            *a7 = (__int64)v125;
            *a8 = 8;
            goto LABEL_208;
          }
          v119 = v118 - 1;
          if ( !v119 )
          {
            if ( !v10 || (_DWORD)v11 != 24 || a5 )
              return (unsigned int)-1073741811;
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
          }
          v120 = v119 - 1;
          if ( !v120 )
            return (unsigned int)PopManageTransitionRecordRequest(a1, v10, (unsigned int)v11);
          v121 = v120 - 1;
          if ( !v121 )
          {
            if ( !a5 || a6 != 20 )
              return (unsigned int)-1073741789;
            PopAcquirePolicyLock(a1);
            PagesFromHiberFile = 0;
            if ( byte_140C3DA13 )
            {
              v124 = ExAllocatePool2(256LL, 20LL, 544040269LL);
              if ( v124 )
              {
                *(_OWORD *)v124 = PopAcpiTimeAndAlarmCapabilities;
                *(_DWORD *)(v124 + 16) = dword_140C3A4D0;
                *a7 = v124;
                *a8 = 20;
                *a9 = 1;
              }
              else
              {
                PagesFromHiberFile = -1073741670;
              }
            }
            else
            {
              PagesFromHiberFile = -1073741637;
            }
            goto LABEL_125;
          }
          v122 = v121 - 1;
          if ( !v122 )
          {
            if ( !v10 || (unsigned int)v11 < 0x14 || a5 && a6 )
              return (unsigned int)-1073741811;
            return (unsigned int)PopSuspendResumeInvocation(v10);
          }
          if ( v122 != 1 )
            return (unsigned int)-1073741811;
          if ( !a5 || a6 < 0x24 )
            return (unsigned int)-1073741789;
          v123 = (_DWORD *)ExAllocatePool2(256LL, 36LL, 544040269LL);
          v31 = (__int64)v123;
          if ( !v123 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopGetEnergyEstimationInfo(v123);
          if ( PagesFromHiberFile >= 0 )
          {
            *a7 = v31;
            PagesFromHiberFile = 0;
            *a8 = 36;
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          }
LABEL_82:
          v32 = 544040269;
          v33 = (void *)v31;
LABEL_83:
          ExFreePoolWithTag(v33, v32);
          return (unsigned int)PagesFromHiberFile;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v39 = 88;
        v31 = ExAllocatePool2(256LL, 88LL, 544040269LL);
        if ( !v31 )
          return (unsigned int)-1073741670;
        v126 = 85LL;
      }
      else
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v39 = 160;
        v31 = ExAllocatePool2(256LL, 160LL, 544040269LL);
        if ( !v31 )
          return (unsigned int)-1073741670;
        v126 = 84LL;
      }
      FanNoiseInfo = PopFanReadFanNoiseInfo(v126, v31, v39);
    }
    else
    {
      if ( v9 != 72 )
      {
        if ( v9 <= 62 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v80 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
            if ( !v80 )
              return (unsigned int)-1073741670;
            v84 = PopDirtyTransitionDiagInfo;
          }
          else
          {
            if ( v9 > 57 )
            {
              v87 = v9 - 58;
              if ( !v87 )
              {
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsSetDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              }
              v88 = v87 - 1;
              if ( !v88 )
              {
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsClearDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              }
              v89 = v88 - 1;
              if ( v89 )
              {
                if ( v89 != 1 )
                  return (unsigned int)-1073741811;
                goto LABEL_336;
              }
              if ( !a5 )
                return (unsigned int)-1073741789;
              PopAcquireTransitionLock(8LL);
              PagesFromHiberFile = PopReadResumeContext(&v132, &v135);
              PopReleaseTransitionLock(8LL);
              if ( PagesFromHiberFile < 0 )
                return (unsigned int)PagesFromHiberFile;
              *a7 = v135;
              *a8 = v132;
LABEL_115:
              *a9 = 1;
              return 0;
            }
            if ( v9 == 57 )
            {
              if ( a5 )
                return (unsigned int)-1073741811;
              return (unsigned int)PopPlRegisterPowerPlane((__int64)v10, v11, a3);
            }
            if ( v9 != 50 )
            {
              if ( v9 == 51 )
              {
                if ( (_DWORD)a2 )
                {
                  if ( (_DWORD)a2 != 1 )
                    return (unsigned int)-1073741811;
                  if ( (unsigned int)v11 < 0x18 )
                    return (unsigned int)-1073741789;
                  v85 = v10->m256i_i64[2];
                  v86 = v10->m256i_i64[1];
                }
                else
                {
                  if ( (unsigned int)v11 < 0x10 )
                    return (unsigned int)-1073741789;
                  v85 = v10->m256i_i64[1];
                  v86 = v85;
                }
                PopWakeAlarmTimeOverrideAc = v86;
                PopWakeAlarmTimeOverrideDc = v85;
                return 0;
              }
              if ( v9 != 53 && v9 != 54 && v9 != 56 )
                return (unsigned int)-1073741811;
              goto LABEL_316;
            }
            if ( !a5 )
              return (unsigned int)-1073741789;
            v80 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
            if ( !v80 )
              return (unsigned int)-1073741670;
            v84 = PopAutoChkCausedReboot;
          }
LABEL_296:
          *v80 = v84;
          *a7 = (__int64)v80;
          *a8 = 1;
LABEL_208:
          *a9 = 1;
          return 0;
        }
        switch ( v9 )
        {
          case '?':
            if ( !a5 )
              return (unsigned int)-1073741811;
            v97 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v97 )
              return (unsigned int)-1073741637;
            v98 = (unsigned __int64 *)ExAllocatePool2(256LL, 8LL, 544040269LL);
            if ( !v98 )
              return (unsigned int)-1073741670;
            *v98 = v97;
            *a7 = (__int64)v98;
            goto LABEL_180;
          case '@':
LABEL_316:
            PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(
                                   v9,
                                   v11,
                                   (_DWORD)v10,
                                   (_DWORD)a8,
                                   (__int64)a7);
            if ( PagesFromHiberFile < 0 || !*a7 )
              return (unsigned int)PagesFromHiberFile;
            goto LABEL_86;
          case 'A':
            if ( (_DWORD)v11 != 16 )
              return (unsigned int)-1073741811;
            v96 = v10->m256i_i64[1];
            if ( !v96 )
              return (unsigned int)-1073741811;
            PagesFromHiberFile = PopFxClearDeviceConstraints(v96);
            v29 = 0;
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            return v29;
          case 'B':
            return (unsigned int)-1073741637;
          case 'C':
            *a8 = 0;
            *a7 = 0LL;
            v95 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v95 )
              return (unsigned int)-1073741670;
            *v95 = PopDisableInboxPepGeneratedConstraintsOverride;
            *a7 = (__int64)v95;
            *a8 = 4;
            return 0;
          case 'D':
            return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        }
        if ( v9 != 69 )
        {
          if ( v9 != 70 )
          {
            if ( (_DWORD)v11 == 12 )
            {
              v90 = v10->m256i_i8[8];
              PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepReliabilityDiagLock);
              if ( PopSleepReliabilityDetailedDiagEnabled != v90 )
              {
                LOBYTE(v91) = v90;
                PopSleepReliabilityDetailedDiagEnabled = v90;
                PopDiagTraceSleepReliabilityDiagConfigUpdate(v91);
              }
              PopReleaseRwLock((__int64 *)&PopSleepReliabilityDiagLock);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v92 = (unsigned __int64 *)ExAllocatePool2(256LL, 8LL, 544040269LL);
          v35 = (__int64)v92;
          if ( !v92 )
            return (unsigned int)-1073741670;
          VmPerfConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v92);
          goto LABEL_282;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v93 = ExAllocatePool2(256LL, 20LL, 544040269LL);
        v94 = v93;
        if ( !v93 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfSupport(v93);
        *a7 = v94;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_69:
        *a9 = 1;
        return 0;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v39 = 2304;
      v99 = ExAllocatePool2(256LL, 2304LL, 544040269LL);
      v31 = v99;
      if ( !v99 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PpmPerfGetFrequencyBandStats(v99);
    }
    PagesFromHiberFile = FanNoiseInfo;
    if ( FanNoiseInfo >= 0 )
    {
LABEL_105:
      *a7 = v31;
      goto LABEL_106;
    }
    goto LABEL_82;
  }
  if ( v9 == 49 )
  {
    if ( !a5 )
      return (unsigned int)-1073741789;
    v25 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
    if ( !v25 )
      return (unsigned int)-1073741670;
    PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_68:
    *v25 = PowerButtonBugcheckEnabled;
    *a7 = (__int64)v25;
    *a8 = 1;
    goto LABEL_69;
  }
  if ( v9 > 29 )
  {
    if ( v9 <= 39 )
    {
      if ( v9 == 39 )
      {
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741811;
        p_IsMember = &IsMember;
        IsMember = v10->m256i_u8[8];
        v28 = (const WNF_STATE_NAME *)&WNF_PO_WAKE_ON_VOICE_STATE;
        return (unsigned int)ZwUpdateWnfStateData(v28, p_IsMember, 1u, 0LL, 0LL, 0, 0);
      }
      if ( v9 == 30 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v67 = (_BYTE *)ExAllocatePool2(256LL, 3LL, 544040269LL);
        if ( !v67 )
          return (unsigned int)-1073741670;
        *v67 = PpmPerfQosSupportedAndConfigured;
        v67[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v67[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a7 = (__int64)v67;
        *a8 = 3;
      }
      else
      {
        v60 = (unsigned int)(v9 - 31);
        if ( v9 == 31 )
          goto LABEL_198;
        v60 = (unsigned int)(v9 - 32);
        if ( v9 == 32 )
          goto LABEL_198;
        if ( v9 == 33 )
          return (unsigned int)-1073741637;
        v60 = (unsigned int)(v9 - 34);
        if ( v9 == 34 )
          goto LABEL_198;
        v60 = (unsigned int)(v9 - 35);
        if ( v9 == 35 )
          goto LABEL_198;
        if ( v9 == 36 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          v65 = v10->m256i_i8[8];
          PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
          PopEsEnabledOnHost = v65;
          PopReleaseRwLock(&PopEsLock);
          PopEsQueueStateEvaluation(0LL);
          return 0;
        }
        v60 = (unsigned int)(v9 - 37);
        if ( v9 != 37 )
        {
LABEL_198:
          if ( (_DWORD)v11 != 24 )
            return (unsigned int)-1073741811;
          if ( a5 )
          {
            v61 = v10->m256i_u32[2];
            if ( !v61 )
              return (unsigned int)-1073741811;
            v62 = 4LL * v61;
            if ( v62 > 0xFFFFFFFF )
              return (unsigned int)-1073741675;
            v63 = 4 * v61;
            v35 = ExAllocatePool2(256LL, (unsigned int)v62, 544040269LL);
            if ( !v35 )
              return (unsigned int)-1073741670;
          }
          else
          {
            v35 = v138;
            v63 = 0;
          }
          switch ( v9 )
          {
            case 31:
              if ( !v10->m256i_i32[2] )
              {
LABEL_217:
                PagesFromHiberFile = -1073741811;
LABEL_231:
                if ( !v35 )
                  return (unsigned int)PagesFromHiberFile;
                v32 = 0;
                goto LABEL_92;
              }
              v66 = PopBootStatGet((__int64)v10, v35);
              break;
            case 32:
              if ( !v10->m256i_i32[2] )
                goto LABEL_217;
              v66 = PopBootStatSet(v10, v35, a3, 0LL);
              break;
            case 34:
              if ( !v10->m256i_i32[2] )
                goto LABEL_217;
              v66 = PopBootStatCheckIntegrity(v10, a2, a3, 0LL);
              break;
            case 35:
              v66 = PopBootStatRestoreDefaults(v60, a2, a3, 0LL);
              break;
            default:
              v66 = PopBootStatUnlock(v60, a2, a3, 0LL);
              break;
          }
          PagesFromHiberFile = v66;
          if ( v66 < 0 )
            goto LABEL_231;
          if ( v35 )
          {
            *a7 = v35;
            *a8 = v63;
            *a9 = 1;
          }
          return 0;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v64 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
        if ( !v64 )
          return (unsigned int)-1073741670;
        *v64 = qword_140C3CD84;
        *a7 = (__int64)v64;
        *a8 = 4;
      }
      goto LABEL_208;
    }
    v68 = v9 - 40;
    if ( !v68 )
    {
      if ( (_DWORD)v11 == 16 && !v10->m256i_i32[2] )
      {
        if ( v10->m256i_i8[12] )
          PopDeepSleepSetDisengageReason(7u);
        else
          PopDeepSleepClearDisengageReason(7u);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v69 = v68 - 1;
    if ( v69 )
    {
      v70 = v69 - 1;
      if ( !v70 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v41 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
        if ( !v41 )
          return (unsigned int)-1073741670;
        *v41 = PopBsdPowerTransitionExtensionAtBoot;
        v42 = xmmword_140C6AE30;
LABEL_114:
        v41[1] = v42;
        *a7 = (__int64)v41;
        *a8 = 32;
        goto LABEL_115;
      }
      v71 = v70 - 1;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( v72 )
        {
          v73 = v72 - 1;
          if ( !v73 )
          {
            PagesFromHiberFile = 0;
LABEL_261:
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            if ( v10->m256i_i8[8] )
              PoUserShutdownInitiated();
            else
              PoUserShutdownCancelled();
            return (unsigned int)PagesFromHiberFile;
          }
          v74 = v73 - 1;
          if ( !v74 )
          {
            if ( (_DWORD)v11 != 32 || a5 )
              return (unsigned int)-1073741811;
            PopPowerRequestNotifyUserSessionAttributed(v10->m256i_u32[6], v10->m256i_i64[1], v10->m256i_i64[2]);
            return 0;
          }
          v75 = v74 - 1;
          if ( v75 )
          {
            if ( v75 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 < 0x10 )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            if ( !v10->m256i_i32[1] )
              return (unsigned int)PpmInternalPlatformIdleVeto(v10->m256i_u32[2], v10->m256i_i8[12]);
          }
          else
          {
            if ( (unsigned int)v11 < 0x14 )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            if ( !v10->m256i_i32[1] )
              return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
          }
          return (unsigned int)-1073741735;
        }
        if ( (unsigned int)v11 < 0x90 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, &IsMember);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !IsMember )
          return (unsigned int)-1073741790;
        if ( !PopPlatformAoAc )
          return (unsigned int)-1073741637;
        PagesFromHiberFile = RtlStringCbLengthW(&v10->m256i_u16[4], 0x80uLL, &pcbLength);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v77 = v10[4].m256i_i64[1];
        if ( pcbLength )
        {
          if ( !v77 )
            return (unsigned int)-1073741811;
        }
        else if ( v77 )
        {
          return (unsigned int)-1073741811;
        }
        PopAcquirePolicyLock(v76);
        PopTimeBrokerExpirationReason = 0;
        PagesFromHiberFile = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, &v10->m256i_u16[4]);
        PopTimeBrokerExpirationDueTime = v10[4].m256i_i64[1];
        goto LABEL_125;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v35 = ExAllocatePool2(256LL, 8LL, 544040269LL);
      if ( !v35 )
        return (unsigned int)-1073741670;
      v78 = (_PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v78 = 0LL;
      VmPerfConfig = PpmPerfGetBrandedFrequency(v78);
LABEL_282:
      PagesFromHiberFile = VmPerfConfig;
      if ( VmPerfConfig >= 0 )
      {
        *a7 = v35;
LABEL_85:
        *a8 = 8;
        goto LABEL_86;
      }
      goto LABEL_91;
    }
    if ( (_DWORD)v11 != 16 )
      return (unsigned int)-1073741811;
    if ( !a5 )
      return (unsigned int)-1073741789;
    v80 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
    if ( !v80 )
      return (unsigned int)-1073741670;
    v81 = v10->m256i_i64[1];
    if ( !v81
      || (v82 = *(_QWORD *)(*(_QWORD *)(v81 + 312) + 40LL)) == 0
      || (v83 = *(_QWORD *)(v82 + 80)) == 0
      || (v54 = *(_QWORD *)(v83 + 64) == 0LL, v84 = 1, v54) )
    {
      v84 = 0;
    }
    goto LABEL_296;
  }
  if ( v9 == 29 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v59 = (_OWORD *)ExAllocatePool2(256LL, 48LL, 544040269LL);
    if ( !v59 )
      return (unsigned int)-1073741670;
    *v59 = PopFirmwareResetReason;
    v59[1] = xmmword_140C6AED8;
    v59[2] = xmmword_140C6AEE8;
    *a7 = (__int64)v59;
    *a8 = 48;
    goto LABEL_115;
  }
  if ( v9 <= 19 )
  {
    if ( v9 != 19 )
    {
      if ( v9 <= 5 )
      {
        if ( v9 == 5 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PoLatencySensitivityHint(v10->m256i_i32[2]);
          return 0;
        }
        if ( v9 )
        {
          v22 = v9 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                if ( v24 != 1 )
                  return (unsigned int)-1073741811;
                if ( (unsigned int)v11 < 8 || !a5 )
                  return (unsigned int)-1073741789;
                v25 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
                if ( !v25 )
                  return (unsigned int)-1073741670;
                if ( !PopPlatformAoAc || (v54 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v54) )
                  PowerButtonBugcheckEnabled = 0;
                goto LABEL_68;
              }
              if ( (unsigned int)v11 < 0x10 )
                return (unsigned int)-1073741789;
              if ( a5 || (PopSimulate & 1) == 0 )
                return (unsigned int)-1073741811;
              PopUpdateSmartUserPresencePredictions(v10->m256i_i64[1], 0LL);
              return 0;
            }
            PopVideoInitialized = 1;
            p_IsMember = (BOOLEAN *)&PopVideoInitialized;
            v28 = &WNF_PO_VIDEO_INITIALIALIZED;
            return (unsigned int)ZwUpdateWnfStateData(v28, p_IsMember, 1u, 0LL, 0LL, 0, 0);
          }
          if ( !a5 )
            return (unsigned int)-1073741789;
          v30 = ExAllocatePool2(256LL, 8LL, 544040269LL);
          v31 = v30;
          if ( !v30 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopS0LowPowerIdleInfo(v30);
          if ( PagesFromHiberFile < 0 )
            goto LABEL_82;
          *a7 = v31;
          goto LABEL_85;
        }
        if ( (unsigned int)v11 < 0x20 || !a5 )
          return (unsigned int)-1073741789;
        v34 = ExAllocatePool2(256LL, 16LL, 544040269LL);
        v35 = v34;
        if ( !v34 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopFxPlatformRegisterInterface(v10, v34);
        if ( PagesFromHiberFile >= 0 )
        {
          *a7 = v35;
          *a8 = 16;
          goto LABEL_86;
        }
        goto LABEL_91;
      }
      v36 = v9 - 6;
      if ( !v36 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v10->m256i_i8[8];
        return (unsigned int)PopNetUpdateStandbyRequest(a1);
      }
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 != 10 )
            return (unsigned int)-1073741811;
          if ( PopPlatformAoAc )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v39 = 1000;
            v40 = ExAllocatePool2(256LL, 1000LL, 544040269LL);
            v31 = v40;
            if ( !v40 )
              return (unsigned int)-1073741670;
            PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo(v40);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            goto LABEL_105;
          }
          return (unsigned int)-1073741637;
        }
        if ( (unsigned int)v11 < 8 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v10->m256i_i8[8];
        return (unsigned int)PopUpdateBackgroundCoolingStatus(a1);
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v41 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
      if ( !v41 )
        return (unsigned int)-1073741670;
      *v41 = PopBsdPowerTransitionAtBoot;
      v42 = xmmword_140C6AE50;
      goto LABEL_114;
    }
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a2) = v10->m256i_i8[12];
    TtmNotifySessionPowerStateChange(v10->m256i_u32[2], a2);
    v43 = v10->m256i_u8[12];
    PopAcquirePolicyLock(v44);
    if ( v10->m256i_i8[13] )
    {
      PopSetDisplayStatus((_BYTE)v43 != 0);
      PopUpdateConsoleDisplayState((_BYTE)v43 != 0);
      if ( (_BYTE)v43 )
        PopPowerAggregatorNotifyDisplayPoweredOn();
    }
    PopDiagTraceSessionDisplayStateChange(
      v10->m256i_i8[12] == 0,
      v10->m256i_i32[2],
      v10->m256i_u8[13],
      v10->m256i_i32[4]);
    PagesFromHiberFile = 0;
LABEL_125:
    PopReleasePolicyLock();
    return (unsigned int)PagesFromHiberFile;
  }
  v45 = v9 - 20;
  if ( !v45 )
  {
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a3) = v10->m256i_i8[16];
    TtmNotifySessionTerminalInput(v10->m256i_u32[2], v10->m256i_u32[3], a3);
    return 0;
  }
  v46 = v45 - 1;
  if ( !v46 )
  {
    if ( (unsigned int)v11 < 0x60 || !v10->m256i_i64[1] && !a5 )
      return (unsigned int)-1073741789;
    if ( v10->m256i_i32[6] == 412 )
    {
      if ( v10[2].m256i_i8[24] || !v10->m256i_i32[4] )
      {
        PopBsdPowerWatchdogArmed = 0;
      }
      else
      {
        PopBsdLastPowerWatchdogStage = v10[1].m256i_i32[0];
        PopBsdPowerWatchdogArmed = 1;
      }
    }
    v57 = 0LL;
    if ( a5 )
    {
      v57 = (char **)ExAllocatePool2(256LL, 8LL, 544040269LL);
      if ( !v57 )
        return (unsigned int)-1073741670;
    }
    v58 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v57 = v58;
    *a7 = (__int64)v57;
LABEL_180:
    *a8 = 8;
    goto LABEL_115;
  }
  v47 = v46 - 1;
  if ( !v47 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v56 = (_OWORD *)ExAllocatePool2(256LL, 64LL, 544040269LL);
    if ( !v56 )
      return (unsigned int)-1073741670;
    *v56 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v56[1] = xmmword_140C6AD90;
    v56[2] = xmmword_140C6ADA0;
    v56[3] = xmmword_140C6ADB0;
    *a7 = (__int64)v56;
    *a8 = 64;
    goto LABEL_115;
  }
  v48 = v47 - 1;
  if ( !v48 )
  {
    if ( (_DWORD)v11 != 12 )
      return (unsigned int)-1073741811;
    LOBYTE(a1) = v10->m256i_i8[8];
    PopUpdateExternalDisplayState(a1);
    return 0;
  }
  v49 = v48 - 1;
  if ( !v49 )
  {
    if ( (unsigned int)v11 < 0x28 )
      return (unsigned int)-1073741789;
    if ( a5 )
      return (unsigned int)-1073741811;
    v55 = v10->m256i_i32[3];
    if ( PopVideoHighPrecisionBrightnessEnabled )
    {
      if ( v55 == -1 )
        return (unsigned int)-1073741637;
    }
    else if ( v55 != -1 )
    {
      PopVideoHighPrecisionBrightnessEnabled = 1;
      ZwUpdateWnfStateData(
        &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
        &PopVideoHighPrecisionBrightnessEnabled,
        1u,
        0LL,
        0LL,
        0,
        0);
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
    }
    v139[0] = v10->m256i_i32[2];
    v139[1] = v10->m256i_i32[3];
    v139[2] = v10->m256i_i32[4];
    v139[3] = v10->m256i_i32[5];
    v139[4] = v10->m256i_i32[6];
    v139[5] = v10->m256i_i32[7];
    v139[6] = v10[1].m256i_i32[0];
    v139[7] = v10[1].m256i_i32[1];
    PopBroadcastSessionInfo(4LL, 32LL, v139);
    return 0;
  }
  v50 = v49 - 1;
  if ( !v50 )
    goto LABEL_36;
  v51 = v50 - 1;
  if ( v51 )
  {
    v52 = v51 - 1;
    if ( v52 )
    {
      if ( v52 != 1 || (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v131) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, &v131);
    }
    else
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
    }
    return 0;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v53 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v53 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v54 = v53 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v53 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v54 = v53 == 0;
  }
  if ( v54 )
    PpmPerfUpdateDomainPolicy(0);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)PagesFromHiberFile;
}
