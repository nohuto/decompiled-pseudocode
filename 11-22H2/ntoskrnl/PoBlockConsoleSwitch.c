/*
 * XREFs of PoBlockConsoleSwitch @ 0x140682A78
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983AA4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopBlockSessionSwitch @ 0x140997DA0 (PopBlockSessionSwitch.c)
 *     PnprQuiesceDevices @ 0x140A9D3C4 (PnprQuiesceDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x14035E670 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PoBlockConsoleSwitch(__int64 a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
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
