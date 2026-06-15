/*
 * XREFs of _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_CritSecSubmixList__()
{
  InitializeCriticalSectionEx(&g_CritSecSubmixList, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CritSecSubmixList__);
}
