/*
 * XREFs of sub_180067140 @ 0x180067140
 * Callers:
 *     sub_180067140 @ 0x180067140 (sub_180067140.c)
 *     sub_1800679C0 @ 0x1800679C0 (sub_1800679C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180032BB8 @ 0x180032BB8 (sub_180032BB8.c)
 *     sub_180067140 @ 0x180067140 (sub_180067140.c)
 */

_UNKNOWN **__fastcall sub_180067140(__int64 a1, __int64 a2, __int64 *a3)
{
  _UNKNOWN **result; // rax
  __int64 *i; // rsi
  __int64 *v7; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !*((_BYTE *)i + 25); result = (_UNKNOWN **)sub_180010884((char *)v7, 0x48uLL) )
  {
    sub_180067140(a1, a2, i[2]);
    v7 = i;
    i = (__int64 *)*i;
    sub_180029C94(v7 + 7);
    sub_180032BB8((char **)v7 + 5);
  }
  return result;
}
