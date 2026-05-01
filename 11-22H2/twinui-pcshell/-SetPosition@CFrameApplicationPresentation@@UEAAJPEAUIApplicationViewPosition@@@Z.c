/*
 * XREFs of ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1800555A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___ @ 0x180055600 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPosition(
        CFrameApplicationPresentation *this,
        struct IApplicationViewPosition *a2)
{
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationViewPosition *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v5[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v5[1] = (__int64)this;
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___(this, v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
