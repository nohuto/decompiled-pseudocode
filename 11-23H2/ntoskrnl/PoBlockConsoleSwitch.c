/*
 * XREFs of PoBlockConsoleSwitch @ 0x140682A78
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F2C0 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409839F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x140997CF0 (PopBlockSessionSwitch.c)
 *     PnprQuiesceDevices @ 0x140A9D304 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x14035ECC0 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  int ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)PopDispatchStateCallout(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
