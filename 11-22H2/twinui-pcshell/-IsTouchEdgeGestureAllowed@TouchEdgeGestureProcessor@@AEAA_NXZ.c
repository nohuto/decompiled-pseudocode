/*
 * XREFs of ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x18016D428
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 * Callees:
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$AllowEdgeSwipe@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18016D5D0 (--$AllowEdgeSwipe@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1801CC574 (IsQueryWin32SubsystemHostPresent.c)
 */

char __fastcall TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed(TouchEdgeGestureProcessor *this)
{
  __int64 v1; // rcx
  int Win32SubsystemHost; // esi
  _DWORD *v3; // rcx
  char v4; // bl
  char v5; // di
  char v7[4]; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v8[3]; // [rsp+3Ch] [rbp-45h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v10[24]; // [rsp+68h] [rbp-19h] BYREF
  int v11; // [rsp+80h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+98h] [rbp+17h] BYREF
  _DWORD *v13; // [rsp+B8h] [rbp+37h]
  int v14; // [rsp+C0h] [rbp+3Fh]
  int v15; // [rsp+C4h] [rbp+43h]

  TouchEdgeGestureTelemetry::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v9,
    "TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed");
  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() )
    Win32SubsystemHost = QueryWin32SubsystemHost();
  else
    Win32SubsystemHost = 0;
  v3 = *(_DWORD **)(wil::details::static_lazy<TouchGestureLogging>::get(
                      v1,
                      _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    v15 = 0;
    v13 = v8;
    v8[0] = Win32SubsystemHost;
    v14 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1808714BC, 0LL, 0LL, 3u, &v12);
  }
  v4 = 0;
  v5 = 0;
  if ( Win32SubsystemHost != 1 )
  {
    v4 = 1;
    v7[0] = 1;
    v8[0] = 1;
    v5 = 1;
    if ( (int)PolicyManager_GetPolicyInt(L"LockDown", L"AllowEdgeSwipe", v8) >= 0 && v8[0] != 1 )
    {
      v4 = 0;
      v7[0] = 0;
      v5 = 0;
    }
    TouchEdgeGestureTelemetry::AllowEdgeSwipe<bool &>(v7);
  }
  if ( v11 )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
    v4 = v5;
  }
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v9);
  return v4;
}
