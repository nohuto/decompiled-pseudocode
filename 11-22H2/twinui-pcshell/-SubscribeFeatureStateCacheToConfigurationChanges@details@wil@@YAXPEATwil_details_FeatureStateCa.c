/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800D2300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::SubscribeFeatureStateCacheToConfigurationChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  return wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
           &wil::details::g_enabledStateManager,
           a1,
           a2,
           a3);
}
