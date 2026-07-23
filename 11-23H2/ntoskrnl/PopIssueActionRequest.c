/*
 * XREFs of PopIssueActionRequest @ 0x140989EA4
 * Callers:
 *     PopPolicyWorkerAction @ 0x14098A330 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A520 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PpmEndHighPerfRequest @ 0x14036EC90 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036F114 (PpmBeginHighPerfRequest.c)
 *     RtlBootStatusDisableFlushing @ 0x14036F378 (RtlBootStatusDisableFlushing.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x14041E830 (ZwSetSystemPowerState.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopSetSystemState @ 0x14058E40C (PopSetSystemState.c)
 *     PopPrepareSleep @ 0x14058F96C (PopPrepareSleep.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F9E8 (PopSetPowerActionWatchdogState.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopReadSystemAwayModePolicy @ 0x1409812D8 (PopReadSystemAwayModePolicy.c)
 *     PopSetSleepMarker @ 0x1409816A0 (PopSetSleepMarker.c)
 *     PopDispatchSuperfetchNotification @ 0x140989990 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x14098A634 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A6AC (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x14098AA90 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x14098AC14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AC68 (PopSuspendServices.c)
 *     PopDiagTraceHiberStats @ 0x14098FA28 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140990368 (PopDiagTracePerfTrackData.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140991128 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionStart @ 0x140991348 (PopDiagTracePowerTransitionStart.c)
 *     PopDiagTracePowerTransitionTime @ 0x1409913F8 (PopDiagTracePowerTransitionTime.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993F0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996FEC (PopEnableSystemSleepCheckpoint.c)
 *     PopScreenOff @ 0x140998434 (PopScreenOff.c)
 *     PopPotsGetActionEntryReason @ 0x1409A0B80 (PopPotsGetActionEntryReason.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0C20 (PopPotsLogPowerTransitionReliability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A44A8 (TtmNotifyLowPowerStateExited.c)
 *     EtwShutdown @ 0x1409E2DAC (EtwShutdown.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A9FCE4 (PfPowerActionNotify.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140AA607C (PopPushPowerStateTransitionRecord.c)
 *     PopAcquireAwaymodeLock @ 0x140AA8E48 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA8E88 (PopReleaseAwaymodeLock.c)
 *     PopCheckpointSystemSleep @ 0x140AAA358 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  int v14; // ecx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  ULONG v27; // r14d
  NTSTATUS v28; // esi
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ecx
  char v32; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char IsEnabled; // al
  int v38; // ecx
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // zf
  int v45; // ebx
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  signed __int32 v57[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+20h] [rbp-48h]
  __int64 v59; // [rsp+28h] [rbp-40h] BYREF
  unsigned int ActionEntryReason; // [rsp+30h] [rbp-38h]
  int v61; // [rsp+34h] [rbp-34h]
  __int128 v62; // [rsp+38h] [rbp-30h] BYREF
  int v63; // [rsp+48h] [rbp-20h]
  unsigned int v64; // [rsp+4Ch] [rbp-1Ch]

  v63 = 0;
  v5 = 0;
  LOBYTE(v64) = 0;
  v62 = 0LL;
  HIDWORD(v58) = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v13 = 1;
  if ( (byte_140C3D970 || byte_140C3D971)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_140C3CD94 & 0xFFFFFFFA) == 0
    && dword_140C3CD94 != 1 )
  {
    if ( !dword_140C3D978 )
    {
      if ( byte_140C3D971 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_140C3D978 + 4, dword_140C3D978 + 7);
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11, v12, v58, v59);
        v5 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock(v14);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140C3CD94 )
  {
    if ( dword_140C3CD94 == 6 || dword_140C3CD94 == 7 || dword_140C3CD94 == 11 )
      v16 = 21;
    else
      v16 = 20;
  }
  else
  {
    v16 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140C3CD94, (unsigned int)dword_140C3CD98);
  if ( a2 == PowerActionDisplayOff )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v18, v17, v19, v20, v58, v59);
    PopScreenOff(v16);
    PopAcquirePolicyLock(v21);
    return 0LL;
  }
  PopSetPowerActionWatchdogState(1u);
  v22 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread(), 0LL);
  v26 = (unsigned int)(a2 - 4);
  v61 = v22;
  BYTE1(v58) = (unsigned int)v26 <= 2;
  if ( PsWin32CalloutsEstablished && (unsigned int)v26 > 2 )
    v13 = 0;
  if ( a4 >= 0 )
    v27 = a4 | 1;
  else
    v27 = a4 & 0xFFFFFFFE;
  if ( v13 )
    LOBYTE(PopAction) = PopAction & 0xFD;
  LOBYTE(v58) = byte_140C3CE30;
  PopReleasePolicyLock(v26, v23, v24, v25, v58, v59);
  PpmBeginHighPerfRequest();
  PopSleepStats = 0;
  if ( !BYTE1(v58) )
  {
    if ( !a1 )
    {
      memset(&PopSleepStats, 0, 0x2E0uLL);
      PopDiagTracePowerTransitionStart((unsigned int)dword_140C3CD94, (unsigned int)dword_140C3CD98);
      qword_140C3D288 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1LL);
    }
    PopSetSleepMarker(1);
  }
  if ( !v13 )
  {
    LOBYTE(v62) = a1;
    *(_QWORD *)((char *)&v62 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v62) = v27;
    v64 = v16;
    v63 = 1;
    v29 = PopDispatchStateCallout(&v62, 0LL);
    v28 = v29;
    if ( !a1 )
    {
      if ( v29 >= 0 && !(_BYTE)v58 )
        PopPrepareSleep((__int64)&v62);
      HIDWORD(v58) = PoBlockConsoleSwitch((__int64)&v62);
    }
    if ( v28 >= 0 && !a1 )
    {
      PfPowerActionNotify(0LL);
      PopNoMoreInput = 1;
      _InterlockedOr(v57, 0);
      if ( !(_BYTE)v58 )
      {
        LOBYTE(v30) = 1;
        PopPowerAggregatorNotifySuspendResume(v30);
        PopSuspendApps(&v62);
        PopSuspendServices(&v62);
      }
      if ( (v27 & 8) != 0 )
      {
        LOBYTE(v30) = 1;
        EtwShutdown(v30);
      }
      PopDispatchSuperfetchNotification();
      v28 = ZwSetSystemPowerState(a2, a3, v27);
      PopAcquirePolicyLock(v31);
      v32 = byte_140C3CE30;
      PopReleasePolicyLock(v34, v33, v35, v36, v58, v59);
      PopNoMoreInput = 0;
      _InterlockedOr(v57, 0);
      if ( !v32 )
      {
        PopResumeServices(&v62);
        PopPowerAggregatorNotifySuspendResume(0LL);
        PopResumeApps(&v62);
      }
      PfPowerActionNotify(7LL);
    }
    v63 = 8;
    PopDispatchStateCallout(&v62, 0LL);
    IsEnabled = TtmIsEnabled();
    if ( a1 )
      goto LABEL_63;
    if ( IsEnabled )
    {
      PopAcquirePolicyLock(v38);
      v39 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock(v41, v40, v42, v43, v58, v59);
      v44 = v39 == 0;
      v45 = HIDWORD(v58);
      if ( !v44 )
      {
        TtmNotifyLowPowerStateExited(HIDWORD(v58));
        PopAcquirePolicyLock(v46);
        PopTtmIsSxCompleteNotificationPending = 0;
        PopReleasePolicyLock(v48, v47, v49, v50, v58, v59);
      }
    }
    else
    {
      v45 = HIDWORD(v58);
    }
    LODWORD(v59) = v45;
    v63 = 7;
    PopDispatchStateCallout(&v62, (__int64)&v59);
    goto LABEL_59;
  }
  v28 = ZwSetSystemPowerState(a2, a3, v27);
  if ( !a1 )
  {
LABEL_59:
    if ( !BYTE1(v58) )
    {
      if ( v28 >= 0 )
      {
        qword_140C3D2B0 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopDiagTraceHiberStats();
        PopDiagTracePowerTransitionTime();
        PopDiagTracePerfTrackData(v27);
        PopShutdownButtonPressTime = 0LL;
        SystemAction = a2;
        LightestSystemState = a3;
        PopSleepStats = 1;
      }
      PopCheckpointSystemSleep(41LL);
      PopBootStatCheckpointAvailable = 1;
      RtlBootStatusDisableFlushing(0);
      PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, (WORK_QUEUE_TYPE)(v51 + 1));
      PopDiagTracePowerTransitionEnd((unsigned int)v28);
      PopPotsLogPowerTransitionReliability((unsigned int)v28, (unsigned int)a3, ActionEntryReason);
    }
  }
LABEL_63:
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v52);
  PopSetPowerActionWatchdogState(0);
  if ( v61 >= 0 )
    PoDelistPowerStateTransitionBlocker(v54, v53, v55, v56);
  return (unsigned int)v28;
}
