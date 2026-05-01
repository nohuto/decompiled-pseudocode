/*
 * XREFs of ?IsBootToCloudPCSession@@YA_NXZ @ 0x1800F48A8
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x1800F4910 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x1801DBA84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x1801F1EB0 (-B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ.c)
 */

bool IsBootToCloudPCSession(void)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
    && B2CIsPhysicalDeviceAccessConfigured() )
  {
    return 0;
  }
  v1 = 0;
  PolicyManager_GetPolicyInt(L"CloudDesktop", L"BootToCloudMode", &v1);
  return v1 == 1;
}
