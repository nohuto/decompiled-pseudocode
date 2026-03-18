/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001160
 * Callers:
 *     <none>
 * Callees:
 *     ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1400033A0 (-construct@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct();
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
