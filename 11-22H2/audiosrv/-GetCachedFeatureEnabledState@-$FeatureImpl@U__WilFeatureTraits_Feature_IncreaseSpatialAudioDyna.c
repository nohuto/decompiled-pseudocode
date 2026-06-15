/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18001BD78
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001BD38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObject.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18005FAB4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180061AB8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDyn.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180061E28 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  signed __int32 v7; // edx
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  unsigned __int64 v10; // r8
  int Source; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 6) != 6 )
  {
    v5 = dword_1801CFA64;
    if ( !dword_1801CFA64 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &v14);
    v6 = v5 != 0 ? v14 : 0;
    v14 = v6;
    v7 = *a2;
    while ( 1 )
    {
      *a2 = v7;
      v8 = v7;
      if ( v6 && (v7 & 2) == 0 )
      {
        v8 = v7 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (v7 & 4) == 0 )
      {
        v8 = ((unsigned __int16)v15 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, v7);
      if ( v7 == v9 )
        break;
      v7 = v9;
      v6 = v14;
    }
    if ( (v7 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1801CFA64
        || (Source = 0,
            v13 = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&xmmword_1801CFA98, &Source, v10)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
