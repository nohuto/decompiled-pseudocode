/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14053C568
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14093BBC4 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(64LL, 32LL, 1466393156LL);
}
