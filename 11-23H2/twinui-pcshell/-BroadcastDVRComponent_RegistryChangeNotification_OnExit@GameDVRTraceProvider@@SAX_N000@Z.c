/*
 * XREFs of ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x180148EDC
 * Callers:
 *     ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800A8860 (-RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333@Z @ 0x1801499D0 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnExit(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int v4; // edi
  int v5; // ebx
  int v6; // r14d
  int v7; // esi
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int v10; // r8d
  int v11; // r9d
  int v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+38h] [rbp-C8h]
  char v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17; // [rsp+41h] [rbp-BFh] BYREF
  char v18; // [rsp+42h] [rbp-BEh] BYREF
  _BYTE v19[13]; // [rsp+43h] [rbp-BDh] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v21; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 v22; // [rsp+858h] [rbp+758h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_RegistryChangeNotification_OnExit");
  v12 = v5;
  StringCchPrintfExW(v21, v22, &v21, &v22, 0, (wchar_t *)L"%S=%d ", "fGameDVRRegKeyEnabled", v12);
  LODWORD(v13) = v4;
  StringCchPrintfExW(v21, v22, &v21, &v22, 0, (wchar_t *)L"%S=%d ", "fHistoricalCaptureEnabled", v13);
  LODWORD(v14) = v7;
  StringCchPrintfExW(v21, v22, &v21, &v22, 0, (wchar_t *)L"%S=%d ", "fHistoricalCaptureEnabledOnBattery", v14);
  LODWORD(v15) = v6;
  StringCchPrintfExW(v21, v22, &v21, &v22, 0, (wchar_t *)L"%S=%d ", "fHistoricalCaptureEnabledOnWirelessDesktop", v15);
  GameDVR_OutputDebug::OutputString(OutputString);
  v9 = *(_DWORD **)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v8,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u )
  {
    v16 = v6;
    v17 = v7;
    v18 = v4;
    v19[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (_DWORD)v9,
      (unsigned int)&unk_180847845,
      v10,
      v11,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
}
