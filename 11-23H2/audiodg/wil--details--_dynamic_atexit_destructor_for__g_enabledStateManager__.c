/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x140036DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140027A24 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::destroy((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
}
