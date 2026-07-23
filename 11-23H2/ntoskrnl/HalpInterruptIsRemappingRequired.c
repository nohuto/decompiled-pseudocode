/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x14032005C
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140863EA4 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97BD0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
