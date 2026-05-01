/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3F0
 * Callers:
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18002D4E0 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803F0A08 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803F0B3C (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x180562130 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x180563D4C (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1805A3DB4 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1805A3F0C (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1805BF598 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C4864 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1805D47A4 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x1805D7F7C (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x180663E1C (-StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D470 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      v3,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
