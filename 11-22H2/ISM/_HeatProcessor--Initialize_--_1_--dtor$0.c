/*
 * XREFs of _HeatProcessor::Initialize_::_1_::dtor$0 @ 0x1801E7BC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HeatProcessor::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
