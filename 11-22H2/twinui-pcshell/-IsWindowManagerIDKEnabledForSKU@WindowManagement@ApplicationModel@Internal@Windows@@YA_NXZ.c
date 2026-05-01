/*
 * XREFs of ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170144
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A3798 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x18016F880 (-IsUwpWindowEventDispatcherEnabled@@YA_NXZ.c)
 *     ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x1801BE9A0 (-IsUwpWindowEventDispatcherDisabled@@YA_NXZ.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B8114 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x1803FFEA0 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2F80 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180170200 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180170288 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180170310 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wi.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803AFD00 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803AFD6C (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  char IsIDKOnXboxEnabled; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  Windows::Internal::ApplicationModel::WindowManagement *v5; // rcx
  char v6; // bl
  char v7; // di
  __int64 v8; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v10; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v10) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v5 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v10;
  v6 = 0;
  v7 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v10 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v5 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v10;
  }
  if ( (_DWORD)v5 == 5 && v7 || (_DWORD)v5 == 11 && v7 || (_DWORD)v5 == 12 && v7 )
    goto LABEL_8;
  if ( (_DWORD)v5 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v5) )
      goto LABEL_8;
    LODWORD(v5) = (_DWORD)v10;
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
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl,
      v3);
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl,
      v8);
    return 1;
  }
  return v6;
}
