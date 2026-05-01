/*
 * XREFs of ?Instance@VirtualDesktopTelemetry@VirtualDesktop@@KAPEAV12@XZ @ 0x1801B711C
 * Callers:
 *     ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x1801B6478 (--$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDeskt.c)
 * Callees:
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ @ 0x1801B6874 (--1Completer@-$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ.c)
 */

struct VirtualDesktop::VirtualDesktopTelemetry *VirtualDesktop::VirtualDesktopTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v1 = &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1807B5610;
    qword_1807B5610 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_5fd636ce9f394364b2b3b625dee58ba6_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<VirtualDesktop::VirtualDesktopTelemetry>::Completer::~Completer((__int64)&v1);
  }
  return (struct VirtualDesktop::VirtualDesktopTelemetry *)Context;
}
