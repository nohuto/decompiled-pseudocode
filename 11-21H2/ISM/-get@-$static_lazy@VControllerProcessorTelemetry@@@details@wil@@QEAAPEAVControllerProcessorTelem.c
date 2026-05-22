/*
 * XREFs of ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x18017BA24
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18017B060 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017B664 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017B708 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x1800BAD30 (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<ControllerProcessorTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  LPINIT_ONCE v4; // [rsp+20h] [rbp-18h] BYREF
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
    v7 = &qword_180242DA8;
    qword_180242DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242DC0 = (__int64)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v7;
}
