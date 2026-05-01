/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000F048
 * Callers:
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18000EF90 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18032335C (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180323498 (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804A2808 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804A5084 (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804A660C (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1804EBE14 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1804EC00C (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x180507060 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18050C334 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x18051C104 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x18051F59C (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x1805964B8 (-StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000F0FC (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v6);
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
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
}
