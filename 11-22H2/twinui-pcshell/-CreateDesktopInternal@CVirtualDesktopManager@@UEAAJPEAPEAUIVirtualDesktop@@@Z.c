/*
 * XREFs of ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180600C80
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180600E30 (-CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010A38C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600444 (--1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ?StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180603BA0 (-StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@W4SwitcherType@3@@Z @ 0x180603EE8 (-Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::CreateDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int SwitcherType; // eax
  struct IVirtualDesktop *v10; // rax
  __int64 v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"VirtualDesktopCreatedActivity");
  v13[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v13);
  if ( a2 )
    *a2 = 0LL;
  if ( !*((_DWORD *)this + 49) )
  {
    v12[0] = 0LL;
    v5 = *((_QWORD *)this + 12);
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
    v7 = v6(v5, v12);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 24LL))(
             *((_QWORD *)this + 15),
             v12[0]);
      v4 = v7;
      if ( v7 >= 0 )
      {
        SwitcherType = CVirtualDesktopManager::GetSwitcherType((char *)this - 8);
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
          v13,
          v12[0],
          *((_QWORD *)this + 12),
          SwitcherType);
        if ( a2 )
        {
          v10 = (struct IVirtualDesktop *)v12[0];
          v12[0] = 0LL;
          *a2 = v10;
        }
        v4 = 0;
        goto LABEL_13;
      }
      v8 = 716LL;
    }
    else
    {
      v8 = 714LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_13:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
    goto LABEL_14;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)0x8007139FLL);
LABEL_14:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::~VirtualDesktopCreatedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v13);
  return v4;
}
