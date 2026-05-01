/*
 * XREFs of ?IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z @ 0x18064D600
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180656BC8 (-IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z.c)
 */

bool __fastcall TouchEdgeGestureManager::IsPointOnTouchEdgeGripper(TouchEdgeGripperHost **this, struct tagPOINT a2)
{
  bool IsPointOnGripper; // bl
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  bool v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  bool *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  IsPointOnGripper = TouchEdgeGripperHost::IsPointOnGripper(this[11], a2);
  v4 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v3,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v10 = 0;
    v8 = &v6;
    v6 = IsPointOnGripper;
    v9 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180870FA1, 0LL, 0LL, 3u, &v7);
  }
  return IsPointOnGripper;
}
