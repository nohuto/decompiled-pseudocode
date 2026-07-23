/*
 * XREFs of KiCustomAccessRoutine3 @ 0x14042B820
 * Callers:
 *     PopThermalZoneDpc @ 0x1403CCDA0 (PopThermalZoneDpc.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x14042B800 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomAccessRoutine3(unsigned int *a1)
{
  return KiCustomRecurseRoutine3(((unsigned __int8)a1 & 3u) + 1, a1);
}
