/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x14051A5B8
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97D60 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140A95FF8 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
