/*
 * XREFs of ?FreeConnectionBuffer@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x1400249D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::FreeConnectionBuffer(void **this, void *a2, int a3)
{
  if ( !a2 )
    return 2147500035LL;
  AERTFree(a2, this[5], a3);
  return 0LL;
}
