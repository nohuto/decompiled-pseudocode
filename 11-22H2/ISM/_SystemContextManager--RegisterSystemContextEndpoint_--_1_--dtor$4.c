/*
 * XREFs of _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$4 @ 0x18015DD64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
