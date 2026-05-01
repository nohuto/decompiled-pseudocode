/*
 * XREFs of ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1805092FC
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUtagRECT@@1@Z @ 0x18051C22C (-WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUt.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
        const unsigned __int16 **a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rcx
  TouchKeyboardExperienceTelemetryLogger *v7; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v6,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor_(v7, *a1, a2, a3);
  }
}
