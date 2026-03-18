/*
 * XREFs of RawInputThread @ 0x1C003F070
 * Callers:
 *     <none>
 * Callees:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RitTakeOver @ 0x1C003C730 (RitTakeOver.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C003C7A8 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C003C848 (CheckPointerDeviceConfiguration.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C003C978 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     SetDebugHotKeys @ 0x1C003CA78 (SetDebugHotKeys.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C003CDCC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C003CF3C (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C003CFA4 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C003CFF0 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C003D1B0 (CreatePointerDeviceProcessEvents.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C003D78C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     GreStartTimers @ 0x1C003DA38 (GreStartTimers.c)
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x1C003DC78 (-Initialize@InkProcessor@@SAJXZ.c)
 *     InitKeyboard @ 0x1C003EF0C (InitKeyboard.c)
 *     xxxTimersProc @ 0x1C003FF80 (xxxTimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C004084C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0040E54 (-SetPenHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00411B8 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00413EC (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0049368 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     xxxRemoveQueueCompletion @ 0x1C006A534 (xxxRemoveQueueCompletion.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C00BA85C (xxxRegisterForDeviceClassNotifications.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00BD808 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage @ 0x1C0139640 (Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     xxxTimersProc_Old @ 0x1C013AF08 (xxxTimersProc_Old.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ??B?$SGDgSessionId@K@@QEBAKXZ @ 0x1C01A4558 (--B-$SGDgSessionId@K@@QEBAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A9358 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01AE180 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxClientEnableMMCSS @ 0x1C0212068 (xxxClientEnableMMCSS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C023FFBC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0240074 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r15
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTIMER *v19; // rax
  struct _KTIMER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG v25; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v27; // rcx
  NTSTATUS v28; // ebx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // ebx
  char *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  struct InteractiveControlManager *v64; // rbx
  int v65; // r8d
  int v66; // r9d
  int Settings; // eax
  int v68; // ebx
  IVContainerForegroundSync *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  LegacyInputDispatcher *v87; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v89[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v91[3]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v92; // [rsp+80h] [rbp-88h] BYREF
  PRKEVENT Event; // [rsp+88h] [rbp-80h]
  _QWORD SystemInformation[2]; // [rsp+90h] [rbp-78h] BYREF
  int v95; // [rsp+A0h] [rbp-68h]
  int v96; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v98[8]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v99; // [rsp+F8h] [rbp-10h] BYREF

  DestinationString = 0LL;
  Handle = 0LL;
  Event = 0LL;
  v96 = 0;
  v87 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset_0(v98, 0, 0x50uLL);
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  SystemInformation[0] = PsGetThreadProcessId(KeGetCurrentThread());
  SystemInformation[1] = PsGetThreadId(KeGetCurrentThread());
  v95 = 16;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi, v4, v5, v6);
  InkProcessor::Initialize(v7);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_36;
  v98[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
  {
    v9 = -*(_QWORD *)ProcessWin32Process;
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v10 = *(_QWORD *)(GetDispInfo(v9) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(0xAu, 1);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  EnterCrit(1LL, 0LL);
  RegisterCoreMsgProviderPreferences(14LL, 3LL, 1LL);
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
  {
    _RegisterHotKey((struct tagWND *)1, 0LL, -7, 0x1008u, 0, 0LL);
    _RegisterHotKey((struct tagWND *)1, 0LL, 61744, 0x1002u, 0x1Bu, 0LL);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  v19 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  gptmrMaster = v19;
  if ( !v19 )
    goto LABEL_36;
  KeInitializeTimer(v19);
  v98[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v20 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    gptmrWD = v20;
    if ( !v20 )
      goto LABEL_36;
    KeInitializeTimerEx(v20, SynchronizationTimer);
  }
  v98[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_36;
  }
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(1LL, 0LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  }
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( (unsigned int)Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId || gServiceSessionId )
    {
LABEL_20:
      if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v25 = 2;
        v99 = Object;
        Event = (PRKEVENT)Object;
        goto LABEL_22;
      }
LABEL_36:
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      if ( v87 )
        LegacyInputDispatcher::`scalar deleting destructor'(v87);
      KeSetEvent((PRKEVENT)a1[1], 1, 0);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      return;
    }
  }
  else if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() )
  {
    goto LABEL_20;
  }
  Handle = 0LL;
  v25 = 1;
  if ( PoRequestShutdownEvent(&v99) < 0 )
    goto LABEL_36;
LABEL_22:
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
    CreatePointerDeviceProcessEvents(gServiceSessionId);
  if ( !v99 )
    goto LABEL_36;
  CurrentThread = KeGetCurrentThread();
  WPP_MAIN_CB.Dpc.SystemArgument1 = v99;
  gptiRit = W32GetThreadWin32Thread(CurrentThread);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
  v27 = (struct _KEVENT *)a1[1];
  v98[0] = *(_QWORD *)(gptiRit + 1456LL);
  KeSetEvent(v27, 1, 0);
  v92 = *(PVOID *)(v3 + 56);
  ObReferenceObjectByPointer(v92, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v28 = KeWaitForMultipleObjects(v25, &v92, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v28 == 1 && (gdwRITWakeReason & 2) == 0 );
  ObfDereferenceObject(v92);
  if ( v28 == 1 && (gdwRITWakeReason & 2) != 0 )
  {
    KeSetEvent(Event, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(Event);
    if ( Handle )
      ZwClose(Handle);
    KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
    CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
    return;
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.SystemArgument1, 1, 0);
  EnterCrit(1LL, 0LL);
  if ( !*(_QWORD *)(gptiRit + 456LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0LL, 0LL);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() == gServiceSessionId )
  {
    v38 = SGDGetUserSessionState(gServiceSessionId);
    CBaseInput::InitializeSensor(*(CBaseInput **)(v38 + 16840));
    v40 = SGDGetUserSessionState(v39);
    CBaseInput::InitializeSensor(*(CBaseInput **)(v40 + 12672));
  }
  else
  {
    if ( gProtocolType )
    {
      *(_OWORD *)&v91[1] = 0LL;
      RtlInitUnicodeString((PUNICODE_STRING)&v91[1], 0LL);
      v30 = 1;
      while ( v30 != 2 )
      {
        if ( v30 == 1
          && (v31 = SGDGetUserSessionState(v29), (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v31 + 12672)) >= 0) )
        {
          v32 = SGDGetUserSessionState(v29);
          CBaseInput::HandleTSRequest(*(_QWORD *)(v32 + 12672), 0LL);
          v34 = SGDGetUserSessionState(v33);
          CBaseInput::Read(*(CBaseInput **)(v34 + 12672));
          ++v30;
        }
        else if ( (unsigned int)++v30 > 2 )
        {
          goto LABEL_56;
        }
      }
      v35 = SGDGetUserSessionState(v29);
      if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v35 + 16840)) >= 0 )
      {
        v37 = SGDGetUserSessionState(v36);
        CBaseInput::Read(*(CBaseInput **)(v37 + 16840));
      }
    }
    else
    {
      xxxRegisterForDeviceClassNotifications();
    }
LABEL_56:
    InitTimerPowerSaving();
    ConfigureRITDelayableTimers(0);
  }
  gbIsRITReady = 1;
  GreStartTimers();
  UserSessionSwitchLeaveCrit(v42, v41, v43, v44);
  LegacyInputDispatcher::Create(&v87);
  LegacyInputDispatcher::Initialize(v87, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v98);
  v46 = SGDGetUserSessionState(v45);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v46 + 12672), v87);
  v48 = SGDGetUserSessionState(v47);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v48 + 16840), v87);
  while ( 1 )
  {
LABEL_59:
    while ( 1 )
    {
      v49 = LegacyInputDispatcher::WaitAndDispatch(v87);
      if ( v49 )
        break;
      EnterCrit(1LL, 0LL);
      xxxRemoveQueueCompletion();
      UserSessionSwitchLeaveCrit(v51, v50, v52, v53);
LABEL_125:
      if ( gspwndAltTab )
      {
        EnterCrit(1LL, 0LL);
        v71 = gptiRit;
        v73 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
        if ( (v73 & 0x40) != 0 )
        {
          do
          {
            xxxReceiveMessage(v71);
            v71 = gptiRit;
            v70 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
          }
          while ( (v70 & 0x40) != 0 );
        }
        goto LABEL_128;
      }
    }
    if ( v49 == 4 )
      break;
    if ( v49 != 2 )
    {
      if ( ((v49 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(1LL, 0LL);
        if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage() )
          xxxTimersProc();
        else
          xxxTimersProc_Old();
        UserSessionSwitchLeaveCrit(v75, v74, v76, v77);
        v78 = dword_1C035E170;
        if ( gnRetryReadInput != dword_1C035E170 )
          v78 = gnRetryReadInput;
        dword_1C035E170 = v78;
      }
      goto LABEL_125;
    }
    EnterCrit(1LL, 0LL);
    v73 = gProtocolType;
    if ( gProtocolType )
    {
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16LL),
        gProtocolType,
        *(_QWORD *)(RemoteContext + 40),
        1LL,
        0LL,
        0);
    }
    else if ( gfRemotingConsole )
    {
      v70 = gConsoleShadowhDev;
      if ( gConsoleShadowhDev )
        HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
    }
LABEL_128:
    UserSessionSwitchLeaveCrit(v70, v73, v71, v72);
  }
  v89[0] = 0;
  KeClearEvent((PRKEVENT)WPP_MAIN_CB.Dpc.SystemArgument1);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(v89) )
        goto LABEL_59;
      v54 = v89[0];
      if ( (unsigned int)dword_1C0359080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 2LL) )
      {
        switch ( v54 )
        {
          case 1u:
            v55 = "Mouse";
            break;
          case 2u:
            v55 = "Shutdown";
            break;
          case 4u:
            v55 = "EnableMMCSS";
            break;
          case 8u:
            v55 = "RitTakeover";
            break;
          case 0x10u:
            v55 = "DitTakeover";
            break;
          case 0x20u:
            v55 = "ConfigUpdate";
            break;
          case 0x40u:
            v55 = "GetUserProfile";
            break;
          case 0x80u:
            v55 = "DitInControl";
            break;
          default:
            v55 = "UNKNOWN";
            if ( v54 == -1 )
              v55 = "NoReason";
            break;
        }
        Object = v55;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_1C0359080,
          (__int64)&Object);
      }
      if ( v54 != 1 )
        break;
      ProcessMouseEvent();
    }
    if ( v54 == 2 )
      break;
    switch ( v54 )
    {
      case 4u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 8u:
        EnterCrit(1LL, 0LL);
        RitTakeOver(v56);
        v58 = SGDGetUserSessionState(v57);
        CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v58 + 16840), v87);
        goto LABEL_109;
      case 0x10u:
        PrepareForMasterInputThreadTakingOver(v87);
      case 0x80u:
        EnterCrit(1LL, 0LL);
        ZwSetEvent(WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
        goto LABEL_109;
      case 0x20u:
        EnterCrit(1LL, 0LL);
        goto LABEL_109;
      case 0x40u:
        EnterCrit(1LL, 0LL);
        CheckPointerDeviceConfiguration();
        v64 = InteractiveControlManager::Instance(v63);
        if ( (unsigned int)dword_1C0354150 > 4 )
        {
          v91[1] = "InteractiveControlManager::GetExternalParameters entry";
          Object = *(PVOID *)(gptiCurrent + 496LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            (_DWORD)Object,
            (unsigned int)&unk_1C031D971,
            v65,
            v66,
            (__int64)&v91[1],
            (__int64)&Object);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v64 + 84));
        v68 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C0354150 > 2 )
        {
          LODWORD(v91[0]) = Settings;
          v91[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0354150,
            (__int64)&v91[1],
            (__int64)v91);
        }
        if ( (unsigned int)dword_1C0354150 > 4 )
        {
          LODWORD(Object) = v68;
          v91[1] = "InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0354150,
            (__int64)&v91[1],
            (__int64)&Object);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_109:
        UserSessionSwitchLeaveCrit(v60, v59, v61, v62);
        break;
      case 0x100u:
        EnterCrit(1LL, 0LL);
        IVContainerForegroundSync::xxxIVSyncForeground(v69);
        goto LABEL_109;
    }
  }
  InitiateWin32kCleanup();
  if ( (unsigned int)Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage() )
  {
    if ( Handle )
      goto LABEL_133;
  }
  else
  {
    if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
    {
LABEL_133:
      EnterCrit(1LL, 0LL);
      WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
      ObfDereferenceObject(v99);
      UserSessionSwitchLeaveCrit(v80, v79, v81, v82);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  EnterCrit(1LL, 0LL);
  CleanupSensorExplicitly(1LL);
  if ( !gbMIT )
    CleanupSensorExplicitly(2LL);
  UserSessionSwitchLeaveCrit(v84, v83, v85, v86);
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v87 )
    LegacyInputDispatcher::`scalar deleting destructor'(v87);
}
