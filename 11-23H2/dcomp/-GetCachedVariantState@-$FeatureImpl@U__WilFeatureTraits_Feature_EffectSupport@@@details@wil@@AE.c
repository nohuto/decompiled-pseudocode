/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800670D8
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAA?AW4Variant_EffectSupport@@W4VariantReportingKind@3@_N@Z @ 0x180067090 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEA.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Variant_EffectSupport@@W4VariantReportingKind@3@_K@Z @ 0x1800671B8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180066908 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180068178 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18008CF24 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@A.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  unsigned int v5; // esi
  signed __int64 i; // rcx
  int v7; // eax
  int v8; // r10d
  signed __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int64 *v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF
  int v15; // [rsp+4Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v13 = 0;
    v5 = dword_18021CE14;
    if ( !dword_18021CE14 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::GetCurrentVariantState(a1, &v14, &v13);
    for ( i = *(_QWORD *)a2; ; i = v9 )
    {
      v7 = v14;
      v8 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v15;
        v8 = ((v13 != 0 ? 8 : 0) | (i ^ (v7 ^ i) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v7 ^ ((v13 != 0 ? 8 : 0) | (unsigned __int16)(i ^ (v7 ^ i) & 0xF000))) & 0x800;
        *(_DWORD *)a2 = v8;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v8 ^ ((unsigned __int16)v7 ^ (unsigned __int16)v8) & 0x400 | 4;
      v9 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_18021CE14
        || (v11 = 3, v12 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_18021CE48, &v11, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
  return a2;
}
