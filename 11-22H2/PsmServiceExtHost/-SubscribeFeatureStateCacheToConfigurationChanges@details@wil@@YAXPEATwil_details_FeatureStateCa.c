/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180079EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::SubscribeFeatureStateCacheToConfigurationChanges(
        volatile signed __int32 *a1,
        int a2,
        int a3)
{
  wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
    (__int64)&wil::details::g_enabledStateManager,
    a1,
    a2,
    a3);
}
