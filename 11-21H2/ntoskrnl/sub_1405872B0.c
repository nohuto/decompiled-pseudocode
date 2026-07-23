/*
 * XREFs of sub_1405872B0 @ 0x1405872B0
 * Callers:
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 * Callees:
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_1405891A4 @ 0x1405891A4 (sub_1405891A4.c)
 */

__int64 __fastcall sub_1405872B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8

  v3 = a2 & 0x3FFFFF;
  *(_QWORD *)(qword_140C52968 + 8 * v3) &= ~0x800000000000uLL;
  sub_1405891A4(a1, a2, v3, 0xFFFF7FFFFFFFFFFFuLL);
  return sub_1405875A0(0LL, a2, 3LL);
}
