/*
 * XREFs of _VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor$6 @ 0x1807765E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 184));
}
