/*
 * XREFs of _KeyboardProcessor::OnInputReport_::_1_::dtor$2 @ 0x1801B1B3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeyboardProcessor::OnInputReport_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)(a2 + 32));
}
