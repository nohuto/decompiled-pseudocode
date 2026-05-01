/*
 * XREFs of ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x18060A198
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@VirtualDesktopTelemetry@VirtualDesktop@@SA_NE_K@Z @ 0x18060FBAC (-IsEnabled@VirtualDesktopTelemetry@VirtualDesktop@@SA_NE_K@Z.c)
 *     ?VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJJ@Z @ 0x180612A1C (-VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJ.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed<long &,unsigned long &,long,long>(
        int *a1,
        unsigned int *a2,
        int *a3,
        int *a4)
{
  VirtualDesktop::VirtualDesktopTelemetry *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp-10h]

  if ( VirtualDesktop::VirtualDesktopTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v11 = &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098FDE0;
        qword_18098FDE0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_5fd636ce9f394364b2b3b625dee58ba6_::_lambda_invoker_cdecl_);
        v12 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v11);
      }
    }
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed_(v8, *a1, *a2, *a3, *a4);
  }
}
