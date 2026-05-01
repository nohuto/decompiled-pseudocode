/*
 * XREFs of ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180148AD0
 * Callers:
 *     ?StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z @ 0x1800AA0F0 (-StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_PowerNotificationCallback(int a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  int v4; // [rsp+38h] [rbp-C8h]
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v7; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 v8; // [rsp+858h] [rbp+758h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+860h] [rbp+760h] BYREF
  int *v10; // [rsp+880h] [rbp+780h]
  int v11; // [rsp+888h] [rbp+788h]
  int v12; // [rsp+88Ch] [rbp+78Ch]

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_PowerNotificationCallback");
  v4 = a1;
  StringCchPrintfExW(v7, v8, &v7, &v8, 0, (wchar_t *)L"%S=%u ", "powerSettingData", v4);
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = *(_DWORD **)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v2,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    v12 = 0;
    v10 = &v5;
    v5 = a1;
    v11 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1808474B7, 0LL, 0LL, 3u, &v9);
  }
}
