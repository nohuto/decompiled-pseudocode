/*
 * XREFs of ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x1805FB370
 * Callers:
 *     ??_GCVirtualDesktopFactory@@UEAAPEAXI@Z @ 0x1805FB3B0 (--_GCVirtualDesktopFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CVirtualDesktopFactory::~CVirtualDesktopFactory(CVirtualDesktopFactory *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
