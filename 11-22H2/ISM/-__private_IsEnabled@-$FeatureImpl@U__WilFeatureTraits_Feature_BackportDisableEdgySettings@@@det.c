/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil@@QEAA_NXZ @ 0x180074D84
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     _lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______ @ 0x180074060 (_lambda_3ac41b7c074b5572a862bd524c28f9fc_--operator()_std--pair_enum_ShellEdgyRecognizer--EdgyLo.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180074344 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySetti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800748EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
