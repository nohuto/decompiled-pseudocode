/*
 * XREFs of PopSqmThermalHibernate @ 0x1409A103C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A0E48 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
