/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180116008
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018EDA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@QEAAX_NW4Reporti.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800D231C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801160A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1801A01BC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx15>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  signed __int32 i; // ecx
  bool v7; // zf
  signed __int32 v8; // edx
  signed __int32 v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_18098D884;
    if ( !dword_18098D884 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx15>::GetCurrentFeatureEnabledState(a1, &v12, &v11);
    for ( i = *a2; ; i = v10 )
    {
      v7 = v11 == 0;
      v8 = i;
      *a2 = i;
      if ( !v7 && (i & 2) == 0 )
      {
        v8 = i ^ ((unsigned __int16)v12 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (i & 4) == 0 )
      {
        v8 = ((unsigned __int16)v12 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v10 = _InterlockedCompareExchange(a1, v8, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        a1,
        3,
        v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
