/*
 * XREFs of _PenDevice::PenDevice_::_1_::dtor$2 @ 0x1801A7A2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDevice::PenDevice_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 104LL));
}
