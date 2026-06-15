/*
 * XREFs of _lambda_9ea61389800d10a92a31feda1ef8f987_::operator() @ 0x14002D9B4
 * Callers:
 *     wil::details::lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___::_lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___ @ 0x14002D994 (wil--details--lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___--_lambda_call__lambda_9ea6.c)
 *     wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___ @ 0x14004F130 (wil--details--lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___--_lambda_call__lambda_52d1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9ea61389800d10a92a31feda1ef8f987_::operator()(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = *a1;
  v3 = *(_QWORD *)(*a1 + 24);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    result = *a1;
    *(_QWORD *)(*a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(result + 32);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    result = *a1;
    *(_QWORD *)(*a1 + 32) = 0LL;
  }
  v5 = *(_QWORD *)(result + 48);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    result = *a1;
    *(_QWORD *)(*a1 + 48) = 0LL;
  }
  return result;
}
