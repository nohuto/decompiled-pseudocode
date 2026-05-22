/*
 * XREFs of _InputContext::InputContext_::_1_::dtor$2 @ 0x1800F7A6E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputContext::InputContext_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(*(_QWORD *)(a2 + 48) + 24LL);
}
