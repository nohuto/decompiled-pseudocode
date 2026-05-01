/*
 * XREFs of ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1800223E0
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180022280 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180394634 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18039D4EC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180067BF8 (--1Completer@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<CAppManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`CAppManagerTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_18098DA58;
    qword_18098DA58 = (__int64)&IamTraceLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<CAppManagerTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}
