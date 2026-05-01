/*
 * XREFs of ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170094
 * Callers:
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x18016F88C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2F80 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180170310 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewManagerPhaseout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017083C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewManagerPhaseout@@@details@wil@@QEAAX_.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803AFD00 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803AFD6C (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsViewManagerPhaseoutEnabled(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  char IsIDKOnXboxEnabled; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  Windows::Internal::ApplicationModel::WindowManagement *v5; // rcx
  char v6; // bl
  char v7; // di
  Windows::Internal::ApplicationModel::WindowManagement *v9; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v9) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v9, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v5 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v9;
  v6 = 0;
  v7 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v9 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v5 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v9;
  }
  if ( (_DWORD)v5 == 5 && v7 || (_DWORD)v5 == 11 && v7 || (_DWORD)v5 == 12 && v7 )
    goto LABEL_8;
  if ( (_DWORD)v5 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v5) )
      goto LABEL_8;
    LODWORD(v5) = (_DWORD)v9;
  }
  if ( (_DWORD)v5 == 3 || (_DWORD)v5 == 9 )
  {
    LOBYTE(v4) = 3;
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      v3,
      v4);
LABEL_8:
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewManagerPhaseout>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewManagerPhaseout>::GetImpl'::`2'::impl,
      v3);
    return 1;
  }
  return v6;
}
