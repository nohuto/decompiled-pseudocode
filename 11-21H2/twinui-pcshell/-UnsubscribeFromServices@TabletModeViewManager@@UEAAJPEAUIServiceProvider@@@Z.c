/*
 * XREFs of ?UnsubscribeFromServices@TabletModeViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::UnsubscribeFromServices(
        TabletModeViewManager *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(char *, struct IServiceProvider *))(*((_QWORD *)this + 8) + 64LL))((char *)this + 64, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  return 0LL;
}
