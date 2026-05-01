/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$10 @ 0x1802D800E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
