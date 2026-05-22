/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18002E610
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18002E15C (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18002E73C (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18002F260 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  unsigned int v5; // r15d
  int v6; // r8d
  int v7; // ebp
  volatile __int32 *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v11; // edi
  bool v12; // bp
  char v13; // r8
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v5 = (unsigned int)this;
  if ( (a2 & 0xFFFFFF7F) - 2 <= 1 )
  {
    v6 = 1;
    v7 = 1;
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v16 = 0LL;
  v9 = 0;
  if ( (a2 & 0x80) != 0 )
    v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v15 = 0LL;
  if ( (*v8 & 9) != 1 )
  {
    if ( (*v8 & 1) != 0 )
    {
      *a3 = 1;
      v14 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(
                            (struct wil_FeatureState *)&v15,
                            (unsigned int)this,
                            v6,
                            0LL) == 0;
    }
    else
    {
      v11 = dword_18024285C;
      if ( !dword_18024285C )
        v11 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
      v17 = 0;
      *a3 = 1;
      v12 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState((struct wil_FeatureState *)&v15, v5, v7, &v17) != 0;
      v13 = _InterlockedExchange(v8, v17 != 0 ? 11 : 3);
      if ( !v17 && (v13 & 2) == 0 )
        wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
          &wil::details::g_enabledStateManager,
          v8,
          0LL,
          v11);
      v14 = !v12;
    }
    if ( !v14 )
      v9 = v15;
  }
  if ( (_DWORD)v16 )
    v9 |= 0x80u;
  if ( HIDWORD(v16) )
    v9 |= 0x40u;
  return v9;
}
