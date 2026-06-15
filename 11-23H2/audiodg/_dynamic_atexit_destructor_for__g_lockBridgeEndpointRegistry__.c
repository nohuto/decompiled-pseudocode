/*
 * XREFs of _dynamic_atexit_destructor_for__g_lockBridgeEndpointRegistry__ @ 0x140036F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_lockBridgeEndpointRegistry__()
{
  DeleteCriticalSection(&g_lockBridgeEndpointRegistry);
}
