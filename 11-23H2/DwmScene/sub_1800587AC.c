/*
 * XREFs of sub_1800587AC @ 0x1800587AC
 * Callers:
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 * Callees:
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 *     sub_18002509C @ 0x18002509C (sub_18002509C.c)
 *     unknown_libname_8 @ 0x180058978 (unknown_libname_8.c)
 *     sub_18005E754 @ 0x18005E754 (sub_18005E754.c)
 */

__int64 __fastcall sub_1800587AC(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx

  v3 = (a3 - a2) >> 5;
  v5 = (__int64)(a1[1] - *a1) >> 5;
  if ( v3 <= v5 )
  {
    v10 = *a1 + 32 * v3;
    unknown_libname_8(a2, a3, *a1);
    result = sub_18001E9BC(v10, a1[1]);
  }
  else
  {
    if ( v3 > (__int64)(a1[2] - *a1) >> 5 )
    {
      sub_18005E754(a1, (a3 - a2) >> 5);
      v5 = 0LL;
    }
    v8 = a2 + 32 * v5;
    unknown_libname_8(a2, v8, *a1);
    result = (__int64)sub_18002509C(v8, a3, (_QWORD *)a1[1]);
    v10 = result;
  }
  a1[1] = v10;
  return result;
}
