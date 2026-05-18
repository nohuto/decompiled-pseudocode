/*
 * XREFs of sub_1800880BC @ 0x1800880BC
 * Callers:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 * Callees:
 *     sub_180087FA4 @ 0x180087FA4 (sub_180087FA4.c)
 *     sub_180088100 @ 0x180088100 (sub_180088100.c)
 */

_QWORD *__fastcall sub_1800880BC(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 *)sub_180088100(v6);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  a1[1] = v4;
  sub_180087FA4((__int64)v6);
  return a1;
}
