/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x18008FD58
 * Callers:
 *     CrmGlobalsCleanup @ 0x18006CEEC (CrmGlobalsCleanup.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800488E4 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18008FB44 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800DB278 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&SRWLock);
    v1 = qword_1800DD4F0;
    v2 = &qword_1800DD4F0;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 336);
      if ( *(int **)(v1 + 328) == &dword_1800DB250 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_1800DD4F0 )
        {
          v4 = qword_1800DB2A8;
          qword_1800DB2A8 = 0LL;
          dword_1800DB288 = 0;
          EventUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0);
    v5 = qword_1800DB270;
    qword_1800DB270 = 0LL;
    dword_1800DB250 = 0;
    EventUnregister(v5);
    qword_1800DB278 = 0LL;
    DestroyAggregateSession(v0);
  }
  else
  {
    v6 = qword_1800DB270;
    qword_1800DB270 = 0LL;
    dword_1800DB250 = 0;
    EventUnregister(v6);
  }
}
