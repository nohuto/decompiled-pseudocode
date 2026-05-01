/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x180048E10
 * Callers:
 *     CrmGlobalsStart @ 0x180048884 (CrmGlobalsStart.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180048EE8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     CreateTlgAggregateSession @ 0x180048F98 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x180094868 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  void *v1; // rbx
  int v2; // esi
  __int64 v3; // rax
  __int64 *v4; // rcx

  TlgAggregateSession = (_QWORD *)CreateTlgAggregateSession(0LL);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DC250);
  TlgAggregateSession[39] = 0LL;
  TlgAggregateSession[40] = 0LL;
  TlgAggregateSession[41] = &dword_1800DC250;
  v2 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DC250);
  if ( v2 < 0 )
  {
    qword_1800DC278 = 0LL;
    DestroyAggregateSession(v1);
    return (unsigned int)v2;
  }
  else
  {
    AcquireSRWLockExclusive(&SRWLock);
    v3 = qword_1800DE308;
    if ( !qword_1800DE308 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DC3C8);
      v3 = qword_1800DE308;
    }
    v4 = &qword_1800DE308;
    while ( v3 )
    {
      if ( *(int **)(v3 + 328) == &dword_1800DC250 )
        goto LABEL_8;
      v4 = (__int64 *)(v3 + 336);
      v3 = *(_QWORD *)(v3 + 336);
    }
    *v4 = (__int64)v1;
LABEL_8:
    ReleaseSRWLockExclusive(&SRWLock);
    return 0LL;
  }
}
