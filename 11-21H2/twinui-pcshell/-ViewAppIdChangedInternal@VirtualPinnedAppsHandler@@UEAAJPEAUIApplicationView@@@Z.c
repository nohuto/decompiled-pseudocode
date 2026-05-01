/*
 * XREFs of ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180156FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805578D4 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, LPCWCH *); // rbx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  const WCHAR *v9; // rsi
  const WCHAR *v10; // rcx
  int v11; // eax
  struct IApplicationView *v12; // rdx
  VirtualDesktopHelpers *v13; // rcx
  HMONITOR MonitorFromApplicationView; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, HMONITOR, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  LPCWCH lpString2; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v23; // [rsp+88h] [rbp+38h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF

  lpString2 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  v20 = -1LL;
  v21 = -1LL;
  if ( v4(a2, &lpString2) < 0 || (v5 = *((_QWORD *)this + 12), v6 = *((_QWORD *)this + 13), v5 == v6) )
  {
LABEL_3:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           &v23)
      && v23 )
    {
      v24 = 0LL;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 376LL))(*((_QWORD *)this + 6)) )
      {
        MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v13, v12);
        v15 = *((_QWORD *)this + 6);
        v16 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v15 + 312LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v17 = v16(v15, MonitorFromApplicationView, &v24);
        v7 = v17;
        if ( v17 < 0 )
        {
          v18 = 329LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
          goto LABEL_5;
        }
      }
      v17 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
              this,
              a2,
              v24);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = 331LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    }
  }
  else
  {
    v9 = lpString2;
    while ( 1 )
    {
      v10 = (const WCHAR *)v5;
      if ( *(_QWORD *)(v5 + 24) >= 8uLL )
        v10 = *(const WCHAR **)v5;
      if ( CompareStringOrdinal(v10, -1, v9, -1, 1) == 2 )
        break;
      v5 += 32LL;
      if ( v5 == v6 )
        goto LABEL_3;
    }
    v11 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_5;
    }
  }
  v7 = 0;
LABEL_5:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  return v7;
}
