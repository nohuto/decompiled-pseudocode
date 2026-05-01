/*
 * XREFs of _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$8 @ 0x1802BB701
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 176));
}
