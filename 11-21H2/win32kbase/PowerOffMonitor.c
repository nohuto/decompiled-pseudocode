/*
 * XREFs of PowerOffMonitor @ 0x1C00D1C90
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00D2E20 (DrvSetMonitorPowerState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0147350 (-SetProximityBlocking@@YAXXZ.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  char v2; // r14
  int v5; // esi
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO **v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  struct tagKERNELHANDLETABLEENTRY *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rbx
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+78h] [rbp-88h] BYREF
  int *v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A8h] [rbp-58h] BYREF
  int *v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+D8h] [rbp-28h] BYREF
  int *v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+100h] [rbp+0h]

  v2 = gPowerTransitionsState;
  v31 = 0;
  v29 = 0LL;
  v30 = 0;
  v5 = 0;
  v6 = 0;
  if ( gPowerTransitionsState || qword_1C0296FD4 )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v28 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v28, 4LL, 0LL, 0LL);
        v6 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( !gfIsFadingInProgress
        && grpdeskRitInput
        && (v5 = 1, gfIsFadingInProgress = 1, qword_1C029C2B0)
        && (int)qword_1C029C2B0() >= 0
        && (!qword_1C029C2B8 || (int)qword_1C029C2B8(&v31, &v29, &v30) < 0) )
      {
        v11 = 0LL;
        v29 = 0LL;
      }
      else
      {
        v11 = v29;
      }
      if ( v30 )
      {
        UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
        if ( qword_1C029C2C0 && (int)qword_1C029C2C0() >= 0 && qword_1C029C2C8 )
          qword_1C029C2C8(v31, v29, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14, v29 != 0, 0, 0);
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v14, v13, v15);
        else
          CurrentThreadWin32Thread = 0LL;
        v32 = CurrentThreadWin32Thread;
        v33 = 1;
        if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v32 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v28 = v33 == 1;
            v36 = &v28;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &ActivityId,
              0LL,
              3u,
              &v35);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v17 = W32kEtwEnabledKeyword,
              v18 = 0x8000002010000000uLL,
              (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (v18 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v17, v18);
          if ( v19 )
            v19[1] = KeQueryPerformanceCounter(0LL);
        }
        v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v20 )
        {
          v21 = *v20;
          if ( IsThreadCrossSessionAttached() )
            v21 = 0LL;
          if ( v32 )
          {
            v22 = *(unsigned int *)(v32 + 24);
            if ( *(_DWORD *)(v32 + 48) || (int)v22 > 0 )
            {
              *(_DWORD *)(v32 + 44) = 1;
              *(GUID *)(v32 + 28) = ActivityId;
              v12 = (unsigned int)dword_1C028EE70;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v40 = 4LL;
                  v28 = v33 == 1;
                  v39 = &v28;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &ActivityId,
                    0LL,
                    3u,
                    &v38);
                  v12 = (unsigned int)dword_1C028EE70;
                }
                if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v43 = 4LL;
                  v28 = v33 == 1;
                  v42 = &v28;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &ActivityId,
                    0LL,
                    3u,
                    &v41);
                }
              }
            }
          }
          gptiCurrent = v21;
          if ( v21 )
          {
            *((_DWORD *)v21 + 377) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
            if ( CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v25 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v26 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v25;
                  if ( !*(_DWORD *)(v26 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v24, v12);
                    v26 = *v27;
                  }
                  HMUnlockObject(v26);
                }
              }
            }
          }
        }
        else
        {
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v32);
          gptiCurrent = 0LL;
        }
      }
      else
      {
        DrvDxgkLogCodePointPacket(14, v11 != 0, 0, 0);
      }
      if ( qword_1C029C2D0 && (int)qword_1C029C2D0() >= 0 && qword_1C029C2D8 )
        qword_1C029C2D8();
      LOBYTE(v12) = 1;
      DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 4LL, v12, a2);
      if ( v29 && qword_1C029C300 && (int)qword_1C029C300() >= 0 && qword_1C029C308 )
        qword_1C029C308(v29);
      if ( v5 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C0296F48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, a1, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v6 )
    {
      v28 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v28, 4LL, 0LL, 0LL);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
