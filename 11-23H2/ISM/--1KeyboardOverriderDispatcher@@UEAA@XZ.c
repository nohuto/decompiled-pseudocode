/*
 * XREFs of ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800FE16C
 * Callers:
 *     ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800F88D0 (--_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800F7E04 (--1-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAA@XZ @ 0x1800F7E94 (--1-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_M.c)
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800FE4D4 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 */

void __fastcall KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(KeyboardOverriderDispatcher *this)
{
  *(_QWORD *)this = &KeyboardOverriderDispatcher::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &KeyboardOverriderDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  KeyboardOverriderDispatcher::DestroyOverriderProxy(this);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 97);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 96);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 95);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 94);
  std::deque<KeyboardEvent>::~deque<KeyboardEvent>((__int64)this + 712);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 55);
  std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>((__int64)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
