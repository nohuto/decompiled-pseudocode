/*
 * XREFs of _SystemContextManager::OnTouchpadRemoved_::_1_::dtor$0 @ 0x18014EC29
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextManager::OnTouchpadRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
