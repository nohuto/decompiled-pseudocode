/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140252460
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140822DF0 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A62BC0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 228)) & 1;
}
