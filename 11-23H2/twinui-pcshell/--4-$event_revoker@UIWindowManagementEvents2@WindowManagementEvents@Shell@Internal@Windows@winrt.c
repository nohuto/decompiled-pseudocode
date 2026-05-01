/*
 * XREFs of ??4?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18012B0A4
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F7390 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z @ 0x18012AEB0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z.c)
 * Callees:
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x18012B0FC (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_18012B0FC.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x18012B128 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 */

__int64 __fastcall __4__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v7 = a2[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(&v6, a1);
  v4 = v7;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(&v6);
  return a1;
}
