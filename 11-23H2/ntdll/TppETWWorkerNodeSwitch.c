/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180127B94
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppWorkerFindTask @ 0x180037750 (TppWorkerFindTask.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
