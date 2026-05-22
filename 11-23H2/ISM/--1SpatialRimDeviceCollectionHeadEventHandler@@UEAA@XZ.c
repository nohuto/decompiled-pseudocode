/*
 * XREFs of ??1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ @ 0x1800D7E24
 * Callers:
 *     ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x1800D80C0 (--_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialRimDeviceCollectionHeadEventHandler::~SpatialRimDeviceCollectionHeadEventHandler(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 23);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)this + 3) = -1073741823;
}
