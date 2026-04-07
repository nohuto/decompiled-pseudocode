/*
 * XREFs of ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180014160
 * Callers:
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000734C (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA-A.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057FD4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-AT.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180103A30 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA-AT.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned int (*__fastcall wil::details::WilApi_GetFeatureVariant(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int *a5))(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *)
{
  unsigned int (*result)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax

  if ( g_wil_details_internalGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, unsigned int *, int *))g_wil_details_internalGetFeatureVariant)(
                                                                                                     this,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a5);
  result = g_wil_details_apiGetFeatureVariant;
  if ( g_wil_details_apiGetFeatureVariant )
    return (unsigned int (*)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *))((__int64 (__fastcall *)(_QWORD, __int64, __int64, unsigned int *, int *))g_wil_details_apiGetFeatureVariant)(
                                                                                                     (unsigned int)this,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a5);
  return result;
}
