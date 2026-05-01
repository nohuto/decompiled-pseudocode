/*
 * XREFs of ?get@?$static_lazy@VProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@@details@wil@@QEAAPEAVProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@P6AXXZ@Z @ 0x18075EF18
 * Callers:
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180750DD0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x180750E40 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  __int64 *v8; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &v9,
         (LPVOID *)&v8)
    && v9 )
  {
    v6 = &`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::Instance'::`2'::wrapper;
    v8 = &qword_180990540;
    qword_180990540 = (__int64)&ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::`vftable';
    qword_180990558 = (__int64)&`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v8;
}
