/*
 * XREFs of ?SetMonitorManager@CVirtualDesktopSwitcherService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18017A700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopSwitcherService::SetMonitorManager(
        CVirtualDesktopSwitcherService *this,
        struct IImmersiveMonitorManager *a2)
{
  wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=((char *)this + 32, a2);
}
