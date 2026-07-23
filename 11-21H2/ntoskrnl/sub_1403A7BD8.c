/*
 * XREFs of sub_1403A7BD8 @ 0x1403A7BD8
 * Callers:
 *     sub_140AAB478 @ 0x140AAB478 (sub_140AAB478.c)
 *     sub_140AABB9C @ 0x140AABB9C (sub_140AABB9C.c)
 *     sub_140AACEA0 @ 0x140AACEA0 (sub_140AACEA0.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall sub_1403A7BD8(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
