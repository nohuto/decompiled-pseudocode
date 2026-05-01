/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D6B90
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x1805D7740 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1805D7890 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1805D6B2C (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1805D6EA4 (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1805D6F70 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805D7A0C (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x1805D8108 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, struct IApplicationView **); // rdi
  AppResizeView *v13; // rcx
  HWND EvictedMeetingWindow; // rbx
  const char *v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-38h]
  char v23; // [rsp+48h] [rbp-28h]
  struct IApplicationView *v24[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( *((_BYTE *)this + 96) )
    return 0LL;
  *((_BYTE *)this + 96) = 1;
  v19 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 8) + 32LL))(
                     *((_QWORD *)this + 8),
                     v24);
  v24[0] = this;
  v24[1] = (struct IApplicationView *)&v19;
  v22 = *(_OWORD *)v24;
  v23 = 1;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  v20 = 0LL;
  v4 = AppResizeView::QueryResizeApps(this, v19, a2, &v20);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &ppvOut);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 563LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 88LL))(ppvOut, v20);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 564LL;
      goto LABEL_8;
    }
    if ( IsSurfaceHubWithWin32VtcEnabled() )
    {
      v24[0] = 0LL;
      v11 = v20;
      v12 = *(void (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v20 + 112LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v24);
      v12(v11, v24);
      EvictedMeetingWindow = AppResizeView::GetEvictedMeetingWindow(v13, v24[0]);
      if ( EvictedMeetingWindow
        && !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 9) + 184LL))(
              *((_QWORD *)this + 9),
              v24[0]) )
      {
        v16 = PostMessageW(EvictedMeetingWindow, 0x112u, 0xF020uLL, 0LL)
            ? 0
            : wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x27D,
                (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
                v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x23D,
            (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
            (const char *)(unsigned int)v16);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v24);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v17 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this, v18);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v19);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x230,
    (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  v8 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
  AppResizeView::Cleanup(this, v9);
  TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v19);
  return v5;
}
