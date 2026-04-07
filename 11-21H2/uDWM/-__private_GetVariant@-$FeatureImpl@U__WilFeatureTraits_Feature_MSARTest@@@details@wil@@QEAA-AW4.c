/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAA?AW4Variant_MSARTest@@W4VariantReportingKind@3@_N@Z @ 0x180007178
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4Variant_MSARTest@@W4VariantReportingKind@3@_K@Z @ 0x1800071C4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4V.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180007280 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA-AT.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::__private_GetVariant(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::GetCachedVariantState(a1, &v6);
  v4 = (v6 >> 10) & 0x3F;
  if ( v4 )
  {
    LOBYTE(v3) = (v6 >> 10) & 0x3F;
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportVariantUsage(v1, v2, v3, 2);
  }
  return v4;
}
