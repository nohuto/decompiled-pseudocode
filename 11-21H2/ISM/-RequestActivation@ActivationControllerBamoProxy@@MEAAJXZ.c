/*
 * XREFs of ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18008F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C410 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18008BC94 (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 */

__int64 __fastcall ActivationControllerBamoProxy::RequestActivation(
        ActivationControllerBamoProxy *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ForegroundManager *ForegroundManager; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::RequestActivation(ForegroundManager, this);
  return 0LL;
}
