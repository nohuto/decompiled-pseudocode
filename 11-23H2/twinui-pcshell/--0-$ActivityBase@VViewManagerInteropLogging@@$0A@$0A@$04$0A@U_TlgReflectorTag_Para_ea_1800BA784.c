/*
 * XREFs of ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA784
 * Callers:
 *     ??$?0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x18008419C (--$-0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant.c)
 *     ??$?0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x180084284 (--$-0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$.c)
 *     ??$?0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800B4C10 (--$-0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U.c)
 *     ??$?0$$V@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800B4CEC (--$-0$$V@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@AEAA@U-$integra.c)
 *     ??$?0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180177D08 (--$-0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@.c)
 *     ??$?0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAH@Z @ 0x1804D4094 (--$-0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@w.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
