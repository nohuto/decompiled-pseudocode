/*
 * XREFs of PsGetProcessSessionId @ 0x1402978B0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140714910 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpWriteProcessStarted @ 0x140753D40 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140753FD4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754A40 (EtwQueryProcessTelemetryInfo.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADCC0 (PspTerminateSiloSubsystemProcesses.c)
 *     MiLogReserveVaFailed @ 0x140A2EB54 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140A43C04 (MiLogCommitRequestFailed.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
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
