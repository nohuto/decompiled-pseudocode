/*
 * XREFs of ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x1801BA320
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DataProviderRegistrarPrincipal@@UEAA@XZ @ 0x1801BA17C (--1DataProviderRegistrarPrincipal@@UEAA@XZ.c)
 */

DataProviderRegistrarPrincipal *__fastcall DataProviderRegistrarPrincipal::`vector deleting destructor'(
        DataProviderRegistrarPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di

  v4 = a2;
  DataProviderRegistrarPrincipal::~DataProviderRegistrarPrincipal(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
