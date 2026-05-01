/*
 * XREFs of ?EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18064D320
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?SetEnabledTouchEdgeGesture@TouchEdgeGestureProcessor@@QEAAXW4TouchEdgeGestureType@@@Z @ 0x180655A64 (-SetEnabledTouchEdgeGesture@TouchEdgeGestureProcessor@@QEAAXW4TouchEdgeGestureType@@@Z.c)
 */

__int64 __fastcall TouchEdgeGestureManager::EnableTouchEdgeGesture(TouchEdgeGestureManager *this, char a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  char *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = wil::details::static_lazy<TouchGestureLogging>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    v8 = a2;
    v10 = &v8;
    v11 = 1;
    v12 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1808711E0, 0LL, 0LL, 3u, &v9);
  }
  try
  {
    TouchEdgeGestureProcessor::SetEnabledTouchEdgeGesture((char *)this + 96, a2 != 0 ? 0x1E : 0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v6);
  }
  return result;
}
