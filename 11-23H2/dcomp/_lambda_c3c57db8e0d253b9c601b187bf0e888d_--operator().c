/*
 * XREFs of _lambda_c3c57db8e0d253b9c601b187bf0e888d_::operator() @ 0x1800ED8BC
 * Callers:
 *     wil::details::lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___::_lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___ @ 0x1800ED7C0 (wil--details--lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___--_lambda_call__lambda_c3c5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c3c57db8e0d253b9c601b187bf0e888d_::operator()(__int64 **a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rdx

  v2 = **a1;
  *(_QWORD *)(v2 + 48) = GetTickCount();
  v3 = (_QWORD *)((**a1 + 8) & -(__int64)(**a1 != 0));
  result = (__int64)(a1[1] + 71);
  v5 = (_QWORD *)a1[1][72];
  if ( *v5 != result )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v5;
  *v5 = v3;
  *(_QWORD *)(result + 8) = v3;
  return result;
}
