/*
 * XREFs of ?SetApplicationViewCollection@MultitaskingViewGestureHandler@@UEAAXPEAUIApplicationViewCollection@@@Z @ 0x18010E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetApplicationViewCollection(
        MultitaskingViewGestureHandler *this,
        struct IApplicationViewCollection *a2)
{
  wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::operator=((char *)this + 56, a2);
}
