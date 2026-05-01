/*
 * XREFs of _CMultitaskingViewElementBase::RemoveChild_::_1_::dtor$1 @ 0x1802359ED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewElementBase::RemoveChild_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((void *)(a2 + 128));
}
