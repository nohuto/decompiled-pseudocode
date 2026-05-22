/*
 * XREFs of ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800A2800
 * Callers:
 *     ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z @ 0x18005C614 (-EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z.c)
 *     ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x18005C70C (-EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z.c)
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXKK_NW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x18005C794 (-EvaluatePosture@Postures@InputTraceLogging@@SAXKK_NW4DevicePostureMode@Input@Internal@UI@Window.c)
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x180061C94 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 *     ?IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z @ 0x180064298 (-IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall InputTraceLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                                                      a1,
                                                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                                        + 1);
}
