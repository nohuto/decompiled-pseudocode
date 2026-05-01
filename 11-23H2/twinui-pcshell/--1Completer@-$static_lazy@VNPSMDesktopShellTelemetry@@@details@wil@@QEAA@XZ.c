/*
 * XREFs of ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1806ED95C
 * Callers:
 *     ??$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@@Z @ 0x180036428 (--$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHW.c)
 *     ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x1800364A0 (-IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@NPSMDesktopShellTelemetry@@IEAAXXZ @ 0x1806ED9D4 (-Create@NPSMDesktopShellTelemetry@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(_DWORD *a1)
{
  if ( !a1[2] )
    NPSMDesktopShellTelemetry::Create((NPSMDesktopShellTelemetry *)(*(_QWORD *)a1 + 8LL));
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
