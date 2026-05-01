/*
 * XREFs of ??$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect@Foundation@Windows@@@Z @ 0x1802DA056
 * Callers:
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180515F74 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z @ 0x180511884 (-HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HostedPosSet<Windows::Foundation::Rect>(__int128 *a1)
{
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1);
  if ( result )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v3,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v5 = *a1;
    return TouchKeyboardExperienceTelemetryLogger::HostedPosSet_(v4, &v5);
  }
  return result;
}
