/*
 * XREFs of ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N110@Z @ 0x1805306E4
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBD0_NH11110@Z @ 0x18053307C (-HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBD0_NH11110@Z.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,std::atomic<bool> &,int,std::atomic<bool> &,bool &,std::atomic<bool> &,std::atomic<bool> &,char const *>(
        const char **a1,
        const char **a2,
        bool *a3,
        int *a4,
        bool *a5,
        bool *a6,
        bool *a7,
        bool *a8,
        const char **a9)
{
  __int64 v13; // rcx
  TouchKeyboardExperienceTelemetryLogger *v14; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v13,
      (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    LOBYTE(v14) = *a5;
    TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow_(v14, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
  }
}
