/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1400069D0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140006428 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140006508 (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140006734 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400067D0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x1400068E8 (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
