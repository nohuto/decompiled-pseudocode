/*
 * XREFs of ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x180248900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180248690 (--1CProjectedShadow@@MEAA@XZ.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::`vector deleting destructor'(CProjectedShadow *this, char a2)
{
  CProjectedShadow::~CProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
