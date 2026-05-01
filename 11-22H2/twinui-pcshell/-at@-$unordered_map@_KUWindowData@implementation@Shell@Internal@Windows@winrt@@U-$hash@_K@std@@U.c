/*
 * XREFs of ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800332C8 (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1801537D0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1802E79E0 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x180637110 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180637960 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801538A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
        unsigned __int64 a1,
        const unsigned __int8 *a2)
{
  unsigned __int64 appended; // rax
  __int64 v3; // rdx
  __int64 v4; // r11
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  appended = std::_Fnv1a_append_bytes(a1, a2, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Find_last<unsigned __int64>(
    v4,
    v6,
    v3,
    appended);
  if ( !v7 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1803368FALL);
  }
  return v7 + 24;
}
