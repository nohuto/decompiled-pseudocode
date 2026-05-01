/*
 * XREFs of _lambda_e57d722e9184594ecfa4b78f275cff33_::operator() @ 0x1804D973C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___::_ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___ @ 0x1804D95F4 (wil--details--ScopeExitFn__lambda_e57d722e9184594ecfa4b78f275cff33___--_ScopeExitFn__lambda_e57d.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_e57d722e9184594ecfa4b78f275cff33_::operator()(_QWORD **a1)
{
  _QWORD *result; // rax

  result = *a1;
  if ( **a1 )
  {
    result = a1[1];
    if ( *result )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*result + 72LL))(*result);
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 392LL))(**a1, 0LL);
    }
  }
  return result;
}
