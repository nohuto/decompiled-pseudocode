/*
 * XREFs of ??_ECImageSource@@UEAAPEAXI@Z @ 0x18019EE70
 * Callers:
 *     ??_ECParticleAttractor@@WFI@EAAPEAXI@Z @ 0x1801054B0 (--_ECParticleAttractor@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CImageSource *__fastcall CImageSource::`vector deleting destructor'(CImageSource *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
