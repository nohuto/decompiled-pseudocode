/*
 * XREFs of ??0CEndpointStoreCache@@QEAA@XZ @ 0x180042B98
 * Callers:
 *     _dynamic_initializer_for__g_endpointStoreCache__ @ 0x180001A30 (_dynamic_initializer_for__g_endpointStoreCache__.c)
 * Callees:
 *     <none>
 */

CEndpointStoreCache *__fastcall CEndpointStoreCache::CEndpointStoreCache(CEndpointStoreCache *this)
{
  g_endpointStoreCache = 0;
  qword_1801C25C8 = 0LL;
  SRWLock.Ptr = 0LL;
  return (CEndpointStoreCache *)&g_endpointStoreCache;
}
