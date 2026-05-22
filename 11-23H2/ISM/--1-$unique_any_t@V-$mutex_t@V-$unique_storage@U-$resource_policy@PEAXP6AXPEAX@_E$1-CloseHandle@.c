/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800556EC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180032B64 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180032C9C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180032EE8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180058CE4 (-InstanceThreadProc@SessionMonitor@@AEAAKXZ.c)
 *     _wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_noexcept_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy_::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_noexcept_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy__::_1_::dtor$0 @ 0x18006C26F (_wil--event_t_wil--details--unique_storage_wil--details--resource_policy_void___void_(__cdecl_)(.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$4 @ 0x18006C2D9 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$4.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$5 @ 0x18006C2EF (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$5.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$0 @ 0x18006C64F (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Acquire_--_1_--d.c)
 *     _dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x18006FF10 (_dynamic_atexit_destructor_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state___void_(__cdecl_)(wil::details::event_watcher_state__)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state___wil::details::event_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_::_1_::dtor$0 @ 0x1800D2B8F (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details--e.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state___void_(__cdecl_)(wil::details::event_watcher_state__)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state___wil::details::event_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_take_hevent_ownership_::_1_::dtor$0 @ 0x1800D2CFC (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wi_ea_1800D2CFC.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$2 @ 0x1800E1D16 (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$2.c)
 *     _MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor$4 @ 0x180178AD2 (_MPCManagerClientFactory--CreateOnDedicatedThread_--_1_--dtor$4.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
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
