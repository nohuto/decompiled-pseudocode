/*
 * XREFs of ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806021F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18003A7B4 (--1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003A7E0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A888 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x18003B714 (-StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003B7BC (-Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktopFromApiInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)"VirtualDesktopViewMovedActivity");
  *(_QWORD *)v9 = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9);
  v6 = CVirtualDesktopManager::_MoveViewToDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9,
      a2,
      a3);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::~VirtualDesktopViewMovedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9);
  return v7;
}
