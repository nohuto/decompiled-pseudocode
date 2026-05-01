/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800103D0
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A91C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180007BC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007ED4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800104B0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameList.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  signed __int32 v6; // edx
  int v7; // eax
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_180064494;
    if ( !dword_180064494 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCurrentFeatureEnabledState(
      a1,
      &v12,
      &i);
    v6 = *a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      *a2 = v6;
      v8 = v6;
      if ( v7 && (v6 & 2) == 0 )
      {
        v8 = v6 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v6) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (v6 & 4) == 0 )
      {
        v8 = ((unsigned __int16)v12 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, v6);
      if ( v6 == v9 )
        break;
      v6 = v9;
    }
    if ( (v6 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 0, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
