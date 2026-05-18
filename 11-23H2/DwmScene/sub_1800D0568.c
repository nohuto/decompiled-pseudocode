/*
 * XREFs of sub_1800D0568 @ 0x1800D0568
 * Callers:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 */

_QWORD *__fastcall sub_1800D0568(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 256);
  v7 = a3;
  v5 = sub_1800435C8(a1 + 256, (__int64)&v7);
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
