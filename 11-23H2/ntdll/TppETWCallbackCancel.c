/*
 * XREFs of TppETWCallbackCancel @ 0x180127330
 * Callers:
 *     TppWorkWait @ 0x18002FA78 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180088250 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088800 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1801269F0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
