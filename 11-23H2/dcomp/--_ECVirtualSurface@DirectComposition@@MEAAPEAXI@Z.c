/*
 * XREFs of ??_ECVirtualSurface@DirectComposition@@MEAAPEAXI@Z @ 0x18003C4C0
 * Callers:
 *     ??_ECVirtualSurface@DirectComposition@@OBA@EAAPEAXI@Z @ 0x1800A91B0 (--_ECVirtualSurface@DirectComposition@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CVirtualSurface *__fastcall DirectComposition::CVirtualSurface::`vector deleting destructor'(
        DirectComposition::CVirtualSurface *this,
        char a2)
{
  DirectComposition::CVirtualSurface::~CVirtualSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x138uLL);
    else
      operator delete(this);
  }
  return this;
}
