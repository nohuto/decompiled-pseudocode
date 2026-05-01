/*
 * XREFs of ?SetAnimationCoordinator@CMultitaskingViewElementBase@@UEAAXPEAUIAnimationCoordinator@@@Z @ 0x1804BAA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewElementBase::SetAnimationCoordinator(
        CMultitaskingViewElementBase *this,
        struct IAnimationCoordinator *a2)
{
  Microsoft::WRL::ComPtr<IAnimationCoordinator>::operator=((__int64 *)this + 25, (__int64)a2);
}
