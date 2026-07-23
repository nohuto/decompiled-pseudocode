/*
 * XREFs of sub_140A81748 @ 0x140A81748
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 * Callees:
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A7F844 @ 0x140A7F844 (sub_140A7F844.c)
 */

char __fastcall sub_140A81748(unsigned __int64 a1, __int64 a2)
{
  sub_140A7F844(a1, a2);
  return sub_140A7F132(a1, a2);
}
