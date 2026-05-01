/*
 * XREFs of ?SetApplicationViewSwitcher@MultitaskingViewGestureHandler@@UEAAXPEAUIApplicationViewSwitcher@@@Z @ 0x18017E550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetApplicationViewSwitcher(
        MultitaskingViewGestureHandler *this,
        struct IApplicationViewSwitcher *a2)
{
  wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=((__int64 *)this + 8, (__int64)a2);
}
