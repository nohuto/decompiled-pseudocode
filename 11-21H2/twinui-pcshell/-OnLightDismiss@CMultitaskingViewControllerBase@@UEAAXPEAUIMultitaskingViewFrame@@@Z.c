/*
 * XREFs of ?OnLightDismiss@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804BC820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::OnLightDismiss(
        CMultitaskingViewControllerBase *this,
        struct IMultitaskingViewFrame *a2)
{
  CMultitaskingViewControllerBase::_DismissView((CMultitaskingViewControllerBase *)((char *)this - 8));
}
