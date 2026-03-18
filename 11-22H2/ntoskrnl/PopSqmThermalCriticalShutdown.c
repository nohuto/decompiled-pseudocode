/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1409A0EC8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A0CF8 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
