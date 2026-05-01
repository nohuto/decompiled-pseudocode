/*
 * XREFs of ?Destroy@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x180235A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::Destroy(CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
}
