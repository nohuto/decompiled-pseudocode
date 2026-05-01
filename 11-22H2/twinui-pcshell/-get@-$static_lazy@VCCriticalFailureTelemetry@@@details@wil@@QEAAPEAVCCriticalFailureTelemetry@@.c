/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x18073DB24
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18010FB3C (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x18073D3C8 (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CCriticalFailureTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`CCriticalFailureTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`CCriticalFailureTelemetry::Instance'::`2'::wrapper;
    v7 = qword_180990460;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_180990460);
    qword_180990460[0] = &ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<CCriticalFailureTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v7;
}
