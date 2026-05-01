/*
 * XREFs of ?BroadcastDVRComponent_OlderOneSettingsKGL@GameDVRTraceProvider@@SAXXZ @ 0x1801486EC
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void GameDVRTraceProvider::BroadcastDVRComponent_OlderOneSettingsKGL(void)
{
  __int64 v0; // rcx
  _DWORD *v1; // rcx
  WCHAR OutputString[1032]; // [rsp+30h] [rbp-848h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+840h] [rbp-38h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_OlderOneSettingsKGL");
  GameDVR_OutputDebug::OutputString(OutputString);
  v1 = *(_DWORD **)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v0,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1808476AC, 0LL, 0LL, 2u, &v3);
}
