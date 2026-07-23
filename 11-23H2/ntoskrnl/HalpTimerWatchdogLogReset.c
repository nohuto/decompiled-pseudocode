/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x140865D88
 * Callers:
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140865DB0 (HalpTimerWatchdogGeneratedLastReset.c)
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
