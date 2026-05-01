/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007E28
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1800072C8 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180010220 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040908 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040ABC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 * Callees:
 *     memcpy_s @ 0x180001920 (memcpy_s.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004B44 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::SubscribeFeatureStateCacheToConfigurationChanges(
        volatile signed __int32 *a1,
        int a2,
        int a3)
{
  int Source; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180062480);
    if ( a3
      && a3 == dword_180062494
      && (Source = a2,
          v7 = a1,
          wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&unk_1800624C8, 0x10uLL)) )
    {
      memcpy_s(
        Destination,
        (qword_1800624D8 - (_QWORD)Destination) & -(__int64)((unsigned __int64)Destination < qword_1800624D8),
        &Source,
        0x10uLL);
      Destination = (char *)Destination + 16;
    }
    else
    {
      _InterlockedAnd(a1, a2 != 0 ? -3 : -520);
    }
    ReleaseSRWLockExclusive(&stru_180062480);
  }
}
