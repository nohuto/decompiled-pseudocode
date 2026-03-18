/*
 * XREFs of HMUnlockObject @ 0x1C0038FB0
 * Callers:
 *     NtUserReportInertia @ 0x1C0002E00 (NtUserReportInertia.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C00050DC (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserSetKeyboardState @ 0x1C0005830 (NtUserSetKeyboardState.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C001F2E0 (EnterCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003480C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0037070 (UserThreadCallout.c)
 *     HandleMITWakeSignal @ 0x1C0037910 (HandleMITWakeSignal.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtUserToUnicodeEx @ 0x1C003F590 (NtUserToUnicodeEx.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0040610 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C004E7A0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C004F880 (NtUserActivateKeyboardLayout.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
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
 *     NtUserEnumDisplayMonitors @ 0x1C006E560 (NtUserEnumDisplayMonitors.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E114 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C007EB70 (NtMITUpdateInputGlobals.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0087C20 (NtUserSetProcessDpiAwarenessContext.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0089240 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0095774 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtUserCitSetInfo @ 0x1C009CFA0 (NtUserCitSetInfo.c)
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 *     NtMITSetInputCallbacks @ 0x1C00A9360 (NtMITSetInputCallbacks.c)
 *     UserProcessThawCallout @ 0x1C00ACCFC (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00AD1B4 (UserProcessFreezeCallout.c)
 *     NtUserLockCursor @ 0x1C00AD6F0 (NtUserLockCursor.c)
 *     NtUserSetInputServiceState @ 0x1C00ADCA0 (NtUserSetInputServiceState.c)
 *     InitSystemThread @ 0x1C00AE200 (InitSystemThread.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     NtMITActivateInputProcessing @ 0x1C00B5940 (NtMITActivateInputProcessing.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B6650 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserCreateActivationObject @ 0x1C00B80C0 (NtUserCreateActivationObject.c)
 *     NtUserSetSysColors @ 0x1C00B8210 (NtUserSetSysColors.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserCreateSystemThreads @ 0x1C00B97A0 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C00B9950 (xxxCreateSystemThreads.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B9F10 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 *     NtUserEnableMouseInPointer @ 0x1C00BAEA0 (NtUserEnableMouseInPointer.c)
 *     UserEnterUserCritSec @ 0x1C00BD1F0 (UserEnterUserCritSec.c)
 *     NtRIMOnPnpNotification @ 0x1C00BDAE0 (NtRIMOnPnpNotification.c)
 *     NtUserRegisterLogonProcess @ 0x1C00BDCB0 (NtUserRegisterLogonProcess.c)
 *     NtUserRegisterManipulationThread @ 0x1C00C3850 (NtUserRegisterManipulationThread.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C4240 (NtUserRegisterTouchPadCapable.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5C20 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtUserClipCursor @ 0x1C00CF260 (NtUserClipCursor.c)
 *     HMUnlockDestroyObject @ 0x1C00D0300 (HMUnlockDestroyObject.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00D0BF0 (xxxSendWinlogonPowerMessage.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00D1A00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D29D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCallout @ 0x1C00D4DF0 (VideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     UserProcessTimerDelayCallout @ 0x1C0141E14 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01421FC (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0143340 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     NtMapVisualRelativePoints @ 0x1C0145B90 (NtMapVisualRelativePoints.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0146EB0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01480C0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C014BCC8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0153D70 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0154140 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0154450 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0154800 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0154BD0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C0154FD0 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0155200 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1C01555B0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0155780 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0155930 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C0156050 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0156450 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0156860 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0156AA0 (NtSetShellCursorState.c)
 *     NtUserCreateBaseWindow @ 0x1C0156F90 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0157360 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyActivationObject @ 0x1C0157540 (NtUserDestroyActivationObject.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C01576A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0158660 (NtUserDownlevelTouchpad.c)
 *     NtUserEnableTouchPad @ 0x1C0158800 (NtUserEnableTouchPad.c)
 *     NtUserGetInputContainerId @ 0x1C0159470 (NtUserGetInputContainerId.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C015FED0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1C0161760 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetManipulationInputTarget @ 0x1C01618F0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0161E50 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C01624A0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0162C20 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
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
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2770 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
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
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0030CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C0141650 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rdi
  int v8; // esi
  tagDomLock *v9; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v11; // [rsp+28h] [rbp-40h] BYREF
  void *v12; // [rsp+30h] [rbp-38h]
  char v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  char v15; // [rsp+48h] [rbp-20h]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) != 1 )
    return a1;
  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
    v7 = &v11;
    v11 = 1;
    v12 = &gDomainDummyLock;
    v14 = 0LL;
    v8 = 0;
    v15 = 0;
    v13 = 0;
    do
    {
      v9 = (tagDomLock *)*((_QWORD *)v7 - 1);
      if ( v9 )
      {
        if ( *v7 )
          tagDomLock::LockExclusive(v9);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v9);
      }
      ++v8;
      v7 += 16;
    }
    while ( !v8 );
    v15 = 1;
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v15 && DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  else if ( !gphePrimaryDestroyTarget
         || v2 == gphePrimaryDestroyTarget
         || gbInDestroyExclusiveUserCritDeferredUnlockList )
  {
    HMDestroyUnlockedObjectWorker(v2, v5, v6);
  }
  else
  {
    ++gcSecondaryDestroyTargets;
    LockIntoExclusiveUserCritDeferredUnlockList(a1);
  }
  return 0LL;
}
