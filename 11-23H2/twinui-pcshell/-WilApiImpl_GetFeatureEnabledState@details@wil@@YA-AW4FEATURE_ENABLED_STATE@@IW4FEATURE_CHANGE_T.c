/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800E1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800D231C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1801A01BC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180390910 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, int a2, _DWORD *a3, int *a4)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  __int64 v7; // r8
  volatile __int32 *v8; // rsi
  unsigned int v9; // ebx
  bool v10; // zf
  int v12; // edi
  bool v13; // bp
  char v14; // r8
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)this;
  if ( (a2 & 0xFFFFFF7F) - 2 > 1 )
  {
    v7 = 0LL;
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v7 = 1LL;
  }
  v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  v16 = 0LL;
  v9 = 0;
  if ( (a2 & 0x80) != 0 )
    v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v15 = 0LL;
  if ( (*v8 & 3) != 2 )
  {
    if ( (*v8 & 2) != 0 )
    {
      *a3 = 1;
      v10 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(&v15, (unsigned int)this, v7, 0LL) == 0;
    }
    else
    {
      v12 = dword_18098D884;
      if ( !dword_18098D884 )
        v12 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
      v17 = 0;
      *a3 = 1;
      v13 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(&v15, v5, v6, &v17) != 0;
      v14 = _InterlockedExchange(v8, (v17 != 0) + 6);
      if ( !v17 && (v14 & 4) == 0 )
        wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
          (__int64)&wil::details::g_enabledStateManager,
          v8,
          0,
          v12);
      v10 = !v13;
    }
    if ( !v10 )
      v9 = v15;
  }
  if ( (_DWORD)v16 )
    v9 |= 0x80u;
  if ( HIDWORD(v16) )
    v9 |= 0x40u;
  return v9;
}
