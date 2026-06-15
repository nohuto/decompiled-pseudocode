/*
 * XREFs of ??0CEndpointStoreCache@@QEAA@XZ @ 0x180055AF0
 * Callers:
 *     _dynamic_initializer_for__g_endpointStoreCache__ @ 0x180001550 (_dynamic_initializer_for__g_endpointStoreCache__.c)
 * Callees:
 *     <none>
 */

CEndpointStoreCache *__fastcall CEndpointStoreCache::CEndpointStoreCache(CEndpointStoreCache *this)
{
  g_endpointStoreCache = 0;
  qword_1801CFAE0 = 0LL;
  stru_1801CFAD8.Ptr = 0LL;
  return (CEndpointStoreCache *)&g_endpointStoreCache;
}
