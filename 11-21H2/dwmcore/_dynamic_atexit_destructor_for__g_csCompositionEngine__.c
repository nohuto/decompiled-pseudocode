/*
 * XREFs of _dynamic_atexit_destructor_for__g_csCompositionEngine__ @ 0x18010D810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csCompositionEngine__()
{
  DeleteCriticalSection(&g_csCompositionEngine);
}
