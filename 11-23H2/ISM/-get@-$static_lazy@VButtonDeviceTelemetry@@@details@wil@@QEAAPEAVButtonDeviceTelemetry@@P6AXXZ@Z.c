/*
 * XREFs of ?get@?$static_lazy@VButtonDeviceTelemetry@@@details@wil@@QEAAPEAVButtonDeviceTelemetry@@P6AXXZ@Z @ 0x18005972C
 * Callers:
 *     ??$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z @ 0x18005966C (--$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ButtonDeviceTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`ButtonDeviceTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`ButtonDeviceTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_180268E28;
    qword_180268E28 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268E40 = (__int64)&`ButtonDeviceTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  return v7;
}
