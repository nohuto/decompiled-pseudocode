/*
 * XREFs of __report_rangecheckfailure_0 @ 0x1403CF338
 * Callers:
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

void __noreturn _report_rangecheckfailure_0()
{
  KeQueryPerformanceCounter(0LL);
}
