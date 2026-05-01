/*
 * XREFs of _CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor$8 @ 0x180545FCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>(a2 + 112);
}
