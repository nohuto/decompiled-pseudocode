/*
 * XREFs of ??1CVirtualDesktopHolographicViewTransitionNotification@@UEAA@XZ @ 0x18017C0BC
 * Callers:
 *     ??_ECVirtualDesktopHolographicViewTransitionNotification@@UEAAPEAXI@Z @ 0x18017C080 (--_ECVirtualDesktopHolographicViewTransitionNotification@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CVirtualDesktopHolographicViewTransitionNotification::~CVirtualDesktopHolographicViewTransitionNotification(
        CVirtualDesktopHolographicViewTransitionNotification *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
}
