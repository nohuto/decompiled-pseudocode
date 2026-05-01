/*
 * XREFs of ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18066B61C
 * Callers:
 *     ?AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x18066A9D0 (-AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1806880E8 (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::QueueSnapAssistDismissal(
        GuidedSnapAssistControl **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  GuidedSnapAssistControl::CancelIfActive(this[36]);
  return 0LL;
}
