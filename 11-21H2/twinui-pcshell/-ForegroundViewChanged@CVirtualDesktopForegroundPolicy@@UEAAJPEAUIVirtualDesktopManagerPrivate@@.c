/*
 * XREFs of ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180074A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805422C8 (-_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopForegroundPolicy::ForegroundViewChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IUnknown *a4)
{
  __int64 v8; // r15
  unsigned int v9; // edi
  int (__fastcall *v10)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v12; // rdx
  VirtualDesktopHelpers *v13; // rcx
  HMONITOR MonitorFromApplicationView; // r15
  __int64 (__fastcall *v15)(struct IVirtualDesktopManagerPrivate *, HMONITOR, __int64 *); // rbx
  int v16; // eax
  int v17; // ebx
  int DesktopForView; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // [rsp+20h] [rbp-30h]
  struct IVirtualDesktop *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v26[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v28; // [rsp+80h] [rbp+30h] BYREF

  v8 = *((_QWORD *)this + 5);
  v9 = 0;
  if ( v8 )
  {
    v26[0] = 0LL;
    v10 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 72LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)v26);
    if ( v10(v8, AddressOf) >= 0 && !(unsigned int)SHIsSameObject(a4, v26[0]) )
      goto LABEL_9;
    MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v13, v12);
    v25 = 0LL;
    v15 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, HMONITOR, __int64 *))(*(_QWORD *)a2 + 312LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v16 = v15(a2, MonitorFromApplicationView, &v25);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v16,
        v23);
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *, __int64))(**((_QWORD **)this + 3) + 24LL))(
              *((_QWORD *)this + 3),
              a4,
              v25) )
      {
        v24 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
        DesktopForView = CVirtualDesktopForegroundPolicy::_FindDesktopForView(this, (struct IApplicationView *)a4, &v24);
        if ( DesktopForView >= 0 )
        {
          v28 = 3;
          v20 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64, struct IVirtualDesktop *, int *))(*(_QWORD *)a2 + 360LL))(
                  a2,
                  v25,
                  v24,
                  &v28);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xAB,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v20,
              v23);
          v21 = (*(__int64 (__fastcall **)(struct IVirtualDesktopSwitchAnimator *, HMONITOR, struct IVirtualDesktop *, bool))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  MonitorFromApplicationView,
                  v24,
                  v28 != 3);
          v22 = v21;
          if ( v21 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAC,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v21,
              v23);
          v9 = v22;
        }
        else
        {
          v9 = DesktopForView;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
        goto LABEL_8;
      }
      v17 = 0;
    }
    v9 = v17;
LABEL_8:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_9:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v26);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
    (const char *)0x80010108LL,
    v23);
  return 2147549448LL;
}
