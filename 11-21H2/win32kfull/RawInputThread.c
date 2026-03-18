/*
 * XREFs of RawInputThread @ 0x1C005CC60
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0004670 (xxxRegisterForDeviceClassNotifications.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     TimersProc @ 0x1C005D710 (TimersProc.c)
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C009A5B8 (-SetPenHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C009A76C (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009ABC8 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C00CE384 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00CE51C (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00EFBFC (--0InkProcessor@@AEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00F099C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00FD3FC (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C010C13C (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C010F0C8 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C0118148 (CreatePointerDeviceProcessEvents.c)
 *     xxxClientEnableMMCSS @ 0x1C011CB68 (xxxClientEnableMMCSS.c)
 *     CheckPointerDeviceConfiguration @ 0x1C011EB58 (CheckPointerDeviceConfiguration.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011F8B0 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     InitKeyboard @ 0x1C011F950 (InitKeyboard.c)
 *     SetDebugHotKeys @ 0x1C01216B8 (SetDebugHotKeys.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C0121754 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C01223E8 (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x1C0122520 (RitTakeOver.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01CE9BC (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D08A8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     UserSetTimer @ 0x1C0243AE8 (UserSetTimer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C024E5E8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C024E6A0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r15
  __int64 v3; // r14
  InkProcessor *v4; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KTIMER *v10; // rax
  __int64 v11; // rcx
  struct _KEVENT *v12; // rdx
  ULONG v13; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v15; // rcx
  NTSTATUS v16; // ebx
  unsigned int v17; // ebx
  bool v18; // zf
  __int64 v19; // rcx
  char v20; // bl
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  struct InteractiveControlManager *v25; // rbx
  int v26; // r8d
  int v27; // r9d
  int Settings; // eax
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // edx
  struct _KTIMER *v34; // rax
  __int64 v35; // rcx
  char *v36; // rax
  IVContainerForegroundSync *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // edx
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  unsigned int v42[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct LegacyInputDispatcher *v43; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v44; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v46[3]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+80h] [rbp-88h] BYREF
  PRKEVENT v48; // [rsp+88h] [rbp-80h]
  _QWORD SystemInformation[2]; // [rsp+90h] [rbp-78h] BYREF
  int v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v53[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+108h] [rbp+0h] BYREF
  unsigned int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]

  DestinationString = 0LL;
  Handle = 0LL;
  v48 = 0LL;
  v51 = 0;
  v43 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v53, 0, sizeof(v53));
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  SystemInformation[0] = PsGetThreadProcessId(KeGetCurrentThread());
  SystemInformation[1] = PsGetThreadId(KeGetCurrentThread());
  v50 = 16;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi);
  if ( InkProcessor::s_pInstance )
    goto LABEL_4;
  v4 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
  if ( v4 )
  {
    InkProcessor::s_pInstance = InkProcessor::InkProcessor(v4);
    if ( InkProcessor::s_pInstance )
      goto LABEL_4;
  }
  else
  {
    InkProcessor::s_pInstance = 0LL;
  }
  if ( (unsigned int)dword_1C0326250 > 2 )
  {
    v42[0] = -1073741801;
    v55 = v42;
    v56 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0326250, (int)&dword_1C02EFE22, 0, 0, 3u, &v54);
  }
LABEL_4:
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_140;
  v53[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v6 = *(_QWORD *)(GetDispInfo() + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 36LL) / 2;
  v7 = (unsigned int)(*(int *)(*(_QWORD *)(v6 + 40) + 40LL) >> 31);
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) % 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos(gptCursorAsync, v7);
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit(v8);
  EnterCrit(1LL, 0LL);
  Object = (PVOID *)lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_;
  RegisterCoreMsgProviderPreferences(15LL, 3LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, (ULONG_PTR)Object);
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
  UserSessionSwitchLeaveCrit(v9);
  v10 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  gptmrMaster = v10;
  if ( !v10 )
    goto LABEL_140;
  KeInitializeTimer(v10);
  v53[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v34 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    gptmrWD = v34;
    if ( !v34 )
      goto LABEL_140;
    KeInitializeTimerEx(v34, SynchronizationTimer);
  }
  v53[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_140;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(1LL, 0LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v11);
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_140;
    v44 = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v44, 0LL);
    v12 = (struct _KEVENT *)v44;
    v13 = 2;
    v53[8] = v44;
    v48 = (PRKEVENT)v44;
  }
  else
  {
    v13 = 1;
    if ( PoRequestShutdownEvent((PVOID *)&v53[8]) < 0 )
      goto LABEL_140;
    v12 = (struct _KEVENT *)v53[8];
  }
  if ( gSessionId != gServiceSessionId )
  {
    CreatePointerDeviceProcessEvents();
    v12 = (struct _KEVENT *)v53[8];
  }
  if ( v12 )
  {
    CurrentThread = KeGetCurrentThread();
    gpkeRITEvent = v12;
    gptiRit = W32GetThreadWin32Thread((__int64)CurrentThread);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
    v15 = (struct _KEVENT *)a1[1];
    v53[0] = *(_QWORD *)(gptiRit + 1416LL);
    KeSetEvent(v15, 1, 0);
    v47 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v47, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v16 = KeWaitForMultipleObjects(v13, &v47, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v16 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v47);
    if ( v16 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v48, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v48);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL) )
      KeSetEvent(gpkeRITEvent, 1, 0);
    EnterCrit(1LL, 0LL);
    if ( !*(_QWORD *)(gptiRit + 456LL) )
      xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0LL, 0LL);
    KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
    if ( gSessionId == gServiceSessionId )
    {
      CBaseInput::InitializeSensor(gpHidInput);
      CBaseInput::InitializeSensor(gpKeyboardSensor);
    }
    else
    {
      if ( gProtocolType )
      {
        *(_OWORD *)&v46[1] = 0LL;
        RtlInitUnicodeString((PUNICODE_STRING)&v46[1], 0LL);
        v17 = 1;
        v18 = 0;
        while ( !v18 )
        {
          if ( v17 == 1 && (int)CBaseInput::InitializeSensor(gpKeyboardSensor) >= 0 )
          {
            CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
            CBaseInput::Read(gpKeyboardSensor);
          }
          v18 = ++v17 == 2;
          if ( v17 > 2 )
            goto LABEL_38;
        }
        if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
          CBaseInput::Read(gpHidInput);
      }
      else
      {
        xxxRegisterForDeviceClassNotifications(gServiceSessionId);
      }
LABEL_38:
      InitTimerPowerSaving();
      ConfigureRITDelayableTimers(0LL);
    }
    gbIsRITReady = 1;
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v20 = 0;
    }
    else
    {
      v20 = 1;
      UserEnterUserCritSec();
    }
    if ( gcSynchronizeTimer != -1 )
      gidSynchronizeTimer = UserSetTimer();
    if ( v20 )
      UserLeaveUserCritSec();
    UserSessionSwitchLeaveCrit(v19);
    LegacyInputDispatcher::Create(&v43);
    LegacyInputDispatcher::Initialize(v43, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v53);
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v43);
    CBaseInput::RegisterDispatcherObject(gpHidInput, v43);
    while ( 1 )
    {
LABEL_46:
      while ( 1 )
      {
        v21 = LegacyInputDispatcher::WaitAndDispatch(v43);
        if ( v21 )
          break;
        EnterCrit(1LL, 0LL);
        xxxRemoveQueueCompletion();
        UserSessionSwitchLeaveCrit(v35);
LABEL_53:
        if ( gspwndAltTab )
        {
          EnterCrit(1LL, 0LL);
          v39 = gptiRit;
          if ( (*(_DWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) & 0x40) != 0 )
          {
            do
            {
              xxxReceiveMessage(v39);
              v39 = gptiRit;
              v38 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
            }
            while ( (v38 & 0x40) != 0 );
          }
          goto LABEL_139;
        }
      }
      if ( v21 == 4 )
        break;
      if ( v21 != 2 )
      {
        if ( ((v21 - 1) & 0xFFFFFFFD) == 0 )
        {
          EnterCrit(1LL, 0LL);
          TimersProc();
          UserSessionSwitchLeaveCrit(v22);
          v23 = dword_1C0337C00;
          if ( gnRetryReadInput != dword_1C0337C00 )
            v23 = gnRetryReadInput;
          dword_1C0337C00 = v23;
        }
        goto LABEL_53;
      }
      EnterCrit(1LL, 0LL);
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
        v38 = gConsoleShadowhDev;
        if ( gConsoleShadowhDev )
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
LABEL_139:
      UserSessionSwitchLeaveCrit(v38);
    }
    v42[0] = 0;
    KeClearEvent(gpkeRITEvent);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( !(unsigned int)GetRITWakeReason(v42) )
                goto LABEL_46;
              v24 = v42[0];
              if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 2LL) )
              {
                switch ( v24 )
                {
                  case 1u:
                    v36 = "Mouse";
                    break;
                  case 2u:
                    v36 = "Shutdown";
                    break;
                  case 4u:
                    v36 = "EnableMMCSS";
                    break;
                  case 8u:
                    v36 = "RitTakeover";
                    break;
                  case 0x10u:
                    v36 = "DitTakeover";
                    break;
                  case 0x20u:
                    v36 = "ConfigUpdate";
                    break;
                  case 0x40u:
                    v36 = "GetUserProfile";
                    break;
                  case 0x80u:
                    v36 = "DitInControl";
                    break;
                  default:
                    v36 = "UNKNOWN";
                    if ( v24 == -1 )
                      v36 = "NoReason";
                    break;
                }
                v44 = v36;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                  (int)&dword_1C032BE20,
                  (__int64)&v44);
              }
              if ( v24 != 1 )
                break;
              ProcessMouseEvent();
            }
            if ( v24 == 2 )
            {
              InitiateWin32kCleanup();
              if ( gSessionId != gServiceSessionId )
              {
                EnterCrit(1LL, 0LL);
                gpkeRITEvent = 0LL;
                ObfDereferenceObject((PVOID)v53[8]);
                UserSessionSwitchLeaveCrit(v31);
              }
              if ( Handle )
                ZwClose(Handle);
              EnterCrit(1LL, 0LL);
              CleanupSensorExplicitly(1LL);
              if ( !gbMIT )
                CleanupSensorExplicitly(2LL);
              UserSessionSwitchLeaveCrit(v32);
              CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
              if ( v43 )
                LegacyInputDispatcher::`scalar deleting destructor'(v43, v33);
              return;
            }
            if ( v24 != 4 )
              break;
            xxxClientEnableMMCSS((*gpsi >> 12) & 1);
          }
          if ( v24 == 8 )
          {
            EnterCrit(1LL, 0LL);
            RitTakeOver();
            CBaseInput::RegisterDispatcherObject(gpHidInput, v43);
            goto LABEL_73;
          }
          if ( v24 != 16 )
            break;
          PrepareForMasterInputThreadTakingOver(v43);
        }
        if ( v24 == 128 )
        {
          EnterCrit(1LL, 0LL);
          ZwSetEvent(ghDITRITEvent, 0LL);
          goto LABEL_73;
        }
        if ( v24 == 32 )
        {
          EnterCrit(1LL, 0LL);
          goto LABEL_73;
        }
        if ( v24 != 64 )
          break;
        EnterCrit(1LL, 0LL);
        CheckPointerDeviceConfiguration();
        v25 = InteractiveControlManager::Instance();
        if ( (unsigned int)dword_1C03262C0 > 4 )
        {
          v46[1] = "InteractiveControlManager::GetExternalParameters entry";
          v44 = *(PVOID *)(gptiCurrent + 496LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            (_DWORD)v44,
            (unsigned int)&unk_1C02F169E,
            v26,
            v27,
            (__int64)&v46[1],
            (__int64)&v44);
        }
        Settings = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v25 + 84));
        v29 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C03262C0 > 2 )
        {
          LODWORD(v46[0]) = Settings;
          v46[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C03262C0,
            (__int64)&v46[1],
            (__int64)v46);
        }
        if ( (unsigned int)dword_1C03262C0 > 4 )
        {
          LODWORD(v44) = v29;
          v46[1] = "InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C03262C0,
            (__int64)&v46[1],
            (__int64)&v44);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_73:
        UserSessionSwitchLeaveCrit(v30);
      }
      if ( v24 == 256 )
      {
        EnterCrit(1LL, 0LL);
        IVContainerForegroundSync::xxxIVSyncForeground(v37);
        goto LABEL_73;
      }
    }
  }
LABEL_140:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v43 )
    LegacyInputDispatcher::`scalar deleting destructor'(v43, v40);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
