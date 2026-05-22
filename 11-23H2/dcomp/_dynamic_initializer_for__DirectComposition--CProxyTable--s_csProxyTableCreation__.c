/*
 * XREFs of _dynamic_initializer_for__DirectComposition::CProxyTable::s_csProxyTableCreation__ @ 0x1800016B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__DirectComposition::CProxyTable::s_csProxyTableCreation__()
{
  InitializeCriticalSection(&DirectComposition::CProxyTable::s_csProxyTableCreation);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__DirectComposition::CProxyTable::s_csProxyTableCreation__);
}
