/*
 * XREFs of ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1803DC6C8
 * Callers:
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18023BDB8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-A.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803D8014 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AE.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803D809C (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803D8124 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806804E0 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WilApi_GetFeatureVariant(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  if ( g_wil_details_internalGetFeatureVariant )
    return ((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *, int *))g_wil_details_internalGetFeatureVariant)(
             this,
             a2,
             a3,
             a4,
             a5);
  result = g_wil_details_apiGetFeatureVariant;
  if ( g_wil_details_apiGetFeatureVariant )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned int *, int *))g_wil_details_apiGetFeatureVariant)(
             (unsigned int)this,
             a2,
             a3,
             a4,
             a5);
  return result;
}
