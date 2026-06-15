/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180035A60
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003741C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAA_NXZ @ 0x18003B254 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x1800355AC (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180035B28 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180037E08 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::GetCachedFeatureEnabledState(
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
  if ( (v2 & 3) != 3 )
  {
    v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::GetCurrentFeatureEnabledState(
      v6,
      &v13,
      &v12);
    for ( i = *a2; ; i = v10 )
    {
      v8 = v12 == 0;
      v9 = i;
      *a2 = i;
      if ( !v8 && (i & 1) == 0 )
      {
        v9 = i ^ ((unsigned __int16)v13 ^ (unsigned __int16)i) & 0x278 | 1;
        *a2 = v9;
      }
      if ( (i & 2) == 0 )
      {
        v9 = ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x100 ^ v9 | 2;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 2) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
