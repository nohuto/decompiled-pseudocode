/*
 * XREFs of ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802DC7D6
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1802DCF84 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x180525E40 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x1800BA078 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x18014AD18 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 */

wil::ActivityThreadWatcher *__fastcall TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        const char *a2)
{
  __int64 *v4; // rax

  v4 = wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, (struct wil::details::IFailureCallback *)v4, a2);
  return a1;
}
