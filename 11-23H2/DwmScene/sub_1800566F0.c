/*
 * XREFs of sub_1800566F0 @ 0x1800566F0
 * Callers:
 *     sub_18002C3C8 @ 0x18002C3C8 (sub_18002C3C8.c)
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 *     sub_1800D0CE0 @ 0x1800D0CE0 (sub_1800D0CE0.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D25B0 @ 0x1800D25B0 (sub_1800D25B0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D6AF4 @ 0x1800D6AF4 (sub_1800D6AF4.c)
 *     sub_1800D6DE0 @ 0x1800D6DE0 (sub_1800D6DE0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 */

_QWORD *__fastcall sub_1800566F0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  v5 = sub_1800435C8(a1 + 112, (__int64)&v7);
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
