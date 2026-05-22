/*
 * XREFs of ??1HotkeyContextualProcessor@@EEAA@XZ @ 0x1801D095C
 * Callers:
 *     ??_EHotkeyContextualProcessor@@EEAAPEAXI@Z @ 0x1801B8510 (--_EHotkeyContextualProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HotkeyContextualProcessor::~HotkeyContextualProcessor(HotkeyContextualProcessor *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &HotkeyContextualProcessor::`vftable';
  *((_QWORD *)this + 1) = &HotkeyContextualProcessor::`vftable'{for `ITextInputStateAdapterOwner'};
  *((_QWORD *)this + 2) = &HotkeyContextualProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  v2 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  *((_DWORD *)this + 7) = -1073741823;
}
