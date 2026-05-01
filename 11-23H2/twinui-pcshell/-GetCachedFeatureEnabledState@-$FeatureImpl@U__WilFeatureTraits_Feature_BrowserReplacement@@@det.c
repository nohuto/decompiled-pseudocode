/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754838
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AA44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800D231C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1801A01BC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18075523C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@de.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  signed __int32 v6; // edx
  int v7; // r8d
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_18098D884;
    if ( !dword_18098D884 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::GetCurrentFeatureEnabledState(
      a1,
      &v11,
      &v12);
    v6 = *a2;
    v7 = v5 != 0 ? v12 : 0;
    v12 = v7;
    while ( 1 )
    {
      *a2 = v6;
      v8 = v6;
      if ( v7 && (v6 & 2) == 0 )
      {
        v8 = v6 ^ ((unsigned __int16)v11 ^ (unsigned __int16)v6) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (v6 & 4) == 0 )
      {
        v8 = ((unsigned __int16)v11 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, v6);
      if ( v6 == v9 )
        break;
      v7 = v12;
      v6 = v9;
    }
    if ( (v6 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        a1,
        0,
        v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v11 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
