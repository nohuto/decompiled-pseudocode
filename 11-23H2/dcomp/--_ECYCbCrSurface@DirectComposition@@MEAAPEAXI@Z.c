/*
 * XREFs of ??_ECYCbCrSurface@DirectComposition@@MEAAPEAXI@Z @ 0x1800FEC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C (--1CYCbCrSurface@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CYCbCrSurface *__fastcall DirectComposition::CYCbCrSurface::`vector deleting destructor'(
        DirectComposition::CYCbCrSurface *this,
        char a2)
{
  DirectComposition::CYCbCrSurface::~CYCbCrSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
