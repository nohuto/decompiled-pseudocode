/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x14051A678
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97E20 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140A960B8 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
