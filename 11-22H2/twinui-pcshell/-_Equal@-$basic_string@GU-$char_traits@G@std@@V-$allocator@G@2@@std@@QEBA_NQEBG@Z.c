/*
 * XREFs of ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18009E370 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18009E448 (_anonymous_namespace_--IsAppInBlackList.c)
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1801ED7F8 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180534DC0 (-ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807146CC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 *     ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x180724548 (-evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18008FF20 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall std::wstring::_Equal(char *a1, char *a2)
{
  __int64 v2; // rax
  char v3; // r11
  __int64 v4; // r8

  v2 = -1LL;
  v3 = 0;
  do
    ++v2;
  while ( *(_WORD *)&a2[2 * v2] );
  v4 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  if ( v4 == v2 && !(unsigned int)std::_WChar_traits<unsigned short>::compare(a1, a2, v4) )
    return 1;
  return v3;
}
