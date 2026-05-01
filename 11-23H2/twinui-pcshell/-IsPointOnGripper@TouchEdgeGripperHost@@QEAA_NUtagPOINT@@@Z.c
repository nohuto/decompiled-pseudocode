/*
 * XREFs of ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180656BC8
 * Callers:
 *     ?IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z @ 0x18064D600 (-IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall TouchEdgeGripperHost::IsPointOnGripper(RTL_SRWLOCK *this, struct tagPOINT a2)
{
  RTL_SRWLOCK *v2; // rsi
  LONG x; // ebx
  __int64 v5; // rcx
  bool v6; // cc
  char v7; // bl
  _DWORD *v8; // rcx
  char v10; // [rsp+30h] [rbp-58h] BYREF
  struct tagPOINT v11; // [rsp+38h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-48h] BYREF
  char *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v2 = this + 29;
  v11 = a2;
  x = a2.x;
  AcquireSRWLockShared(this + 29);
  if ( ((HIDWORD(this[3].Ptr) - 4) & 0xFFFFFFFB) != 0 )
  {
    if ( x < SLODWORD(this[30].Ptr) )
      goto LABEL_8;
    v6 = x <= SLODWORD(this[31].Ptr);
  }
  else
  {
    if ( v11.y < SHIDWORD(this[30].Ptr) )
      goto LABEL_8;
    v6 = v11.y <= SHIDWORD(this[31].Ptr);
  }
  if ( v6 )
  {
    v7 = 1;
    goto LABEL_9;
  }
LABEL_8:
  v7 = 0;
LABEL_9:
  v8 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v5,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    v15 = 0;
    v13 = &v10;
    v10 = v7;
    v14 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_1808716B8, 0LL, 0LL, 3u, &v12);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v7;
}
