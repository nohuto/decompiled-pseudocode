/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140322020
 * Callers:
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140791804 (RawCleanupVcb.c)
 *     EtwpCleanupSiloState @ 0x1409E3560 (EtwpCleanupSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
