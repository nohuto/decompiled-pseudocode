/*
 * XREFs of ??1CVirtualDesktopForegroundPolicy@@UEAA@XZ @ 0x1805FC644
 * Callers:
 *     ??_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z @ 0x1805FC690 (--_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
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
