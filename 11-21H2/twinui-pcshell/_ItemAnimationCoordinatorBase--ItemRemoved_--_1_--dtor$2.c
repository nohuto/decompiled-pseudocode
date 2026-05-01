/*
 * XREFs of _ItemAnimationCoordinatorBase::ItemRemoved_::_1_::dtor$2 @ 0x1804DCE1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ItemAnimationCoordinatorBase::ItemRemoved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 32));
}
