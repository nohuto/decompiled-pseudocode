/*
 * XREFs of ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023ED28
 * Callers:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EC74 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

bool __fastcall LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(LockScreenWidgetPackageHelperBase *this)
{
  unsigned int value_flags_from_value_type; // eax
  DWORD v2; // eax
  LSTATUS ValueW; // eax
  bool v4; // sf
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v7 = HIDWORD(this);
  pvData = 0;
  pcbData = 4;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)4);
  v2 = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)value_flags_from_value_type);
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings",
             L"AlwaysAllowCTADownload",
             v2,
             0LL,
             &pvData,
             &pcbData);
  v4 = ValueW < 0;
  if ( ValueW > 0 )
    v4 = 1;
  return !v4 && pvData != 0;
}
