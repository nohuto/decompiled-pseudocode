/*
 * XREFs of ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18019BE10
 * Callers:
 *     ?Instance@SearchAppExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x18019F3BC (-Instance@SearchAppExperienceManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ @ 0x1801A60A0 (-Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x18013B6D8 (-InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v3[2].Ptr = SearchAppLauncherLogging::Provider(a1);
    LOBYTE(v3[3].Ptr) = 0;
    wil::TraceLoggingProvider::InternalInitialize((wil::TraceLoggingProvider *)&v3[1]);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
