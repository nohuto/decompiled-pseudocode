/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F4328
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EDC10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil.c)
 * Callees:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800F426C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitiga.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800F74A0 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18015C6A0 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        __int64 a3,
        int *a4)
{
  volatile signed __int32 v4; // eax
  unsigned int v8; // edi
  signed __int32 v9; // eax
  int v10; // r8d
  signed __int32 v11; // r9d
  signed __int32 v12; // edx
  __int64 v13; // r8
  int i; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 3) != 3 )
  {
    v8 = dword_1807B3BB4;
    if ( !dword_1807B3BB4 )
      v8 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::GetCurrentFeatureEnabledState(
      (__int64)a1,
      &v15,
      (enum FEATURE_CHANGE_TIME)&i,
      a4);
    v9 = *a2;
    v10 = v8 != 0 ? i : 0;
    for ( i = v10; ; v10 = i )
    {
      *a2 = v9;
      v11 = v9;
      v12 = v9;
      if ( v10 && (v9 & 1) == 0 )
      {
        v12 = v9 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v9) & 0x278 | 1;
        *a2 = v12;
      }
      v13 = v9 & 2;
      if ( (v9 & 2) == 0 )
      {
        v12 = ((unsigned __int16)v15 ^ (unsigned __int16)v12) & 0x100 ^ v12 | 2;
        *a2 = v12;
      }
      v9 = _InterlockedCompareExchange(a1, v12, v9);
      if ( v11 == v9 )
        break;
    }
    if ( !(_DWORD)v13 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        &wil::details::g_enabledStateManager,
        a1,
        v13,
        v8);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
