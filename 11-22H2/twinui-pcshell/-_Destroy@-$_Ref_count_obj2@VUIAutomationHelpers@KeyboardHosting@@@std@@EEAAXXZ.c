/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VUIAutomationHelpers@KeyboardHosting@@@std@@EEAAXXZ @ 0x180535D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::_Destroy(__int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
