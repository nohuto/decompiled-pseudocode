/*
 * XREFs of ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74
 * Callers:
 *     ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18019AB28 (-UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180403670 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180511124 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18051BD7C (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18051D840 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1806BF9C0 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4D84 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1807520F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180752350 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<unsigned short,unsigned int>(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
