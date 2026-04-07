/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180109FAC
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180109BE8 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180109E4C (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     atexit @ 0x1800605D8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18006108A (InitOnceBeginInitialize_0.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180093B30 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x180109C5C (--1Completer@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, &v9) && (_DWORD)v8 )
  {
    v6 = &`ScalingCompatLogging::Instance'::`2'::wrapper;
    v9 = &qword_180146468;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180146468);
    qword_180146468 = &ScalingCompatLogging::`vftable';
    qword_180146480 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<ScalingCompatLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
