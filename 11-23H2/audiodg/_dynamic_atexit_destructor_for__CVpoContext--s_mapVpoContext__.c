/*
 * XREFs of _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x140036DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__()
{
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll((__int64)&CVpoContext::s_mapVpoContext);
}
