/*
 * XREFs of ??_ECImageSource@@UEAAPEAXI@Z @ 0x1801C2B80
 * Callers:
 *     ??_ECParticleAttractor@@WFI@EAAPEAXI@Z @ 0x18011B990 (--_ECParticleAttractor@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800831F0 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CImageSource *__fastcall CImageSource::`vector deleting destructor'(CImageSource *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
