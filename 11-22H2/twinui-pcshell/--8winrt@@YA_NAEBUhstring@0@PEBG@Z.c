/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424
 * Callers:
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1800AFF98 (-InitUserConfig_B@Theming@@YAXXZ.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800B2628 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800D5890 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     GetStoredEnterprisePinGeneration @ 0x180287CFC (GetStoredEnterprisePinGeneration.c)
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x18046E12C (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x180500544 (_anonymous_namespace_--ContextToLauncherDismissMethod.c)
 *     _anonymous_namespace_::ContextToLauncherShowMethod @ 0x1805005A4 (_anonymous_namespace_--ContextToLauncherShowMethod.c)
 *     _anonymous_namespace_::ContextToSearchShowArgs @ 0x1805005E8 (_anonymous_namespace_--ContextToSearchShowArgs.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     _lambda_d81cebd908bc953c0c32f92e43af8435_::operator() @ 0x1806AB768 (_lambda_d81cebd908bc953c0c32f92e43af8435_--operator().c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x1806F5924 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x18072B4F0 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

bool __fastcall winrt::operator==(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __m128i *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  v4 = (__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a1, v8, a3, v3);
  return std::_Traits_equal<std::char_traits<unsigned short>>(
           v4->m128i_i64[0],
           _mm_srli_si128(*v4, 8).m128i_i64[0],
           v6,
           v5);
}
