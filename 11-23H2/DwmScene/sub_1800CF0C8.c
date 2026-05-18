/*
 * XREFs of sub_1800CF0C8 @ 0x1800CF0C8
 * Callers:
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 *     sub_1800D0CE0 @ 0x1800D0CE0 (sub_1800D0CE0.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 */

__int64 *__fastcall sub_1800CF0C8(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 168);
  sub_180011520(a2);
  return a2;
}
