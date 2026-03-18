/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x180040600
 * Callers:
 *     <none>
 * Callees:
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x180040644 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC8uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
