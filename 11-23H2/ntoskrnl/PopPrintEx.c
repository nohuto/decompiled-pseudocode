/*
 * XREFs of PopPrintEx @ 0x14032A93C
 * Callers:
 *     PopCoalescingSetTimer @ 0x14058DE70 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopSetSessionDisplayStatus @ 0x1407A5D20 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407A5FAC (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6144 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x1407EBC54 (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1408365D0 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140848248 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1409871E0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x14098B814 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FE08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14098FE38 (PopDiagTraceIoCoalescingOn.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
