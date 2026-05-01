/*
 * XREFs of ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1806FD730
 * Callers:
 *     _wil::details::module_count_wrapper_CopilotHotkeyManager_::module_count_wrapper_CopilotHotkeyManager__::_1_::dtor$0 @ 0x1806FD44D (_wil--details--module_count_wrapper_CopilotHotkeyManager_--module_count_wrapper_CopilotHotkeyMan.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261168 (--1-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::~CopilotHotkeyManager(CopilotHotkeyManager *this)
{
  __int64 v2; // rdx

  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 57);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 56);
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)this + 54);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 384, v2);
  TargetAppExtensionDetails::~TargetAppExtensionDetails((CopilotHotkeyManager *)((char *)this + 192));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((CopilotHotkeyManager *)((char *)this + 144));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::~MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>((__int64)this);
}
