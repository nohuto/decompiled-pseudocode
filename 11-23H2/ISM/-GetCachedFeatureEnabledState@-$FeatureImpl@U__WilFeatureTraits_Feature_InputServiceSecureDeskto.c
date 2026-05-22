/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800344CC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180053E08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180033F80 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800345A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputServiceSecureDeskt.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180035488 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputServiceSecureDesktop>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v6; // edi
  signed __int32 v7; // edx
  int v8; // eax
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v6 = dword_180268904;
    if ( !dword_180268904 )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputServiceSecureDesktop>::GetCurrentFeatureEnabledState(
      a1,
      &v12,
      &i);
    v7 = *a2;
    v8 = v6 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      if ( v8 && (v7 & 1) == 0 )
      {
        v9 = v7 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v7) & 0x278 | 1;
        *a2 = v9;
      }
      if ( (v7 & 2) == 0 )
      {
        v9 = ((unsigned __int16)v12 ^ (unsigned __int16)v9) & 0x100 ^ v9 | 2;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, v7);
      if ( v7 == v10 )
        break;
      v7 = v10;
    }
    if ( (v7 & 2) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        a1,
        0LL,
        v6);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
