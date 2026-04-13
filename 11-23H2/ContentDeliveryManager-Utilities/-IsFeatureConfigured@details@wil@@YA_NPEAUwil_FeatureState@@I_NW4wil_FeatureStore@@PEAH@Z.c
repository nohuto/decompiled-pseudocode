/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180038110
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180041EF0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180041F60 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x180031728 (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180040D94 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     wil_QueryFeatureState @ 0x1800459E4 (wil_QueryFeatureState.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(int a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // edi
  volatile __int32 *v7; // rbx
  volatile __int32 v9; // r9d
  unsigned int v11; // r14d
  int v12; // r9d
  bool v13; // di
  char v14; // dl
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v9 = *v7;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (v9 & 2) != 0 )
    return (unsigned int)wil_QueryFeatureState(a1, a2, a3, v9, 0LL, a5) != 0;
  v15 = 1;
  v11 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  v13 = (unsigned int)wil_QueryFeatureState(a1, a2, v5, v12, (__int64)&v15, a5) != 0;
  v14 = _InterlockedExchange(v7, (v15 != 0) + 6);
  if ( !v15 && (v14 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v7, 0LL, v11);
  return v13;
}
