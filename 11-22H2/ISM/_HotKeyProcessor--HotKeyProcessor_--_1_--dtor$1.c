/*
 * XREFs of _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x1801FD797
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyProcessor::HotKeyProcessor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::~list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>(*(_QWORD *)(a2 + 128) + 24LL);
}
