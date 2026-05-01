/*
 * XREFs of ??1?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180169864
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$11 @ 0x1801D1A62 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_ea_1801D1A62.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$4 @ 0x1801D1A95 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_ea_1801D1A95.c)
 *     _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::get_weak_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager__::_1_::dtor$1 @ 0x18021E135 (_winrt--impl--root_implements_winrt--immersive_shell_component_IObjectWithSite_ISer_ea_18021E135.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::dtor$1 @ 0x1802229DC (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--subscribe_to__ea_1802229DC.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::subscribe_to_services_::_1_::dtor$6 @ 0x180222A12 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--subscribe_to__ea_180222A12.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::publish_services_::_1_::dtor$0 @ 0x180222F1B (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--publish_servi_ea_180222F1B.c)
 *     _winrt::apartment_context::await_suspend_::_1_::dtor$0 @ 0x180351026 (_winrt--apartment_context--await_suspend_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$21 @ 0x1805CE75C (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1805CE75C.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$6 @ 0x1805CE78F (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1805CE78F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  return result;
}
