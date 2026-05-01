/*
 * XREFs of ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18046BD78
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180460E00 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEBGAEAURect@Foundation@6@22@Z @ 0x18046FEC8 (-CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcc.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
        unsigned int *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char result; // al
  __int64 v11; // rcx
  __int64 v12; // rcx

  result = TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1);
  if ( result )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v11,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    return TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged_(v12, *a1, *a2, *a3, a4, a5, a6);
  }
  return result;
}
