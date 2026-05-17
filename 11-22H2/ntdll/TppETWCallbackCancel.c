/*
 * XREFs of TppETWCallbackCancel @ 0x180125E80
 * Callers:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180087A50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088000 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180125540 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
