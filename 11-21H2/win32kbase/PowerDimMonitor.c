/*
 * XREFs of PowerDimMonitor @ 0x1C0147D4C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C007D730 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C007E8AC (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007EA88 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 */

void PowerDimMonitor()
{
  char v0; // bl
  __int64 v1; // r8
  char v2; // r9
  __int128 v3; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v5[96]; // [rsp+60h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( dword_1C0296F90 == dword_1C0296F84 || dword_1C0296F84 >= (unsigned int)dword_1C0296F7C )
      v0 = 0;
    memset(v5, 0, 0x58uLL);
    if ( v0 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v5, 1);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), dword_1C0296FA4, v1, v2, &byte_1C0296FB4, 0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v3 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(1, &v3);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v0 )
    {
      if ( qword_1C029C2E0 && (int)qword_1C029C2E0() >= 0 && qword_1C029C2E8 )
        qword_1C029C2E8();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C0296790)(v5);
      dword_1C0296F84 = dword_1C0296FA4;
      dword_1C0296F90 = dword_1C0296FA4;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
