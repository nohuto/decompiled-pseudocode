/*
 * XREFs of ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x18016F88C
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A3798 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2ED8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@@QEAA_NXZ @ 0x18016F8F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MoveUWLMForDesktop@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016FD7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170094 (-IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::Shell::UwpWindowLifecycleManagement::ShouldMoveUWLMIntoShellProcess(
        Windows::Internal::Shell::UwpWindowLifecycleManagement *this)
{
  __int64 v1; // rdx
  char v2; // bl
  bool v3; // di
  Windows::Internal::ApplicationModel::WindowManagement *v4; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  v2 = 1;
  v3 = v7 == 3 || v7 == 9;
  LOBYTE(v1) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetImpl'::`2'::impl,
    v1);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MoveUWLMForDesktop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MoveUWLMForDesktop>::GetImpl'::`2'::impl)
    || !v3
    || !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v6)
    || !Windows::Internal::ApplicationModel::WindowManagement::IsViewManagerPhaseoutEnabled(v4) )
  {
    return 0;
  }
  return v2;
}
