/*
 * XREFs of ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180559A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802378EC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180556F14 (--1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557EA0 (-StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18055887C (-Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualPinnedAppsHandler::UnpinView(VirtualPinnedAppsHandler *this, struct IApplicationView *a2)
{
  struct IApplicationView *v4; // rdx
  VirtualDesktopHelpers *v5; // rcx
  unsigned int v6; // ebx
  HMONITOR MonitorFromApplicationView; // rdi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, HMONITOR, struct IVirtualDesktop **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  struct IVirtualDesktop *v13; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v15[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v14);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"VirtualDesktopUnpinWindowActivity");
  v15[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v15);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 376LL))(*((_QWORD *)this + 6)) )
  {
    v13 = 0LL;
    MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v5, v4);
    v8 = *((_QWORD *)this + 6);
    v9 = *(__int64 (__fastcall **)(__int64, HMONITOR, struct IVirtualDesktop **))(*(_QWORD *)v8 + 312LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    v10 = v9(v8, MonitorFromApplicationView, &v13);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, struct IVirtualDesktop *))(*(_QWORD *)this + 104LL))(
              this,
              a2,
              v13);
      v6 = v10;
      if ( v10 >= 0 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v15,
          a2,
          v13);
        v6 = 0;
        goto LABEL_9;
      }
      v11 = 243LL;
    }
    else
    {
      v11 = 242LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    goto LABEL_10;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEE,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)0x8007139FLL);
LABEL_10:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::~VirtualDesktopUnpinWindowActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v15);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  return v6;
}
