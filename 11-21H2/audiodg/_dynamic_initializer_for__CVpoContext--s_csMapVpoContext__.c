/*
 * XREFs of _dynamic_initializer_for__CVpoContext::s_csMapVpoContext__ @ 0x140001200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CVpoContext::s_csMapVpoContext__()
{
  InitializeCriticalSectionEx(&CVpoContext::s_csMapVpoContext, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CVpoContext::s_csMapVpoContext__);
}
