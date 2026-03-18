/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140321D90
 * Callers:
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140791614 (RawCleanupVcb.c)
 *     EtwpCleanupSiloState @ 0x1409E32D0 (EtwpCleanupSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
