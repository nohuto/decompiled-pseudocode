/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F6E70 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1801198E8 (-InitUserConfig_B@Theming@@YAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1 @ 0x1801A7B20 (MiniSearchExperienceManager--LauncherShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B3550 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18044AB38 (_anonymous_namespace_--ContextToLauncherDismissMethod.c)
 *     _anonymous_namespace_::ContextToLauncherShowMethod @ 0x18044AB78 (_anonymous_namespace_--ContextToLauncherShowMethod.c)
 *     _anonymous_namespace_::ContextToSearchShowArgs @ 0x18044ABB0 (_anonymous_namespace_--ContextToSearchShowArgs.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180126F80 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

__int64 __fastcall winrt::operator==(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __m128i *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  v3 = (__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a1, v7);
  return std::_Traits_equal<std::char_traits<unsigned short>>(
           v3->m128i_i64[0],
           _mm_srli_si128(*v3, 8).m128i_u64[0],
           v5,
           v4);
}
