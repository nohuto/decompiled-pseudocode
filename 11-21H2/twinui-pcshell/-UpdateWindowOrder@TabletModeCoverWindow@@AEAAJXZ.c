/*
 * XREFs of ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x180238076
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180069380 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z @ 0x180238010 (-AppLayoutChanged@TabletModeCoverWindow@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z @ 0x1805217A0 (-ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180521808 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180521160 (-GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeCoverWindow::UpdateWindowOrder(HWND *this)
{
  __int64 v2; // rsi
  __int64 *AddressOf; // rax
  struct IApplicationView *v4; // rdx
  HWND WindowForView; // rax
  HWND v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    v2 = 1LL;
    v11 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v11);
    if ( (int)TabletModeCoverWindow::GetLowestLayoutView(
                (TabletModeCoverWindow *)this,
                (struct IApplicationView **)AddressOf) >= 0 )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v11,
                              v4);
      v6 = WindowForView;
      if ( WindowForView )
      {
        v2 = -2LL;
        if ( (GetWindowLongW(WindowForView, -20) & 8) == 0 )
          v2 = (__int64)v6;
      }
    }
    if ( !IsWindowVisible(this[13]) )
      ShowWindow(this[13], 8);
    v7 = (*(__int64 (__fastcall **)(HWND, HWND, __int64))(*(_QWORD *)this[22] + 40LL))(this[22], this[13], v2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
      return v8;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
