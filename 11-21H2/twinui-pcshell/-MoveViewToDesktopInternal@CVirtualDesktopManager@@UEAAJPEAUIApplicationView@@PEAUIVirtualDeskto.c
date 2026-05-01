/*
 * XREFs of ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546990
 * Callers:
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546840 (-MoveViewToDesktop@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802378EC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544A68 (--1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548A20 (-StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805499E0 (-Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054C8E0 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktopInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VirtualDesktopViewMovedActivity");
  *(_QWORD *)v11 = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v11);
  if ( *((_DWORD *)this + 69) )
  {
    v6 = -2147019873;
    v7 = 2147947423LL;
    v8 = 215LL;
  }
  else
  {
    v9 = CVirtualDesktopManager::_MoveViewToDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
    v6 = v9;
    if ( v9 >= 0 )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
        (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v11,
        a2,
        a3);
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v9;
    v8 = 216LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v7);
LABEL_7:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::~VirtualDesktopViewMovedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v11);
  return v6;
}
