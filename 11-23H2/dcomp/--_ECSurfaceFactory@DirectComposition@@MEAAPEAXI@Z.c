/*
 * XREFs of ??_ECSurfaceFactory@DirectComposition@@MEAAPEAXI@Z @ 0x18001B030
 * Callers:
 *     ??_ECSurfaceFactory@DirectComposition@@O7EAAPEAXI@Z @ 0x1800A9130 (--_ECSurfaceFactory@DirectComposition@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CSurfaceFactory *__fastcall DirectComposition::CSurfaceFactory::`vector deleting destructor'(
        DirectComposition::CSurfaceFactory *this,
        char a2)
{
  DirectComposition::CSurfaceFactory::~CSurfaceFactory(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x168uLL);
    else
      operator delete(this);
  }
  return this;
}
