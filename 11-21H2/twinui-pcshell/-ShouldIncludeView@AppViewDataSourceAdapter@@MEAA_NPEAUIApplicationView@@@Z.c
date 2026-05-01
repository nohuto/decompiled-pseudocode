/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18004FE80
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18004FB10 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x18004FEF0 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x18004FF34 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016A754 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct IApplicationView *v6; // rdx
  int v7; // eax
  HWND WindowForView; // rax

  if ( !HolographicViewHelpers::IsApplicationViewHolographic(a2, a2) )
  {
    LOBYTE(v5) = 3;
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
      v4,
      v5);
    v7 = *((_DWORD *)this + 62);
    if ( (v7 & 2) != 0 )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
      if ( !GetPropW(WindowForView, (LPCWSTR)0xA921) )
        return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
    }
    else if ( (v7 & 1) == 0 || !IsTabWindowOwner(a2) )
    {
      return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
    }
  }
  return 0;
}
