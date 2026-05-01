/*
 * XREFs of ?revoke_impl@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@3@@Z @ 0x1800A9E08
 * Callers:
 *     ?unsubscribe_from_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A9C20 (-unsubscribe_from_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x1800AA0AC (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1800AA0AC.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFI@AA @ 0x18020E920 (--_9type@-$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Wind_ea_18020E920.c)
 */

void __fastcall _revoke_impl___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__AEAAXUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_3__Z(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  if ( *(_QWORD *)a2 )
  {
     winrt::impl::abi<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,void>::type::`vcall'{88,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
    if ( *(_QWORD *)a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  }
}
