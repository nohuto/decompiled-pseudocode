/*
 * XREFs of TppETWCallbackCancel @ 0x180124440
 * Callers:
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x18008A0E0 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x18008CF20 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180123B00 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
