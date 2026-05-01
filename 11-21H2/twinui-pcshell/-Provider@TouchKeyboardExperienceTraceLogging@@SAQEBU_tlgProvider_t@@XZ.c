/*
 * XREFs of ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801799E4
 * Callers:
 *     ??$ApplicationStateChanged@AEAPEBGAEAW4PLM_STATE_CHANGE@@AEAW4PLM_APPLICATION_STATE@@_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAW4PLM_STATE_CHANGE@@AEAW4PLM_APPLICATION_STATE@@$$QEA_N@Z @ 0x1801AE584 (--$ApplicationStateChanged@AEAPEBGAEAW4PLM_STATE_CHANGE@@AEAW4PLM_APPLICATION_STATE@@_N@TouchKey.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x1801B1280 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801B1380 (-Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1801B15D8 (-Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTraceLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                          a1,
                                          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
}
