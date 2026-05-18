/*
 * XREFs of atexit @ 0x180002228
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800019B0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800019D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001BA0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001BC0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_atexit_destructor_for__gDwmStateLock__ @ 0x180001BE0 (_dynamic_atexit_destructor_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001C00 (_dynamic_initializer_for__g_PortClient__.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000EF4C (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     _onexit @ 0x1800021E8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
