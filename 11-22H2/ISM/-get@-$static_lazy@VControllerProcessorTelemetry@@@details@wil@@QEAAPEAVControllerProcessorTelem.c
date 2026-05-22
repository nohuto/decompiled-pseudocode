/*
 * XREFs of ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x1801A8D64
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x1801A83A0 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801A89A0 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801A8A44 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001B888 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ControllerProcessorTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ControllerProcessorTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`ControllerProcessorTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_180278298;
    qword_180278298 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1802782B0 = (__int64)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  return v7;
}
