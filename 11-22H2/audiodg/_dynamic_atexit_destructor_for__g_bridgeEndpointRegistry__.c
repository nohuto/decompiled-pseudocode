/*
 * XREFs of _dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__ @ 0x140036F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__()
{
  std::vector<BridgeEndpointRecord>::_Tidy((__int64)&g_bridgeEndpointRegistry);
}
