/*
 * XREFs of RtlpTpETWCallbackStart @ 0x180126060
 * Callers:
 *     RtlpTpTimerCallback @ 0x18004C060 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18004E570 (RtlpTpWaitCallback.c)
 *     TppExecuteWaitCallback @ 0x18004E8C4 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004E9F0 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004EAE0 (TppSimplepExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18004F0D0 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18004F3F0 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800509C0 (TppJobpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062860 (TppWorkpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800AFCE0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
