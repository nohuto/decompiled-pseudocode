/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000D6D8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D918 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180005674 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180008B28 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // edx
  __int16 v8; // cx
  __int16 v9; // cx
  __int16 v10; // ax
  char v11; // dl
  __int16 v12; // di
  signed __int32 v13; // edx
  unsigned __int16 v14; // di
  bool v15; // zf
  signed __int32 v16; // ecx
  signed __int32 v17; // eax
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) == 6 )
    return a2;
  v5 = dword_1800162E4;
  if ( !dword_1800162E4 )
    v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v7 = v6(57566014LL, 3LL, &v19);
  }
  else
  {
    v7 = 0;
  }
  v8 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
  if ( (v7 & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( (v7 & 0xFFFFFF3F) == 2 )
      v10 = 64;
    v9 = v10 | v8;
  }
  else
  {
    v9 = v8 | 0x40;
  }
  v11 = 0;
  v12 = 1;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v11 = 1;
LABEL_16:
    if ( (v9 & 0x40) == 0 || !v11 )
      v12 = 0;
    goto LABEL_19;
  }
  if ( (v9 & 0x40) == 0 )
    goto LABEL_16;
LABEL_19:
  v13 = *a2;
  v14 = v9 | v12;
  while ( 1 )
  {
    v15 = v19 == 0;
    v16 = v13;
    *a2 = v13;
    if ( !v15 && (v13 & 2) == 0 )
    {
      v16 = v13 ^ (v14 ^ (unsigned __int16)v13) & 0x9C1 | 2;
      *a2 = v16;
    }
    if ( (v13 & 4) == 0 )
    {
      v16 = ((unsigned __int16)v16 ^ v14) & 0x400 ^ v16 | 4;
      *a2 = v16;
    }
    v17 = _InterlockedCompareExchange(a1, v16, v13);
    if ( v13 == v17 )
      break;
    v13 = v17;
  }
  if ( (v13 & 4) == 0 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3, v5);
  if ( (*(_BYTE *)a2 & 2) == 0 )
    *a2 ^= (v14 ^ (unsigned __int16)*a2) & 0x9C1;
  return a2;
}
