/*
 * XREFs of ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18016B688
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x18016B540 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x18016B6EC (-get@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVAp.c)
 *     ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x18016B780 (-AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        unsigned int *a1,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  wil::TraceLoggingProvider *v6; // rax
  __int64 v7; // rcx
  ApplicationViewManagement::ApplicationViewTelemetry *v8; // rcx

  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
                                      a1,
                                      _lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v6, 0) )
  {
    wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
      v7,
      _lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(v8, *a1, *a2, *a3);
  }
}
