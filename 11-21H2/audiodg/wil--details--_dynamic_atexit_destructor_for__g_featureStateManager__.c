/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x14003A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14002F200 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
}
