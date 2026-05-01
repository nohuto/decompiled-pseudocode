/*
 * XREFs of ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180067BF8
 * Callers:
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1800223E0 (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 * Callees:
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180067C34 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<CAppManagerTelemetry>::Completer::~Completer(_DWORD *a1)
{
  if ( !a1[2] )
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)(*(_QWORD *)a1 + 8LL));
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
