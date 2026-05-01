/*
 * XREFs of ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EC74
 * Callers:
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x180238090 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1802380D0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023ED28 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F1F0 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x180248928 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(
        LockScreenWidgetPackageHelperBase *this)
{
  char v1; // bl
  unsigned int value_flags_from_value_type; // eax
  DWORD v3; // eax
  LSTATUS ValueW; // eax
  bool v5; // sf
  LockScreenWidgetPackageHelperBase *v7; // rcx
  LockScreenWidgetPackageHelperBase *v8; // rcx
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v10 = HIDWORD(this);
  v1 = 0;
  pvData = 0;
  pcbData = 4;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)4);
  v3 = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)value_flags_from_value_type);
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate",
             L"DoNotConnectToWindowsUpdateInternetLocations",
             v3,
             0LL,
             &pvData,
             &pcbData);
  v5 = ValueW < 0;
  if ( ValueW > 0 )
    v5 = 1;
  if ( !v5 && pvData )
    return 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
    return 1;
  if ( !LockScreenWidgetPackageHelperBase::IsInCTARegion(v7)
    || LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(v8) )
  {
    return 1;
  }
  return v1;
}
