/*
 * XREFs of ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x1801C2B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18022E824 (--1CGeometryGroup@@MEAA@XZ.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::`vector deleting destructor'(CGeometryGroup *this, char a2)
{
  CGeometryGroup::~CGeometryGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
