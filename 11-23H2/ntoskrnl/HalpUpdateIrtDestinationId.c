/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x14051AB08
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97BD0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140A95E68 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
