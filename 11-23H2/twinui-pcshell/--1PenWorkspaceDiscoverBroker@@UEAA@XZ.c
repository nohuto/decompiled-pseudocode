/*
 * XREFs of ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x1801B9ADC
 * Callers:
 *     ??_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z @ 0x1801B9AA0 (--_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B70AC (-InternalRelease@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspaceDiscoverBroker::~PenWorkspaceDiscoverBroker(PenWorkspaceDiscoverBroker *this)
{
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
}
