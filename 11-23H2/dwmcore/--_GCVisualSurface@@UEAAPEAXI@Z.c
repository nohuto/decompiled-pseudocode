/*
 * XREFs of ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x1800A2700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CVisualSurface@@UEAA@XZ @ 0x1800A2574 (--1CVisualSurface@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CVisualSurface *__fastcall CVisualSurface::`scalar deleting destructor'(CVisualSurface *this, char a2)
{
  CVisualSurface::~CVisualSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD0uLL);
    else
      operator delete(this);
  }
  return this;
}
