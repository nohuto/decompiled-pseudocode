/*
 * XREFs of LdrpWorkCallback @ 0x180011180
 * Callers:
 *     <none>
 * Callees:
 *     LdrpUpdateStatistics @ 0x180011270 (LdrpUpdateStatistics.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180077C48 (LdrpThreadTokenSetImpersonationToken.c)
 */

void __fastcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  bool v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax

  v3 = 0;
  if ( !LdrpDetourExist )
  {
    do
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = (__int64 *)LdrpWorkQueue;
      if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
        || (v5 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
      {
        __fastfail(3u);
      }
      LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
      *(_QWORD *)(v5 + 8) = &LdrpWorkQueue;
      if ( &LdrpWorkQueue != v4 )
      {
        ++LdrpWorkInProgress;
        LdrpUpdateStatistics();
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( &LdrpWorkQueue == v4 )
        break;
      if ( !v3 && LdrpMainThreadToken )
        v3 = (int)LdrpThreadTokenSetImpersonationToken(LdrpMainThreadToken) >= 0;
      LdrpProcessWork(v4 - 8, 0LL);
    }
    while ( !LdrpDetourExist );
    if ( v3 )
      LdrpThreadTokenSetImpersonationToken(0LL);
  }
}
