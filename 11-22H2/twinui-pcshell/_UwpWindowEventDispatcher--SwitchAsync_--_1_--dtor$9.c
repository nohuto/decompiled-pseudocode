/*
 * XREFs of _UwpWindowEventDispatcher::SwitchAsync_::_1_::dtor$9 @ 0x1804D25F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::SwitchAsync_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
