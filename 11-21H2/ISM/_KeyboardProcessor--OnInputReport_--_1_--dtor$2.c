/*
 * XREFs of _KeyboardProcessor::OnInputReport_::_1_::dtor$2 @ 0x180193C36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeyboardProcessor::OnInputReport_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>((__int64 *)(a2 + 32));
}
