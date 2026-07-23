/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x14036F304
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140828D90 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1408658C8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
