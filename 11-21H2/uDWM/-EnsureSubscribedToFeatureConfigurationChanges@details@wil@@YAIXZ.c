/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180094538
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180063014 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplev.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

__int64 __fastcall wil::details::EnsureSubscribedToFeatureConfigurationChanges(wil::details *this)
{
  __int64 result; // rax

  result = (unsigned int)dword_180142E84;
  if ( !dword_180142E84 )
    return wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  return result;
}
