/*
 * XREFs of wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_ @ 0x1801AA1B8
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_34c704b7198f1953cf1bfde36dd87a44__void_ @ 0x1801A99F8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_34c704b7198f1953cf1bfd.c)
 *     wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::__move @ 0x1801ACAB0 (wistd--__function--__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_180643A60;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
