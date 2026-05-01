/*
 * XREFs of _CVirtualDesktopSwitcherService::DismissVirtualDesktopSwitcher_::_1_::dtor$0 @ 0x18054A5C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopSwitcherService::DismissVirtualDesktopSwitcher_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
