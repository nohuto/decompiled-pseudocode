/*
 * XREFs of atexit @ 0x140006000
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140001010 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1400011A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1400011C0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x1400011E0 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     _dynamic_initializer_for__g_spHotkeyCallback__ @ 0x140001210 (_dynamic_initializer_for__g_spHotkeyCallback__.c)
 *     pre_c_initialization @ 0x140005940 (pre_c_initialization.c)
 * Callees:
 *     _onexit @ 0x140005FC0 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
