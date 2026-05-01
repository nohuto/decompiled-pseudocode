/*
 * XREFs of ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x1804B4440
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x180235A90 (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 *     ?_OnCancelled@CSnapAssistViewController@@AEAAJXZ @ 0x1804B46F0 (-_OnCancelled@CSnapAssistViewController@@AEAAJXZ.c)
 *     ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x1804BCECC (-_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z.c)
 */

void __fastcall CSnapAssistViewController::OnActivationLost(
        CSnapAssistViewController *this,
        struct IMultitaskingViewFrame *a2,
        __int64 a3,
        __int64 a4)
{
  enum _TABLETMODESTATE *v5; // rdx
  TabletModeHelpers *v6; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CSnapAssistViewController::_OnCancelled((CSnapAssistViewController *)((char *)this - 8));
  if ( !*((_BYTE *)this + 168) || TabletModeHelpers::IsTabletMode(v6, v5) )
    CMultitaskingViewControllerBase::_AnimateDismissView((CSnapAssistViewController *)((char *)this - 8), 0LL);
  else
    CMultitaskingViewControllerBase::_DismissView((CSnapAssistViewController *)((char *)this - 8));
}
