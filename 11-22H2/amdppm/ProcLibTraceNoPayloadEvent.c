/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0021D9C
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x1C0021D70 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0021EA4 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0022410 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0022AE4 (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor, 0LL, (ULONG)0, 0LL);
  return result;
}
