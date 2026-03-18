/*
 * XREFs of PopPowerInformationInternal @ 0x140751B78
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     PopSetWatchdog @ 0x140256998 (PopSetWatchdog.c)
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14039A0B4 (PopDiagTraceSessionDisplayStateChange.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1403D6B2C (SSHSupportQueryIsLibraryEnabled.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1403DA540 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PpmInternalPlatformIdleVeto @ 0x1405C8884 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x1405C88D8 (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x1405C9BA0 (PoDirectedDripsClearDeviceFlags.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1405CA044 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopFxClearDeviceConstraints @ 0x1405CB6D8 (PopFxClearDeviceConstraints.c)
 *     PpmPerfGetVmPerfConfig @ 0x1405CF580 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x1405CF77C (PpmPerfGetVmPerfSupport.c)
 *     PopPlRegisterPowerPlane @ 0x1405DE9D4 (PopPlRegisterPowerPlane.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PopBootStatGet @ 0x1406D5F3C (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1406D6228 (PopBootStatSet.c)
 *     PoUserShutdownCancelled @ 0x1406EADA0 (PoUserShutdownCancelled.c)
 *     PopUpdateExternalDisplayState @ 0x1406EB8A4 (PopUpdateExternalDisplayState.c)
 *     PopIsRunningAsLocalSystem @ 0x1406EBAD8 (PopIsRunningAsLocalSystem.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     PopEsQueueStateEvaluation @ 0x1407EEF7C (PopEsQueueStateEvaluation.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EF190 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407EF514 (PopEvaluateGlobalUserStatus.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1407F9EBC (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x1407FBB54 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x1407FC3E8 (PpmIdleGetConcurrencyStats.c)
 *     PopFanReadFanNoiseInfo @ 0x1407FC558 (PopFanReadFanNoiseInfo.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x1407FC824 (PpmPerfQueryProcMeasurementValues.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140808A40 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetDisplayStatus @ 0x140809408 (PopSetDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x14080D028 (PopUpdateConsoleDisplayState.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x140828EBC (PopBroadcastSessionInfo.c)
 *     PopFxPlatformRegisterInterface @ 0x140863ABC (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140864810 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x140989608 (PopCheckTestsigningEnabled.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140989FA4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopS0LowPowerIdleInfo @ 0x14098CA3C (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x14098EB00 (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x14098F890 (PopReadResumeContext.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1409931D4 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopScreenOff @ 0x140997374 (PopScreenOff.c)
 *     PopScreenOn @ 0x1409973C0 (PopScreenOn.c)
 *     PopNetUpdateStandbyRequest @ 0x1409988BC (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140998B6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x140998CC4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140998F18 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140998FF4 (PopBootStatUnlock.c)
 *     PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC (PopAdaptivePrepareForSystemInitiatedReboot.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099CAD0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionWinlogonNotification @ 0x14099CBC8 (PopSessionWinlogonNotification.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099D0FC (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x14099F1CC (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A49BC (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A4A48 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60 (RtlCapabilityCheckForSingleSessionSku.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        unsigned int *a8,
        _BYTE *a9)
{
  __int64 v10; // r14
  unsigned int v11; // ebx
  char v12; // al
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  int BootSessionStandbyActivationInfo; // ebx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rbx
  char *v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rsi
  int v25; // eax
  unsigned int ProcessSessionId; // eax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  unsigned int v30; // esi
  unsigned int v31; // edi
  _DWORD *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // r14d
  __int64 v36; // rdi
  __int64 v37; // rcx
  void *v38; // rcx
  unsigned __int64 v39; // rbx
  __int64 v40; // r11
  _QWORD *v41; // rax
  _BYTE *v42; // rbx
  char PowerButtonBugcheckEnabled; // al
  KPROCESSOR_MODE *v44; // rdx
  __int64 *v45; // rcx
  _DWORD *v46; // rcx
  __int64 Pool2; // rax
  __int64 v48; // rsi
  _OWORD *v49; // rax
  __int128 v50; // xmm1
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // bl
  __int64 v54; // rcx
  _DWORD *v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  const wchar_t *v60; // rax
  __int16 v61; // cx
  __int64 v62; // rax
  __int64 v63; // rsi
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  _OWORD *v68; // rax
  int v69; // ecx
  int v70; // ecx
  bool v71; // zf
  _BYTE *v72; // rax
  _OWORD *v73; // rax
  unsigned int v74; // eax
  ULONG v75; // edx
  char v76; // bl
  _DWORD *v77; // rcx
  _BYTE *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  char v82; // al
  struct _PROCESSOR_NUMBER *v83; // rcx
  int BrandedFrequency; // eax
  __int64 v85; // rcx
  _DWORD *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rbx
  unsigned __int64 *v89; // rax
  int v90; // ebx
  char v91; // al
  _KPROCESS *Process; // rcx
  unsigned int v93; // eax
  _DWORD *v94; // rax
  KPROCESSOR_MODE PreviousMode[4]; // [rsp+40h] [rbp-69h] BYREF
  int v96; // [rsp+44h] [rbp-65h] BYREF
  __int64 v97; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v98; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v99; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h]
  __int64 v101; // [rsp+60h] [rbp-49h] BYREF
  __int64 v102; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-39h] BYREF
  __int64 v104; // [rsp+80h] [rbp-29h]
  _DWORD v105[8]; // [rsp+88h] [rbp-21h] BYREF

  SourceString = 0LL;
  v10 = a4;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v97) = a2;
  v11 = a1;
  PreviousMode[1] = 0;
  v12 = KeGetCurrentThread()->PreviousMode;
  PreviousMode[2] = 0;
  pcbLength = 0LL;
  v98 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v99 = 0;
  v104 = 0LL;
  PreviousMode[0] = v12;
  if ( !v12 )
  {
    if ( (_DWORD)a1 == 7 )
      return (unsigned int)-1073741637;
    if ( (_DWORD)a1 == 5 )
      return (unsigned int)-1073741637;
    v20 = (unsigned int)(a1 - 24);
    if ( (unsigned int)v20 <= 0x3B )
    {
      a1 = 0xD00811169F09201LL;
      if ( _bittest64(&a1, v20) )
        return (unsigned int)-1073741637;
    }
LABEL_15:
    v17 = 0x140000000uLL;
    switch ( v11 )
    {
      case 0u:
        if ( (unsigned int)v10 < 0x20 || !a5 )
          break;
        Pool2 = ExAllocatePool2(256LL, 16LL, 544040269LL);
        v48 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(a3, Pool2);
        if ( BootSessionStandbyActivationInfo < 0 )
          goto LABEL_185;
        *a7 = v48;
        *a8 = 16;
        goto LABEL_77;
      case 1u:
        if ( !a5 )
          break;
        v62 = ExAllocatePool2(256LL, 8LL, 544040269LL);
        v36 = v62;
        if ( !v62 )
          return (unsigned int)-1073741670;
        BootSessionStandbyActivationInfo = PopS0LowPowerIdleInfo(v62);
        if ( BootSessionStandbyActivationInfo < 0 )
          goto LABEL_91;
        *a7 = v36;
        goto LABEL_190;
      case 2u:
        PopVideoInitialized = 1;
        v44 = &PopVideoInitialized;
        v45 = &WNF_PO_VIDEO_INITIALIALIZED;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v45, (__int64)v44);
      case 3u:
        if ( (unsigned int)v10 < 0x10 )
          break;
        if ( a5 || (PopSimulate & 1) == 0 )
          return (unsigned int)-1073741811;
        PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a3 + 8), 0LL);
        return 0;
      case 4u:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v42 = (_BYTE *)ExAllocatePool2(256LL, 1LL, 544040269LL);
        if ( !v42 )
          return (unsigned int)-1073741670;
        if ( !PopPlatformAoAc
          || (v71 = (unsigned __int8)RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v71) )
        {
          PowerButtonBugcheckEnabled = 0;
        }
        goto LABEL_120;
      case 5u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        PoLatencySensitivityHint(*(_DWORD *)(a3 + 8));
        return 0;
      case 6u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = *(_BYTE *)(a3 + 8);
        return (unsigned int)PopNetUpdateStandbyRequest(a1, a2);
      case 7u:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v49 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
        if ( !v49 )
          return (unsigned int)-1073741670;
        *v49 = PopBsdPowerTransitionAtBoot;
        v50 = xmmword_140C5AC70;
        goto LABEL_140;
      case 8u:
        if ( (unsigned int)v10 < 8 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = *(_BYTE *)(a3 + 8);
        return (unsigned int)PopUpdateBackgroundCoolingStatus(a1, a2);
      case 0x12u:
        if ( !PopPlatformAoAc )
          return (unsigned int)-1073741637;
        if ( !a5 )
          break;
        v35 = 984;
        v67 = ExAllocatePool2(256LL, 984LL, 544040269LL);
        v36 = v67;
        if ( !v67 )
          return (unsigned int)-1073741670;
        BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo(v67);
        if ( BootSessionStandbyActivationInfo >= 0 )
          goto LABEL_215;
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x13u:
        if ( (_DWORD)v10 != 20 || a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a2) = *(_BYTE *)(a3 + 12);
        TtmNotifySessionPowerStateChange(*(unsigned int *)(a3 + 8), a2);
        v63 = *(unsigned __int8 *)(a3 + 12);
        PopAcquirePolicyLock(v64);
        if ( *(_BYTE *)(a3 + 13) )
        {
          PopSetDisplayStatus((_BYTE)v63 != 0);
          PopUpdateConsoleDisplayState((_BYTE)v63 != 0);
          if ( (_BYTE)v63 )
            PopPowerAggregatorNotifyDisplayPoweredOn();
        }
        PopDiagTraceSessionDisplayStateChange(
          *(_BYTE *)(a3 + 12) == 0,
          *(_DWORD *)(a3 + 8),
          *(unsigned __int8 *)(a3 + 13),
          *(_DWORD *)(a3 + 16));
        BootSessionStandbyActivationInfo = 0;
        PopReleasePolicyLock(v66, v65);
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x14u:
        if ( (_DWORD)v10 != 20 || a5 )
          return (unsigned int)-1073741811;
        LOBYTE(v17) = *(_BYTE *)(a3 + 16);
        TtmNotifySessionTerminalInput(*(unsigned int *)(a3 + 8), *(unsigned int *)(a3 + 12), v17);
        return 0;
      case 0x15u:
        if ( (unsigned int)v10 < 0x60 || !*(_QWORD *)(a3 + 8) && !a5 )
          break;
        if ( *(_DWORD *)(a3 + 24) == 412 )
        {
          if ( *(_BYTE *)(a3 + 88) || !*(_DWORD *)(a3 + 16) )
          {
            PopBsdPowerWatchdogArmed = 0;
          }
          else
          {
            PopBsdLastPowerWatchdogStage = *(_DWORD *)(a3 + 32);
            PopBsdPowerWatchdogArmed = 1;
          }
        }
        v21 = 0LL;
        if ( a5 )
        {
          v21 = (_QWORD *)ExAllocatePool2(256LL, 8LL, 544040269LL);
          if ( !v21 )
            return (unsigned int)-1073741670;
        }
        v22 = PopSetWatchdog(*(char **)(a3 + 8), (unsigned int *)(a3 + 16), *(_BYTE *)(a3 + 88));
        if ( !a5 )
          return 0;
        *v21 = v22;
        *a7 = (__int64)v21;
        goto LABEL_48;
      case 0x16u:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v68 = (_OWORD *)ExAllocatePool2(256LL, 64LL, 544040269LL);
        if ( !v68 )
          return (unsigned int)-1073741670;
        *v68 = PopBsdPhysicalPowerButtonInfoAtBoot;
        v68[1] = xmmword_140C5AC90;
        v68[2] = xmmword_140C5ACA0;
        v68[3] = xmmword_140C5ACB0;
        *a7 = (__int64)v68;
        *a8 = 64;
        goto LABEL_49;
      case 0x17u:
        if ( (_DWORD)v10 != 12 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = *(_BYTE *)(a3 + 8);
        PopUpdateExternalDisplayState(a1);
        return 0;
      case 0x18u:
        if ( (unsigned int)v10 < 0x28 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        v69 = *(_DWORD *)(a3 + 12);
        if ( PopVideoHighPrecisionBrightnessEnabled )
        {
          if ( v69 == -1 )
            return (unsigned int)-1073741637;
        }
        else if ( v69 != -1 )
        {
          PopVideoHighPrecisionBrightnessEnabled = 1;
          ZwUpdateWnfStateData(
            (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
            (__int64)&PopVideoHighPrecisionBrightnessEnabled);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
        }
        v105[0] = *(_DWORD *)(a3 + 8);
        v105[1] = *(_DWORD *)(a3 + 12);
        v105[2] = *(_DWORD *)(a3 + 16);
        v105[3] = *(_DWORD *)(a3 + 20);
        v105[4] = *(_DWORD *)(a3 + 24);
        v105[5] = *(_DWORD *)(a3 + 28);
        v105[6] = *(_DWORD *)(a3 + 32);
        v105[7] = *(_DWORD *)(a3 + 36);
        PopBroadcastSessionInfo(4LL, 32LL, v105);
        return 0;
      case 0x19u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( *(_BYTE *)(a3 + 8) )
          PopScreenOn(a1, a2);
        else
          PopScreenOff(30LL, a2);
        return 0;
      case 0x1Au:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v70 = PpmPerfQosDisableRefcount;
        if ( *(_BYTE *)(a3 + 8) )
        {
          if ( PpmPerfQosDisableRefcount == -1 )
          {
            BootSessionStandbyActivationInfo = -1073741675;
          }
          else
          {
            v70 = PpmPerfQosDisableRefcount + 1;
            BootSessionStandbyActivationInfo = 0;
            ++PpmPerfQosDisableRefcount;
          }
          v71 = v70 == 1;
        }
        else
        {
          if ( PpmPerfQosDisableRefcount )
          {
            BootSessionStandbyActivationInfo = 0;
            v70 = --PpmPerfQosDisableRefcount;
          }
          else
          {
            BootSessionStandbyActivationInfo = -1073741637;
          }
          v71 = v70 == 0;
        }
        if ( v71 )
          PpmPerfUpdateDomainPolicy(0);
        else
          PpmReleaseLock(&PpmPerfPolicyLock);
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x1Bu:
        if ( (unsigned int)v10 < 0x10 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        PopTransitionCheckpoint(*(unsigned int *)(a3 + 8), *(unsigned int *)(a3 + 12));
        return 0;
      case 0x1Cu:
        if ( (_DWORD)v10 != 12 )
          return (unsigned int)-1073741811;
        LODWORD(v97) = *(_DWORD *)(a3 + 8);
        PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE);
        return 0;
      case 0x1Du:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v73 = (_OWORD *)ExAllocatePool2(256LL, 48LL, 544040269LL);
        if ( !v73 )
          return (unsigned int)-1073741670;
        *v73 = PopFirmwareResetReason;
        v73[1] = xmmword_140C5AD10;
        v73[2] = xmmword_140C5AD20;
        *a7 = (__int64)v73;
        *a8 = 48;
        goto LABEL_49;
      case 0x1Eu:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v72 = (_BYTE *)ExAllocatePool2(256LL, 3LL, 544040269LL);
        if ( !v72 )
          return (unsigned int)-1073741670;
        *v72 = PpmPerfQosSupportedAndConfigured;
        v72[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v72[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a7 = (__int64)v72;
        *a8 = 3;
        goto LABEL_253;
      case 0x1Fu:
      case 0x20u:
      case 0x22u:
      case 0x23u:
      case 0x26u:
        if ( (_DWORD)v10 != 24 )
          return (unsigned int)-1073741811;
        if ( a5 )
        {
          v74 = *(_DWORD *)(a3 + 8);
          if ( !v74 )
            return (unsigned int)-1073741811;
          v24 = 4LL * v74;
          if ( v24 > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          v23 = ExAllocatePool2(256LL, (unsigned int)v24, 544040269LL);
          if ( !v23 )
            return (unsigned int)-1073741670;
        }
        else
        {
          v23 = v104;
          LODWORD(v24) = 0;
        }
        switch ( v11 )
        {
          case 0x1Fu:
            if ( !*(_DWORD *)(a3 + 8) )
              goto LABEL_266;
            v25 = PopBootStatGet(a3, v23);
            break;
          case 0x20u:
            if ( *(_DWORD *)(a3 + 8) )
            {
              v25 = PopBootStatSet(a3, v23);
              break;
            }
LABEL_266:
            BootSessionStandbyActivationInfo = -1073741811;
            goto LABEL_85;
          case 0x22u:
            if ( !*(_DWORD *)(a3 + 8) )
              goto LABEL_266;
            v25 = PopBootStatCheckIntegrity(a3, a2);
            break;
          case 0x23u:
            v25 = PopBootStatRestoreDefaults(a1, a2);
            break;
          case 0x26u:
            v25 = PopBootStatUnlock(a1, a2);
            break;
          default:
            BootSessionStandbyActivationInfo = -1073741637;
LABEL_85:
            if ( !v23 )
              return (unsigned int)BootSessionStandbyActivationInfo;
            v75 = 0;
LABEL_100:
            v38 = (void *)v23;
LABEL_93:
            ExFreePoolWithTag(v38, v75);
            return (unsigned int)BootSessionStandbyActivationInfo;
        }
        BootSessionStandbyActivationInfo = v25;
        if ( v25 >= 0 )
        {
          if ( v23 )
          {
            *a7 = v23;
            *a8 = v24;
            *a9 = 1;
          }
          return 0;
        }
        goto LABEL_85;
      case 0x21u:
      case 0x42u:
        return (unsigned int)-1073741637;
      case 0x24u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        v76 = *(_BYTE *)(a3 + 8);
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        PopEsEnabledOnHost = v76;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        PopEsQueueStateEvaluation(0LL);
        return 0;
      case 0x25u:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v77 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
        if ( !v77 )
          return (unsigned int)-1073741670;
        *v77 = qword_140C227C4;
        *a7 = (__int64)v77;
        *a8 = 4;
        goto LABEL_253;
      case 0x27u:
        if ( (_DWORD)v10 != 12 )
          return (unsigned int)-1073741811;
        v44 = PreviousMode;
        PreviousMode[0] = *(_BYTE *)(a3 + 8);
        v45 = &WNF_PO_WAKE_ON_VOICE_STATE;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v45, (__int64)v44);
      case 0x28u:
        if ( (_DWORD)v10 != 16 || *(_DWORD *)(a3 + 8) )
          return (unsigned int)-1073741811;
        if ( *(_BYTE *)(a3 + 12) )
          PopDeepSleepSetDisengageReason(7u);
        else
          PopDeepSleepClearDisengageReason(7u);
        return 0;
      case 0x29u:
        if ( (_DWORD)v10 != 16 )
          return (unsigned int)-1073741811;
        if ( !a5 )
          break;
        v78 = (_BYTE *)ExAllocatePool2(256LL, 1LL, 544040269LL);
        if ( !v78 )
          return (unsigned int)-1073741670;
        v79 = *(_QWORD *)(a3 + 8);
        if ( !v79
          || (v80 = *(_QWORD *)(*(_QWORD *)(v79 + 312) + 40LL)) == 0
          || (v81 = *(_QWORD *)(v80 + 80)) == 0
          || (v71 = *(_QWORD *)(v81 + 64) == 0LL, v82 = 1, v71) )
        {
          v82 = 0;
        }
        goto LABEL_297;
      case 0x2Au:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v49 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
        if ( !v49 )
          return (unsigned int)-1073741670;
        *v49 = PopBsdPowerTransitionExtensionAtBoot;
        v50 = xmmword_140C5AC50;
LABEL_140:
        v49[1] = v50;
        *a7 = (__int64)v49;
        *a8 = 32;
        goto LABEL_49;
      case 0x2Bu:
        if ( (((_DWORD)v10 - 8) & 0xFFFFFFFB) != 0 )
          return (unsigned int)-1073741811;
        if ( !a5 )
          break;
        v48 = ExAllocatePool2(256LL, 8LL, 544040269LL);
        if ( !v48 )
          return (unsigned int)-1073741670;
        v83 = (struct _PROCESSOR_NUMBER *)(a3 + 8);
        if ( (_DWORD)v10 != 12 )
          v83 = 0LL;
        BrandedFrequency = PpmPerfGetBrandedFrequency(v83);
        goto LABEL_308;
      case 0x2Cu:
        if ( (unsigned int)v10 < 0x90 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        BootSessionStandbyActivationInfo = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid);
        if ( BootSessionStandbyActivationInfo >= 0 )
          return (unsigned int)-1073741790;
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x2Du:
        BootSessionStandbyActivationInfo = 0;
        goto LABEL_111;
      case 0x2Eu:
        if ( (_DWORD)v10 != 32 || a5 )
          return (unsigned int)-1073741811;
        PopPowerRequestNotifyUserSessionAttributed(
          *(unsigned int *)(a3 + 24),
          *(_QWORD *)(a3 + 8),
          *(_QWORD *)(a3 + 16));
        return 0;
      case 0x2Fu:
        if ( (unsigned int)v10 < 0x14 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a3 + 4) )
          return (unsigned int)-1073741735;
        return (unsigned int)PpmInternalProcessorIdleVeto(
                               *(_DWORD *)(a3 + 8),
                               *(_DWORD *)(a3 + 12),
                               *(_BYTE *)(a3 + 16));
      case 0x30u:
        if ( (unsigned int)v10 < 0x10 )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a3 + 4) )
          return (unsigned int)-1073741735;
        return (unsigned int)PpmInternalPlatformIdleVeto(*(_DWORD *)(a3 + 8), *(_BYTE *)(a3 + 12));
      case 0x31u:
        if ( !a5 )
          break;
        v42 = (_BYTE *)ExAllocatePool2(256LL, 1LL, 544040269LL);
        if ( !v42 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_120:
        *v42 = PowerButtonBugcheckEnabled;
        *a7 = (__int64)v42;
        *a8 = 1;
        goto LABEL_121;
      case 0x32u:
        if ( !a5 )
          break;
        v78 = (_BYTE *)ExAllocatePool2(256LL, 1LL, 544040269LL);
        if ( !v78 )
          return (unsigned int)-1073741670;
        v82 = PopAutoChkCausedReboot;
        goto LABEL_297;
      case 0x33u:
        if ( !(_DWORD)a2 )
        {
          if ( (unsigned int)v10 < 0x10 )
            break;
          v51 = *(_QWORD *)(a3 + 8);
          v52 = v51;
          goto LABEL_146;
        }
        if ( (_DWORD)a2 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v10 >= 0x18 )
        {
          v51 = *(_QWORD *)(a3 + 16);
          v52 = *(_QWORD *)(a3 + 8);
LABEL_146:
          PopWakeAlarmTimeOverrideAc = v52;
          PopWakeAlarmTimeOverrideDc = v51;
          return 0;
        }
        break;
      case 0x35u:
      case 0x36u:
      case 0x38u:
      case 0x40u:
        BootSessionStandbyActivationInfo = PopDirectedDripsUmPowerInformationInternal(
                                             v11,
                                             v10,
                                             a3,
                                             (_DWORD)a8,
                                             (__int64)a7);
        if ( BootSessionStandbyActivationInfo >= 0 && *a7 )
          goto LABEL_77;
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x39u:
        if ( a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopPlRegisterPowerPlane(a3, v10);
      case 0x3Au:
        if ( (unsigned int)v10 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsSetDeviceFlags(*(_QWORD *)(a3 + 8), *(_DWORD *)(a3 + 16));
      case 0x3Bu:
        if ( (unsigned int)v10 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsClearDeviceFlags(*(_QWORD *)(a3 + 8), *(_DWORD *)(a3 + 16));
      case 0x3Cu:
        if ( !a5 )
          break;
        PopAcquireTransitionLock(8LL);
        BootSessionStandbyActivationInfo = PopReadResumeContext(&v98, &v101);
        PopReleaseTransitionLock(8LL);
        if ( BootSessionStandbyActivationInfo < 0 )
          return (unsigned int)BootSessionStandbyActivationInfo;
        *a7 = v101;
        *a8 = v98;
        goto LABEL_49;
      case 0x3Du:
        goto LABEL_166;
      case 0x3Eu:
        if ( !a5 )
          break;
        v78 = (_BYTE *)ExAllocatePool2(256LL, 1LL, 544040269LL);
        if ( !v78 )
          return (unsigned int)-1073741670;
        v82 = PopLastBootSucceeded;
LABEL_297:
        *v78 = v82;
        *a7 = (__int64)v78;
        *a8 = 1;
        goto LABEL_253;
      case 0x3Fu:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v39 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
        if ( !v39 )
          return (unsigned int)-1073741637;
        v41 = (_QWORD *)ExAllocatePool2(256LL, v40, 544040269LL);
        if ( !v41 )
          return (unsigned int)-1073741670;
        *v41 = v39;
        *a7 = (__int64)v41;
LABEL_48:
        *a8 = 8;
LABEL_49:
        *a9 = 1;
        return 0;
      case 0x41u:
        if ( (_DWORD)v10 != 16 )
          return (unsigned int)-1073741811;
        v85 = *(_QWORD *)(a3 + 8);
        if ( !v85 )
          return (unsigned int)-1073741811;
        BootSessionStandbyActivationInfo = PopFxClearDeviceConstraints(v85);
        v33 = 0;
        if ( BootSessionStandbyActivationInfo >= 0 )
          return v33;
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x43u:
        *a8 = 0;
        *a7 = 0LL;
        v86 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
        if ( !v86 )
          return (unsigned int)-1073741670;
        *v86 = PopDisableInboxPepGeneratedConstraintsOverride;
        *a7 = (__int64)v86;
        *a8 = 4;
        return 0;
      case 0x44u:
        return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
      case 0x45u:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v87 = ExAllocatePool2(256LL, 20LL, 544040269LL);
        v88 = v87;
        if ( !v87 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfSupport(v87);
        *a7 = v88;
        *a8 = a6 < 0x14 ? 1 : 20;
        goto LABEL_121;
      case 0x46u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v89 = (unsigned __int64 *)ExAllocatePool2(256LL, 8LL, 544040269LL);
        v48 = (__int64)v89;
        if ( !v89 )
          return (unsigned int)-1073741670;
        BrandedFrequency = PpmPerfGetVmPerfConfig(*(_DWORD *)(a3 + 8), v89);
LABEL_308:
        BootSessionStandbyActivationInfo = BrandedFrequency;
        if ( BrandedFrequency < 0 )
        {
LABEL_185:
          v38 = (void *)v48;
          goto LABEL_92;
        }
        *a7 = v48;
LABEL_190:
        *a8 = 8;
        goto LABEL_77;
      case 0x47u:
        if ( (_DWORD)v10 != 12 )
          return (unsigned int)-1073741811;
        v53 = *(_BYTE *)(a3 + 8);
        PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepReliabilityDiagLock);
        if ( PopSleepReliabilityDetailedDiagEnabled != v53 )
        {
          LOBYTE(v54) = v53;
          PopSleepReliabilityDetailedDiagEnabled = v53;
          PopDiagTraceSleepReliabilityDiagConfigUpdate(v54);
        }
        PopReleaseRwLock((ULONG_PTR)&PopSleepReliabilityDiagLock);
        return 0;
      case 0x48u:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v34 = 2304;
        v36 = ExAllocatePool2(256LL, 2304LL, 544040269LL);
        BootSessionStandbyActivationInfo = PpmPerfGetFrequencyBandStats(v36);
        if ( BootSessionStandbyActivationInfo < 0 )
          goto LABEL_91;
        *a7 = v36;
        goto LABEL_76;
      case 0x49u:
        if ( (unsigned int)v10 < 0xC )
          break;
        if ( a5 )
          return (unsigned int)-1073741811;
        v90 = *(_DWORD *)(a3 + 8);
        LOBYTE(a1) = 1;
        PopAcquireAdaptiveLock(a1, a2);
        if ( PopHostGlobalUserPresenceState != v90 )
        {
          PopHostGlobalUserPresenceState = v90;
          PopEvaluateGlobalUserStatus();
        }
LABEL_59:
        PopReleaseAdaptiveLock();
        return 0;
      case 0x4Au:
      case 0x4Bu:
        if ( (_DWORD)v10 != 12 )
          break;
        if ( !a5 )
          return (unsigned int)-1073741811;
        if ( v11 == 74 )
        {
          v34 = 296;
        }
        else
        {
          if ( v11 != 75 )
            return (unsigned int)-1073741811;
          v34 = 592;
        }
        v23 = ExAllocatePool2(256LL, v34, 544040269LL);
        BootSessionStandbyActivationInfo = PpmIdleGetPackageIdleIntervalStats(v11, *(unsigned __int16 *)(a3 + 8), v23);
        if ( BootSessionStandbyActivationInfo < 0 )
        {
          v75 = 544040269;
          goto LABEL_100;
        }
        *a7 = v23;
LABEL_76:
        *a8 = v34;
        goto LABEL_77;
      case 0x4Cu:
      case 0x4Du:
        if ( (_DWORD)v10 != 12 )
          break;
        if ( !a5 )
          return (unsigned int)-1073741811;
        BootSessionStandbyActivationInfo = PpmIdleGetConcurrencyStats(v11, *(unsigned __int16 *)(a3 + 8), &v102, &v99);
        if ( BootSessionStandbyActivationInfo < 0 )
          return (unsigned int)BootSessionStandbyActivationInfo;
        *a7 = v102;
        *a8 = v99;
        goto LABEL_77;
      case 0x4Eu:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v55 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
        if ( !v55 )
          return (unsigned int)-1073741670;
        v56 = (__int64 *)PpmPerfDomainHead;
        while ( 2 )
        {
          if ( v56 == &PpmPerfDomainHead )
          {
            v58 = 0;
          }
          else
          {
            v57 = v56[52];
            if ( !v57 )
            {
              v56 = (__int64 *)*v56;
              continue;
            }
            v58 = ((__int64 (__fastcall *)(__int64, __int64 *))v56[52])(v57, &PpmPerfDomainHead);
          }
          break;
        }
        *v55 = v58;
        *a7 = (__int64)v55;
        *a8 = 4;
LABEL_121:
        *a9 = 1;
        return 0;
      case 0x4Fu:
        if ( !a3 || (_DWORD)v10 != 12 )
          return (unsigned int)-1073741811;
        v30 = *(_DWORD *)(a3 + 8);
        v96 = 0;
        BootSessionStandbyActivationInfo = PpmPerfQueryProcMeasurementValues(v30, &v96, 0LL, 0LL);
        if ( BootSessionStandbyActivationInfo < 0 )
          return (unsigned int)BootSessionStandbyActivationInfo;
        v31 = 24 * v96 + 8;
        if ( a6 == 4 )
        {
          v46 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
          if ( v46 )
          {
            *v46 = v96;
            *a7 = (__int64)v46;
            *a8 = 4;
            goto LABEL_77;
          }
        }
        else
        {
          if ( a6 < v31 )
            break;
          v32 = (_DWORD *)ExAllocatePool2(64LL, v31, 544040269LL);
          if ( v32 )
          {
            *a8 = v31;
            *a9 = 1;
            *a7 = (__int64)v32;
            *v32 = v96;
            return (unsigned int)PpmPerfQueryProcMeasurementValues(v30, &v96, v32 + 2, (unsigned int)(24 * v96));
          }
        }
        return (unsigned int)-1073741670;
      case 0x50u:
        goto LABEL_364;
      case 0x51u:
        if ( (_DWORD)v10 != 40 || !a3 || a6 != 12 || !a5 )
          return (unsigned int)-1073741811;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        LOBYTE(v27) = 1;
        v28 = ProcessSessionId;
        PopAcquireAdaptiveLock(v27, v29);
        PopAdaptiveGetSessionStateUnsafe(v28, a3, a5);
        goto LABEL_59;
      case 0x52u:
        if ( (_DWORD)v10 != 12 || !a3 || a6 || a5 )
          return (unsigned int)-1073741811;
        v97 = 0LL;
        LODWORD(v97) = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v91 = *(_BYTE *)(a3 + 8);
        BYTE4(v97) = 1;
        Process = KeGetCurrentThread()->ApcState.Process;
        BYTE5(v97) = v91;
        v93 = PsGetProcessSessionIdEx((__int64)Process);
        PopSessionWinlogonNotification(v93, &v97);
        return 0;
      case 0x53u:
        if ( (_DWORD)v10 != 16 || !a3 || a6 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(a3, a2);
      case 0x54u:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v35 = 160;
        v36 = ExAllocatePool2(256LL, 160LL, 544040269LL);
        if ( !v36 )
          return (unsigned int)-1073741670;
        v37 = 84LL;
        goto LABEL_90;
      case 0x55u:
        if ( !a5 )
          return (unsigned int)-1073741811;
        v35 = 88;
        v36 = ExAllocatePool2(256LL, 88LL, 544040269LL);
        if ( !v36 )
          return (unsigned int)-1073741670;
        v37 = 85LL;
LABEL_90:
        BootSessionStandbyActivationInfo = PopFanReadFanNoiseInfo(v37, v36, v35);
        if ( BootSessionStandbyActivationInfo < 0 )
        {
LABEL_91:
          v38 = (void *)v36;
LABEL_92:
          v75 = 544040269;
          goto LABEL_93;
        }
LABEL_215:
        *a7 = v36;
        *a8 = v35;
LABEL_77:
        *a9 = 1;
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x56u:
        if ( (unsigned int)v10 < 8 || !a5 )
          break;
        v94 = (_DWORD *)ExAllocatePool2(256LL, 8LL, 544040269LL);
        if ( !v94 )
          return (unsigned int)-1073741670;
        *v94 = ExBootAppErrorDiagCode;
        v94[1] = ExBootAppFailureStatus;
        *a7 = (__int64)v94;
        *a8 = 8;
LABEL_253:
        *a9 = 1;
        return 0;
      default:
        return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  if ( (unsigned int)a1 <= 8 )
  {
    v13 = 261;
    if ( _bittest(&v13, a1) )
      return (unsigned int)-1073741790;
  }
  v14 = (unsigned int)(a1 - 19);
  if ( (unsigned int)v14 <= 0x3E )
  {
    a1 = 0x400151C000600297LL;
    if ( _bittest64(&a1, v14) )
      return (unsigned int)-1073741790;
  }
  v15 = v11 - 29;
  if ( (unsigned int)v15 <= 0x23 )
  {
    a1 = 0x88B4C0001LL;
    if ( _bittest64(&a1, v15) )
    {
      if ( !PspIsContextAdmin() )
        return (unsigned int)-1073741790;
    }
  }
  if ( v11 - 82 <= 1 && !(unsigned __int8)PopCheckTestsigningEnabled() )
    return (unsigned int)-1073741790;
  v16 = v11 - 24;
  if ( (unsigned int)v16 <= 0x2F )
  {
    a1 = 0x800000001801LL;
    if ( _bittest64(&a1, v16) )
    {
      if ( !PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
    }
  }
  switch ( v11 )
  {
    case 'P':
      if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode[0]) )
        return (unsigned int)-1073741727;
LABEL_364:
      if ( (_DWORD)v10 != 8 || !a3 || a6 || a5 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopAdaptivePrepareForSystemInitiatedReboot(a1, a2);
    case '=':
      if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
        return (unsigned int)-1073741790;
LABEL_166:
      if ( (unsigned int)v10 < 0xC )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      PopAcquireTransitionLock(8LL);
      BootSessionStandbyActivationInfo = PopReadPagesFromHiberFile(*(unsigned int *)(a3 + 8), 1LL, a7);
      PopReleaseTransitionLock(8LL);
      v33 = 0;
      if ( BootSessionStandbyActivationInfo < 0 )
      {
        *a7 = 0LL;
        return (unsigned int)BootSessionStandbyActivationInfo;
      }
      *a8 = 4096;
      *a9 = 1;
      return v33;
    case '-':
      BootSessionStandbyActivationInfo = 0;
      if ( !PopIsRunningAsLocalSystem() && (!(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
        return (unsigned int)-1073741790;
LABEL_111:
      if ( (_DWORD)v10 == 12 )
      {
        if ( *(_BYTE *)(a3 + 8) )
          PoUserShutdownInitiated();
        else
          PoUserShutdownCancelled();
        return (unsigned int)BootSessionStandbyActivationInfo;
      }
      return (unsigned int)-1073741811;
  }
  if ( v11 != 25 )
  {
    a2 = (unsigned int)v97;
    goto LABEL_15;
  }
  v59 = 0x7FFFLL;
  v60 = L"systemManagement";
  while ( *v60 )
  {
    ++v60;
    if ( !--v59 )
      goto LABEL_178;
  }
  v61 = 2 * v59;
  SourceString.Buffer = L"systemManagement";
  SourceString.Length = -2 - v61;
  SourceString.MaximumLength = -v61;
LABEL_178:
  BootSessionStandbyActivationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &SourceString);
  if ( BootSessionStandbyActivationInfo >= 0 )
    return (unsigned int)-1073741790;
  return (unsigned int)BootSessionStandbyActivationInfo;
}
