/*
 * XREFs of ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x180115ADC
 * Callers:
 *     ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x180111FB4 (--$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x180166304 (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180166350 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x18016639C (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180166720 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001B888 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TestCursorTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`TestCursorTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`TestCursorTraceLogging::Instance'::`2'::wrapper;
    v7 = &qword_180277F08;
    qword_180277F08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277F20 = (__int64)&`TestCursorTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  return v7;
}
