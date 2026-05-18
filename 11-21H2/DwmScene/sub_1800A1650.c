/*
 * XREFs of sub_1800A1650 @ 0x1800A1650
 * Callers:
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800A1754 @ 0x1800A1754 (sub_1800A1754.c)
 */

__int64 __fastcall sub_1800A1650(__int64 a1, __int64 a2, float a3, float a4)
{
  float v7; // [rsp+50h] [rbp+18h] BYREF
  float v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  sub_1800A1754(a1, a2, &v7, &v8);
  sub_180010910(a2);
  return a1;
}
