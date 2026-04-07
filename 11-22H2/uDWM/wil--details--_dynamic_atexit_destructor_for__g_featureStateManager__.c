/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800688B0
 * Callers:
 *     <none>
 * Callees:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005C270 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
}
