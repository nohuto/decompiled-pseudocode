/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$8 @ 0x1804D3E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
