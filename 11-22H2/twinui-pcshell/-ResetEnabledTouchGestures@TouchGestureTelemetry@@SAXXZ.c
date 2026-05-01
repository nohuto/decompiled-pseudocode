/*
 * XREFs of ?ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ @ 0x18006F08C
 * Callers:
 *     ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x18006F050 (-ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
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
    tlgWriteTransfer_EventWriteTransfer((int)v1, (int)&dword_180870E97, 0, 0, 2u, &v2);
}
