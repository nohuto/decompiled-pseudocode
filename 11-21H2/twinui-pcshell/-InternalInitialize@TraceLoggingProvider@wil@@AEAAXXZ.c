/*
 * XREFs of ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x18013B6D8
 * Callers:
 *     ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18019BE10 (--1Completer@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ @ 0x1801B6874 (--1Completer@-$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::InternalInitialize(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (**)(void))(v1 + 8))();
}
