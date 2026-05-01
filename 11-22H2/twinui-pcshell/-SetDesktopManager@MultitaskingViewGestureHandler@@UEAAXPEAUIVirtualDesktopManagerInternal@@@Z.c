/*
 * XREFs of ?SetDesktopManager@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013B8D0
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
