/*
 * XREFs of ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1803DF814
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180394BE0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(
        int a1,
        const unsigned __int16 *a2,
        int a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+30h] [rbp-D0h]
  __int64 v11; // [rsp+38h] [rbp-C8h]
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v16; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 v17; // [rsp+858h] [rbp+758h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "IsGameManager_UpdateGameConfigStoreFromKGL");
  v10 = a1;
  StringCchPrintfExW(v16, v17, &v16, &v17, 0, (wchar_t *)L"hr=0x%08X ", v10);
  StringCchPrintfExW(v16, v17, &v16, &v17, 0, (wchar_t *)L"%S=\"%s\" ", "Identifier", a2);
  LODWORD(v11) = a3;
  StringCchPrintfExW(v16, v17, &v16, &v17, 0, (wchar_t *)L"%S=%u ", "Revision", v11);
  GameDVR_OutputDebug::OutputString(OutputString);
  v7 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v6,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v12 = a3;
    v14 = (__int64)a2;
    v13 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      (unsigned __int8 *)dword_180847EBF,
      v8,
      v9,
      (__int64)&v13,
      (const WCHAR **)&v14,
      (__int64)&v12);
  }
}
