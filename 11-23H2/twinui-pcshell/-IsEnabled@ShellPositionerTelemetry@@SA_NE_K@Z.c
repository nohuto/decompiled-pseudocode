/*
 * XREFs of ?IsEnabled@ShellPositionerTelemetry@@SA_NE_K@Z @ 0x180017348
 * Callers:
 *     ??$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@Z @ 0x180017298 (--$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPosition.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

bool __fastcall ShellPositionerTelemetry::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a1;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6)
    && v5 )
  {
    v3 = &`ShellPositionerTelemetry::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_18098EA48;
    qword_18098EA48 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer(&v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v6, 0, v1);
}
