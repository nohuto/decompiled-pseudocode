/*
 * XREFs of ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ @ 0x18006EC18
 * Callers:
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18006ECA0 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z @ 0x18006E5A4 (-GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z.c)
 *     ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x18006EB2C (-GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CSMValidity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006EFF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CSMValidity@@@details@wil@@QEAAX_NW4Repor.c)
 */

bool __fastcall DevicePostureHelpers::IsConvertibilitySelfIdentified(DevicePostureHelpers *this, __int64 a2)
{
  unsigned int *v2; // rdx
  enum DevicePostureHelpers::ChassisType *v4; // rdx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CSMValidity>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CSMValidity>::GetImpl'::`2'::impl,
    a2);
  v5 = 0;
  if ( DevicePostureHelpers::GetPreconfiguredConvertibilityKey((DevicePostureHelpers *)&v5, v2) >= 0 )
    return v5 != 0;
  v6 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, 0LL, &v6);
  return v6 == 2
      || (unsigned int)(v6 - 5) <= 1
      || (int)DevicePostureHelpers::GetChassisType((DevicePostureHelpers *)&v5, v4) >= 0 && (unsigned int)(v5 - 30) <= 2;
}
