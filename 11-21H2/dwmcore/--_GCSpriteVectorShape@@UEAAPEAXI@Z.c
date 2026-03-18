/*
 * XREFs of ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x1800430B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1800430F4 (--1CSpriteVectorShape@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSpriteVectorShape *__fastcall CSpriteVectorShape::`scalar deleting destructor'(CSpriteVectorShape *this, char a2)
{
  CSpriteVectorShape::~CSpriteVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x100uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
