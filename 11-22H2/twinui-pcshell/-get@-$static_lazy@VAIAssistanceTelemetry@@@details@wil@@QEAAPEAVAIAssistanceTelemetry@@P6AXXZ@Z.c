/*
 * XREFs of ?get@?$static_lazy@VAIAssistanceTelemetry@@@details@wil@@QEAAPEAVAIAssistanceTelemetry@@P6AXXZ@Z @ 0x180275774
 * Callers:
 *     ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18025DDD0 (--$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0D.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AIAssistanceTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`AIAssistanceTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`AIAssistanceTelemetry::Instance'::`2'::wrapper;
    v9 = &qword_180990240;
    qword_180990240 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_180990258 = (__int64)&`AIAssistanceTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
