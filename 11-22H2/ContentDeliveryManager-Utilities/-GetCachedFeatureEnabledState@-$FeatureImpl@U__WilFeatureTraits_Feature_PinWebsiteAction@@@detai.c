/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A86A8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8A78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x180031728 (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180040D94 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A8860 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@deta.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // edx
  int v8; // r8d
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCurrentFeatureEnabledState(
      v6,
      &v13,
      &v12);
    v7 = *a2;
    v8 = v5 != 0 ? v12 : 0;
    v12 = v8;
    while ( 1 )
    {
      *a2 = v7;
      v9 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v9 = v7 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (v7 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, v7);
      if ( v7 == v10 )
        break;
      v8 = v12;
      v7 = v10;
    }
    if ( (v7 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 0, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
