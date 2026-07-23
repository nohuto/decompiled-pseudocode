/*
 * XREFs of RtlGetUnloadEventTraceEx @ 0x1800DA6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetUnloadEventTraceEx(PULONG *ElementSize, PULONG *ElementCount, PVOID *EventTrace)
{
  *ElementSize = (PULONG)&RtlpUnloadEventTraceExSize;
  *ElementCount = (PULONG)&RtlpUnloadEventTraceExNumber;
  *EventTrace = &RtlpUnloadEventTraceEx;
}
