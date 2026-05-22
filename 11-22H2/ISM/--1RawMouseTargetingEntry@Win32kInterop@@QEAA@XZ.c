/*
 * XREFs of ??1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ @ 0x180106D1C
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$6 @ 0x180080FBB (_Win32kInterop--Win32kInterop_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Win32kInterop::RawMouseTargetingEntry::~RawMouseTargetingEntry(
        Win32kInterop::RawMouseTargetingEntry *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 8);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v1);
}
