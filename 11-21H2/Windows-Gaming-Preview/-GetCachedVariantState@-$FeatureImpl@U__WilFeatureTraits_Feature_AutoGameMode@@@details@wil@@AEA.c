/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040908
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180040A74 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180040C3C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180007A84 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007E28 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // edi
  unsigned int (*v6)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax
  int v7; // ecx
  char v8; // r8
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r10d
  signed __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // r9d
  signed __int64 v16; // rtt
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v19; // [rsp+58h] [rbp+28h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    i = 0;
    v5 = dword_180062494;
    if ( !dword_180062494 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v19 = 0;
    v6 = g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant || (v6 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))v6)(11015710LL, 0LL, &v20, &v19, &i);
    else
      v7 = 0;
    v8 = BYTE1(v7) & 1;
    v9 = 4 * (v7 & 0x80 | (v19 != 0 ? 0x40 : 0));
    v10 = v7 & 0xFFFFFE7F;
    if ( v10 && (LOWORD(v9) = ((v10 & 0x3F) << 10) | v9, v8) )
      v11 = v20;
    else
      v11 = 0;
    v12 = *(_QWORD *)a2;
    v13 = v5 != 0 ? i : 0;
    for ( i = v13; ; v13 = i )
    {
      *(_QWORD *)a2 = v12;
      if ( (v12 & 4) != 0 )
      {
        v14 = v12;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = v11;
        v14 = v9 & 0xFE00 | v12 & 0xFFFF01FB | (v13 != 0 ? 4 : 0);
        *(_DWORD *)a2 = v14;
      }
      v15 = ((unsigned int)v12 >> 1) & 1;
      if ( !v15 )
        *(_DWORD *)a2 = v14 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v14) & 0x100 | 2;
      v16 = v12;
      v12 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v12);
      if ( v16 == v12 )
        break;
    }
    if ( !v15 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
  }
  return a2;
}
