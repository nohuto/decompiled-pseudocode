/*
 * XREFs of ?UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800AA320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromServices(
        PeoplePaneViewManager *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 328));
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 192));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
  return 0LL;
}
