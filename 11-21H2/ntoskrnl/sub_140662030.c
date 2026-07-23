/*
 * XREFs of sub_140662030 @ 0x140662030
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 */

__int64 __fastcall sub_140662030(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  sub_1406D2264(&dword_140C03098);
  KeQueryPerformanceCounter(&stru_140CE2158);
  return 1LL;
}
