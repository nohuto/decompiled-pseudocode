/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$16 @ 0x1802B76DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>(a2 + 224);
}
