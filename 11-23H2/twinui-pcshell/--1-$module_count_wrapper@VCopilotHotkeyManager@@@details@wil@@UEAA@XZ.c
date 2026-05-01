/*
 * XREFs of ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x1806FD638
 * Callers:
 *     ??_G?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z @ 0x1806FD7B8 (--_G-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261168 (--1-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::module_count_wrapper<CopilotHotkeyManager>::~module_count_wrapper<CopilotHotkeyManager>(
        __int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)a1 = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *(_QWORD *)(a1 + 8) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *(_QWORD *)(a1 + 16) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *(_QWORD *)(a1 + 24) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *(_QWORD *)(a1 + 32) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *(_QWORD *)(a1 + 48) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *(_QWORD *)(a1 + 104) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a1 + 456));
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a1 + 448));
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 432));
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a1 + 384), v2);
  TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)(a1 + 192));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 160));
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 144));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 136));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 128));
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::~MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>(a1);
}
