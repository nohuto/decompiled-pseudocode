/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C007C540 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00D0BF0 (xxxSendWinlogonPowerMessage.c)
 *     PowerResumeSuspendEvent @ 0x1C00D1A00 (PowerResumeSuspendEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00D1BF0 (EtwTraceWinlogonSleepStartEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00D1C10 (IsxxxSendMessageBSMSupported.c)
 *     RIMSetSystemInputMode @ 0x1C00D1C3C (RIMSetSystemInputMode.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     IsPowerOnGdiSupported @ 0x1C00D456C (IsPowerOnGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00D45C0 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x1C00D4684 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00E58B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // r13d
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  LARGE_INTEGER *v36; // r14
  struct tagTHREADINFO **v37; // r14
  struct tagTHREADINFO *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // r14
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r9
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  LARGE_INTEGER *v51; // r14
  struct tagTHREADINFO **v52; // r14
  struct tagTHREADINFO *v53; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v55; // rdx
  __int64 *v56; // r14
  const GUID *v57; // r9
  int v58; // eax
  BOOL v59; // r9d
  BOOL v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rcx
  const GUID *v63; // r9
  int v64; // eax
  BOOL v65; // r9d
  BOOL v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // edi
  __int64 v78; // rax
  signed __int32 v79[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v81; // [rsp+30h] [rbp-D8h]
  BOOL SystemInformation; // [rsp+68h] [rbp-A0h] BYREF
  bool SystemInformation_4; // [rsp+6Ch] [rbp-9Ch]
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v85; // [rsp+80h] [rbp-88h]
  __int128 v86; // [rsp+90h] [rbp-78h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-68h] BYREF
  int v88; // [rsp+A8h] [rbp-60h]
  GUID v89; // [rsp+ACh] [rbp-5Ch] BYREF
  __int128 InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v91[2]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v92[10]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v93[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v94; // [rsp+168h] [rbp+60h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+170h] [rbp+68h] BYREF
  BOOL *v96; // [rsp+190h] [rbp+88h]
  __int64 v97; // [rsp+198h] [rbp+90h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+1A0h] [rbp+98h] BYREF
  BOOL *v99; // [rsp+1C0h] [rbp+B8h]
  __int64 v100; // [rsp+1C8h] [rbp+C0h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+1D0h] [rbp+C8h] BYREF
  BOOL *p_SystemInformation; // [rsp+1F0h] [rbp+E8h]
  __int64 v103; // [rsp+1F8h] [rbp+F0h]

  memset(v92, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v92[1]);
  v2 = dword_1C0296F18;
  v92[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v92[3]) = 17;
  LOBYTE(v92[6]) = -1;
  LODWORD(v92[4]) = dword_1C0296F18;
  memset(v93, 0, sizeof(v93));
  v94 = 0LL;
  *((_QWORD *)&v86 + 1) = 0LL;
  InputBuffer = 0LL;
  SystemInformation_8 = 0LL;
  v85 = 0LL;
  memset(v91, 0, sizeof(v91));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v0, &StartPowerStateCalloutWorker, v1, (unsigned int)dword_1C0296F18, 0);
  if ( !qword_1C029C280 )
  {
    v3 = -1073741637;
    goto LABEL_213;
  }
  v3 = qword_1C029C280();
  if ( v3 < 0 )
  {
LABEL_213:
    v78 = MEMORY[0xFFFFF78000000008];
    v5 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v5 + 2) = 5;
    goto LABEL_214;
  }
  if ( !qword_1C029C288 )
  {
    v3 = -1073741637;
    goto LABEL_211;
  }
  v6 = qword_1C029C288();
  v3 = v6;
  if ( v6 < 0 )
  {
LABEL_211:
    v78 = MEMORY[0xFFFFF78000000008];
    v5 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v5 + 2) = 6;
LABEL_214:
    *((_DWORD *)&gPowerStateLog + 2 * v5 + 3) = v3;
    *((_QWORD *)&gPowerStateLog + v5) = v78;
    goto LABEL_35;
  }
  if ( !gbPowerCalloutsReady )
  {
    v3 = -2143420409;
    goto LABEL_35;
  }
  if ( v2 > 10 )
  {
    v18 = (unsigned int)(v2 - 11);
    if ( v2 == 11 )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v4, v1);
      v77 = 0;
      if ( (int)IsPowerOnGdiSupported(v18) >= 0 )
      {
        if ( qword_1C029C268 )
          qword_1C029C268(v92, 0LL, 2LL);
        v77 = 1;
      }
      if ( (gPowerState & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP, (__int64)v92, 2u);
      if ( v77 && qword_1C029C278 )
        qword_1C029C278(v92);
      goto LABEL_35;
    }
    if ( v2 == 12 )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v2 - 12), v4, v1);
      PowerOffMonitor(MonitorRequestReasonSxTransition);
      goto LABEL_35;
    }
    v5 = (unsigned int)(v2 - 13);
    if ( v2 == 13 )
    {
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v1);
      if ( gSessionId != gServiceSessionId )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        v19 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v19) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v19 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v19 + 3) = 263;
        LOBYTE(v19) = 1;
        v21 = xxxSendWinlogonPowerMessage(v19, 263LL, &dword_1C0296F08, v20);
        v22 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v22) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v22 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v22 + 3) = v21;
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      goto LABEL_35;
    }
    if ( v2 != 14 )
      goto LABEL_35;
    if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      dword_1C0296EE0 = 16;
      if ( dword_1C0296F0C == 5 )
      {
        dword_1C0296EE4 = 40;
        if ( qword_1C029C238 )
        {
          LODWORD(v81) = 1;
          *(_QWORD *)OutputBufferLength = &dword_1C0296EE0;
          if ( (unsigned int)qword_1C029C238(0LL, 536LL, 4LL) )
            goto LABEL_33;
        }
        v75 = MEMORY[0xFFFFF78000000008];
        v5 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_DWORD *)&gPowerStateLog + 2 * v5 + 3) = 4;
      }
      else
      {
        dword_1C0296EE4 = 0x20000000;
        if ( !qword_1C029C238
          || (LODWORD(v81) = 1,
              *(_QWORD *)OutputBufferLength = &dword_1C0296EE0,
              !(unsigned int)qword_1C029C238(0LL, 536LL, 18LL)) )
        {
          v76 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v76) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v76 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v76 + 3) = 18;
        }
        if ( qword_1C029C238 )
        {
          LODWORD(v81) = 1;
          *(_QWORD *)OutputBufferLength = &dword_1C0296EE0;
          if ( (unsigned int)qword_1C029C238(0LL, 536LL, 7LL) )
            goto LABEL_33;
        }
        v75 = MEMORY[0xFFFFF78000000008];
        v5 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_DWORD *)&gPowerStateLog + 2 * v5 + 3) = 7;
      }
      *((_DWORD *)&gPowerStateLog + 2 * v5 + 2) = 7;
      *((_QWORD *)&gPowerStateLog + v5) = v75;
    }
