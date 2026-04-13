/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest05@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C61C
 * Callers:
 *     _lambda_1d5c295107fc8f90796710caf94b52b8_::_lambda_invoker_cdecl_ @ 0x180051860 (_lambda_1d5c295107fc8f90796710caf94b52b8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800322DC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180045FC0 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest05@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005D34C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest05@@@details@wil@@.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest05>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // edi
  signed __int32 v6; // eax
  bool v7; // zf
  signed __int32 v8; // r9d
  signed __int32 v9; // edx
  int v10; // r8d
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_1801AE314;
    if ( !dword_1801AE314 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest05>::GetCurrentFeatureEnabledState(a1, &v13, &v12);
    v6 = *a2;
    do
    {
      v7 = v12 == 0;
      v8 = v6;
      *a2 = v6;
      v9 = v6;
      if ( !v7 && (v6 & 1) == 0 )
      {
        v9 = v6 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v6) & 0x278 | 1;
        *a2 = v9;
      }
      v10 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v9 = ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x100 ^ v9 | 2;
        *a2 = v9;
      }
      v6 = _InterlockedCompareExchange(a1, v9, v6);
    }
    while ( v8 != v6 );
    if ( !v10 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
