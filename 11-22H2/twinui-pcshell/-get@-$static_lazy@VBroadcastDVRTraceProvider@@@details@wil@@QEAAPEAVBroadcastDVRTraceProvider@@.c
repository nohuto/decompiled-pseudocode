/*
 * XREFs of ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x180112474
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x1803D7480 (-GameExit@BroadcastDVRTraceProvider@@SAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___ @ 0x1803DDA10 (wil--details--ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___--_ScopeExitFn__lambda_d87a.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<BroadcastDVRTraceProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`BroadcastDVRTraceProvider::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`BroadcastDVRTraceProvider::Instance'::`2'::wrapper;
    v9 = &qword_18098DE88;
    qword_18098DE88 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DEA0 = (__int64)&`BroadcastDVRTraceProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
