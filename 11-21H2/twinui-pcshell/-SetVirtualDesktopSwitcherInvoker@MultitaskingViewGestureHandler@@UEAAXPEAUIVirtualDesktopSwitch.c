/*
 * XREFs of ?SetVirtualDesktopSwitcherInvoker@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x1800FDFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetVirtualDesktopSwitcherInvoker(
        MultitaskingViewGestureHandler *this,
        struct IVirtualDesktopSwitcherInvoker *a2)
{
  wil::com_ptr_t<IVirtualDesktopSwitcherInvoker,wil::err_returncode_policy>::operator=((char *)this + 48, a2);
}
