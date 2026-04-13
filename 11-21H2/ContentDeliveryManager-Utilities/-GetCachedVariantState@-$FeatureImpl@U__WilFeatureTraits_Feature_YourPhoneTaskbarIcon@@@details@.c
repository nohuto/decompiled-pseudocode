/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180035030
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180044148 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180048544 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800322DC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180045FC0 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v2; // rax
  unsigned int v5; // edi
  unsigned int (*v6)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax
  int v7; // edx
  int v8; // r9d
  int v9; // r8d
  unsigned int v10; // edx
  int v11; // r10d
  signed __int64 v12; // rax
  int v13; // ecx
  int v14; // r9d
  __int64 v15; // rdx
  signed __int64 v16; // rtt
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v19; // [rsp+58h] [rbp+28h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    i = 0;
    v5 = dword_1801AE314;
    if ( !dword_1801AE314 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v19 = 0;
    v6 = g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant || (v6 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))v6)(16257538LL, 0LL, &v20, &v19, &i);
    else
      v7 = 0;
    v8 = v7 & 0x100;
    v9 = (v19 != 0 ? 0x100 : 0) | (4 * (v7 & 0x80));
    v10 = v7 & 0xFFFFFE7F;
    if ( v10 && (v9 |= (v10 & 0x3F) << 10, v8) )
      v11 = v20;
    else
      v11 = 0;
    v12 = *(_QWORD *)a2;
    v13 = v5 != 0 ? i : 0;
    for ( i = v13; ; v13 = i )
    {
      *(_QWORD *)a2 = v12;
      v14 = v12;
      if ( (v12 & 4) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v11;
        v14 = ((v13 != 0 ? 4 : 0) | (v12 ^ ((unsigned __int16)v9 ^ (unsigned __int16)v12) & 0xFC00) & 0xFFFFFFFB) ^ ((unsigned __int16)v9 ^ ((v13 != 0 ? 4 : 0) | (unsigned __int16)(v12 ^ (v9 ^ v12) & 0xFC00))) & 0x200;
        *(_DWORD *)a2 = v14;
      }
      v15 = ((unsigned int)v12 >> 1) & 1;
      if ( (((unsigned int)v12 >> 1) & 1) == 0 )
        *(_DWORD *)a2 = v14 ^ (v14 ^ v9) & 0x100 | 2;
      v16 = v12;
      v12 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v12);
      if ( v16 == v12 )
        break;
    }
    if ( !(_DWORD)v15 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, v15, v5);
  }
  return a2;
}
