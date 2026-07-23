/*
 * XREFs of PopPrintEx @ 0x14032A4CC
 * Callers:
 *     PopCoalescingSetTimer @ 0x14058DA10 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopSetSessionDisplayStatus @ 0x1407A6040 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407A62CC (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6464 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 *     PopCheckThermalPolicy @ 0x1408024A8 (PopCheckThermalPolicy.c)
 *     PoFxRegisterDevice @ 0x140837E20 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x140987090 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x14098B6C4 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FCB8 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14098FCE8 (PopDiagTraceIoCoalescingOn.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}
