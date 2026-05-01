/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800332C8 (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180034764 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180082A60 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18013A648 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801536B0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801A2240 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x180637080 (-GetTabTearOutSupportedForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x180637110 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180637960 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18063B960 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076D520 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180117C08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117CD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  LOBYTE(v3) = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(a1, v3);
  return v2;
}
