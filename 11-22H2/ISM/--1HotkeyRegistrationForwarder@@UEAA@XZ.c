/*
 * XREFs of ??1HotkeyRegistrationForwarder@@UEAA@XZ @ 0x180122D7C
 * Callers:
 *     ??_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z @ 0x180122DF0 (--_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall HotkeyRegistrationForwarder::~HotkeyRegistrationForwarder(HotkeyRegistrationForwarder *this)
{
  void *v2; // rcx

  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 4 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 2));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 3) = -1073741823;
}
