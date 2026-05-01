/*
 * XREFs of ?UnsubscribeFromServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801432E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
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
