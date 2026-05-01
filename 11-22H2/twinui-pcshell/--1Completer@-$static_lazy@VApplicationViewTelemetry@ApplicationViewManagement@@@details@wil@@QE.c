/*
 * XREFs of ??1Completer@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAA@XZ @ 0x1801C5EB0
 * Callers:
 *     ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x18016B6EC (-get@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVAp.c)
 * Callees:
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x1801C5EEC (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::Completer::~Completer(
        _DWORD *a1)
{
  if ( !a1[2] )
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)(*(_QWORD *)a1 + 8LL));
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
