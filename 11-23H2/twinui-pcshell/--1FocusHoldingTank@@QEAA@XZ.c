/*
 * XREFs of ??1FocusHoldingTank@@QEAA@XZ @ 0x180503884
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18002CB84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18006B0E0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180194F7C (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18019ED1C (--1XamlLauncher@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x1804FFE38 (--1-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??4?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804FFE6C (--4-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180502958 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BC60C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805031D8 (--$-0$$V@DestroyHoldingTankWindow@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 *     ??1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180503858 (--1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 */

void __fastcall FocusHoldingTank::~FocusHoldingTank(FocusHoldingTank *this, char a2)
{
  unsigned int v3; // edx
  const char *v4; // r9
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  StartWindowTelemetry::DestroyHoldingTankWindow::DestroyHoldingTankWindow(v5, a2);
  if ( *(_QWORD *)this )
  {
    SetLastError(0);
    if ( !SetWindowLongPtrW(*(HWND *)this, -21, 0LL) && GetLastError() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v4);
    DestroyWindow(*(HWND *)this);
    *(_QWORD *)this = 0LL;
  }
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, v3);
  StartWindowTelemetry::DestroyHoldingTankWindow::~DestroyHoldingTankWindow((StartWindowTelemetry::DestroyHoldingTankWindow *)v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
}
