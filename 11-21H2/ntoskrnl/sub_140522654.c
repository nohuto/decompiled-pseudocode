/*
 * XREFs of sub_140522654 @ 0x140522654
 * Callers:
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

void __fastcall sub_140522654(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
