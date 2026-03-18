/*
 * XREFs of PsGetProcessSessionId @ 0x140297620
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140714700 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpWriteProcessStarted @ 0x140753B50 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140753DE4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADAC0 (PspTerminateSiloSubsystemProcesses.c)
 *     MiLogReserveVaFailed @ 0x140A2E8A4 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140A43954 (MiLogCommitRequestFailed.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(a1);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
