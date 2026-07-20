/*
 * XREFs of SmpEnableCachingOnDedicatedMemory @ 0x140011398
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000B010 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400113F4 (SmpEnableCachingOnDedicatedMemoryWorker.c)
 */

__int64 SmpEnableCachingOnDedicatedMemory()
{
  __int64 result; // rax

  SmpEnableCachingOnDedicatedMemoryWorker();
  result = RtlSubscribeWnfStateChangeNotification(
             &SmpPhysicalMemoryChangeSubscription,
             WNF_MM_PHYSICAL_MEMORY_CHANGE,
             0LL,
             SmpDedicatedMemoryCachingCallback,
             0LL,
             0LL,
             0,
             1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
