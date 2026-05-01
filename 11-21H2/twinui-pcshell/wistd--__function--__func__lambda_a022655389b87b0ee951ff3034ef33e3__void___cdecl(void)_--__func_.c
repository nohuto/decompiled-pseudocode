/*
 * XREFs of wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_ @ 0x180191D38
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_a022655389b87b0ee951ff3034ef33e3__void_ @ 0x18019147C (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_a022655389b87b0ee951ff.c)
 *     wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_::__move @ 0x180193AE0 (wistd--__function--__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl_void__::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl_void__(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = &off_180641BB0;
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
