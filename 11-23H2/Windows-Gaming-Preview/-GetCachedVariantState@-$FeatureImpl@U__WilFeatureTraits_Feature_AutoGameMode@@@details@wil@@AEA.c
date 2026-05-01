/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004172C
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x1800418B0 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x1800419D8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180007BC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007ED4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  int v5; // esi
  int v6; // ebx
  __int64 (__fastcall *v7)(__int64, _QWORD, int *, int *, int *); // rax
  int v8; // ecx
  char v9; // dl
  int v10; // r8d
  unsigned int v11; // ecx
  signed __int64 v12; // rcx
  signed __int64 v13; // r11
  signed __int64 v14; // rax
  signed __int64 v15; // r10
  signed __int64 v16; // r15
  int v17; // edx
  int v18; // r9d
  signed __int64 v19; // rtt
  int v21; // [rsp+60h] [rbp+30h] BYREF
  int v22; // [rsp+68h] [rbp+38h] BYREF
  int v23; // [rsp+70h] [rbp+40h] BYREF

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v5 = dword_180064494;
    v6 = 0;
    v21 = 0;
    if ( !dword_180064494 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_internalGetFeatureVariant;
    v22 = 0;
    if ( g_wil_details_internalGetFeatureVariant
      || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_apiGetFeatureVariant) != 0LL )
    {
      v8 = v7(11015710LL, 0LL, &v23, &v22, &v21);
    }
    else
    {
      v8 = 0;
    }
    v9 = BYTE1(v8) & 1;
    v10 = 16 * (v8 & 0x80 | (v22 != 0 ? 0x40 : 0));
    v11 = v8 & 0xFFFFFE7F;
    if ( v11 )
    {
      v10 |= (v11 & 0x3F) << 12;
      if ( v9 )
        v6 = v23;
    }
    v12 = *(_QWORD *)a2;
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD *)a2;
    v16 = *(_QWORD *)a2;
    v17 = v5 != 0 ? v21 : 0;
    v21 = v17;
    while ( 1 )
    {
      *(_QWORD *)a2 = v12;
      v18 = v12;
      if ( (v12 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v6;
        v15 = v16;
        v18 = v10 & 0x3F800 | v12 & 0xFFFC07F7 | (v17 != 0 ? 8 : 0);
        v14 = v13;
        *(_DWORD *)a2 = v18;
      }
      if ( (v12 & 4) == 0 )
      {
        *(_DWORD *)a2 = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)v10) & 0x400 | 4;
        v14 = v15;
      }
      v19 = v14;
      v14 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v14);
      if ( v19 == v14 )
        break;
      v17 = v21;
      v12 = v14;
      v13 = v14;
      v15 = v14;
      v16 = v14;
    }
    if ( (v12 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
  }
  return a2;
}
