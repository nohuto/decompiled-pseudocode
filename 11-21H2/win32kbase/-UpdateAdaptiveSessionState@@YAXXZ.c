/*
 * XREFs of ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C007CFEC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00D0788 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C007D0A4 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C007D190 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C007D200 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UpdateAdaptiveSessionState(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 OutputBuffer; // [rsp+30h] [rbp-40h] BYREF
  int v4; // [rsp+38h] [rbp-38h]
  _DWORD InputBuffer[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 LastInputTime; // [rsp+48h] [rbp-28h]
  __int64 GlobalTickCount; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  InputBuffer[1] = 0;
  v10 = 0;
  OutputBuffer = 0LL;
  v4 = 0;
  InputBuffer[0] = 81;
  LastInputTime = CInputGlobals::GetLastInputTime(gpInputGlobals);
  GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 0LL);
  v8 = qword_1C0296F48;
  v9 = dword_1C0296F70;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x28u, &OutputBuffer, 0xCu) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
}
