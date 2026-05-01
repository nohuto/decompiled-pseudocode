/*
 * XREFs of ?OnActivationLost@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x1804BC7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::OnActivationLost(
        CMultitaskingViewControllerBase *this,
        struct IMultitaskingViewFrame *a2,
        HWND a3)
{
  CMultitaskingViewControllerBase::_DismissView((CMultitaskingViewControllerBase *)((char *)this - 8));
}
