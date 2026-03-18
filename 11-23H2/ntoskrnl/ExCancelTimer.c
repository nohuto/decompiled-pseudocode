/*
 * XREFs of ExCancelTimer @ 0x14031DE80
 * Callers:
 *     WdtpCancelTimer @ 0x1407856CC (WdtpCancelTimer.c)
 *     EtwpStopLoggerInstance @ 0x1407F6374 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECB18 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14031DEB4 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
