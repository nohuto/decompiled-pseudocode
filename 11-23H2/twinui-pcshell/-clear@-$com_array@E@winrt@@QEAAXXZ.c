/*
 * XREFs of ?clear@?$com_array@E@winrt@@QEAAXXZ @ 0x180274E34
 * Callers:
 *     ??1?$com_array@E@winrt@@QEAA@XZ @ 0x180260E94 (--1-$com_array@E@winrt@@QEAA@XZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5AC4 (-NonDelegatingGetIids@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804F6C24 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806849AC (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<unsigned char>::clear(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree_0(v2);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
