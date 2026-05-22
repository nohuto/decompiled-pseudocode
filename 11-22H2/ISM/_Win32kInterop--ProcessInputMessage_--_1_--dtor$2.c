/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$2 @ 0x180109139
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 64));
}
