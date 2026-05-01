/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x18000A5A4
 * Callers:
 *     CrmStateMonitorWNFCallback @ 0x180008740 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x180008950 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x1800089C0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmLogStateMonitorStop @ 0x180008EE0 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 *     CrmLogStateMonitorStateSet @ 0x18000A2A0 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18000A4E0 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18000A6D8 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorNetworkStart @ 0x18000A9FC (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorWNFStart @ 0x18000AABC (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18000B29C (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmLogStateMonitorRundown @ 0x18003E9C8 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180047750 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180047C4C (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180047FF4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x1800481BC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180048344 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800484BC (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180048534 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800485D0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180048638 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800486F4 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180048764 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180048834 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DF00 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E250 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorTestStart @ 0x18006E798 (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx

  v1 = 0;
  if ( a1 > 21 )
  {
    if ( a1 > 32 )
    {
      v20 = a1 - 33;
      if ( !v20 )
        return 4;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
          return 8;
        v23 = v22 - 1;
        if ( !v23 )
          return 8;
        v24 = v23 - 1;
        if ( !v24 )
          return 4;
        v9 = v24 - 1;
        if ( v9 )
        {
LABEL_21:
          v10 = v9 - 1;
          if ( v10 )
          {
            v7 = v10 - 1;
            if ( v7 )
            {
LABEL_23:
              if ( v7 != 1 )
                return v1;
            }
          }
        }
      }
    }
    else
    {
      if ( a1 == 32 )
        return 32;
      if ( a1 > 27 )
      {
        v18 = a1 - 28;
        if ( !v18 )
          return 4;
        v19 = v18 - 1;
        if ( !v19 )
          return 4;
        v13 = v19 - 1;
        if ( !v13 )
          return 32;
        goto LABEL_28;
      }
      if ( a1 == 27 )
        return 4;
      v14 = a1 - 22;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
            return 4;
          v17 = v16 - 1;
          if ( !v17 )
            return 4;
          if ( v17 != 1 )
            return v1;
          return 8;
        }
      }
    }
    return 32;
  }
  if ( a1 == 21 )
    return 40;
  if ( a1 > 10 )
  {
    if ( a1 <= 16 )
    {
      if ( a1 == 16 )
        return 32;
      v8 = a1 - 11;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
          goto LABEL_21;
      }
      return 8;
    }
    v11 = a1 - 17;
    if ( !v11 )
      return 32;
    v12 = v11 - 1;
    if ( !v12 )
      return 4;
    v13 = v12 - 1;
    if ( !v13 )
      return 4;
LABEL_28:
    if ( v13 != 1 )
      return v1;
    return 4;
  }
  if ( a1 == 10 )
    return 4;
  if ( a1 > 5 )
  {
    v5 = a1 - 6;
    if ( !v5 )
      return 4;
    v6 = v5 - 1;
    if ( !v6 )
      return 4;
    v7 = v6 - 1;
    if ( !v7 )
      return 4;
    goto LABEL_23;
  }
  if ( a1 == 5 )
    return 4;
  if ( !a1 )
    return 4;
  v2 = a1 - 1;
  if ( !v2 )
    return 4;
  v3 = v2 - 1;
  if ( !v3 || (unsigned int)(v3 - 1) <= 1 )
    return 4;
  return v1;
}
