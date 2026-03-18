/*
 * XREFs of PopPrintEx @ 0x14032A6AC
 * Callers:
 *     PopCoalescingSetTimer @ 0x14058D980 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopSetSessionDisplayStatus @ 0x1407A5B30 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407A5DBC (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A5F54 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x1407EB984 (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1408362D0 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140847F48 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x140986FE0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x14098B614 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FC08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14098FC38 (PopDiagTraceIoCoalescingOn.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}
