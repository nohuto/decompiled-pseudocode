/*
 * XREFs of ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x1801DAC98
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1801DAD44 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x1802776CC (-DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x180278370 (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 * Callees:
 *     ?GetSharedModeType@@YA?AW4SharedModeType@@XZ @ 0x1803FF6D8 (-GetSharedModeType@@YA-AW4SharedModeType@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAA_NXZ @ 0x18040A54C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@det.c)
 */

char __fastcall CloudPCHelpers::IsBootToCloudModeRegistryCheck(CloudPCHelpers *this)
{
  char v1; // bl
  bool v2; // zf
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  pvData = 0;
  pcbData = 4;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl) )
  {
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\PolicyManager\\current\\Device\\CloudDesktop",
           L"BootToCloudMode",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      return 0;
    }
    v1 = 1;
    v2 = pvData == 1;
  }
  else
  {
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\PolicyManager\\current\\Device\\CloudDesktop",
           L"BootToCloudMode",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      return 0;
    }
    v1 = 1;
    if ( pvData != 1 )
      return 0;
    v2 = (unsigned int)GetSharedModeType() == 1;
  }
  if ( !v2 )
    return 0;
  return v1;
}
