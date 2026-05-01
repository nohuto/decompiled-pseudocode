/*
 * XREFs of ?GetForDisplayRegion@DesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x1805B3D24
 * Callers:
 *     ?GetForDisplayRegion@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1805B3CA0 (-GetForDisplayRegion@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x1805B3D64 (-GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Window.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager::GetForDisplayRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetForDisplayRegion(a2, a3);
  return a2;
}
