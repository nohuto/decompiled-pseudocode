/*
 * XREFs of _dynamic_atexit_destructor_for__DirectComposition::CProxyTable::s_csProxyTableCreation__ @ 0x1800B2130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__DirectComposition::CProxyTable::s_csProxyTableCreation__()
{
  DeleteCriticalSection(&DirectComposition::CProxyTable::s_csProxyTableCreation);
}
