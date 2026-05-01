/*
 * XREFs of ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180611DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010A38C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18014591C (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1805FFDE0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_1805FFDE0.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18060AED4 (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18060F670 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 *     ?StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180611D38 (-StartActivity@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureHandler::StartSwipe(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-298h] BYREF
  _QWORD v12[40]; // [rsp+160h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VirtualDesktopGestureActivity");
  *(_QWORD *)v11 = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  v7 = VirtualDesktopGestureHandler::InitializeContext((VirtualDesktopGestureHandler *)a1, a4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x669,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v9);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v12,
      (__int64)v11,
      0);
    v12[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::operator=((_QWORD *)(a1 + 88), (__int64)v12);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v12);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v7);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v11);
  return v8;
}
