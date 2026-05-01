/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180164DE0
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA_NW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x180164DA0 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA_N.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x1805B2B88 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800F74A0 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18015C6A0 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801877C8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // esi
  signed __int64 v6; // rax
  unsigned __int16 v7; // cx
  int v8; // r10d
  unsigned int v9; // r8d
  signed __int64 v10; // rtt
  int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v12 = 0;
    v5 = dword_1807B3BB4;
    if ( !dword_1807B3BB4 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(a1, &v13, &v12);
    v6 = *(_QWORD *)a2;
    do
    {
      v7 = v13;
      v8 = v6;
      *(_QWORD *)a2 = v6;
      if ( (v6 & 4) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v14;
        v8 = ((v12 != 0 ? 4 : 0) | (v6 ^ (v7 ^ (unsigned __int16)v6) & 0xFC00) & 0xFFFFFFFB) ^ (v7 ^ ((v12 != 0 ? 4 : 0) | (unsigned __int16)(v6 ^ (v7 ^ v6) & 0xFC00))) & 0x200;
        *(_DWORD *)a2 = v8;
      }
      v9 = ((unsigned int)v6 >> 1) & 1;
      if ( !v9 )
        *(_DWORD *)a2 = v8 ^ (v7 ^ (unsigned __int16)v8) & 0x100 | 2;
      v10 = v6;
      v6 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v6);
    }
    while ( v10 != v6 );
    if ( !v9 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        3,
        v5);
  }
  return a2;
}
