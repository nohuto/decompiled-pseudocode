/*
 * XREFs of ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18014AC20
 * Callers:
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x18014AC44 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ??$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect@Foundation@Windows@@@Z @ 0x1802DA056 (--$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect.c)
 *     ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x180508E90 (--$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXA.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1805092FC (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18051DE08 (--$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4C.c)
 *     ??$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAURect@Foundation@Windows@@11@Z @ 0x18051E36C (--$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180530664 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N110@Z @ 0x1805306E4 (--$HandleInputPaneTryShow@PEBDPEBDAEAU-$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyb.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU?$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0$$QEA_N$$QEAH1AEA_NAEAU?$atomic@_N@std@@40@Z @ 0x18053079C (--$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU-$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperi.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180530FC8 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
                                      a1,
                                      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
