/*
 * XREFs of ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01DC294
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003480C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DispatcherHandleNameToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return "RemoteOpenEvent";
    if ( !a1 )
      return "RimPnpEvent";
    v1 = a1 - 2;
    if ( !v1 )
      return "RimReadCompletionEvent";
    v2 = v1 - 1;
    if ( !v2 )
      return "RimTimer";
    v3 = v2 - 1;
    if ( !v3 )
      return "PTPTimer";
    v4 = v3 - 1;
    if ( !v4 )
      return "PTPInertiaTimer";
    v5 = v4 - 1;
    if ( !v5 )
      return "DelayZonePalmRejectionTimer";
    v6 = v5 - 1;
    if ( !v6 )
      return "FlushDelayZonePalmRejectInputTimer";
    if ( v6 == 1 )
      return "MouseReportRateLimitingTimer";
    return "UNKNOWN";
  }
  v8 = a1 - 10;
  if ( !v8 )
    return "RemoteCloseEvent";
  v9 = v8 - 1;
  if ( !v9 )
    return "DirectStartStopReadEvent";
  v10 = v9 - 1;
  if ( !v10 )
    return "TSLocalDeviceAttachedEvent";
  v11 = v10 - 1;
  if ( !v11 )
    return "PTPMarshalEvent";
  v12 = v11 - 1;
  if ( !v12 )
    return "MouseCursorUpdateEvent";
  v13 = v12 - 1;
  if ( !v13 )
    return "TouchSynthesizeEvent";
  if ( v13 != 1 )
    return "UNKNOWN";
  return "PTPInertiaHandleEvent";
}
