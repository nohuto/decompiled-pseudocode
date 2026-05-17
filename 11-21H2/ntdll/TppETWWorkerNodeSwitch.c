/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180124CA4
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppWorkerSwitchNode @ 0x18001B15C (TppWorkerSwitchNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
