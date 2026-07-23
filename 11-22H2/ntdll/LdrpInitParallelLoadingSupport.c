/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x18005F7B8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  qword_1801842B8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_180184258 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
