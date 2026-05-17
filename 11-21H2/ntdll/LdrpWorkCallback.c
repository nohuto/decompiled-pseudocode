/*
 * XREFs of LdrpWorkCallback @ 0x180051030
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x1800512F4 (LdrpUpdateStatistics.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180054214 (LdrpThreadTokenSetImpersonationToken.c)
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
      RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
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
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
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
