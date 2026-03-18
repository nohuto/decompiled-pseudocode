/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x140865B48
 * Callers:
 *     HalpTimerInitSystem @ 0x14037AA30 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     DbgPrint @ 0x14032A6F0 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140865B70 (HalpTimerWatchdogGeneratedLastReset.c)
 */

ULONG HalpTimerWatchdogLogReset()
{
  ULONG result; // eax

  result = HalpTimerWatchdogGeneratedLastReset();
  if ( (_BYTE)result )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_WATCHDOG_TRIGGERED, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}
