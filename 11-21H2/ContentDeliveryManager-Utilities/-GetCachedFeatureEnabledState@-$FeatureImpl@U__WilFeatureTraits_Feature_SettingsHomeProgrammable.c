/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C874
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@SA_NXZ @ 0x18005FA00 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@S.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800322DC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180045FC0 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  enum FEATURE_ENABLED_STATE (*v6)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v7; // ecx
  unsigned int v8; // r8d
  int v9; // eax
  int v10; // r8d
  signed __int32 v11; // eax
  int v12; // ecx
  signed __int32 v13; // r10d
  signed __int32 v14; // edx
  int v15; // r9d
  int v17; // [rsp+30h] [rbp+8h] BYREF
  int v18; // [rsp+38h] [rbp+10h]
  int v19; // [rsp+3Ch] [rbp+14h]

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_1801AE314;
    if ( !dword_1801AE314 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    v6 = g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState || (v6 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, int *))v6)(16892364LL, 0LL, &v17);
    else
      v7 = 0;
    v19 = 0;
    v8 = 2 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v9 = 0;
      if ( (v7 & 0xFFFFFF3F) == 2 )
        v9 = 16;
      v8 |= v9;
    }
    v10 = ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 1)) & 8 ^ v8;
    v18 = v10;
    v11 = *a2;
    v12 = v5 != 0 ? v17 : 0;
    v17 = v12;
    while ( 1 )
    {
      *a2 = v11;
      v13 = v11;
      v14 = v11;
      if ( v12 && (v11 & 1) == 0 )
      {
        v14 = v11 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v11) & 0x278 | 1;
        *a2 = v14;
      }
      v15 = v11 & 2;
      if ( (v11 & 2) == 0 )
      {
        v14 = ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x100 ^ v14 | 2;
        *a2 = v14;
      }
      v11 = _InterlockedCompareExchange(a1, v14, v11);
      if ( v13 == v11 )
        break;
      v12 = v17;
      LOWORD(v10) = v18;
    }
    if ( !v15 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 0, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v18 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
