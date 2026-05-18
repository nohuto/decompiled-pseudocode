/*
 * XREFs of sub_1800642E4 @ 0x1800642E4
 * Callers:
 *     sub_180065860 @ 0x180065860 (sub_180065860.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 * Callees:
 *     sub_180062F40 @ 0x180062F40 (sub_180062F40.c)
 */

__int64 __fastcall sub_1800642E4(__int64 *a1, int *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_180062F40(a1, (__int64)v3, a2) + 40LL;
}
