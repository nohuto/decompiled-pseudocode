/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$1 @ 0x18006D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 64));
}
