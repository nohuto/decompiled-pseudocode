/*
 * XREFs of _dynamic_atexit_destructor_for__g_VADServerList__ @ 0x18007E1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_VADServerList__()
{
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
}
