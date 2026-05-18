/*
 * XREFs of sub_180028004 @ 0x180028004
 * Callers:
 *     sub_180028138 @ 0x180028138 (sub_180028138.c)
 *     sub_180043AC4 @ 0x180043AC4 (sub_180043AC4.c)
 *     sub_180084590 @ 0x180084590 (sub_180084590.c)
 *     sub_1800845E8 @ 0x1800845E8 (sub_1800845E8.c)
 *     sub_1800A0D1C @ 0x1800A0D1C (sub_1800A0D1C.c)
 *     sub_1800C4398 @ 0x1800C4398 (sub_1800C4398.c)
 * Callees:
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 */

__int64 __fastcall sub_180028004(void **a1)
{
  sub_180027BC8((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x28uLL);
}
