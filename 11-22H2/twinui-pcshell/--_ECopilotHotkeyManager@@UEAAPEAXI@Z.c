/*
 * XREFs of ??_ECopilotHotkeyManager@@UEAAPEAXI@Z @ 0x1806FD7F4
 * Callers:
 *     ??_ECopilotHotkeyManager@@WDA@EAAPEAXI@Z @ 0x1802ACCD0 (--_ECopilotHotkeyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$MeetAndChatManager_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18024F720 (--1-$MeetAndChatManager_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Ui.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261168 (--1-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 */

CopilotHotkeyManager *__fastcall CopilotHotkeyManager::`vector deleting destructor'(
        CopilotHotkeyManager *this,
        char a2)
{
  __int64 v4; // rdx

  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 57);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 56);
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)this + 54);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 384, v4);
  TargetAppExtensionDetails::~TargetAppExtensionDetails((CopilotHotkeyManager *)((char *)this + 192));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((CopilotHotkeyManager *)((char *)this + 144));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::~MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
