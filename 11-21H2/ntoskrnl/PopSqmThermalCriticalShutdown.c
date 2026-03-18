/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1409A040C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A023C (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
