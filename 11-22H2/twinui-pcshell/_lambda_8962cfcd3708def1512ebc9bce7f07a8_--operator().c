/*
 * XREFs of _lambda_8962cfcd3708def1512ebc9bce7f07a8_::operator() @ 0x180065150
 * Callers:
 *     wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180065140 (wistd--__function--__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_8962cfcd3708def1512ebc9bce7f07a8_::operator()(__int64 *a1, int *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v4 = 0;
  v5 = *(_DWORD **)(wil::details::static_lazy<TouchGestureLogging>::get(
                      a1,
                      _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    v8 = *a2;
    v11 = 4LL;
    v10 = &v8;
    tlgWriteTransfer_EventWriteTransfer((int)v5, (int)&dword_1808715E7, 0, 0, 3u, &v9);
  }
  v6 = *a1;
  if ( *a2 != 1 )
    v4 = *(_DWORD *)(v6 + 92);
  return TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(v6, v4);
}
