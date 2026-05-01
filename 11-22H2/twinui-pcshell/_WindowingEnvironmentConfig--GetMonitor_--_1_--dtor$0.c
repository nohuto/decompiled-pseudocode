/*
 * XREFs of _WindowingEnvironmentConfig::GetMonitor_::_1_::dtor$0 @ 0x1804F4DB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentConfig::GetMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
