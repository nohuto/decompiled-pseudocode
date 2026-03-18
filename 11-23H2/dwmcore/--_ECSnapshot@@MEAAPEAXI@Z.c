/*
 * XREFs of ??_ECSnapshot@@MEAAPEAXI@Z @ 0x1801C36D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSnapshot@@MEAA@XZ @ 0x1801C1AAC (--1CSnapshot@@MEAA@XZ.c)
 */

CSnapshot *__fastcall CSnapshot::`vector deleting destructor'(CSnapshot *this, char a2)
{
  CSnapshot::~CSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
