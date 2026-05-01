/*
 * XREFs of _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$1 @ 0x1804C155F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
