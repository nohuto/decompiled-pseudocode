/*
 * XREFs of ??1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180129368
 * Callers:
 *     ??1?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180128E78 (--1-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::MeetAndChatManager____::_1_::dtor$1 @ 0x1802B4605 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1802B4605.c)
 *     ??_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806B0C6C (--_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180094E18 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180094EB8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094EB8.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18012944C (-unconditional_release_ref@-$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::~MeetAndChatManager(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        void *a2)
{
  __int64 *v3; // rcx
  wil::details *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = (__int64 *)((char *)this + 288);
  if ( *v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
  v4 = (wil::details *)*((_QWORD *)this + 34);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  if ( *((_QWORD *)this + 33) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 264));
  if ( *((_QWORD *)this + 32) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 256));
  if ( *((_QWORD *)this + 29) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 232));
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 25);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 18);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 16);
  if ( *((_QWORD *)this + 15) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 120));
  if ( *((_QWORD *)this + 13) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::unconditional_release_ref();
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 16));
}
