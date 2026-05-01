/*
 * XREFs of ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFA94
 * Callers:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(int a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  int v4; // [rsp+30h] [rbp-D0h]
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
    "IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError");
  v4 = a1;
  StringCchPrintfExW(v7, v8, &v7, &v8, 0, (wchar_t *)L"hr=0x%08X ", v4);
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v2,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v12 = 0;
    v10 = &v5;
    v5 = a1;
    v11 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180847F56, 0LL, 0LL, 3u, &v9);
  }
}
