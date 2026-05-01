/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$11 @ 0x1801CF776 (_winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--Initialize_ea_1801CF776.c)
 *     _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::catch$28 @ 0x1801DF7CA (_CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1_--_1_--catch$28.c)
 *     _wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e____::_1_::catch$1 @ 0x1802113CB (_wil--ResultFromException__lambda_efb835cf1617f50ad697dabca457218e____--_1_--catch$1.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$82 @ 0x180219DAC (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180219DAC.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$61 @ 0x18023A294 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$61.c)
 *     __lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator()_::_1_::catch$2 @ 0x18024FA98 (__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_--operator()_--_1_--catch$2.c)
 *     __lambda_49390bb1d2cae92a58be327124002af0_::operator()_::_1_::catch$4 @ 0x18024FCF0 (__lambda_49390bb1d2cae92a58be327124002af0_--operator()_--_1_--catch$4.c)
 *     __lambda_6f980fbbc6752bcaca442c74782693a9_::operator()_::_1_::catch$2 @ 0x18024FFE9 (__lambda_6f980fbbc6752bcaca442c74782693a9_--operator()_--_1_--catch$2.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$3 @ 0x1802880F3 (_PersistEnterprisePinDataToRegistry_--_1_--catch$3.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$15 @ 0x18028875A (_ShouldAddEnterprisePinToOutput_--_1_--catch$15.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$30 @ 0x1802B85F8 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$30.c)
 *     _wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____::_1_::catch$1 @ 0x1802C26B9 (_wil--ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1802E5D83 (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1803E6938 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$77 @ 0x1804C27CE (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$77.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$82 @ 0x1804D0AD7 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$82.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$4 @ 0x1804DA9BE (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$4.c)
 *     _wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____::_1_::catch$3 @ 0x180508DDD (_wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____--_1_--catch$3.c)
 *     _wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____::_1_::catch$1 @ 0x1805B2437 (_wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf____--_1_--catch$1.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch$99 @ 0x180630269 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--catch$99.c)
 *     _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::catch$4 @ 0x18063052D (_ApplicationContainerActivation--ActivateRemotePathInContainer_--_1_--catch$4.c)
 *     _ApplicationContainerActivation::ModifyUnpackagedAppInContainer_::_1_::catch$5 @ 0x1806310F9 (_ApplicationContainerActivation--ModifyUnpackagedAppInContainer_--_1_--catch$5.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$62 @ 0x180654BFB (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$62.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$9 @ 0x18069764D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-28h]
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = *(unsigned int *)g_pfnResultFromCaughtExceptionInternal(v3, 0LL, 0LL, &v5), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xA7F, (int)"wil", (const char *)0x8007023ELL, v2);
  }
  return result;
}
