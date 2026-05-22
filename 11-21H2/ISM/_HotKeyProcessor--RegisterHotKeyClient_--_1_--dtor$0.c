/*
 * XREFs of _HotKeyProcessor::RegisterHotKeyClient_::_1_::dtor$0 @ 0x1801D482D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HotKeyProcessor::RegisterHotKeyClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>((__int64 *)(a2 + 64));
}
