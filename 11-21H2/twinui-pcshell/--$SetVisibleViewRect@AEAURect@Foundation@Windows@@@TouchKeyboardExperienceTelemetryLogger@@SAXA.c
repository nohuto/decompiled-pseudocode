/*
 * XREFs of ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x1804582CC
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180460E00 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEAURect@Foundation@Windows@@@Z @ 0x180464B5C (-SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEAURect@Foundation@Windows@@@.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect<Windows::Foundation::Rect &>(
        struct Windows::Foundation::Rect *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  TouchKeyboardExperienceTelemetryLogger *v4; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, a2) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v3,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect_(v4, a1);
  }
}
