/*
 * XREFs of ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x1800AFA3C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180247380 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AE21C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 */

int __fastcall DashboardManagerTelemetry::WebExperienceDelayStarted<unsigned short const * &,__int64>(
        const WCHAR **a1,
        int *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  int v9; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
         a1,
         _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v4 + 8);
  if ( *v7 > 5u )
  {
    v9 = *a2;
    v10 = *a1;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    (__int64)v7,
                    byte_1808761F6,
                    v5,
                    v6,
                    &v10,
                    (__int64)&v9);
  }
  return v4;
}
