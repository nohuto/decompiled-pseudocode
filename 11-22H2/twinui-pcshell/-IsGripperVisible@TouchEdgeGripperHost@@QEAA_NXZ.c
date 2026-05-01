/*
 * XREFs of ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180656B00
 * Callers:
 *     ?IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ @ 0x18064D6A0 (-IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

bool __fastcall TouchEdgeGripperHost::IsGripperVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // bl
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  bool v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  bool *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v1 = this + 29;
  AcquireSRWLockShared(this + 29);
  v3 = this[7].Ptr != 0LL;
  v5 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v4,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v3;
    v10 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18087168C, 0LL, 0LL, 3u, &v8);
  }
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
