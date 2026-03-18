/*
 * XREFs of ??_ECManipulationFrame@@EEAAPEAXI@Z @ 0x1801A3030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CManipulationFrame *__fastcall CManipulationFrame::`vector deleting destructor'(CManipulationFrame *this, char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
