/*
 * XREFs of ??1Completer@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAA@XZ @ 0x180187A40
 * Callers:
 *     ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x18014A358 (-get@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVAp.c)
 * Callees:
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x180187A80 (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::Completer::~Completer(
        LPINIT_ONCE *a1)
{
  DWORD v1; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)&(*a1)[1]);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
