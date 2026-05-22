/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003E980
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E8FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4Repo.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18003E0F8 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003EA60 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18003F188 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportFnKey>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v6; // edi
  signed __int32 v7; // edx
  int v8; // eax
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v6 = dword_18027795C;
    if ( !dword_18027795C )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportFnKey>::GetCurrentFeatureEnabledState(a1, &v12, &i);
    v7 = *a2;
    v8 = v6 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v9 = v7 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (v7 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v12 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, v7);
      if ( v7 == v10 )
        break;
      v7 = v10;
    }
    if ( (v7 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        a1,
        0,
        v6);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
