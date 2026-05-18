/*
 * XREFs of sub_1800D0508 @ 0x1800D0508
 * Callers:
 *     sub_1800D1A20 @ 0x1800D1A20 (sub_1800D1A20.c)
 *     sub_1800D2980 @ 0x1800D2980 (sub_1800D2980.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180085F38 @ 0x180085F38 (sub_180085F38.c)
 */

_QWORD *__fastcall sub_1800D0508(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  sub_180085F38((__int64 *)(a1 + 112), (__int64)&v6, &v7);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, (_QWORD *)(v6 + 40));
  }
  return a2;
}
