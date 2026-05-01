/*
 * XREFs of ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x1803D73E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall BroadcastDVRComponent::ExitBroadcastMode(BroadcastDVRComponent *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  WCHAR OutputString[1032]; // [rsp+30h] [rbp-848h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+840h] [rbp-38h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_ExitBroadcastMode");
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v2,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180847BCA, 0LL, 0LL, 2u, &v6);
  *(_WORD *)((char *)this + 447) = 0;
  return 0LL;
}
