/*
 * XREFs of PsGetProcessStartKey @ 0x1402F6CA0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140751520 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x140753B50 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140753DE4 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
