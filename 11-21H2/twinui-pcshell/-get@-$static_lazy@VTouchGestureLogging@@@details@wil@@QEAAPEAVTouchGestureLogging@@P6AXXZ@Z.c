/*
 * XREFs of ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x1800394E0
 * Callers:
 *     ?ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ @ 0x1800393F0 (-ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ.c)
 *     ??$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x180039458 (--$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
 *     _lambda_2fbe770fc9512a1546b07b3150b12f28_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058C90C (_lambda_2fbe770fc9512a1546b07b3150b12f28_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     _lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CB98 (_lambda_645383672cc8ef3abc3762ef416a0823_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     ?PointersDown@TouchGestureTelemetry@@SAXXZ @ 0x18058F130 (-PointersDown@TouchGestureTelemetry@@SAXXZ.c)
 *     ?PointersUp@TouchGestureTelemetry@@SAXXZ @ 0x18058F404 (-PointersUp@TouchGestureTelemetry@@SAXXZ.c)
 *     ?TouchSwipeFinished@TouchGestureTelemetry@@SAXXZ @ 0x18058FCD4 (-TouchSwipeFinished@TouchGestureTelemetry@@SAXXZ.c)
 *     ?TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ @ 0x18058FD3C (-TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TouchGestureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`TouchGestureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`TouchGestureLogging::Instance'::`2'::wrapper;
    v9 = &qword_1807B46D8;
    qword_1807B46D8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B46F0 = (__int64)&`TouchGestureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
