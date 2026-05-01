/*
 * XREFs of ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1803EE630
 * Callers:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x1803EC49C (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x1803EDFD8 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z.c)
 */

void FullScreenPositionerLogging::TraceLoggingInfo(const char *a1, ...)
{
  WINBOOL fPending; // [rsp+20h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v3; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+38h] [rbp-8h]
  va_list va; // [rsp+68h] [rbp+28h] BYREF

  va_start(va, a1);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`FullScreenPositionerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v3 = &`FullScreenPositionerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098F488;
    qword_18098F488 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<FullScreenPositionerLogging>::Completer::~Completer((__int64)&v3);
  }
  wil::TraceLoggingProvider::ReportTraceLoggingMessage((wil::TraceLoggingProvider *)Context, a1, va);
}
