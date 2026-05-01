/*
 * XREFs of ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0
 * Callers:
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18006EE10 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18006F8C0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800C3894 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     _lambda_d3c491b51a7e8d1962a232c20ca80fd8_::operator() @ 0x1800C5380 (_lambda_d3c491b51a7e8d1962a232c20ca80fd8_--operator().c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1800C5434 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C8B80 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800DC650 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DD660 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DEF30 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E01B0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800E07D4 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800E0B0C (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180110060 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180110380 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x180155168 (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18017FD40 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$10 @ 0x18021D5B7 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$10.c)
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1803F10B8 (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803F1710 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1803F8950 (-v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$12 @ 0x1804036D2 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$12.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1805E8C94 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x1805E8D9C (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x1805E8FA4 (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x1805E90AC (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x1805E92D0 (-get@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@.c)
 */

void __fastcall CCriticalFailureHandler::HandleFailure(
        CCriticalFailureHandler *this,
        int *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  bool v7; // di
  __int64 v8; // rcx
  wil::TraceLoggingProvider *v9; // rax
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureTelemetry *v11; // rcx
  CCriticalFailureHandler *v12; // rcx

  v7 = CCriticalFailureHandler::_MatchesPreviousFailure(this, *a2, a3, a4, 0LL, 0LL);
  v9 = (wil::TraceLoggingProvider *)wil::details::static_lazy<CCriticalFailureTelemetry>::get(
                                      v8,
                                      _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v9, 0) )
  {
    wil::details::static_lazy<CCriticalFailureTelemetry>::get(
      v10,
      _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
    CCriticalFailureTelemetry::ReportFailure_(v11, *a2, a3, a4, 0LL, 0LL, v7);
  }
  if ( !v7 || IsDebuggerPresent() )
  {
    CCriticalFailureHandler::_RecordFailure(v10, *a2, a3, a4, 0LL, 0LL);
    CCriticalFailureHandler::_RaiseFailFastException(v12, *a2, 0LL, 0LL);
  }
  *a2 = -2144862209;
}
