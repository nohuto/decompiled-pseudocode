/*
 * XREFs of PsGetProcessStartKey @ 0x1402F6F30
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140751710 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x140753D40 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140753FD4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754A40 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
