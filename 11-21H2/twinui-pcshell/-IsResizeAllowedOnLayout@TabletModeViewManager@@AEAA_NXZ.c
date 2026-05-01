/*
 * XREFs of ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x18050B7B0
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18050BAC0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TabletModeViewManager::IsResizeAllowedOnLayout(TabletModeViewManager *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  bool v4; // bl
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( IsSurfaceHubWithWin32VtcEnabled() )
  {
    v6 = 0LL;
    v2 = *((_QWORD *)this + 15);
    v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
    if ( v3(v2, &v6) >= 0 )
    {
      v4 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, 4LL) == 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
      return v4;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  }
  return 1;
}
