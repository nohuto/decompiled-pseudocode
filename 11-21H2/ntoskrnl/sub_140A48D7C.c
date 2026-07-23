/*
 * XREFs of sub_140A48D7C @ 0x140A48D7C
 * Callers:
 *     sub_1407FDC18 @ 0x1407FDC18 (sub_1407FDC18.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER sub_140A48D7C()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010);
}
