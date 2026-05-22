/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005838C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058898 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800589F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAA_NW4.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180033F80 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180035488 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005862C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  signed __int32 i; // ecx
  bool v7; // zf
  signed __int32 v8; // edx
  signed __int32 v9; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_180268904;
    if ( !dword_180268904 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::GetCurrentFeatureEnabledState(a1, &v12, &v11);
    for ( i = *a2; ; i = v9 )
    {
      v7 = v11 == 0;
      v8 = i;
      *a2 = i;
      if ( !v7 && (i & 1) == 0 )
      {
        v8 = i ^ ((unsigned __int16)v12 ^ (unsigned __int16)i) & 0x278 | 1;
        *a2 = v8;
      }
      if ( (i & 2) == 0 )
      {
        v8 = ((unsigned __int16)v12 ^ (unsigned __int16)v8) & 0x100 ^ v8 | 2;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 2) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        a1,
        3,
        v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
