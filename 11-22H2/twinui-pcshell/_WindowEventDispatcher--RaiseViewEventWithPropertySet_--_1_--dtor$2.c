/*
 * XREFs of _WindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$2 @ 0x1804C809A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
