/*
 * XREFs of ??1TaskViewHost@@UEAA@XZ @ 0x18000F848
 * Callers:
 *     ??_ETaskViewHost@@UEAAPEAXI@Z @ 0x1800440F0 (--_ETaskViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x18000FA10 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180011278 (--1-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ??1?$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180011368 (--1-$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winr.c)
 *     ??1?$event_revoker@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180011458 (--1-$event_revoker@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Wi.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180018180 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18003F498 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease @ 0x1800442D8 (Microsoft--WRL--ComPtr__anonymous_namespace_--TabletModeChangeRegistration_--InternalRelease.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TaskViewHost::~TaskViewHost(TaskViewHost *this)
{
  std::_Ref_count_base *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 92);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  __1__event_revoker_UIVirtualDesktopPerMonitorCollection_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopPerMonitorCollection_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ((char *)this + 696);
  __1__event_revoker_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_impl_winrt__QEAA_XZ((char *)this + 680);
  __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ((char *)this + 664);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((TaskViewHost *)((char *)this + 344));
  v3 = (void *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(v3);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 38),
      (*((_QWORD *)this + 40) - *((_QWORD *)this + 38)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister((char *)this + 288);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((char *)this + 296);
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease((char *)this + 280);
  }
  Microsoft::WRL::ComPtr__anonymous_namespace_::TabletModeChangeRegistration_::InternalRelease((char *)this + 280);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 32);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 31);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 29);
  if ( *((_QWORD *)this + 28) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 224));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 26);
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *((_QWORD *)this + 24) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 192));
  if ( *((_QWORD *)this + 23) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 184));
  if ( *((_QWORD *)this + 22) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 176));
  if ( *((_QWORD *)this + 21) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 168));
  if ( *((_QWORD *)this + 20) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 160));
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TaskViewHost *)((char *)this + 152));
  *((_DWORD *)this + 37) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
