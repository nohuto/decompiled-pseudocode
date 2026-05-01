/*
 * XREFs of ?IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ @ 0x18064D6A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180656B00 (-IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ.c)
 */

bool __fastcall TouchEdgeGestureManager::IsTouchEdgeGripperVisible(TouchEdgeGripperHost **this)
{
  bool IsGripperVisible; // bl
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  bool v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  bool *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  IsGripperVisible = TouchEdgeGripperHost::IsGripperVisible(this[11]);
  v3 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v2,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v9 = 0;
    v7 = &v5;
    v5 = IsGripperVisible;
    v8 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1808711AB, 0LL, 0LL, 3u, &v6);
  }
  return IsGripperVisible;
}
