/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180077810
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18007A250 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18006D3DC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800767E8 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18007A890 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  int v5; // esi
  volatile __int32 *v7; // rbx
  int v10; // edi
  bool v11; // si
  char v12; // cl
  int v13; // [rsp+20h] [rbp-28h] BYREF
  volatile __int32 *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (*v7 & 2) != 0 )
  {
    *a5 = 1;
    return (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, 0LL) != 0;
  }
  else
  {
    v10 = dword_1800DC474;
    if ( !dword_1800DC474 )
      v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v15 = 0;
    *a5 = 1;
    v11 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, v5, &v15) != 0;
    v12 = _InterlockedExchange(v7, (v15 != 0) + 6);
    if ( !v15 && (v12 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_1800DC460);
      if ( !v10
        || v10 != dword_1800DC474
        || (v13 = 0,
            v14 = v7,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1800DC4A8,
               &v13,
               0x10uLL)) )
      {
        _InterlockedAnd(v7, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&stru_1800DC460);
    }
    return v11;
  }
}
