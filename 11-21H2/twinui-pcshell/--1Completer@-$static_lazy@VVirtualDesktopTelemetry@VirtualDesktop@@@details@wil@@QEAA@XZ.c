/*
 * XREFs of ??1Completer@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ @ 0x1801B6874
 * Callers:
 *     ?Instance@VirtualDesktopTelemetry@VirtualDesktop@@KAPEAV12@XZ @ 0x1801B711C (-Instance@VirtualDesktopTelemetry@VirtualDesktop@@KAPEAV12@XZ.c)
 * Callees:
 *     ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x18013B6D8 (-InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180322CB0 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

BOOL __fastcall wil::details::static_lazy<VirtualDesktop::VirtualDesktopTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v3[2].Ptr = WindowManagementLogging::Provider();
    LOBYTE(v3[3].Ptr) = 0;
    wil::TraceLoggingProvider::InternalInitialize((wil::TraceLoggingProvider *)&v3[1]);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
