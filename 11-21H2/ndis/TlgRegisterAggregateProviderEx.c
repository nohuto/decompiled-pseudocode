/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0114830
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0114924 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x1C01149D0 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0114A74 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C013822C (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx

  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00EB5C8);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C00EB5C8;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00EB5C8);
  if ( v4 < 0 )
  {
    qword_1C00EB5F0 = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00ECC70, 0LL);
    v5 = qword_1C00EE538;
    if ( !qword_1C00EE538 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00EB630);
      v5 = qword_1C00EE538;
    }
    v6 = &qword_1C00EE538;
    while ( v5 )
    {
      if ( *(int **)(v5 + 344) == &dword_1C00EB5C8 )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C00ECC70, 0LL);
    return 0LL;
  }
}
