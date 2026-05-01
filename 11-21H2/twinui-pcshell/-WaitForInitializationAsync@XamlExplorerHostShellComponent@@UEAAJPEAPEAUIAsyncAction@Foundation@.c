/*
 * XREFs of ?WaitForInitializationAsync@XamlExplorerHostShellComponent@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@ABI@@@Z @ 0x18005FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?WaitForInitializationAsyncHelper@XamlExplorerHostShellComponent@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@XZ @ 0x1801A966C (-WaitForInitializationAsyncHelper@XamlExplorerHostShellComponent@@AEAA-AUIAsyncAction@Foundation.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::WaitForInitializationAsync(
        XamlExplorerHostShellComponent *this,
        struct ABI::Windows::Foundation::IAsyncAction **a2,
        __int64 a3)
{
  struct ABI::Windows::Foundation::IAsyncAction **v3; // rbx
  struct ABI::Windows::Foundation::IAsyncAction **v5; // rax
  struct ABI::Windows::Foundation::IAsyncAction *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    a2,
    a3);
  *v3 = 0LL;
  v5 = (struct ABI::Windows::Foundation::IAsyncAction **)XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper(
                                                           (char *)this - 152,
                                                           &v8);
  v6 = *v5;
  *v5 = 0LL;
  *v3 = v6;
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return 0LL;
}
