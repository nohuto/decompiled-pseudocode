/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01DC1F0
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01DAD7C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C01DC0A8 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     MonitorGetMonitorHandle @ 0x1C0183734 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C0193A34 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C019DEB8 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(__int64 a1, __int64 a2, bool *a3)
{
  int MonitorHandle; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  int v10; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(a1, a2, 0LL, (void *)0x4D495044, &v11);
  if ( MonitorHandle >= 0 )
  {
    v10 = 0;
    MonitorHandle = MonitorGetMonitorType(v11, &v10, v6, v7);
    if ( MonitorHandle >= 0 )
      *a3 = v10 == 5;
    MonitorReleaseMonitorHandle(a1, (__int64)v11, (void *)0x4D495044, v8);
  }
  return (unsigned int)MonitorHandle;
}
