/*
 * XREFs of PopIssueActionRequest @ 0x140989CA4
 * Callers:
 *     PopPolicyWorkerAction @ 0x14098A130 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A320 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PpmEndHighPerfRequest @ 0x14036EAF0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036EF74 (PpmBeginHighPerfRequest.c)
 *     RtlBootStatusDisableFlushing @ 0x14036F1D8 (RtlBootStatusDisableFlushing.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x14041E4A0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PopSetSystemState @ 0x14058DF1C (PopSetSystemState.c)
 *     PopPrepareSleep @ 0x14058F47C (PopPrepareSleep.c)
 *     PopSetPowerActionWatchdogState @ 0x14058F4F8 (PopSetPowerActionWatchdogState.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     TtmIsEnabled @ 0x1407A6090 (TtmIsEnabled.c)
 *     PopReadSystemAwayModePolicy @ 0x1409810D8 (PopReadSystemAwayModePolicy.c)
 *     PopSetSleepMarker @ 0x1409814A0 (PopSetSleepMarker.c)
 *     PopDispatchSuperfetchNotification @ 0x140989790 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x14098A434 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A4AC (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x14098AA14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AA68 (PopSuspendServices.c)
 *     PopDiagTraceHiberStats @ 0x14098F828 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140990168 (PopDiagTracePerfTrackData.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140990F28 (PopDiagTracePowerTransitionEnd.c)
 *     PopDiagTracePowerTransitionStart @ 0x140991148 (PopDiagTracePowerTransitionStart.c)
 *     PopDiagTracePowerTransitionTime @ 0x1409911F8 (PopDiagTracePowerTransitionTime.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140993D0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996DEC (PopEnableSystemSleepCheckpoint.c)
 *     PopScreenOff @ 0x140998234 (PopScreenOff.c)
 *     PopPotsGetActionEntryReason @ 0x1409A0980 (PopPotsGetActionEntryReason.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0A20 (PopPotsLogPowerTransitionReliability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A42A8 (TtmNotifyLowPowerStateExited.c)
 *     EtwShutdown @ 0x1409E2B1C (EtwShutdown.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA616C (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140AA620C (PopPushPowerStateTransitionRecord.c)
 *     PopAcquireAwaymodeLock @ 0x140AA8FD8 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA9018 (PopReleaseAwaymodeLock.c)
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // si
  int v13; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r14d
  int v25; // esi
  int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char IsEnabled; // al
  int v34; // ecx
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  bool v39; // zf
  unsigned int v40; // ebx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  signed __int32 v51[8]; // [rsp+0h] [rbp-68h] BYREF
  char v52; // [rsp+20h] [rbp-48h]
  bool v53; // [rsp+21h] [rbp-47h]
  unsigned int v54; // [rsp+24h] [rbp-44h]
  unsigned int v55; // [rsp+28h] [rbp-40h] BYREF
  unsigned int ActionEntryReason; // [rsp+30h] [rbp-38h]
  int v57; // [rsp+34h] [rbp-34h]
  __int128 v58; // [rsp+38h] [rbp-30h] BYREF
  int v59; // [rsp+48h] [rbp-20h]
  unsigned int v60; // [rsp+4Ch] [rbp-1Ch]

  v59 = 0;
  v5 = 0;
  LOBYTE(v60) = 0;
  v58 = 0LL;
  v54 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v12 = 1;
  if ( (byte_140C3D870 || byte_140C3D871)
    && a2 == 2
    && (int)a3 < 5
    && (dword_140C3D0D4 & 0xFFFFFFFA) == 0
    && dword_140C3D0D4 != 1 )
  {
    if ( !dword_140C3D878 )
    {
      if ( byte_140C3D871 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_140C3D878 + 4, dword_140C3D878 + 7);
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11);
        v5 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock(v13);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140C3D0D4 )
  {
    if ( dword_140C3D0D4 == 6 || dword_140C3D0D4 == 7 || dword_140C3D0D4 == 11 )
      v15 = 21;
    else
      v15 = 20;
  }
  else
  {
    v15 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140C3D0D4, (unsigned int)dword_140C3D0D8);
  if ( a2 == 8 )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v17, v16, v18);
    PopScreenOff(v15);
    PopAcquirePolicyLock(v19);
    return 0LL;
  }
  PopSetPowerActionWatchdogState(1u);
  v20 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread(), 0LL);
  v23 = a2 - 4;
  v57 = v20;
  v53 = (unsigned int)v23 <= 2;
  if ( PsWin32CalloutsEstablished && (unsigned int)v23 > 2 )
    v12 = 0;
  if ( a4 >= 0 )
    v24 = a4 | 1;
  else
    v24 = a4 & 0xFFFFFFFE;
  if ( v12 )
    LOBYTE(PopAction) = PopAction & 0xFD;
  v52 = byte_140C3D170;
  PopReleasePolicyLock(v23, v21, v22);
  PpmBeginHighPerfRequest();
  PopSleepStats = 0;
  if ( !v53 )
  {
    if ( !a1 )
    {
      memset(&PopSleepStats, 0, 0x2E0uLL);
      PopDiagTracePowerTransitionStart((unsigned int)dword_140C3D0D4, (unsigned int)dword_140C3D0D8);
      qword_140C3D2C8 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1LL);
    }
    PopSetSleepMarker(1);
  }
  if ( !v12 )
  {
    LOBYTE(v58) = a1;
    *(_QWORD *)((char *)&v58 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v58) = v24;
    v60 = v15;
    v59 = 1;
    v26 = PopDispatchStateCallout(&v58, 0LL);
    v25 = v26;
    if ( !a1 )
    {
      if ( v26 >= 0 && !v52 )
        PopPrepareSleep((__int64)&v58);
      v54 = PoBlockConsoleSwitch((__int64)&v58);
    }
    if ( v25 >= 0 && !a1 )
    {
      PfPowerActionNotify(0LL);
      PopNoMoreInput = 1;
      _InterlockedOr(v51, 0);
      if ( !v52 )
      {
        LOBYTE(v27) = 1;
        PopPowerAggregatorNotifySuspendResume(v27);
        PopSuspendApps(&v58);
        PopSuspendServices(&v58);
      }
      if ( (v24 & 8) != 0 )
      {
        LOBYTE(v27) = 1;
        EtwShutdown(v27);
      }
      PopDispatchSuperfetchNotification();
      v25 = ZwSetSystemPowerState(a2, a3);
      PopAcquirePolicyLock(v28);
      v29 = byte_140C3D170;
      PopReleasePolicyLock(v31, v30, v32);
      PopNoMoreInput = 0;
      _InterlockedOr(v51, 0);
      if ( !v29 )
      {
        PopResumeServices(&v58);
        PopPowerAggregatorNotifySuspendResume(0LL);
        PopResumeApps(&v58);
      }
      PfPowerActionNotify(7LL);
    }
    v59 = 8;
    PopDispatchStateCallout(&v58, 0LL);
    IsEnabled = TtmIsEnabled();
    if ( a1 )
      goto LABEL_63;
    if ( IsEnabled )
    {
      PopAcquirePolicyLock(v34);
      v35 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock(v37, v36, v38);
      v39 = v35 == 0;
      v40 = v54;
      if ( !v39 )
      {
        TtmNotifyLowPowerStateExited(v54);
        PopAcquirePolicyLock(v41);
        PopTtmIsSxCompleteNotificationPending = 0;
        PopReleasePolicyLock(v43, v42, v44);
      }
    }
    else
    {
      v40 = v54;
    }
    v55 = v40;
    v59 = 7;
    PopDispatchStateCallout(&v58, (__int64)&v55);
    goto LABEL_59;
  }
  v25 = ZwSetSystemPowerState(a2, a3);
  if ( !a1 )
  {
LABEL_59:
    if ( !v53 )
    {
      if ( v25 >= 0 )
      {
        qword_140C3D2F0 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopDiagTraceHiberStats();
        PopDiagTracePowerTransitionTime();
        PopDiagTracePerfTrackData(v24);
        PopShutdownButtonPressTime = 0LL;
        dword_140C3D598 = a2;
        dword_140C3D59C = a3;
        PopSleepStats = 1;
      }
      PopCheckpointSystemSleep(41LL);
      PopBootStatCheckpointAvailable = 1;
      RtlBootStatusDisableFlushing(0);
      PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, (WORK_QUEUE_TYPE)(v45 + 1));
      PopDiagTracePowerTransitionEnd((unsigned int)v25);
      PopPotsLogPowerTransitionReliability((unsigned int)v25, a3, ActionEntryReason);
    }
  }
LABEL_63:
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v46);
  PopSetPowerActionWatchdogState(0);
  if ( v57 >= 0 )
    PoDelistPowerStateTransitionBlocker(v48, v47, v49, v50);
  return (unsigned int)v25;
}
