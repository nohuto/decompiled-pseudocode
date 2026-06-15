/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritSecSadMap__ @ 0x140039EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritSecSadMap__()
{
  DeleteCriticalSection(&g_CritSecSadMap);
}
