/*
 * XREFs of EtwShutdown @ 0x1409E2DAC
 * Callers:
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwpTraceSystemShutdown @ 0x1409E7144 (EtwpTraceSystemShutdown.c)
 *     EtwpFlushCoverage @ 0x1409E8C2C (EtwpFlushCoverage.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rsi
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // bp
  unsigned __int16 v5; // bx
  unsigned int *v6; // rax
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
        goto LABEL_12;
      if ( a1 )
      {
        if ( (v6[3] & 0x400000) == 0 )
          goto LABEL_15;
LABEL_12:
        if ( v5 )
          LOWORD(v9[1]) = v5;
        else
          LOWORD(v9[1]) = -1;
        *(_OWORD *)&v9[3] = *(_OWORD *)(v6 + 69);
        EtwpReleaseLoggerContext(v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        LOBYTE(v7) = 1;
        EtwpStopTrace(v2, (__int64)v9, v7, v8);
      }
      else
      {
        if ( (v6[3] & 0x400) == 0 )
          goto LABEL_12;
LABEL_15:
        EtwpReleaseLoggerContext(v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
