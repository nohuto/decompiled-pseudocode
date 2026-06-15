/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180035D60
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003A680 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x1800355AC (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180037E08 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18003B594 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        struct wil_FeatureState *a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        _DWORD *a5)
{
  int v5; // edi
  volatile __int32 *v7; // rbx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  bool v12; // di
  char v13; // dl
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 9) == 1 )
    return 0;
  if ( (*v7 & 1) != 0 )
  {
    *a5 = 1;
    return (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, 0LL) != 0;
  }
  else
  {
    v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v14 = 0;
    v11 = v10;
    *a5 = 1;
    v12 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, v5, &v14) != 0;
    v13 = _InterlockedExchange(v7, v14 != 0 ? 11 : 3);
    if ( !v14 && (v13 & 2) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(v7, 0LL, v11);
    return v12;
  }
}
