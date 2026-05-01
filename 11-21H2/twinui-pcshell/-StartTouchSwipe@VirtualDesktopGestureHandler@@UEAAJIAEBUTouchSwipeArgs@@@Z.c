/*
 * XREFs of ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180555D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18015C324 (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180544150 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_180544150.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18054F70C (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x1805538B4 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 *     ?StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180555B6C (-StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z @ 0x180556708 (-UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::StartTouchSwipe(
        VirtualDesktopGestureContext **this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v8[2]; // [rsp+20h] [rbp-298h] BYREF
  _QWORD v9[40]; // [rsp+160h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  if ( !*((_BYTE *)this + 400) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v8,
      (__int64)"VirtualDesktopGestureActivity");
    *(_QWORD *)v8 = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v8);
    v5 = VirtualDesktopGestureHandler::InitializeContext((VirtualDesktopGestureHandler *)(this - 1), a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x655,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v5);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v8);
      return v6;
    }
    VirtualDesktopGestureContext::UpdateScale(this[9], 0.69999999);
    *((_BYTE *)this + 400) = 1;
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v9,
      (__int64)v8,
      0);
    v9[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::operator=(this + 10, (__int64)v9);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v9);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v8);
  }
  return 0LL;
}
