/*
 * XREFs of _lambda_82044d20dee46e14bcb41136f51f6dee_::_lambda_invoker_cdecl_ @ 0x1805D63C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_956824805fd20d9221c1082d392d6ce5_::operator() @ 0x1805D676C (_lambda_956824805fd20d9221c1082d392d6ce5_--operator().c)
 */

__int64 __fastcall lambda_82044d20dee46e14bcb41136f51f6dee_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_956824805fd20d9221c1082d392d6ce5_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
