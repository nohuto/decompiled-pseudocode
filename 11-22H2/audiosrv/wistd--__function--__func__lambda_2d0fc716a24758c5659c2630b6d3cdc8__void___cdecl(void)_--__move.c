/*
 * XREFs of wistd::__function::__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl(void)_::__move @ 0x18015EB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = &off_180170E48;
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
