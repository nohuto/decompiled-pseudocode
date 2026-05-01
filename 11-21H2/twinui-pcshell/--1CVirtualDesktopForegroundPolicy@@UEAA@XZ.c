/*
 * XREFs of ??1CVirtualDesktopForegroundPolicy@@UEAA@XZ @ 0x180541F34
 * Callers:
 *     ??_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z @ 0x180542120 (--_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CVirtualDesktopForegroundPolicy::~CVirtualDesktopForegroundPolicy(
        CVirtualDesktopForegroundPolicy *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
