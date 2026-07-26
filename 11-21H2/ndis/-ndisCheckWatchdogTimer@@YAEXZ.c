/*
 * XREFs of ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C005C388
 * Callers:
 *     ndis5InterruptDpc @ 0x1C00C22F0 (ndis5InterruptDpc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

bool ndisCheckWatchdogTimer(void)
{
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  return KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
      && ndisDpcWatchdogLimit
      && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit;
}
