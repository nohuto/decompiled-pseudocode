/*
 * XREFs of _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$0 @ 0x1802C3C7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 24LL));
}
