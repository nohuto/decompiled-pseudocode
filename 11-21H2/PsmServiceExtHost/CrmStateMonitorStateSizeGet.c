/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x18002F078
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x18002E854 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorLogDataGet @ 0x18002EEE0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002EFA0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorStart @ 0x18002F304 (CrmStateMonitorStart.c)
 *     CrmLogStateMonitorStop @ 0x180035F24 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18003C5C0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorWNFStart @ 0x18004295C (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorWNFCallback @ 0x180042F10 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180042FF0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18004305C (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x18004C3B4 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18004C9AC (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x18004CE38 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x18004D088 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x18004D2DC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x18004D42C (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x18004D62C (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x18004D6A0 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004D714 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x18004D778 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x18004D830 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18004D89C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x18004D908 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DEE0 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E1E8 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorTestStart @ 0x18006E504 (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  bool v1; // zf
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 == 25 )
    return 4LL;
  if ( a1 > 25 )
  {
    if ( a1 > 32 )
    {
      if ( a1 == 34 )
        return 12LL;
      if ( a1 != 35 && a1 != 36 )
      {
        if ( a1 == 33 || a1 == 37 )
          return 4LL;
        if ( a1 > 39 )
          return 0LL;
        return 12LL;
      }
    }
    else
    {
      if ( a1 == 32 )
        return 12LL;
      v3 = a1 - 26;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
          return 4LL;
        v5 = v4 - 1;
        if ( !v5 )
          return 4LL;
        v6 = v5 - 1;
        if ( !v6 )
          return 4LL;
        v7 = v6 - 1;
        if ( v7 )
        {
          v1 = v7 == 1;
LABEL_10:
          if ( v1 )
            return 4LL;
          return 0LL;
        }
        return 12LL;
      }
    }
    return 8LL;
  }
  if ( a1 > 17 )
  {
    if ( a1 == 19 || a1 == 18 || a1 == 20 )
      return 4LL;
    if ( a1 == 21 )
      return 16LL;
    if ( a1 > 23 )
    {
      v1 = a1 == 24;
      goto LABEL_10;
    }
    return 12LL;
  }
  if ( a1 >= 13 )
    return 12LL;
  if ( a1 < 0 )
    return 0LL;
  if ( a1 <= 2 )
    return 4LL;
  result = 8LL;
  if ( a1 <= 8 )
    return 4LL;
  if ( a1 != 11 )
  {
    if ( a1 == 10 )
      return 4LL;
    if ( a1 == 9 )
      return 12LL;
  }
  return result;
}
