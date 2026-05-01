/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void___lambda_b60a44f3dc294a4e18769336981e2a38__0_ @ 0x1801A6D10
 * Callers:
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Move @ 0x1801A83F0 (std--_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void___lambda_b60a44f3dc294a4e18769336981e2a38__0_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = off_1806434F0;
  v2 = *a2;
  v3 = a2 + 1;
  a1[1] = v2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
