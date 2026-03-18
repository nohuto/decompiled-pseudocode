/*
 * XREFs of PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC
 * Callers:
 *     NtUserReportInertia @ 0x1C0002E00 (NtUserReportInertia.c)
 *     NtUserSetKeyboardState @ 0x1C0005830 (NtUserSetKeyboardState.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtUserToUnicodeEx @ 0x1C003F590 (NtUserToUnicodeEx.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C004E7A0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserEnumDisplayMonitors @ 0x1C006E560 (NtUserEnumDisplayMonitors.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     NtUserLockCursor @ 0x1C00AD6F0 (NtUserLockCursor.c)
 *     NtMITActivateInputProcessing @ 0x1C00B5940 (NtMITActivateInputProcessing.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B6650 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserCreateActivationObject @ 0x1C00B80C0 (NtUserCreateActivationObject.c)
 *     NtUserSetSysColors @ 0x1C00B8210 (NtUserSetSysColors.c)
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 *     NtUserClipCursor @ 0x1C00CF260 (NtUserClipCursor.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     NtMapVisualRelativePoints @ 0x1C0145B90 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0154140 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITInitMinuserThread @ 0x1C0154FD0 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C01555B0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0155780 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0155930 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0156860 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0156AA0 (NtSetShellCursorState.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0157360 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyActivationObject @ 0x1C0157540 (NtUserDestroyActivationObject.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0158660 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C0159470 (NtUserGetInputContainerId.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C015FED0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1C0161760 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetManipulationInputTarget @ 0x1C01618F0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C002A200 (IsEtwUserCritEnabled.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z @ 0x1C002A404 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall PrivateAPI::_anonymous_namespace_::EnterCritInternal(char a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF

  InputTraceLogging::Perf::CritAcquire::CritAcquire(v7, 1LL);
  v2 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v3 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v3 )
  {
    v4 = *v3;
    if ( a1 || !IsThreadCrossSessionAttached() )
      v2 = v4;
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v7);
  return v2;
}