LABEL_33:
    v3 = v6;
    goto LABEL_35;
  }
  switch ( v2 )
  {
    case 10:
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v1);
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 && qword_1C029C258 )
        qword_1C029C258();
      goto LABEL_35;
    case 1:
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 92);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      goto LABEL_35;
    case 2:
      dword_1C0296FC8 = 1;
      _InterlockedOr(v79, 0);
      if ( !gSystemIsAoAc )
        RIMSetSystemInputMode(2LL);
      if ( !gbTtmEnabled )
        PowerOffMonitor(dword_1C0296F1C);
      v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      dword_1C0296FE8 = v23;
      if ( gSessionId != gServiceSessionId )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        v24 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v24) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v24 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v24 + 3) = 1;
        LOBYTE(v24) = 1;
        v26 = xxxSendWinlogonPowerMessage(v24, 262LL, &dword_1C0296F08, v25);
        v27 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v27) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v27 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v27 + 3) = v26;
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      LOBYTE(v4) = 1;
      LOBYTE(v23) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v23, v4, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        dword_1C0296EE0 = 16;
        dword_1C0296EE4 = 40;
        if ( !qword_1C029C238
          || (LODWORD(v81) = 1,
              *(_QWORD *)OutputBufferLength = &dword_1C0296EE0,
              !(unsigned int)qword_1C029C238(0LL, 536LL, 4LL)) )
        {
          v68 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v68) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v68 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v68 + 3) = 4;
        }
      }
      if ( dword_1C0296F0C == 5 )
      {
        if ( gProtocolType )
        {
LABEL_64:
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
          Event = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
          goto LABEL_33;
        }
        if ( (dword_1C0296F10 & 8) != 0 )
        {
          if ( qword_1C0296870 )
          {
            if ( (unsigned __int8)qword_1C0296870(0LL, 0LL) )
            {
              if ( grpdeskRitInput )
              {
                v73 = xxxUserSetDisplayConfig(
                        0,
                        0LL,
                        0x88Fu,
                        0,
                        (__int64)grpdeskRitInput,
                        0,
                        0LL,
                        0LL,
                        0LL,
                        (__int64)v92,
                        0LL);
                if ( v73 < 0 )
                {
                  v74 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
                  *((_QWORD *)&gPowerStateLog + v74) = MEMORY[0xFFFFF78000000008];
                  *((_DWORD *)&gPowerStateLog + 2 * v74 + 2) = 9;
                  *((_DWORD *)&gPowerStateLog + 2 * v74 + 3) = v73;
                }
              }
            }
          }
        }
        else
        {
          EtwTraceWinlogonSleepEndEvent(1LL);
          v69 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v69) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v69 + 2) = 3;
          *((_DWORD *)&gPowerStateLog + 2 * v69 + 3) = 259;
          LOBYTE(v69) = 1;
          v71 = xxxSendWinlogonPowerMessage(v69, 259LL, &dword_1C0296F08, v70);
          v72 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v72) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v72 + 2) = 4;
          *((_DWORD *)&gPowerStateLog + 2 * v72 + 3) = v71;
          EtwTraceWinlogonSleepEndEvent(0LL);
        }
      }
      if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 && qword_1C029C258 )
        qword_1C029C258();
      goto LABEL_64;
  }
  v7 = (unsigned int)(v2 - 3);
  if ( v2 == 3 )
  {
    v42 = dword_1C0296F08;
    if ( dword_1C0296F0C == 5 )
      v42 = 3;
    LODWORD(InputBuffer) = v42;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      UserSessionSwitchLeaveCrit(v5, v43, v1, v44);
      v45 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v45 < 0 )
      {
        v46 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v46) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v46 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v46 + 3) = v45;
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v47, v46, (unsigned int)v45);
      else
        CurrentThreadWin32Thread = 0LL;
      v87 = CurrentThreadWin32Thread;
      v88 = 1;
      if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v87 + 48)) )
      {
        EtwActivityIdControl(3u, &v89);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v103 = 4LL;
          SystemInformation = v88 == 1;
          p_SystemInformation = &SystemInformation;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v89,
            0LL,
            3u,
            &v101);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v50 = W32kEtwEnabledKeyword,
            v49 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v49 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v47, v49, v50);
        if ( v51 )
          v51[1] = KeQueryPerformanceCounter(0LL);
      }
      v52 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( !v52 )
      {
LABEL_137:
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v87);
        gptiCurrent = 0LL;
        goto LABEL_33;
      }
      v53 = *v52;
      if ( IsThreadCrossSessionAttached() )
        v53 = 0LL;
      if ( v87 )
      {
        v5 = *(unsigned int *)(v87 + 24);
        if ( *(_DWORD *)(v87 + 48) || (int)v5 > 0 )
        {
          *(_DWORD *)(v87 + 44) = 1;
          *(GUID *)(v87 + 28) = v89;
          v1 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v64 = (int)v63;
              v100 = 4LL;
              LOBYTE(v64) = v88 == 1;
              SystemInformation = v64;
              v99 = &SystemInformation;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v89,
                v63,
                3u,
                &v98);
              v1 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v1 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v66 = v65;
              v97 = 4LL;
              LOBYTE(v66) = v88 == 1;
              SystemInformation = v66;
              v96 = &SystemInformation;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v89,
                0LL,
                3u,
                &v95);
            }
          }
        }
      }
      gptiCurrent = v53;
      v3 = v6;
      if ( v53 )
      {
        *((_DWORD *)v53 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v5 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v56 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v67 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v56[2] = 0LL;
                if ( !*(_DWORD *)(v67 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v55, v1);
                  v67 = *v56;
                }
                HMUnlockObject(v67);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v5 = (unsigned int)(v2 - 5);
    if ( v2 == 5 )
    {
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        6u);
      if ( !gSystemIsAoAc )
        RIMSetSystemInputMode(0LL);
      v8 = 0LL;
      SystemInformation_4 = dword_1C0296F0C == 5;
      if ( gSessionId )
      {
        if ( dword_1C0296F0C == 5 )
        {
          memset((char *)v91 + 12, 0, 20);
          *(_QWORD *)&v85 = v91;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v85 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v91[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v91[0] = 0x100000004LL;
          DWORD2(v91[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        DWORD1(v86) = 1;
        v9 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v9) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v9 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v9 + 3) = 262;
        LOBYTE(v9) = 1;
        *((_QWORD *)&v86 + 1) = 0LL;
        LODWORD(v86) = 0;
        v11 = xxxSendWinlogonPowerMessage(v9, 262LL, &v86, v10);
        v12 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v12) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v12 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v12 + 3) = v11;
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( SystemInformation_4 )
        {
          v13 = v85;
          *(_DWORD *)(v85 + 16) |= 1u;
          *(_DWORD *)(v13 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported(v8) >= 0 && qword_1C029C268 )
        qword_1C029C268(v92, 1LL, 5LL);
      dword_1C0296FC8 = 0;
      _InterlockedOr(v79, 0);
      if ( gbPendingSleepInput )
      {
        v14 = gPendingSleepInputReason;
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        PoSetUserPresent(v14);
      }
      else
      {
        dword_1C0296FCC = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C0296FE8)
        / 0x3E8);
      *(_QWORD *)&v91[0] = 0x100000004LL;
      memset((char *)v91 + 12, 0, 20);
      *(_QWORD *)&v85 = v91;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v85 + 1) = 32LL;
      LODWORD(v91[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v91[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v15) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v15, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        *(_QWORD *)&v93[0] = 0x2000000000000010LL;
        if ( !qword_1C029C238
          || (LODWORD(v81) = 1, *(_QWORD *)OutputBufferLength = v93, !(unsigned int)qword_1C029C238(0LL, 536LL, 18LL)) )
        {
          v62 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v62) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v62 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v62 + 3) = 18;
        }
      }
      v16 = v85;
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(v85 + 16) |= 1u;
      *(_DWORD *)(v16 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      goto LABEL_33;
    }
    if ( v2 == 6 )
    {
      if ( qword_1C029C1C0 && (int)qword_1C029C1C0() >= 0 && qword_1C029C1C8 )
        qword_1C029C1C8();
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
        WORD6(InputBuffer) = 1;
        UserSessionSwitchLeaveCrit(v5, v28, v1, v29);
        v30 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        if ( v30 < 0 )
        {
          v31 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v31) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v31 + 2) = 8;
          *((_DWORD *)&gPowerStateLog + 2 * v31 + 3) = v30;
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          v33 = PsGetCurrentThreadWin32Thread(v32, v31, (unsigned int)v30);
        else
          v33 = 0LL;
        v87 = v33;
        v88 = 1;
        if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v87 + 48)) )
        {
          EtwActivityIdControl(3u, &v89);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v97 = 4LL;
            SystemInformation = v88 == 1;
            v96 = &SystemInformation;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &v89,
              0LL,
              3u,
              &v95);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v35 = W32kEtwEnabledKeyword,
              v34 = 0x8000002010000000uLL,
              (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (v34 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32, v34, v35);
          if ( v36 )
            v36[1] = KeQueryPerformanceCounter(0LL);
        }
        v37 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v37 )
        {
          v38 = *v37;
          if ( IsThreadCrossSessionAttached() )
            v38 = 0LL;
          if ( v87 )
          {
            v5 = *(unsigned int *)(v87 + 24);
            if ( *(_DWORD *)(v87 + 48) || (int)v5 > 0 )
            {
              *(_DWORD *)(v87 + 44) = 1;
              *(GUID *)(v87 + 28) = v89;
              v1 = (unsigned int)dword_1C028EE70;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v58 = (int)v57;
                  v100 = 4LL;
                  LOBYTE(v58) = v88 == 1;
                  SystemInformation = v58;
                  v99 = &SystemInformation;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &v89,
                    v57,
                    3u,
                    &v98);
                  v1 = (unsigned int)dword_1C028EE70;
                }
                if ( (unsigned int)v1 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v60 = v59;
                  v103 = 4LL;
                  LOBYTE(v60) = v88 == 1;
                  SystemInformation = v60;
                  p_SystemInformation = &SystemInformation;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &v89,
                    0LL,
                    3u,
                    &v101);
                }
              }
            }
          }
          gptiCurrent = v38;
          v3 = v6;
          if ( v38 )
          {
            *((_DWORD *)v38 + 377) = 1;
            v39 = PsGetCurrentProcessWin32Process(v5);
            if ( v39 )
            {
              if ( (*(_DWORD *)(v39 + 12) & 0x8000) != 0 )
              {
                v5 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v41 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v61 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v41[2] = 0LL;
                    if ( !*(_DWORD *)(v61 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v40, v1);
                      v61 = *v41;
                    }
                    HMUnlockObject(v61);
                  }
                }
              }
            }
          }
          goto LABEL_35;
        }
        goto LABEL_137;
      }
    }
  }
LABEL_35:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v5, &StopPowerStateCalloutWorker, v1, (unsigned int)v2, v3);
  return (unsigned int)v3;
}
