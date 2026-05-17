/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x1801175E8
 * Callers:
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapValidateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
