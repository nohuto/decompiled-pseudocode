/*
 * XREFs of CrmStateMonitorCleanup @ 0x180008C9C
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmActivityCleanup @ 0x18002CF70 (CrmActivityCleanup.c)
 * Callees:
 *     CrmStateMonitorGPUUsageCleanup @ 0x18000A744 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x18006DDA4 (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x18006DDF4 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x18006DEB0 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x18006DF58 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x18006DFA8 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x18006E0A4 (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x18006E1DC (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x18006E2FC (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006E34C (CrmStateMonitorFanNoiseHysteresisCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18006E548 (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18006E614 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18006E6E4 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x18006E738 (CrmStateMonitorTestCleanup.c)
 *     CrmStateMonitorTimeSinceBootCleanup @ 0x18006E870 (CrmStateMonitorTimeSinceBootCleanup.c)
 */

__int64 __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void *v8; // rcx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  void *v15; // rcx
  void *v16; // rcx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 > 21 )
  {
    if ( v1 > 32 )
    {
      v24 = v1 - 33;
      if ( !v24 )
      {
        CrmStateMonitorDelayedCsCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_24;
      v26 = v25 - 1;
      if ( !v26 )
      {
        CrmStateMonitorAcDcDisplayCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        CrmStateMonitorAcDcBatteryCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        CrmStateMonitorDelayedInternetLossCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_24;
      v11 = v29 - 1;
      if ( !v11 )
      {
        CrmStateMonitorFanNoiseHysteresisCleanup();
        return CrmLogStateMonitorStop(a1);
      }
LABEL_65:
      v7 = v11 - 1;
      if ( v7 )
      {
LABEL_66:
        if ( v7 != 1 )
          return CrmLogStateMonitorStop(a1);
      }
LABEL_24:
      if ( *(_QWORD *)(a1 + 88) )
        RtlUnsubscribeWnfNotificationWaitForCompletion();
      return CrmLogStateMonitorStop(a1);
    }
    if ( v1 == 32 )
      goto LABEL_24;
    if ( v1 > 27 )
    {
      v21 = v1 - 28;
      if ( !v21 )
        return CrmLogStateMonitorStop(a1);
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
          goto LABEL_24;
        if ( v23 == 1 )
          CrmStateMonitorDisconnectedStandbyCleanup();
        return CrmLogStateMonitorStop(a1);
      }
    }
    else
    {
      if ( v1 == 27 )
      {
        CrmStateMonitorDelayedAcCleanup();
        return CrmLogStateMonitorStop(a1);
      }
      v17 = v1 - 22;
      if ( !v17 )
        goto LABEL_24;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_24;
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            CrmStateMonitorCsAcDcCleanup();
          return CrmLogStateMonitorStop(a1);
        }
      }
    }
    CrmStateMonitorGPUUsageCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 == 21 )
  {
    CrmStateMonitorPowerConstrainedCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 <= 10 )
  {
    if ( v1 == 10 )
      return CrmLogStateMonitorStop(a1);
    if ( v1 <= 5 )
    {
      if ( v1 != 5 )
      {
        if ( !v1 || (v3 = v1 - 1) == 0 )
        {
          CrmStateMonitorTestCleanup();
          return CrmLogStateMonitorStop(a1);
        }
        v4 = v3 - 1;
        if ( !v4 )
        {
          CrmStateMonitorCompositeTestCleanup();
          return CrmLogStateMonitorStop(a1);
        }
        if ( (unsigned int)(v4 - 1) >= 2 )
          return CrmLogStateMonitorStop(a1);
      }
      goto LABEL_17;
    }
    v5 = v1 - 6;
    if ( !v5 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
    {
LABEL_17:
      v8 = *(void **)(a1 + 64);
      if ( v8 )
        PowerSettingUnregisterNotification(v8);
      return CrmLogStateMonitorStop(a1);
    }
    goto LABEL_66;
  }
  if ( v1 <= 16 )
  {
    if ( v1 == 16 )
      goto LABEL_24;
    v9 = v1 - 11;
    if ( !v9 || (v10 = v9 - 1) == 0 )
    {
      CrmStateMonitorTimeSinceBootCleanup();
      return CrmLogStateMonitorStop(a1);
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_24;
    goto LABEL_65;
  }
  v12 = v1 - 17;
  if ( !v12 )
    goto LABEL_24;
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
        CrmStateMonitorPostResumeCleanup();
    }
    else
    {
      CrmStateMonitorPostShellReadyCleanup();
    }
  }
  else
  {
    v15 = *(void **)(a1 + 64);
    if ( v15 )
      CancelMibChangeNotify2(v15);
    v16 = *(void **)(a1 + 72);
    if ( v16 )
      CancelMibChangeNotify2(v16);
  }
  return CrmLogStateMonitorStop(a1);
}
