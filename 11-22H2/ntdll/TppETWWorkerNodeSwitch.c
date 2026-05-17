/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1801266E4
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppWorkerFindTask @ 0x1800378B0 (TppWorkerFindTask.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
