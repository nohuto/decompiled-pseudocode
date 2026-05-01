/*
 * XREFs of ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x18017CECC
 * Callers:
 *     ??_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z @ 0x18017CE90 (--_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ @ 0x18017A368 (-InternalRelease@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspaceDiscoverBroker::~PenWorkspaceDiscoverBroker(PenWorkspaceDiscoverBroker *this)
{
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
