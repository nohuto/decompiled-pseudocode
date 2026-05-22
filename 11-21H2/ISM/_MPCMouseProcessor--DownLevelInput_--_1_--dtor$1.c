/*
 * XREFs of _MPCMouseProcessor::DownLevelInput_::_1_::dtor$1 @ 0x1801C7D3E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCMouseProcessor::DownLevelInput_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>((__int64 *)(a2 + 64));
}
