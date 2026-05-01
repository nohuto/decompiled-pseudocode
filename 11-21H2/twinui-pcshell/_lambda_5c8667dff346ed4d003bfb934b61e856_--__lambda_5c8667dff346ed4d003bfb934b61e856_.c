/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x1804E4984
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::_scalar_deleting_destructor_ @ 0x1804E4B00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--_scala.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E5840 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
