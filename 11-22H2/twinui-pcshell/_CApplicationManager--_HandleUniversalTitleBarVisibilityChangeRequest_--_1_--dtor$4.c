/*
 * XREFs of _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$4 @ 0x1803A3471
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
