/*
 * XREFs of ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18015912C
 * Callers:
 *     ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180158FBC (--$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z.c)
 * Callees:
 *     atexit @ 0x180067018 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800CE360 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAA@XZ @ 0x18015902C (--1Completer@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<NUIAudioTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7) && (_DWORD)v6 )
  {
    v4 = &`NUIAudioTracing::Instance'::`2'::wrapper;
    v7 = qword_1801CFF70;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1801CFF70);
    qword_1801CFF70[0] = &NUIAudioTracing::`vftable';
    qword_1801CFF88 = (__int64)&`NUIAudioTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<NUIAudioTracing>::Completer::~Completer(&v4);
  }
  return v7;
}
