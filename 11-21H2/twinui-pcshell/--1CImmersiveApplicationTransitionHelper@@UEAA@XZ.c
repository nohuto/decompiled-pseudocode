/*
 * XREFs of ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x18017CCCC
 * Callers:
 *     ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x18017CC90 (--_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApplicationTransitionHelper::~CImmersiveApplicationTransitionHelper(
        CImmersiveApplicationTransitionHelper *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
