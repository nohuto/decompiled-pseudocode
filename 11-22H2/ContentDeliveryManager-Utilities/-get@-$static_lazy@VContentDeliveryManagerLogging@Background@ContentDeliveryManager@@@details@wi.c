/*
 * XREFs of ?get@?$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerLogging@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x18004BA28
 * Callers:
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004A8E0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 * Callees:
 *     atexit @ 0x180022964 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18002C2F8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper;
    v9 = &qword_180196158;
    qword_180196158 = (__int64)&ContentDeliveryManager::Background::ContentDeliveryManagerLogging::`vftable';
    qword_180196170 = (__int64)&`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
