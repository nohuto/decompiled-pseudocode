/*
 * XREFs of ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18050429C
 * Callers:
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1805074E8 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(__int64 a1)
{
  __int64 *v1; // rax
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v1 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
  v2 = (_DWORD *)v1[1];
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v6 = (__int64)L"sihost.exe";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                     v3,
                     (int)&dword_18085C37E,
                     0,
                     v4,
                     (const WCHAR **)&v6);
    }
  }
  return (char)v1;
}
