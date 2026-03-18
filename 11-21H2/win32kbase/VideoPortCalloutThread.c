/*
 * XREFs of VideoPortCalloutThread @ 0x1C00D24E0
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00B9950 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxDwmControl @ 0x1C00596E0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C005A66C (IsxxxDwmStopRedirectionSupported.c)
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C00682A4 (IszzzUpdateCursorImageSupported.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C009F378 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     InitSystemThread @ 0x1C00AE200 (InitSystemThread.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00BCA40 (UpdateExternalMonitorConnectedStatus.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00D27C0 (DCompositionForceRender.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D29D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     IsSetPointerSupported @ 0x1C00D440C (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00D44A0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D44F0 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00E58B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C01749FC (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C0210E80 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C023E368 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C023E394 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C023E3C0 (IsxxxUserResetDisplayDeviceSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  unsigned int *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rsi
  int inited; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  struct tagTHREADINFO **v13; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rbx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  LARGE_INTEGER *v35; // rbx
  int v36; // ebx
  int CurrentProcessSessionId; // eax
  unsigned int v38; // r8d
  struct tagKERNELHANDLETABLEENTRY *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _MDEV *v45; // rcx
  CInputConfig *v46; // rcx
  void (*v47)(void); // rax
  char v48; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v49; // [rsp+49h] [rbp-BFh]
  char v50; // [rsp+4Bh] [rbp-BDh] BYREF
  BOOL v51; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  int ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+80h] [rbp-88h] BYREF
  BOOL *v57; // [rsp+A0h] [rbp-68h]
  __int64 v58; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+B0h] [rbp-58h] BYREF
  BOOL *v60; // [rsp+D0h] [rbp-38h]
  __int64 v61; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+E0h] [rbp-28h] BYREF
  BOOL *v63; // [rsp+100h] [rbp-8h]
  __int64 v64; // [rsp+108h] [rbp+0h]

  v1 = (unsigned int *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v9 = *v1;
  v1[6] = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0dq_EtwWriteTransfer(v7, &StartVideoPortCalloutThread, v8, v9, inited);
    inited = v1[6];
  }
  if ( inited >= 0 )
  {
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8);
    else
      CurrentThreadWin32Thread = 0LL;
    v53 = CurrentThreadWin32Thread;
    ActivityId_4 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v53 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v58 = 4LL;
        v51 = ActivityId_4 == 1;
        v57 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId_8,
          0LL,
          3u,
          &v56);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v11 = W32kEtwEnabledKeyword, v12 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v12 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v35 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v11, v12);
      if ( v35 )
        v35[1] = KeQueryPerformanceCounter(0LL);
    }
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v13 )
    {
      v14 = *v13;
      if ( IsThreadCrossSessionAttached() )
        v14 = 0LL;
      if ( v53 )
      {
        v15 = *(unsigned int *)(v53 + 24);
        if ( *(_DWORD *)(v53 + 48) || (int)v15 > 0 )
        {
          *(_DWORD *)(v53 + 44) = 1;
          *(GUID *)(v53 + 28) = ActivityId_8;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v61 = 4LL;
              v51 = ActivityId_4 == 1;
              v60 = &v51;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId_8,
                0LL,
                3u,
                &v59);
              v38 = dword_1C028EE70;
            }
            if ( v38 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v64 = 4LL;
              v51 = ActivityId_4 == 1;
              v63 = &v51;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId_8,
                0LL,
                3u,
                &v62);
            }
          }
        }
      }
      gptiCurrent = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v39 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v40 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v39;
              if ( !*(_DWORD *)(v40 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v17, v18);
                v40 = *v19;
              }
              HMUnlockObject(v40);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v53);
      gptiCurrent = 0LL;
    }
    v20 = *v1;
    v21 = *v1 == 7;
    if ( *v1 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v20 = *v1;
      v21 = *v1 == 7;
    }
    v22 = v21;
    if ( ((v20 - 7) & 0xFFFFFFFC) != 0 || (v21 = v20 == 9, v23 = 1, v21) )
      v23 = 0;
    xxxWaitForVideoPortCalloutReady(v23, v22, v4);
    if ( qword_1C029CC70 )
    {
      if ( (unsigned int)qword_1C029CC70(v25, v24, v26) )
      {
        if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
        {
          if ( *v1 > 0xF )
            goto LABEL_73;
          v28 = 33920LL;
          if ( !_bittest((const int *)&v28, *v1) )
            goto LABEL_73;
        }
      }
    }
    if ( gfSwitchInProgress )
    {
      v36 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, *v1, CurrentProcessSessionId, v36);
    }
    v28 = *v1;
    if ( (int)v28 <= 12 )
    {
      if ( (_DWORD)v28 != 12 )
      {
        v24 = (unsigned int)(v28 - 4);
        if ( (_DWORD)v28 != 4 )
        {
          if ( (_DWORD)v28 == 7 )
          {
            v1[6] = Win32kPnpNotify((struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)v1, v4);
            goto LABEL_34;
          }
          if ( (_DWORD)v28 == 8 )
          {
            v52[1] = 0LL;
            v52[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v42, v41, v43, v44) != gpepCSRSS
              || (v28 = (__int64)grpdeskRitInput) != 0
              && qword_1C029C358
              && (int)qword_1C029C358(grpdeskRitInput, v52) >= 0 )
            {
              v48 = 1;
              do
              {
                v49 = 0;
                v45 = (struct _MDEV *)*((_QWORD *)gpDispInfo + 2);
                v50 = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v45, (__int64)&v50, (__int64)&v48) < 0 )
                {
                  v48 = 0;
                }
                else
                {
                  if ( (_BYTE)v49 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0LL, 0LL, 0LL);
                  }
                  else if ( HIBYTE(v49) )
                  {
                    CInputConfig::OnDisplayStateChange(v46);
                  }
                  if ( v50 )
                    PostWinlogonMessage(1027LL, 0);
                }
              }
              while ( !v48 );
              v1[6] = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v28, v24, v26, v27) == gpepCSRSS
                && qword_1C029C368 )
              {
                qword_1C029C368(v52, 0LL);
              }
            }
            goto LABEL_34;
          }
          v24 = (unsigned int)(v28 - 10);
          if ( (_DWORD)v28 != 10 )
          {
            if ( (_DWORD)v28 != 11 )
            {
LABEL_73:
              v1[6] = -1073741823;
              goto LABEL_34;
            }
            v31 = v1[4];
            v32 = 0LL;
            v33 = 1LL;
LABEL_33:
            DCompositionForceRender(0LL, v33, v31, v32);
LABEL_34:
            if ( *v1 == 7 )
              gbInVideoPnpCallout = 0;
            UserSessionSwitchLeaveCrit(v28, v24, v26, v27);
            goto LABEL_37;
          }
        }
        if ( (_DWORD)v28 == 10 || !*((_QWORD *)v1 + 2) )
        {
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1LL);
        }
        if ( *v1 == 10 || *((_QWORD *)v1 + 2) )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1LL);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C029C378 )
            qword_1C029C378();
          if ( qword_1C029C380 && (int)qword_1C029C380() >= 0 && qword_1C029C388 )
            qword_1C029C388();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL);
        }
LABEL_136:
        v1[6] = 0;
        goto LABEL_34;
      }
      if ( (int)IsxxxUserResetDisplayDeviceSupported() < 0 )
        goto LABEL_136;
      v47 = (void (*)(void))qword_1C029C378;
    }
    else
    {
      v29 = v28 - 13;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
        {
          v31 = 0LL;
          v32 = 1LL;
          v33 = 0LL;
          goto LABEL_33;
        }
        v28 = (unsigned int)(v30 - 1);
        if ( !(_DWORD)v28 )
        {
          DCompositionDDAChange();
          goto LABEL_34;
        }
        if ( (_DWORD)v28 != 1 )
          goto LABEL_73;
        LOBYTE(v26) = (*((_QWORD *)v1 + 2) & 2) != 0;
        LOBYTE(v24) = *((_QWORD *)v1 + 2) & 1;
        xxxDisplayDiagBlackScreenDetected(8, v24, v26, 0, 0LL);
        goto LABEL_136;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_136;
      if ( qword_1C029C318 )
        qword_1C029C318(1LL);
      v47 = (void (*)(void))qword_1C029C940;
    }
    if ( v47 )
      v47();
    goto LABEL_136;
  }
LABEL_37:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v7, &StopVideoPortCalloutThread, v1[6], *v1, v1[6]);
  return KeSetEvent(a1[1], 1, 0);
}
