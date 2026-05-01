/*
 * XREFs of ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805A84F0
 * Callers:
 *     ??$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRect@Geometry@@@Z @ 0x1805A81A0 (--$WindowMigrationAnswer@_KAEBUCRect@Geometry@@@SnapMigrationHandlerTelemetry@@SAX$$QEA_KAEBUCRe.c)
 *     ??$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTelemetry@@SAX$$QEA_K$$QEAIAEBUCRect@Geometry@@2AEBI32@Z @ 0x1805A8250 (--$WindowMigrationEvent@_KIAEBUCRect@Geometry@@AEBU12@AEBIAEBIAEBU12@@SnapMigrationHandlerTeleme.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

char __fastcall SnapMigrationHandlerTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B5718;
    qword_1807B5718 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
