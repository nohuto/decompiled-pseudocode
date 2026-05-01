/*
 * XREFs of ??$AllowEdgeSwipe@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18016D5D0
 * Callers:
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x18016D428 (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall TouchEdgeGestureTelemetry::AllowEdgeSwipe<bool &>(char *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<TouchGestureLogging>::get(
         a1,
         _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 1;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1808714E7,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return v2;
}
