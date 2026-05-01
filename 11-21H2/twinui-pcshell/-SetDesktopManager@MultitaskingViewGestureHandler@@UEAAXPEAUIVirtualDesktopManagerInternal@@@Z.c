/*
 * XREFs of ?SetDesktopManager@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18010F380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetDesktopManager(
        MultitaskingViewGestureHandler *this,
        struct IVirtualDesktopManagerInternal *a2)
{
  wil::com_ptr_t<IVirtualDesktopManagerInternal,wil::err_returncode_policy>::operator=((char *)this + 120, a2);
}
