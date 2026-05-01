/*
 * XREFs of ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x18016B6EC
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18016B688 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAA@XZ @ 0x1801C5EB0 (--1Completer@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QE.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v6,
         (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_18098F3C8;
    qword_18098F3C8 = (__int64)&IamTraceLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}
