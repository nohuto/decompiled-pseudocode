/*
 * XREFs of ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtMITDispatchCompletion @ 0x1C0057A90 (NtMITDispatchCompletion.c)
 *     CanHitTestInDwm @ 0x1C0057D00 (CanHitTestInDwm.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0057D9C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     IsKSTThread @ 0x1C0057E30 (IsKSTThread.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C006C724 (SetKeyboardInputRoutingPolicy.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C006C820 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C006DC70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     NtKSTInitialize @ 0x1C0083F60 (NtKSTInitialize.c)
 *     NtMITActivateInputProcessing @ 0x1C0087520 (NtMITActivateInputProcessing.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00878D0 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0087B68 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     GetCursorUpdateHandle @ 0x1C00AB1C4 (GetCursorUpdateHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C00AB220 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     NtMITSetInputCallbacks @ 0x1C00B0AF0 (NtMITSetInputCallbacks.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B91A0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     NtKSTWait @ 0x1C00BD120 (NtKSTWait.c)
 *     NtMITUpdateInputGlobals @ 0x1C00BFA50 (NtMITUpdateInputGlobals.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00C2180 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00C2240 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C4910 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0140E90 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0140F90 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01412E0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C01413E0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C01414F0 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1C0141970 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0141B80 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0141D60 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputObservationState @ 0x1C01420D0 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0142120 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0142240 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C01424C0 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1C0175530 (NtRIMSetDeadzoneRotation.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4F38 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D8380 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01DC5D0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C01E8470 (InvokeMouseCursorPositionCallout.c)
 *     PostMouseInputMessage @ 0x1C01E8838 (PostMouseInputMessage.c)
 *     SetUMInputObservationState @ 0x1C01E8FEC (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F0A5C (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F1B14 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01F2AFC (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01F51B4 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01F6A3C (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B68 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FAE14 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputThread(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rdi
  char *v2; // rbx

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 12);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
