/*
 * XREFs of SmpDedicatedMemoryCachingCallback @ 0x140011380
 * Callers:
 *     <none>
 * Callees:
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400113F4 (SmpEnableCachingOnDedicatedMemoryWorker.c)
 */

__int64 SmpDedicatedMemoryCachingCallback()
{
  SmpEnableCachingOnDedicatedMemoryWorker();
  return 0LL;
}
