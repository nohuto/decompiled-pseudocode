/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A9F20
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002700 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 *     ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x18001A980 (-RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSo.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x18002AF80 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180046524 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18004D860 (-OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180052AD0 (-ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDr.c)
 *     ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x18005A3A4 (-Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800E44A0 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800E4520 (-OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800E45A0 (-OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800E4620 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800EB5E8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180161BF0 (-RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDra.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E7D90 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E7F50 (-OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800A39D8 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v6);
  return v4;
}
