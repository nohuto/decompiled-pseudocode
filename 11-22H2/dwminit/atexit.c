/*
 * XREFs of atexit @ 0x1800021D8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001A70 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001A90 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_atexit_destructor_for__gDwmStateLock__ @ 0x180001AB0 (_dynamic_atexit_destructor_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001AD0 (_dynamic_initializer_for__g_PortClient__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001B00 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000A62C (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     _onexit @ 0x180002198 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
