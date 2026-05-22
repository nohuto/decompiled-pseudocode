/*
 * XREFs of ??_ECScratchSurface@DirectComposition@@EEAAPEAXI@Z @ 0x1800FAD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CScratchSurface@DirectComposition@@EEAA@XZ @ 0x1800FAD34 (--1CScratchSurface@DirectComposition@@EEAA@XZ.c)
 */

DirectComposition::CScratchSurface *__fastcall DirectComposition::CScratchSurface::`vector deleting destructor'(
        DirectComposition::CScratchSurface *this,
        char a2)
{
  DirectComposition::CScratchSurface::~CScratchSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
