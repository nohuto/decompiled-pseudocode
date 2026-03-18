/*
 * XREFs of ??_ECCursorState@@UEAAPEAXI@Z @ 0x180278F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x180278C6C (--1CCursorState@@UEAA@XZ.c)
 */

CCursorState *__fastcall CCursorState::`vector deleting destructor'(CCursorState *this, char a2)
{
  CCursorState::~CCursorState(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
