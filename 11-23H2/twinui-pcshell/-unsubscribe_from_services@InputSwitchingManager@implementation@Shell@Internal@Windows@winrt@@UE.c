/*
 * XREFs of ?unsubscribe_from_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801BC800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XIIS_Test>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XIIS_Test>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
}
