/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x140037010
 * Callers:
 *     <none>
 * Callees:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14002795C (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
}
