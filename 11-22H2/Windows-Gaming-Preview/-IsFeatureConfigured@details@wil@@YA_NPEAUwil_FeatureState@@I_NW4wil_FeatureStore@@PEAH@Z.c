/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180007468
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180007560 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1800078D0 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     wil_QueryFeatureState @ 0x180004A18 (wil_QueryFeatureState.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180007BC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007ED4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        _DWORD *a5)
{
  int v5; // esi
  volatile __int32 *v7; // rdi
  unsigned int v10; // ebx
  bool v11; // si
  char v12; // dl
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( !(_DWORD)a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v7 & 2) != 0 )
    return (*v7 & 1) != 0 && (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, 0LL, a5) != 0;
  v10 = dword_180064494;
  v13 = 1;
  if ( !dword_180064494 )
    v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  v11 = (unsigned int)wil_QueryFeatureState(a1, a2, v5, a4, &v13, a5) != 0;
  v12 = _InterlockedExchange(v7, (v13 != 0) + 6);
  if ( !v13 && (v12 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v7, 0LL, v10);
  return v11;
}
