/*
 * XREFs of ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146D28
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C014747C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 */

void __fastcall PowerOffSession(enum POWER_MONITOR_REQUEST_REASON a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v3; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v3 = 0;
  if ( !gProtocolType )
  {
    LODWORD(v4) = 2;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
    v3 = 1;
    if ( gSqmIsOptedIn )
      SqmPowerState();
  }
  UpdateSessionPowerState(0, a1);
  if ( v3 )
  {
    LODWORD(v4) = 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
  }
}
