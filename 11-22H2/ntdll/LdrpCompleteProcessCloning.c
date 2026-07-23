/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800DF424
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x18005F808 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 */

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  NTSTATUS LoaderEvents; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpWorkQueueLock.OwningThread = UniqueThread;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = v2;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 13, 0);
  return LdrpDropLastInProgressCount();
}
