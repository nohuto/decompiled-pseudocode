/*
 * XREFs of ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x180508E90
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEAURect@Foundation@Windows@@@Z @ 0x1805163C0 (-SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEAURect@Foundation@Windows@@@.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect<Windows::Foundation::Rect &>(
        struct Windows::Foundation::Rect *a1)
{
  __int64 v2; // rcx
  TouchKeyboardExperienceTelemetryLogger *v3; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v2,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect_(v3, a1);
  }
}
