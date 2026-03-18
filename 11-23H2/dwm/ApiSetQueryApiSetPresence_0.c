/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1400070B0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140006B08 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140006BE8 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140006E14 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140006EB0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140006FC8 (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
