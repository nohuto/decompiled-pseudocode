/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B49EC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B5990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180016A8C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18004CA9C (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4C4C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@A.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  int v5; // esi
  signed __int32 i; // edx
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 6) != 6 )
  {
    v5 = dword_1801485FC;
    if ( !dword_1801485FC )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::GetCurrentFeatureEnabledState(a1, &v13, &v12);
    for ( i = *a2; ; i = v8 )
    {
      *a2 = i;
      v7 = i;
      if ( v12 && (i & 2) == 0 )
      {
        v7 = i ^ ((unsigned __int16)v13 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v7;
      }
      if ( (i & 4) == 0 )
      {
        v7 = ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0x400 ^ v7 | 4;
        *a2 = v7;
      }
      v8 = _InterlockedCompareExchange(a1, v7, i);
      if ( i == v8 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1801485FC
        || (v10 = 3, v11 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180148630, &v10, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
