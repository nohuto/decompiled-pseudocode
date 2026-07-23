/*
 * XREFs of sub_1409583B0 @ 0x1409583B0
 * Callers:
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 * Callees:
 *     sub_1406E3A88 @ 0x1406E3A88 (sub_1406E3A88.c)
 *     sub_14080BEDC @ 0x14080BEDC (sub_14080BEDC.c)
 */

__int64 __fastcall sub_1409583B0(unsigned int **a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // edi
  unsigned int **v6; // r11
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( *a3 > 1u )
    return 3221225659LL;
  v5 = a3[1] - 1;
  sub_1406E3A88(*a1, v5, &v8, 0LL, 0LL);
  if ( v8 != a2 )
    return 3221225486LL;
  result = sub_14080BEDC(*v6, v5);
  if ( *a3 > 1u )
    return 3221225659LL;
  a3[1] = v5;
  return result;
}
