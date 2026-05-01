/*
 * XREFs of ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C
 * Callers:
 *     ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x18005A978 (-OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z.c)
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG$$QEAI$$QEA_N@Z @ 0x180204CC0 (--$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG$$QEAPEBG11$$QEA_NAEA_N@Z @ 0x180204D6C (--$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SA.c)
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x180204E6C (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 *     ??$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0$$QEAI$$QEA_N@Z @ 0x180204F6C (--$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$.c)
 *     ??$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA_N@Z @ 0x180205CC4 (--$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator().c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NK0@Z @ 0x18020BB60 (-Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NK0@Z.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x180517144 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1805283C0 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                             a1,
                                             _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                         + 8);
}
