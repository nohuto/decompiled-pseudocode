/*
 * XREFs of ??1VirtualDesktopDataSourceComponent@@UEAA@XZ @ 0x1801B14F8
 * Callers:
 *     ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x1801B14BC (--_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall VirtualDesktopDataSourceComponent::~VirtualDesktopDataSourceComponent(
        VirtualDesktopDataSourceComponent *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  CImmersiveShellComponent::~CImmersiveShellComponent((VirtualDesktopDataSourceComponent *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
