/*
 * XREFs of wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl(void)_::__move @ 0x180157770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = &off_18016C7D8;
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != v2 )
  {
    *v3 = *v2;
    *v2 = 0LL;
  }
  result = v2[1];
  v3[1] = result;
  return result;
}
