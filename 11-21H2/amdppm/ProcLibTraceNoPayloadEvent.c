/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0021168
 * Callers:
 *     ProcLibTraceIdleStatesErrata @ 0x1C002113C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0021270 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00217C8 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0021EBC (ProcLibTraceThrottleStatesErrata.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
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
