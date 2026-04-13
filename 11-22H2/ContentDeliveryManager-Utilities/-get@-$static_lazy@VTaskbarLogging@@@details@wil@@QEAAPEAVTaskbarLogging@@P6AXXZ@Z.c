/*
 * XREFs of ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x180043DF0
 * Callers:
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002C338 (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x180041078 (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     atexit @ 0x180022964 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18002C2F8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskbarLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9) && (_DWORD)v8 )
  {
    v6 = &`TaskbarLogging::Instance'::`2'::wrapper;
    v9 = &qword_180196470;
    qword_180196470 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_180196488 = (__int64)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
