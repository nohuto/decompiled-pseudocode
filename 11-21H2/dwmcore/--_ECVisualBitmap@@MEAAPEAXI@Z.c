/*
 * XREFs of ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x18019FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x180208AC0 (--1CVisualBitmap@@MEAA@XZ.c)
 */

CVisualBitmap *__fastcall CVisualBitmap::`vector deleting destructor'(CVisualBitmap *this, char a2)
{
  CVisualBitmap::~CVisualBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
