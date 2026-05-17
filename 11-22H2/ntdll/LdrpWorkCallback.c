/*
 * XREFs of LdrpWorkCallback @ 0x180011390
 * Callers:
 *     <none>
 * Callees:
 *     LdrpUpdateStatistics @ 0x180011480 (LdrpUpdateStatistics.c)
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x1800775D8 (LdrpThreadTokenSetImpersonationToken.c)
 */

void LdrpWorkCallback()
{
  bool v0; // di
  __int64 *v1; // rbx
  __int64 v2; // rax

  v0 = 0;
  if ( !LdrpDetourExist )
  {
    do
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v1 = (__int64 *)LdrpWorkQueue;
      if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
        || (v2 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
      {
        __fastfail(3u);
      }
      LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
      *(_QWORD *)(v2 + 8) = &LdrpWorkQueue;
      if ( &LdrpWorkQueue != v1 )
      {
        ++LdrpWorkInProgress;
        LdrpUpdateStatistics();
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( &LdrpWorkQueue == v1 )
        break;
      if ( !v0 && LdrpMainThreadToken )
        v0 = (int)LdrpThreadTokenSetImpersonationToken(LdrpMainThreadToken) >= 0;
      LdrpProcessWork(v1 - 8, 0LL);
    }
    while ( !LdrpDetourExist );
    if ( v0 )
      LdrpThreadTokenSetImpersonationToken(0LL);
  }
}
