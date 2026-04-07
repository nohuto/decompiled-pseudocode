/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA?AW4Variant_Wmasfot@@W4VariantReportingKind@3@_N@Z @ 0x18010720C
 * Callers:
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x180104870 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180103864 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA-ATw.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Variant_Wmasfot@@W4VariantReportingKind@3@_K@Z @ 0x180105D50 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Va.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::__private_GetVariant(
        volatile signed __int64 *a1)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 10) & 0x3F;
  if ( v2 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportVariantUsage((int *)a1, 1u, v2, 2, v4);
  return v2;
}
