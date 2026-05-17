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

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180184298 = 0LL;
    qword_180184290 = (__int64)UniqueThread;
    dword_18018428C = 1;
    dword_180184288 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18017E2A0 = 0LL;
    qword_18017E298 = (__int64)v2;
    dword_18017E290 = -2;
    dword_18017E294 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
