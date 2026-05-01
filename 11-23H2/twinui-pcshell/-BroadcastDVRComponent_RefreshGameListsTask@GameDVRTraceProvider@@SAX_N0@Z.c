/*
 * XREFs of ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803D64C4
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803DAD7C (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18006B9A4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_RefreshGameListsTask(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+38h] [rbp-C8h]
  __int64 v8; // [rsp+38h] [rbp-C8h]
  char v9; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v10[15]; // [rsp+41h] [rbp-BFh] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v12; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 v13; // [rsp+858h] [rbp+758h] BYREF

  v2 = a2;
  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_RefreshGameListsTask");
  v7 = 0;
  StringCchPrintfExW(v12, v13, &v12, &v13, 0, (wchar_t *)L"%S=%d ", "fHistoricalCaptureOffToOn", v7);
  LODWORD(v8) = v2;
  StringCchPrintfExW(v12, v13, &v12, &v13, 0, (wchar_t *)L"%S=%d ", "fGameAppInFocus", v8);
  GameDVR_OutputDebug::OutputString(OutputString);
  v4 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v3,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v9 = v2;
    v10[0] = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (int)v4,
      (int)&unk_18084750E,
      v5,
      v6,
      (__int64)v10,
      (__int64)&v9);
  }
}
