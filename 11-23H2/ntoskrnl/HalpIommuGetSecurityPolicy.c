/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x14036F164
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828A90 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x140865688 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
