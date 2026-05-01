/*
 * XREFs of ?IsEnabled@VirtualDesktopTelemetry@VirtualDesktop@@SA_NE_K@Z @ 0x18060FBAC
 * Callers:
 *     ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x18060A198 (--$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDeskt.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall VirtualDesktop::VirtualDesktopTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098FDE0;
    qword_18098FDE0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_5fd636ce9f394364b2b3b625dee58ba6_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
