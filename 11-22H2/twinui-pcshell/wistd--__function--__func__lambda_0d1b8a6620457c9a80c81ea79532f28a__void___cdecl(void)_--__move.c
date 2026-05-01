/*
 * XREFs of wistd::__function::__func__lambda_0d1b8a6620457c9a80c81ea79532f28a__void___cdecl(void)_::__move @ 0x1800EA360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_0d1b8a6620457c9a80c81ea79532f28a__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 (__fastcall ***v3)(void *); // rcx
  __int64 (__fastcall ***v4)(void *); // rdx

  result = &off_1807A2D80;
  v3 = (__int64 (__fastcall ***)(void *))(a1 + 8);
  *a2 = &off_1807A2D80;
  v4 = (__int64 (__fastcall ***)(void *))(a2 + 1);
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
