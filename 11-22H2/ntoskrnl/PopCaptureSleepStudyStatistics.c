/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1403C78A0
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140878A34 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x14032CA60 (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x1403C7370 (PopFxStartDeviceAccounting.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1403C7550 (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopCalculateIdleInformation @ 0x1403C76E0 (PopCalculateIdleInformation.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1403C7774 (PopDiagGetPowerSchemeInfo.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C7E5C (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1403C7EC4 (PpmGetPlatformSelectionVetoCounts.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140584360 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14058506C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140585EA0 (PpmSnapDripsAccountingSnapshot.c)
 *     PopDiagTraceFxRundown @ 0x140588968 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14058BC8C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DB84 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopQueryInputSuppressionCount @ 0x1407EB4FC (PopQueryInputSuppressionCount.c)
 *     PopIsHibernateSupported @ 0x140873AD4 (PopIsHibernateSupported.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 *     PopGetEnergyCounter @ 0x140875C9C (PopGetEnergyCounter.c)
 *     PopDiagTraceCsEnterReason @ 0x140878544 (PopDiagTraceCsEnterReason.c)
 *     PopQueryRemainingSystemIdleTime @ 0x1408787E8 (PopQueryRemainingSystemIdleTime.c)
 *     PopSetConnectedStandbyMarker @ 0x14087894C (PopSetConnectedStandbyMarker.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408789D8 (PopNetIsDisconnectStandbyActive.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140878E08 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140878E2C (PopQueryPowerButtonSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x140878E3C (PopNetIsCompliantNicPresent.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878E50 (PopIsLockConsoleTimeoutActive.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140878F3C (ExStartRecordingIRTimerExpiries.c)
 *     PopClearConnectedStandbyMarker @ 0x140980758 (PopClearConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1409850E8 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14098529C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxResetSocSubsystemAccounting @ 0x140985E0C (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x14098D434 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsExitReason @ 0x14098D578 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckAdaptiveCsState @ 0x1409966E4 (PopNetCheckAdaptiveCsState.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14099671C (PopNetCheckUserConnectivityPolicy.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1409FB65C (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  char IsHibernateSupported; // r13
  char IsLockConsoleTimeoutActive; // r12
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  KIRQL v34; // al
  __int64 v35; // r8
  unsigned __int64 v36; // r14
  unsigned int i; // esi
  __int64 v38; // rcx
  __int64 j; // rdx
  __int64 v40; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  int v43; // eax
  _DWORD *v44; // r8
  __int64 v45; // r8
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int ModernStandbyTransitionReason; // eax
  KIRQL v53; // al
  unsigned __int64 v54; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v58; // eax
  unsigned int v59; // [rsp+30h] [rbp-D0h] BYREF
  int v60; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh] BYREF
  int v65; // [rsp+48h] [rbp-B8h] BYREF
  int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int128 v72; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+80h] [rbp-80h]
  __int128 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  _BYTE v76[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v77; // [rsp+100h] [rbp+0h] BYREF
  __int128 v78; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  v68 = 0;
  v70 = 0LL;
  v61 = 0;
  v59 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  memset(v76, 0, 0x4CuLL);
  v62 = 0;
  v75 = 0LL;
  IsHibernateSupported = 0;
  v60 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v69) = *(_DWORD *)(a3 + 8);
  v14 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v13 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v67 = 0;
  v66 = 0;
  v64 = 0;
  v65 = 0;
  v63 = 0;
  v74 = 0LL;
  if ( v13 )
    v14 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v14 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140C6B0B8 )
  {
    qword_140C6B0B8(a4 + 19);
    v9 = a4[19] / 0xAuLL;
    a4[19] = v9;
  }
  PopAcquirePolicyLock(v10, v9);
  v15 = MEMORY[0xFFFFF78000000008];
  v16 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v16 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v16 )
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, (unsigned int)PopSleepstudyStopReason);
    v69 = (__int64)a4;
    PopDirectedDripsNotify(1LL, &v69);
    PpmIdleCaptureCsVetoAccounting(v48, (unsigned int)dword_140CF7E40);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v49, 10LL * a4[4], 10LL * a4[5]);
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140CF7E40) )
    {
      PopFxLogSocSubsystemBlockingTimes(v50, (unsigned int)dword_140CF7E40);
      v4 = PopFxLogSocSubsystemMetadata(v51, (unsigned int)dword_140CF7E40);
    }
    ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0LL);
    PopClearConnectedStandbyMarker(ModernStandbyTransitionReason);
    qword_140CF7CC8 = 0LL;
    v53 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C9F8);
    dword_140C3CA00 = 0;
    v54 = v53;
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C9F8);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v54 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v13 = (v58 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v58;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v54);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation((__int64)&v72);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140CF7E40, &v70, &v71);
    PopCsConsumption = v60;
    qword_140CF7CD0 = *((_QWORD *)&v72 + 1);
    dword_140CF7CE0 = DWORD2(v73);
    qword_140CF7CD8 = v72;
    qword_140CF7D58 = v73;
    qword_140CF7D60 = v70;
    qword_140CF7D68 = v71;
    dword_140CF7D98 = v69;
    qword_140CF7CC8 = v15;
    qword_140CF7D00 = 0LL;
    qword_140CF7CE8 = 0LL;
    qword_140CF7CF0 = 0LL;
    qword_140CF7D10 = 0LL;
    qword_140CF7D48 = 0LL;
    qword_140CF7D50 = 0LL;
    qword_140CF7D20 = 0LL;
    qword_140CF7D30 = 0LL;
    qword_140CF7D40 = 0LL;
    qword_140CF7DA8 = 0LL;
    qword_140CF7DB0 = 0LL;
    qword_140CF7DB8 = 0LL;
    byte_140CF7D94 = 0;
    PopNetIsDisconnectStandbyActive(&v61);
    v17 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C9F8);
    qword_140C3C9E8 = 0LL;
    qword_140C3C9F0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C3CA00 = 1;
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C9F8);
    if ( (_DWORD)KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v17);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140CF7D88 = (dword_140C3D90C == 0) | byte_140CF7D88 & 0xFE;
    byte_140CF7D89 ^= (byte_140CF7D89 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v61 - 1) & 0xFFFFFFFC) != 0 || v61 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && (unsigned int)PopNetCheckAdaptiveCsState() != 1 )
    {
      byte_140CF7D89 &= ~2u;
    }
    else
    {
      byte_140CF7D89 |= 2u;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v18, 3, &v62, 4u, &v59);
    byte_140CF7D89 ^= (byte_140CF7D89 ^ (4 * v62)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v19, 3, &v63, 4u, &v59);
    dword_140CF7D70 = v63;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v20, 3, &v64, 4u, &v59);
    dword_140CF7D74 = v64;
    byte_140CF7D78 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v21, 3, &v65, 4u, &v59);
    dword_140CF7D7C = v65;
    PopQueryRemainingSystemIdleTime(&dword_140CF7D80, &dword_140CF7D84);
    byte_140CF7D9D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v76);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v76);
    byte_140CF7D9C = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v22, 3, &v66, 4u, &v59);
    dword_140CF7DA0 = v66;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v23, 3, &v67, 4u, &v59);
    dword_140CF7DA4 = v67;
    PopGetPowerSettingValue((__int64)&GUID_ACTIVE_POWERSCHEME, v24, 3, &v78, 0x10u, &v59);
    PopGetPowerSettingValue((__int64)&GUID_POWERSCHEME_PERSONALITY, v25, 3, &v77, 0x10u, &v59);
    PopDiagGetPowerSchemeInfo(&v78, &v77, &v68);
    dword_140CF7DC8 = v68;
    _InterlockedExchange64(&qword_140CF7E00, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140CF7E40) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140CF7E40);
    PopFxStartDeviceAccounting();
    if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v34 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v35 = PpmPlatformStates;
      v36 = v34;
      for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
      {
        v38 = 448LL * i + v35 + 80;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v38 + 28); *(_QWORD *)(*(_QWORD *)(v38 + 32) + (v40 << 6) + 56) = 0LL )
        {
          v40 = (unsigned int)j;
          j = (unsigned int)(j + 1);
        }
        LOBYTE(v35) = 1;
        LOBYTE(j) = 4;
        PpmIdleCsVetoAccountingUpdateBlock(v38, j, v35);
        v35 = PpmPlatformStates;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v44 = v42->SchedulerAssist;
          v13 = (v43 & v44[5]) == 0;
          v44[5] &= v43;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(v36);
    }
    dword_140CF7D8C = PopAggressiveStandbyEnabledActions;
    dword_140CF7D90 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    if ( PpmPlatformStates && dword_140CF7E40 != -1 )
    {
      v45 = 26LL;
      v46 = (__int64 *)(1016LL * (unsigned int)dword_140CF7E40 + 208 + *(_QWORD *)(PpmPlatformStates + 48));
      v26 = &PpmDripsAccountingSnapshot;
      do
      {
        v47 = *v46;
        v46 += 4;
        *v26++ = v47;
        --v45;
      }
      while ( v45 );
    }
    LOBYTE(v26) = 1;
    v27 = (unsigned int)PopGetModernStandbyTransitionReason(v26);
    PopDiagTraceCsEnterReason(v27);
    PopSetConnectedStandbyMarker(v28, (unsigned int)v27);
    v69 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v69);
    PopIdleWakeNotifyModernStandbyEnter();
    v60 = 0;
    PopQueryInputSuppressionCount(&v60);
    dword_140CF7DC0 = v60;
    v60 = 0;
    PopQueryPowerButtonSuppressionCount(&v60);
    dword_140CF7DC4 = v60;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
