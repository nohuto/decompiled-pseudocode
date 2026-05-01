/*
 * XREFs of ??1VirtualDesktopTabletModeNotificationListener@@UEAA@XZ @ 0x1801BC60C
 * Callers:
 *     ??_GVirtualDesktopTabletModeNotificationListener@@UEAAPEAXI@Z @ 0x1801BC5D0 (--_GVirtualDesktopTabletModeNotificationListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall VirtualDesktopTabletModeNotificationListener::~VirtualDesktopTabletModeNotificationListener(
        VirtualDesktopTabletModeNotificationListener *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
