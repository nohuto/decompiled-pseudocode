/*
 * XREFs of ?ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ @ 0x1800393F0
 * Callers:
 *     ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x180039340 (-ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x1800394E0 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall TouchGestureTelemetry::ResetEnabledTouchGestures(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<TouchGestureLogging>::get(
                      a1,
                      _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v1, (int)&dword_1806C8901, 0, 0, 2u, &v2);
}
