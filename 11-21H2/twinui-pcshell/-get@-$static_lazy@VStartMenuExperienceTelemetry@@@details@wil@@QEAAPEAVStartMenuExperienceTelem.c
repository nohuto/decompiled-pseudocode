/*
 * XREFs of ?get@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelemetry@@P6AXXZ@Z @ 0x180150B1C
 * Callers:
 *     _lambda_c11c54da2889639c00e05aec0ffbb75c_::operator() @ 0x1801971BC (_lambda_c11c54da2889639c00e05aec0ffbb75c_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ @ 0x180150BB0 (--1Completer@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<StartMenuExperienceTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`StartMenuExperienceTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`StartMenuExperienceTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_1807B4EA0;
    qword_1807B4EA0 = (__int64)&IamTraceLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<StartMenuExperienceTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}
