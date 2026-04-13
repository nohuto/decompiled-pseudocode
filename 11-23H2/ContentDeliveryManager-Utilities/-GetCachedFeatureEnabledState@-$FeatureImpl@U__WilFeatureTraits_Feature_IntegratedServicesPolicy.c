/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800335F0
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E944 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180043588 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x180031728 (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003422C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolic.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180040D94 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // edx
  bool v8; // zf
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::GetCurrentFeatureEnabledState(
      v6,
      &v13,
      &v12);
    for ( i = *a2; ; i = v10 )
    {
      v8 = v12 == 0;
      v9 = i;
      *a2 = i;
      if ( !v8 && (i & 2) == 0 )
      {
        v9 = i ^ ((unsigned __int16)v13 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (i & 4) == 0 )
      {
        v9 = ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
