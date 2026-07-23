/*
 * XREFs of ExCancelTimer @ 0x14031E110
 * Callers:
 *     WdtpCancelTimer @ 0x1407858BC (WdtpCancelTimer.c)
 *     EtwpStopLoggerInstance @ 0x1407F6644 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14031E144 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
