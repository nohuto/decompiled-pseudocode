/*
 * XREFs of RtlpTpETWCallbackStop @ 0x1801246BC
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180069E70 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1BE0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStop()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
