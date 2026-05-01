/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x180043C50
 * Callers:
 *     CrmGlobalsStart @ 0x1800436B4 (CrmGlobalsStart.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180043D28 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     CreateTlgAggregateSession @ 0x180043DE0 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x18008FBB0 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DB250);
  TlgAggregateSession[39] = 0LL;
  TlgAggregateSession[40] = 0LL;
  TlgAggregateSession[41] = &dword_1800DB250;
  v2 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DB250);
  if ( v2 < 0 )
  {
    qword_1800DB278 = 0LL;
    DestroyAggregateSession(v1);
    return (unsigned int)v2;
  }
  else
  {
    AcquireSRWLockExclusive(&SRWLock);
    v3 = qword_1800DD4F0;
    if ( !qword_1800DD4F0 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DB288);
      v3 = qword_1800DD4F0;
    }
    v4 = &qword_1800DD4F0;
    while ( v3 )
    {
      if ( *(int **)(v3 + 328) == &dword_1800DB250 )
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
