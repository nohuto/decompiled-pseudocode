/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033938
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003ED00 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180043414 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x180031728 (-EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800345B4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180040D94 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 v7; // rcx
  int v8; // r10d
  int v9; // eax
  int v10; // r9d
  signed __int64 v11; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF
  int v15; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v13 = 0;
    v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCurrentVariantState(v6, &v14, &v13);
    v7 = *(_QWORD *)a2;
    v8 = v5 != 0 ? v13 : 0;
    v13 = v8;
    while ( 1 )
    {
      v9 = v14;
      v10 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v15;
        v10 = ((v8 != 0 ? 8 : 0) | (v7 ^ (v9 ^ v7) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v9 ^ (unsigned __int16)(v7 ^ (v9 ^ v7) & 0xF000 | (v8 != 0 ? 8 : 0))) & 0x800;
        *(_DWORD *)a2 = v10;
      }
      if ( (v7 & 4) == 0 )
        *(_DWORD *)a2 = v10 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v10) & 0x400 | 4;
      v11 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v7);
      if ( v7 == v11 )
        break;
      v8 = v13;
      v7 = v11;
    }
    if ( (v7 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 0LL, v5);
  }
  return a2;
}
