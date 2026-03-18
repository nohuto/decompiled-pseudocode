/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1409A0E18
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A0C48 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
