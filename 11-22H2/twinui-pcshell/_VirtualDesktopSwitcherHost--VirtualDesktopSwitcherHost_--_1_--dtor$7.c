/*
 * XREFs of _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$7 @ 0x180771A95
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 208LL));
}
