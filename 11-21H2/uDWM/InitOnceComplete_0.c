/*
 * XREFs of InitOnceComplete_0 @ 0x1800610AE
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180109BE8 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x180109C5C (--1Completer@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceComplete_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)
{
  return InitOnceComplete(lpInitOnce, dwFlags, lpContext);
}
