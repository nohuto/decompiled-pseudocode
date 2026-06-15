/*
 * XREFs of _dynamic_initializer_for__g_endpointStoreCache__ @ 0x180001550
 * Callers:
 *     <none>
 * Callees:
 *     ??0CEndpointStoreCache@@QEAA@XZ @ 0x180055AF0 (--0CEndpointStoreCache@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_endpointStoreCache__(CEndpointStoreCache *a1)
{
  CEndpointStoreCache::CEndpointStoreCache(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_endpointStoreCache__);
}
