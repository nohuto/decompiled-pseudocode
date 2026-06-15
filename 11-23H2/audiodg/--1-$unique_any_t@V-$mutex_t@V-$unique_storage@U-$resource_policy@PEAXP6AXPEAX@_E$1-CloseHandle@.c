/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x14004B444
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$1 @ 0x1400272CF (_CAudioDGModule--CAudioDGModule_--_1_--dtor$1.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$2 @ 0x1400272DF (_CAudioDGModule--CAudioDGModule_--_1_--dtor$2.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$4 @ 0x140027305 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$4.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$6 @ 0x140034507 (_CAudioPump--CAudioPump_--_1_--dtor$6.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$7 @ 0x140034520 (_CAudioPump--CAudioPump_--_1_--dtor$7.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$8 @ 0x140034539 (_CAudioPump--CAudioPump_--_1_--dtor$8.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$10 @ 0x14003456B (_CAudioPump--CAudioPump_--_1_--dtor$10.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$13 @ 0x1400345B6 (_CAudioPump--CAudioPump_--_1_--dtor$13.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$15 @ 0x1400345E8 (_CAudioPump--CAudioPump_--_1_--dtor$15.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14004B76C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::ProcessLocalData_::Acquire_::_1_::dtor$0 @ 0x14004B8F1 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--ProcessLocalData_--Acquire_--_1_--d.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14004E708 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14005F110 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140081E18 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$0 @ 0x140081F9D (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Acquire_--_1_--d.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140037E2E (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
