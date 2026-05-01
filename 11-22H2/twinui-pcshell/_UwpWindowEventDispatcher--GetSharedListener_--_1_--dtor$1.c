/*
 * XREFs of _UwpWindowEventDispatcher::GetSharedListener_::_1_::dtor$1 @ 0x1804D13C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::GetSharedListener_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 112));
}
