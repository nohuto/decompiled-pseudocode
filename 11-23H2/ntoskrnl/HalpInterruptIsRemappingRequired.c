/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x14031FDCC
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140863C64 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97D60 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
