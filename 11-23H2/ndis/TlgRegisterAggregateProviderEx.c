/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C011F868
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C011F95C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1C011FA08 (CreateTlgAggregateSession.c)
 *     ComputeFlushPeriod @ 0x1C011FB58 (ComputeFlushPeriod.c)
 *     DestroyAggregateSession @ 0x1C01440E8 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00F41D8);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C00F41D8;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00F41D8);
  if ( v4 < 0 )
  {
    qword_1C00F4200 = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00F5C68, 0LL);
    v5 = qword_1C00F7588;
    if ( !qword_1C00F7588 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00F4638);
      v5 = qword_1C00F7588;
    }
    v6 = &qword_1C00F7588;
    while ( v5 )
    {
      if ( *(int **)(v5 + 344) == &dword_1C00F41D8 )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C00F5C68, 0LL);
    return 0LL;
  }
}
