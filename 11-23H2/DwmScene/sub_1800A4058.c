/*
 * XREFs of sub_1800A4058 @ 0x1800A4058
 * Callers:
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 * Callees:
 *     sub_1800A40AC @ 0x1800A40AC (sub_1800A40AC.c)
 */

_QWORD *__fastcall sub_1800A4058(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  v6 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_1800A40AC(a1, (a3 - a2) >> 4, &v5, &v6);
  return a1;
}
