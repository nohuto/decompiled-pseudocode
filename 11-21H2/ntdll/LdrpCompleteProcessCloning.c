/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800E0BE8
 * Callers:
 *     RtlCompleteProcessCloning @ 0x1800A2E60 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x1800851E0 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18017A038 = 0LL;
    qword_18017A030 = (__int64)UniqueThread;
    dword_18017A02C = 1;
    dword_18017A028 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180174378 = 0LL;
    qword_180174370 = (__int64)v2;
    dword_180174368 = -2;
    dword_18017436C = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}
