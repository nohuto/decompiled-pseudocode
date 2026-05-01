/*
 * XREFs of sub_1800103F4 @ 0x1800103F4
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 *     sub_18000E6A4 @ 0x18000E6A4 (sub_18000E6A4.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 *     sub_180010E80 @ 0x180010E80 (sub_180010E80.c)
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 * Callees:
 *     sub_18000C238 @ 0x18000C238 (sub_18000C238.c)
 */

__int64 __fastcall sub_1800103F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000C238(a1, a2, a3, a4, v5, retaddr, a4);
}
