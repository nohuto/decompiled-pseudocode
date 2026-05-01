/*
 * XREFs of ?ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180509E50
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1805065F0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1804FFFB8 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TabletModePositioner::ViewMaximized(
        __int64 a1,
        struct IApplicationView *a2,
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  _DWORD *v6; // rcx
  struct IApplicationView *v7; // rdx
  int (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, struct IApplicationView *, __int64 *, _QWORD); // rbx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13[1] = (__int64)a3;
  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   a1,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v6,
      (unsigned __int8 *)dword_1806C2F0F,
      (const GUID *)(*((_QWORD *)a3 + 6) + 8LL),
      0LL,
      2u,
      &v14);
  v13[0] = 0LL;
  if ( IsSurfaceHubWithWin32VtcEnabled() )
  {
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
           v7) )
    {
      v8 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
      if ( v8(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v13) >= 0 )
      {
        v12 = 0LL;
        v9 = *(_QWORD *)(a1 + 248);
        v10 = *(int (__fastcall **)(__int64, struct IApplicationView *, __int64 *, _QWORD))(*(_QWORD *)v9 + 152LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
        if ( v10(v9, a2, &v12, 0LL) < 0 )
        {
          v11 = TabletModePositioner::SwitchToAppHelper(a1, a2, 0, 0LL, 0LL);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x81E,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v11);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
      }
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(a3);
}
