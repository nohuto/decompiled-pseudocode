/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023B26C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4Variant_49686193@@W4VariantReportingKind@3@_K@Z @ 0x180242278 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4V.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA?AW4Variant_49686193@@W4VariantReportingKind@3@_N@Z @ 0x180248734 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA-AW4.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800D231C (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1801A01BC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18023BDB8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-A.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // esi
  signed __int64 i; // rcx
  int v7; // eax
  int v8; // r10d
  signed __int64 v9; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v11 = 0;
    v5 = dword_18098D884;
    if ( !dword_18098D884 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCurrentVariantState(a1, &v12, &v11);
    for ( i = *(_QWORD *)a2; ; i = v9 )
    {
      v7 = v12;
      v8 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v13;
        v8 = ((v11 != 0 ? 8 : 0) | (i ^ (v7 ^ i) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v7 ^ ((v11 != 0 ? 8 : 0) | (unsigned __int16)(i ^ (v7 ^ i) & 0xF000))) & 0x800;
        *(_DWORD *)a2 = v8;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v8 ^ ((unsigned __int16)v7 ^ (unsigned __int16)v8) & 0x400 | 4;
      v9 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        3,
        v5);
  }
  return a2;
}
