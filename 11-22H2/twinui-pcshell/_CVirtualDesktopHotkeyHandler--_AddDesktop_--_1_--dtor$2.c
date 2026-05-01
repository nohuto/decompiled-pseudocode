/*
 * XREFs of _CVirtualDesktopHotkeyHandler::_AddDesktop_::_1_::dtor$2 @ 0x180609648
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopHotkeyHandler::_AddDesktop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
