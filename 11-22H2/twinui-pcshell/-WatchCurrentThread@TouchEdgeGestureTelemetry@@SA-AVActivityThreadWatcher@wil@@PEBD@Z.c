/*
 * XREFs of ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800E852C (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x18016D428 (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x1800BA078 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800BA0BC (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 */

wil::ActivityThreadWatcher *__fastcall TouchEdgeGestureTelemetry::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        const char *a2)
{
  struct wil::details::IFailureCallback *v4; // rax

  v4 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  a1,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, v4, a2);
  return a1;
}
