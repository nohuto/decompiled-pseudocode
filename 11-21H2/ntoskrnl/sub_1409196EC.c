/*
 * XREFs of sub_1409196EC @ 0x1409196EC
 * Callers:
 *     sub_14067F714 @ 0x14067F714 (sub_14067F714.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_1409196EC(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
