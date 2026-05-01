/*
 * XREFs of ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x1801B6478
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Instance@VirtualDesktopTelemetry@VirtualDesktop@@KAPEAV12@XZ @ 0x1801B711C (-Instance@VirtualDesktopTelemetry@VirtualDesktop@@KAPEAV12@XZ.c)
 *     ?VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJJ@Z @ 0x1801B7270 (-VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJ.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed<long &,unsigned long &,long,long>(
        int *a1,
        unsigned int *a2,
        int *a3,
        int *a4)
{
  wil::TraceLoggingProvider *v8; // rax
  VirtualDesktop::VirtualDesktopTelemetry *v9; // rcx

  v8 = VirtualDesktop::VirtualDesktopTelemetry::Instance();
  if ( wil::TraceLoggingProvider::IsEnabled_(v8, 0) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::Instance();
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed_(v9, *a1, *a2, *a3, *a4);
  }
}
