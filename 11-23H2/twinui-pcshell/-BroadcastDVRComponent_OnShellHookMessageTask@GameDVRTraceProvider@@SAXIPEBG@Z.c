/*
 * XREFs of ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803D624C
 * Callers:
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803DA414 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 * Callees:
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x180149498 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1803D29E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OnShellHookMessageTask(int a1, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+38h] [rbp-C8h]
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v12; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 v13; // [rsp+858h] [rbp+758h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(
    (GameDVR_OutputDebug *)OutputString,
    "BroadcastDVRComponent_OnShellHookMessageTask");
  v8 = a1;
  StringCchPrintfExW(v12, v13, &v12, &v13, 0, (wchar_t *)L"%S=%u ", "command", v8);
  StringCchPrintfExW(v12, v13, &v12, &v13, 0, (wchar_t *)L"%S=\"%s\" ", "CommandString", a2);
  GameDVR_OutputDebug::OutputString(OutputString);
  v5 = (_DWORD *)wil::details::static_lazy<GameDVRTraceProvider>::get(
                   v4,
                   (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v10 = (__int64)a2;
    LODWORD(v9) = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v5,
      (unsigned __int8 *)dword_1808472CB,
      v6,
      v7,
      (__int64)&v9,
      (const WCHAR **)&v10);
  }
}
