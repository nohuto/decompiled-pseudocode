/*
 * XREFs of ?SetEnabledTouchEdgeGesture@TouchEdgeGestureProcessor@@QEAAXW4TouchEdgeGestureType@@@Z @ 0x180655A64
 * Callers:
 *     ?EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z @ 0x18064D320 (-EnableTouchEdgeGesture@TouchEdgeGestureManager@@UEAAJ_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall TouchEdgeGestureProcessor::SetEnabledTouchEdgeGesture(__int64 a1, int a2)
{
  _DWORD *v4; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v4 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180871511, 0LL, 0LL, 3u, &v6);
  }
  if ( *(_DWORD *)(a1 + 92) != a2 )
  {
    *(_DWORD *)(a1 + 92) = a2;
    TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(a1, a2);
  }
}
