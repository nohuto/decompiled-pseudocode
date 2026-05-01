/*
 * XREFs of ?get@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AXXZ@Z @ 0x180745E64
 * Callers:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x18074132C (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18010FB3C (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<DelayAllocateTLSLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`DelayAllocateTLSLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, &v9)
    && (_DWORD)v8 )
  {
    v6 = &`DelayAllocateTLSLogging::Instance'::`2'::wrapper;
    v9 = &qword_1809904C8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_1809904C8);
    qword_1809904C8 = &ImmersiveIconsLogging::`vftable';
    qword_1809904E0 = (__int64)&`DelayAllocateTLSLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
