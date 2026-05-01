/*
 * XREFs of _WindowWrapper::v_CloseRequestedAsync_::_1_::dtor$1 @ 0x1804DDF38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowWrapper::v_CloseRequestedAsync_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
