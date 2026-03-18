/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x1C013C2EC
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C00C4290 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00C42B0 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C4FE0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00C5520 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00CC780 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00CC910 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00CC930 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00CC950 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C0138D30 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C0138DC0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C01390D0 (EtwTraceDockState.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C0139160 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C0139190 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C01391F0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerCreate @ 0x1C0139820 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceFlipManagerDestroy @ 0x1C0139850 (EtwTraceFlipManagerDestroy.c)
 *     EtwTraceFlipManagerLost @ 0x1C0139880 (EtwTraceFlipManagerLost.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C013AE90 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C013AEC0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C013AF50 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C013AF80 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C013B05C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C013B310 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C013B530 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C016B7E0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0073658 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
