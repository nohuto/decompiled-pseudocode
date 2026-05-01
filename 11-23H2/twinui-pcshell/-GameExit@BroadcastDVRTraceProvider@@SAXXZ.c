/*
 * XREFs of ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x1803D7480
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x180112474 (-get@-$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall BroadcastDVRTraceProvider::GameExit(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<BroadcastDVRTraceProvider>::get(
                   a1,
                   (void (__cdecl *)())_lambda_834c0077cad59c9dc0a3a987d1005045_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180847325, 0LL, 0LL, 2u, &v3);
  }
}
