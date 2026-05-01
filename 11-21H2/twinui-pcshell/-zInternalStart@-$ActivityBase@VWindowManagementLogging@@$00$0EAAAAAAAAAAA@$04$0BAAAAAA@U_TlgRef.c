/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180237A88
 * Callers:
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1804F6F20 (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18052A6FC (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1805486B0 (-StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548760 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548810 (-StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1805488C0 (-StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXX.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548970 (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548A20 (-StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180555B6C (-StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557C90 (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557D40 (-StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557DF0 (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557EA0 (-StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x18057C360 (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v5);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v3,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
