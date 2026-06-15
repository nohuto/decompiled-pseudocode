/*
 * XREFs of ?FreeConnectionBuffer@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x1400117B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::FreeConnectionBuffer(void **this, void *a2)
{
  if ( !a2 )
    return 2147500035LL;
  AERTFree(a2, this[5]);
  return 0LL;
}
