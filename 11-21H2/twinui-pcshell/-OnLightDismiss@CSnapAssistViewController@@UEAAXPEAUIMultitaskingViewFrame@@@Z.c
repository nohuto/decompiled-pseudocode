/*
 * XREFs of ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804B44B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_OnCancelled@CSnapAssistViewController@@AEAAJXZ @ 0x1804B46F0 (-_OnCancelled@CSnapAssistViewController@@AEAAJXZ.c)
 */

void __fastcall CSnapAssistViewController::OnLightDismiss(
        CSnapAssistViewController *this,
        struct IMultitaskingViewFrame *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CSnapAssistViewController::_OnCancelled((CSnapAssistViewController *)((char *)this - 8));
  CMultitaskingViewControllerBase::_AnimateDismissView((CSnapAssistViewController *)((char *)this - 8), 0LL);
}
