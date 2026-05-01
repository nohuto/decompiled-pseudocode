/*
 * XREFs of ??1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800CC0F4
 * Callers:
 *     ??1?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CC644 (--1-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager____::_1_::dtor$1 @ 0x18021C0A4 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_18021C0A4.c)
 *     ??_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805C0C88 (--_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VListenerWindow@@@winrt@@AEAAXXZ @ 0x1800CC1D4 (-unconditional_release_ref@-$com_ptr@VListenerWindow@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1800F445C (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1800F44F0 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1800F44F0.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::~MeetAndChatManager(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  v5 = (__int64 *)((char *)this + 272);
  if ( *v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v5);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (char *)this + 256,
    a2,
    a3,
    a4);
  if ( *((_QWORD *)this + 31) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 248));
  if ( *((_QWORD *)this + 30) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 240));
  if ( *((_QWORD *)this + 27) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 216));
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 25);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 23);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 22);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 20);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((char *)this + 144);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((char *)this + 128);
  if ( *((_QWORD *)this + 15) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 120));
  if ( *((_QWORD *)this + 13) )
    winrt::com_ptr<ListenerWindow>::unconditional_release_ref();
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 16));
}
