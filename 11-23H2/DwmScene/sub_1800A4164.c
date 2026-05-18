/*
 * XREFs of sub_1800A4164 @ 0x1800A4164
 * Callers:
 *     sub_1800A4388 @ 0x1800A4388 (sub_1800A4388.c)
 * Callees:
 *     sub_1800A4324 @ 0x1800A4324 (sub_1800A4324.c)
 */

__int64 __fastcall sub_1800A4164(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp

  v3 = a3;
  v4 = (a3 - a1) >> 4;
  v5 = a2;
  if ( v4 > 40 )
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_1800A4324(a1, v7 + a1, v6 + a1);
    sub_1800A4324(v5 - v7, v5, v7 + v5);
    sub_1800A4324(v3 - v6, v3 - v7, v3);
    a3 = v3 - v7;
    a2 = v5;
    a1 = v8;
  }
  return sub_1800A4324(a1, a2, a3);
}
