/*
 * XREFs of ??1HotkeyClientRegistration@@UEAA@XZ @ 0x1801FDD00
 * Callers:
 *     ??_EHotkeyClientRegistration@@UEAAPEAXI@Z @ 0x1801FDFF0 (--_EHotkeyClientRegistration@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall HotkeyClientRegistration::~HotkeyClientRegistration(HotkeyClientRegistration *this)
{
  *(_QWORD *)this = &HotkeyClientRegistration::`vftable';
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  *((_DWORD *)this + 3) = -1073741823;
}
