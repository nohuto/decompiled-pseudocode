/*
 * XREFs of _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$10 @ 0x1804BE132
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
