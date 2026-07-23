/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14053CA08
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14093BD14 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(64LL, 32LL, 1466393156LL);
}
