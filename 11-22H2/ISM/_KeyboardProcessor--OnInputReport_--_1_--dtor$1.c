/*
 * XREFs of _KeyboardProcessor::OnInputReport_::_1_::dtor$1 @ 0x1801BFB0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardProcessor::OnInputReport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 40));
}
