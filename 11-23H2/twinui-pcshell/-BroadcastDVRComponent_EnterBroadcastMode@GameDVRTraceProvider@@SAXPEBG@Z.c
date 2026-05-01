/*
 * XREFs of ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803D5DAC
 * Callers:
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x1803D6E00 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_EnterBroadcastMode(const unsigned __int16 *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp-838h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  unsigned __int16 *v7; // [rsp+850h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+858h] [rbp-20h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_EnterBroadcastMode");
  StringCchPrintfExW(v7, v8, &v7, &v8, 0, (wchar_t *)L"%S=\"%s\" ", "DesktopMode", a1);
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v2,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v5 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)v3,
      (int)&dword_180847C07,
      0,
      v4,
      (const WCHAR **)&v5);
  }
}
