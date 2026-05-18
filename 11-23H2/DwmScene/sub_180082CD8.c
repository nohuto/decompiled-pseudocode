/*
 * XREFs of sub_180082CD8 @ 0x180082CD8
 * Callers:
 *     sub_180044358 @ 0x180044358 (sub_180044358.c)
 *     sub_1800449A4 @ 0x1800449A4 (sub_1800449A4.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 *     sub_180083148 @ 0x180083148 (sub_180083148.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_18009CD20 @ 0x18009CD20 (sub_18009CD20.c)
 * Callees:
 *     sub_18004FA5C @ 0x18004FA5C (sub_18004FA5C.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

__int64 __fastcall sub_180082CD8(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r8

  v3 = sub_18004FA5C(*(_QWORD *)(a1 + 1152), a2);
  if ( !(unsigned __int8)sub_18008316C(a1, v3, v3) )
    return 511;
  return v4;
}
