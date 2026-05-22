/*
 * XREFs of ??_EPenInterface@@UEAAPEAXI@Z @ 0x1801A6AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x1801A69F8 (--1PenInterface@@UEAA@XZ.c)
 */

PenInterface *__fastcall PenInterface::`vector deleting destructor'(PenInterface *this, char a2)
{
  PenInterface::~PenInterface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
