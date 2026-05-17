/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800E0754
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009E920 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x18005C97C (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180187338 = 0LL;
    qword_180187330 = (__int64)UniqueThread;
    dword_18018732C = 1;
    dword_180187328 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180181378 = 0LL;
    qword_180181370 = (__int64)v2;
    dword_180181368 = -2;
    dword_18018136C = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
