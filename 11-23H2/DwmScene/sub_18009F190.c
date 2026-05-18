/*
 * XREFs of sub_18009F190 @ 0x18009F190
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18009F05C @ 0x18009F05C (sub_18009F05C.c)
 */

_QWORD *__fastcall sub_18009F190(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  sub_18009F05C((__int64 *)(a1 + 8), a1 + 264);
  sub_1800124F8((__int64 *)(a1 + 392), (_QWORD *)(a1 + 424));
  return sub_18009F0FC(a1);
}
