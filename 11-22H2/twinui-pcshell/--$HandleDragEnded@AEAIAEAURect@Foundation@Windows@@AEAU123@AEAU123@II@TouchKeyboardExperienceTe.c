/*
 * XREFs of ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180530664
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180532900 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEAURect@Foundation@Windows@@00II@Z @ 0x180532B1C (-HandleDragEnded_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEAURect@Foundation@Windows@@00I.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned int,unsigned int>(
        unsigned int *a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v10; // rcx
  TouchKeyboardExperienceTelemetryLogger *v11; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v10,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::HandleDragEnded_(v11, *a1, a2, a3, a4, *a5, *a6);
  }
}
