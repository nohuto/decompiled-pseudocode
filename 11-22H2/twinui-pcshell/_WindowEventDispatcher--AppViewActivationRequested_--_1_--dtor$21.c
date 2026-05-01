/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$21 @ 0x1804BF7AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
