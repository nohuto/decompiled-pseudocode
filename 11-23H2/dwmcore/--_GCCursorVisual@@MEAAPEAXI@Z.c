/*
 * XREFs of ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x1802284B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCursorVisual@@MEAA@XZ @ 0x180228440 (--1CCursorVisual@@MEAA@XZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(CCursorVisual *this, char a2)
{
  CCursorVisual::~CCursorVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
