/*
 * XREFs of ?UnsubscribeFromServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800AA720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::UnsubscribeFromServices(
        SurfaceHubPositioner *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 152));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 280));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 408));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
