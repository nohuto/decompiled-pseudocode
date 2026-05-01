/*
 * XREFs of ??$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x18006CE40
 * Callers:
 *     ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x18006CDD0 (-SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall TouchGestureTelemetry::SetEnabledTouchGestures<unsigned int>(int *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  result = wil::details::static_lazy<TouchGestureLogging>::get(
             a1,
             _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(result + 8);
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v9 = 0;
    v5 = v4;
    v8 = 4;
    v7 = &v5;
    return tlgWriteTransfer_EventWriteTransfer((int)v3, (int)&dword_180870E6A, 0, 0, 3u, &v6);
  }
  return result;
}
