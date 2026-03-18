/*
 * XREFs of ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x1801E0F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E0E94 (--1CDDARenderTarget@@UEAA@XZ.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::`vector deleting destructor'(CDDARenderTarget *this, char a2)
{
  CDDARenderTarget::~CDDARenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
