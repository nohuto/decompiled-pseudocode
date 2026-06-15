/*
 * XREFs of _dynamic_atexit_destructor_for__CVpoContext::s_csMapVpoContext__ @ 0x140036DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CVpoContext::s_csMapVpoContext__()
{
  DeleteCriticalSection(&CVpoContext::s_csMapVpoContext);
}
