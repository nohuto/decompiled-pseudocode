/*
 * XREFs of CrmStateMonitorCleanup @ 0x180035E7C
 * Callers:
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 *     CrmRegisterToStateMonitor @ 0x18003C628 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorGPUUsageCleanup @ 0x180035FEC (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x180040860 (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x1800408B0 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x18006DE90 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x18006DF34 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x18006DF84 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x18006E02C (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x18006E174 (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x18006E25C (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18006E2AC (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18006E384 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18006E454 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x18006E4A4 (CrmStateMonitorTestCleanup.c)
 *     CrmStateMonitorTimeSinceBootCleanup @ 0x18006E5D8 (CrmStateMonitorTimeSinceBootCleanup.c)
 */

__int64 __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  int v11; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 25 )
  {
    if ( v1 == 25 )
      goto LABEL_8;
    if ( v1 > 17 )
    {
      switch ( v1 )
      {
        case 18:
          v9 = *(void **)(a1 + 64);
          if ( v9 )
            CancelMibChangeNotify2(v9);
          v10 = *(void **)(a1 + 72);
          if ( v10 )
            CancelMibChangeNotify2(v10);
          return CrmLogStateMonitorStop(a1);
        case 19:
          CrmStateMonitorPostShellReadyCleanup();
          return CrmLogStateMonitorStop(a1);
        case 20:
          CrmStateMonitorPostResumeCleanup();
          return CrmLogStateMonitorStop(a1);
        case 21:
          CrmStateMonitorPowerConstrainedCleanup();
          return CrmLogStateMonitorStop(a1);
      }
      if ( v1 > 23 )
        goto LABEL_8;
    }
    else if ( v1 < 13 )
    {
      if ( v1 < 0 )
        return CrmLogStateMonitorStop(a1);
      if ( v1 <= 1 )
      {
        CrmStateMonitorTestCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      if ( v1 == 2 )
      {
        CrmStateMonitorCompositeTestCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      if ( v1 <= 8 )
      {
        v8 = *(void **)(a1 + 64);
        if ( v8 )
          PowerSettingUnregisterNotification(v8);
        return CrmLogStateMonitorStop(a1);
      }
      if ( v1 != 9 )
      {
        if ( v1 != 10 )
          CrmStateMonitorTimeSinceBootCleanup();
        return CrmLogStateMonitorStop(a1);
      }
    }
    goto LABEL_16;
  }
  if ( v1 > 32 )
  {
    switch ( v1 )
    {
      case '#':
        CrmStateMonitorAcDcDisplayCleanup();
        return CrmLogStateMonitorStop(a1);
      case '$':
        CrmStateMonitorAcDcBatteryCleanup();
        return CrmLogStateMonitorStop(a1);
      case '!':
        CrmStateMonitorDelayedCsCleanup();
        return CrmLogStateMonitorStop(a1);
    }
    if ( v1 != 34 )
    {
      if ( v1 == 37 )
      {
        CrmStateMonitorDelayedInternetLossCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      if ( v1 > 39 )
        return CrmLogStateMonitorStop(a1);
    }
LABEL_16:
    if ( *(_QWORD *)(a1 + 72) )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 == 32 )
    goto LABEL_16;
  v3 = v1 - 26;
  if ( !v3 )
  {
    CrmStateMonitorCsAcDcCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrmStateMonitorDelayedAcCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
LABEL_8:
      CrmStateMonitorGPUUsageCleanup();
      return CrmLogStateMonitorStop(a1);
    }
    v11 = v6 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        CrmStateMonitorDisconnectedStandbyCleanup();
      return CrmLogStateMonitorStop(a1);
    }
    goto LABEL_16;
  }
  return CrmLogStateMonitorStop(a1);
}
