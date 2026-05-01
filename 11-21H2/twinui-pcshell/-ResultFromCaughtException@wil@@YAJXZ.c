/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$82 @ 0x1801BA0C0 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801BA0C0.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$101 @ 0x1801C783C (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$101.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$6 @ 0x1801C9286 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$10 @ 0x18021D5B7 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$10.c)
 *     _wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____::_1_::catch$1 @ 0x180220D16 (_wil--ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____--_1_--catch$1.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180317C38 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$84 @ 0x1803E2146 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$84.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$88 @ 0x1803ECCAB (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$88.c)
 *     _wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____::_1_::catch$3 @ 0x180458184 (_wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____--_1_--catch$3.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1804E92E3 (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91____::_1_::catch$1 @ 0x1804EA357 (_wil--ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____::_1_::catch$1 @ 0x1804FA64F (_wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____--_1_--catch$1.c)
 *     _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch$99 @ 0x180572430 (_ApplicationContainerActivation--ActivateApplicationInContainer_--_1_--catch$99.c)
 *     _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::catch$4 @ 0x1805726E1 (_ApplicationContainerActivation--ActivateRemotePathInContainer_--_1_--catch$4.c)
 *     _ApplicationContainerActivation::ModifyUnpackagedAppInContainer_::_1_::catch$5 @ 0x180573249 (_ApplicationContainerActivation--ModifyUnpackagedAppInContainer_--_1_--catch$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    wil::details::in1diag3::FailFast_Hr(retaddr, 2674LL, (__int64)"wil", (const char *)0x8007023ELL, v2);
  }
  return result;
}
