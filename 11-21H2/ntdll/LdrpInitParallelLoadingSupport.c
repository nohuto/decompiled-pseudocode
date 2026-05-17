/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x180085190
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 __fastcall LdrpInitParallelLoadingSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  qword_18017A058 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_18017A008 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx((__int64)&LdrpWorkQueueLock, 0LL, 0LL, a4);
  return LdrpCreateLoaderEvents();
}
