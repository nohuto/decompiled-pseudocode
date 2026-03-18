/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x180041B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderData@@MEAA@XZ @ 0x180043E4C (--1CRenderData@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x158uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
