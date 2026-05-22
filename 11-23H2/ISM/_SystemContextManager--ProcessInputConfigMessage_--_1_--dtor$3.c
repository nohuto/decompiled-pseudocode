/*
 * XREFs of _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$3 @ 0x18014F0A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextManager::ProcessInputConfigMessage_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 200));
}
