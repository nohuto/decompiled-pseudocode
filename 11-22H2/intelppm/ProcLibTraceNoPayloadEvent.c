/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0035ACC
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0035A2C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0035AA0 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0035BD4 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0036230 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C00370A4 (ProcLibTraceThrottleStatesErrata.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor, 0LL, (ULONG)0, 0LL);
  return result;
}
