/*
 * XREFs of sub_1407F58C4 @ 0x1407F58C4
 * Callers:
 *     sub_1406640F0 @ 0x1406640F0 (sub_1406640F0.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1407F58C4(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
