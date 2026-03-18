/*
 * XREFs of PpmQueryTime @ 0x1403918A8
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14082BE04 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099807C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
