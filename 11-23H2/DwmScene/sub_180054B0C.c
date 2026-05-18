/*
 * XREFs of sub_180054B0C @ 0x180054B0C
 * Callers:
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_1800D2460 @ 0x1800D2460 (sub_1800D2460.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 */

_QWORD *__fastcall sub_180054B0C(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 128);
  v7 = a3;
  v5 = sub_1800435C8(a1 + 128, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}
