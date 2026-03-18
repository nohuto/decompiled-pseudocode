/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140322300
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1407921C0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140792260 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1408742F0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
