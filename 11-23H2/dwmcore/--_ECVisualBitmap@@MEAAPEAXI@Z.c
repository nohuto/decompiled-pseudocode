/*
 * XREFs of ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x1801C38D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x18021E9CC (--1CVisualBitmap@@MEAA@XZ.c)
 */

CVisualBitmap *__fastcall CVisualBitmap::`vector deleting destructor'(CVisualBitmap *this, char a2)
{
  CVisualBitmap::~CVisualBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
