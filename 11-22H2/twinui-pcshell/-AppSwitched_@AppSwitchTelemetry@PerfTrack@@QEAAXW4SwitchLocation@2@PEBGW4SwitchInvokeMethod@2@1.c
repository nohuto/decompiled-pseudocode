/*
 * XREFs of ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x18057801C
 * Callers:
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180577E5C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x18045C68C (-get@-$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@34@Z @ 0x180577F1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched_(__int64 a1, int a2, const WCHAR *a3, int a4, __int64 a5)
{
  __int64 *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v8 = wil::details::static_lazy<CAppLifeCycle_UILogging>::get(
         a1,
         (void (__cdecl *)())_lambda_692b62e119e69287558415adb7754127_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn(v8[1], 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v13 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(0LL);
      LODWORD(v15) = a4;
      v14 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a3);
      LODWORD(a5) = a2;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                     (__int64)v9,
                     (unsigned __int8 *)dword_180866CAC,
                     v10,
                     v11,
                     (__int64)&a5,
                     (const WCHAR **)&v14,
                     (__int64)&v15,
                     (const WCHAR **)&v13);
    }
  }
  return (char)v8;
}
