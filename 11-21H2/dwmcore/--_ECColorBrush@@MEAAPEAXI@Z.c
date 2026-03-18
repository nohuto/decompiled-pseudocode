/*
 * XREFs of ??_ECColorBrush@@MEAAPEAXI@Z @ 0x180040CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrush@@MEAA@XZ @ 0x180042A74 (--1CBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CBrush::~CBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x90uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
