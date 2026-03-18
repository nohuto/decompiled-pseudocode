/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x14036EB14
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14082A5E0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x140865AA8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
