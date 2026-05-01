/*
 * XREFs of ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x1801B9C5C
 * Callers:
 *     ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x1801B9C20 (--_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApplicationTransitionHelper::~CImmersiveApplicationTransitionHelper(
        CImmersiveApplicationTransitionHelper *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
}
