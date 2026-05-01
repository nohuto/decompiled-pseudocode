/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor$2 @ 0x180573A22
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 72));
}
