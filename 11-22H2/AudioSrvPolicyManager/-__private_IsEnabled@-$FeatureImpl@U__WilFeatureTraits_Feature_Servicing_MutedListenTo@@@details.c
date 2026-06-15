/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAA_NXZ @ 0x18003B254
 * Callers:
 *     _lambda_7af2eb194479c71b10cc30af6f218930_::operator() @ 0x18003473C (_lambda_7af2eb194479c71b10cc30af6f218930_--operator().c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180038190 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180035A60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003741C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QE.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  unsigned __int8 v2; // bl
  char v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
