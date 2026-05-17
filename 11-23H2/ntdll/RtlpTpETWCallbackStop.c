/*
 * XREFs of RtlpTpETWCallbackStop @ 0x1801275AC
 * Callers:
 *     RtlpTpTimerCallback @ 0x18004BF00 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18004E410 (RtlpTpWaitCallback.c)
 *     TppExecuteWaitCallback @ 0x18004E764 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004E890 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004E980 (TppSimplepExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18004EF70 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18004F290 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180050860 (TppJobpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x1800627F0 (TppWorkpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1DB0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStop()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
