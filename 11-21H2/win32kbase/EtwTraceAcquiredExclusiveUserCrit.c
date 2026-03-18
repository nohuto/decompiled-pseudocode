/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C00050DC (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C001F2E0 (EnterCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003480C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0037070 (UserThreadCallout.c)
 *     HandleMITWakeSignal @ 0x1C0037910 (HandleMITWakeSignal.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0040610 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 *     NtUserActivateKeyboardLayout @ 0x1C004F880 (NtUserActivateKeyboardLayout.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00528F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtKSTInitialize @ 0x1C0054130 (NtKSTInitialize.c)
 *     NtUserRegisterSessionPort @ 0x1C00598B0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0059DF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C005A184 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005A46C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     NtUserChangeDisplaySettings @ 0x1C00647B0 (NtUserChangeDisplaySettings.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C006A200 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C007EB70 (NtMITUpdateInputGlobals.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0087C20 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0095774 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtUserCitSetInfo @ 0x1C009CFA0 (NtUserCitSetInfo.c)
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 *     NtMITSetInputCallbacks @ 0x1C00A9360 (NtMITSetInputCallbacks.c)
 *     UserProcessThawCallout @ 0x1C00ACCFC (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00AD1B4 (UserProcessFreezeCallout.c)
 *     NtUserSetInputServiceState @ 0x1C00ADCA0 (NtUserSetInputServiceState.c)
 *     InitSystemThread @ 0x1C00AE200 (InitSystemThread.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserCreateSystemThreads @ 0x1C00B97A0 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C00B9950 (xxxCreateSystemThreads.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B9F10 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserEnableMouseInPointer @ 0x1C00BAEA0 (NtUserEnableMouseInPointer.c)
 *     UserEnterUserCritSec @ 0x1C00BD1F0 (UserEnterUserCritSec.c)
 *     NtRIMOnPnpNotification @ 0x1C00BDAE0 (NtRIMOnPnpNotification.c)
 *     NtUserRegisterLogonProcess @ 0x1C00BDCB0 (NtUserRegisterLogonProcess.c)
 *     NtUserRegisterManipulationThread @ 0x1C00C3850 (NtUserRegisterManipulationThread.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C4240 (NtUserRegisterTouchPadCapable.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5C20 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00D0BF0 (xxxSendWinlogonPowerMessage.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00D1A00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D29D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCallout @ 0x1C00D4DF0 (VideoPortCallout.c)
 *     UserProcessTimerDelayCallout @ 0x1C0141E14 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01421FC (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0143340 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0146EB0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C014BCC8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0153D70 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0154450 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0154800 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0154BD0 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0155200 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C0156050 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0156450 (NtSetCursorInputSpace.c)
 *     NtUserCreateBaseWindow @ 0x1C0156F90 (NtUserCreateBaseWindow.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C01576A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C0158800 (NtUserEnableTouchPad.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0161E50 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C01624A0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0162C20 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C01642C0 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C0164670 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0180080 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnAsyncPnpWorkNotification @ 0x1C0180580 (NtRIMOnAsyncPnpWorkNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C0180930 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C01810E0 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B9CD0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BA120 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BA550 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1DE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2220 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E2B54 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED0C0 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED550 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDBE0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x1C01F01F0 (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01FA0CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C023BE68 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C014BBD4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0151B44 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void EtwTraceAcquiredExclusiveUserCrit()
{
  __int64 CurrentThreadWin32Thread; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v2; // r15
  LARGE_INTEGER v3; // rsi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  LARGE_INTEGER v8; // r12
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  DWORD LowPart; // ecx
  unsigned __int64 v13; // rax
  bool v14; // zf
  int v15; // r8d
  int v16; // r9d
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  void *v25; // [rsp+90h] [rbp-70h] BYREF
  __int16 v26; // [rsp+98h] [rbp-68h]
  void *v27; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v28; // [rsp+A8h] [rbp-58h]
  signed __int64 *v29; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v30; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  _QWORD v44[16]; // [rsp+140h] [rbp+40h] BYREF

  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v2 = PerformanceCounter.QuadPart - *(_QWORD *)(CurrentThreadWin32Thread + 8);
      v3 = PerformanceCounter;
      if ( (dword_1C0296CC0 & 1) == 0 )
      {
        dword_1C0296CC0 |= 1u;
        memset(qword_1C0296CD0, 0, 0x198uLL);
        qword_1C0296E68 = 0LL;
        qword_1C0296E70 = 0LL;
      }
      v4 = 1000000 * v2;
      v44[0] = 10LL;
      v44[1] = 25LL;
      v44[2] = 50LL;
      v44[3] = 100LL;
      v44[4] = 250LL;
      v44[5] = 500LL;
      v44[6] = 1000LL;
      v44[7] = 2500LL;
      v44[8] = 5000LL;
      v44[9] = 10000LL;
      v44[10] = 25000LL;
      v44[11] = 50000LL;
      v44[12] = 100000LL;
      v44[13] = 200000LL;
      v44[14] = -1LL;
      if ( gliQpcFreq.QuadPart == 10000000 )
        v5 = v4 / 0x989680;
      else
        v5 = v4 / gliQpcFreq.QuadPart;
      v6 = 0LL;
      v7 = v44;
      while ( v5 > *v7 )
      {
        v6 = (unsigned int)(v6 + 1);
        ++v7;
        if ( (unsigned int)v6 >= 0xF )
          goto LABEL_16;
      }
      _InterlockedIncrement64(&qword_1C0296CD0[v6]);
LABEL_16:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C0296E38, v5);
      _InterlockedIncrement64((_QWORD *)&xmmword_1C0296E48 + 1);
      if ( (dword_1C0296CC0 & 1) == 0 )
      {
        dword_1C0296CC0 |= 1u;
        memset(qword_1C0296CD0, 0, 0x198uLL);
        qword_1C0296E68 = 0LL;
        qword_1C0296E70 = 0LL;
      }
      v8 = KeQueryPerformanceCounter(0LL);
      v9 = 1000000 * (v8.QuadPart - qword_1C0296E68);
      if ( gliQpcFreq.QuadPart == 10000000 )
        v10 = v9 / 0x989680;
      else
        v10 = v9 / gliQpcFreq.QuadPart;
      if ( v10 > 0x6B49D200 )
      {
        if ( (unsigned int)dword_1C028D6F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL) )
        {
          v17 = 1;
          v26 = 15;
          v25 = &unk_1C0296DC0;
          v28 = 15;
          v27 = &unk_1C0296D48;
          v29 = qword_1C0296CD0;
          v30 = 15;
          v18 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
            15,
            (unsigned int)&unk_1C025B580,
            v15,
            v16,
            (__int64)&v18,
            (__int64)&v29,
            (__int64)&v27,
            (__int64)&v25,
            (__int64)&v17);
        }
        memset(qword_1C0296CD0, 0, 0x168uLL);
        qword_1C0296E68 = v8.QuadPart;
      }
      v11 = 1000000 * (v8.QuadPart - qword_1C0296E70);
      LowPart = gliQpcFreq.LowPart;
      if ( gliQpcFreq.QuadPart == 10000000 )
        v13 = v11 / 0x989680;
      else
        v13 = v11 / gliQpcFreq.QuadPart;
      if ( v13 > 0xF4240 )
      {
        if ( (unsigned int)dword_1C028D6F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x10000000LL) )
        {
          v19 = *((_QWORD *)&xmmword_1C0296E58 + 1);
          v20 = xmmword_1C0296E58;
          v21 = *((_QWORD *)&xmmword_1C0296E48 + 1);
          v22 = xmmword_1C0296E48;
          v23 = *((_QWORD *)&xmmword_1C0296E38 + 1);
          v24 = xmmword_1C0296E38;
          v42 = &v19;
          v40 = &v20;
          v38 = &v21;
          v36 = &v22;
          v34 = &v23;
          v32 = &v24;
          v43 = 8LL;
          v41 = 8LL;
          v39 = 8LL;
          v37 = 8LL;
          v35 = 8LL;
          v33 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028D6F0, (int)&dword_1C025B4FB, 0, 0, 8u, &v31);
        }
        qword_1C0296E70 = v8.QuadPart;
        xmmword_1C0296E38 = 0LL;
        xmmword_1C0296E48 = 0LL;
        xmmword_1C0296E58 = 0LL;
      }
      v14 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(CurrentThreadWin32Thread + 8) = v3;
      if ( !v14
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          LowPart,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v11,
          v2,
          0,
          gullUserCritAcquireToken);
      }
      if ( v2 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && v3.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v11,
            v2,
            (__int64)v4 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        W32KEtwUserCritAcquireDelayExLastTelemetryQPC = v3.QuadPart;
      }
      *(_QWORD *)(CurrentThreadWin32Thread + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
}
