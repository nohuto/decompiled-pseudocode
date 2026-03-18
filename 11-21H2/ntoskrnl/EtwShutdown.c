/*
 * XREFs of EtwShutdown @ 0x1407FDA6C
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpFlushCoverage @ 0x1407FDB8C (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x1409E3E74 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rsi
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // bp
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v2 + 4068) = 1;
  }
  if ( !v4 )
    EtwpFlushCoverage();
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 176;
  v5 = *(_WORD *)(v2 + 16);
  HIDWORD(v9[5]) = 0x20000;
  while ( (--v5 & 0x8000u) == 0 )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( v6 )
    {
      if ( v4 )
        goto LABEL_19;
      if ( a1 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v5 )
          LOWORD(v9[1]) = v5;
        else
          LOWORD(v9[1]) = -1;
        *(_OWORD *)&v9[3] = *(_OWORD *)(v6 + 276);
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        LOBYTE(v7) = 1;
        EtwpStopTrace(v2, (__int64)v9, v7, v8);
      }
      else
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
