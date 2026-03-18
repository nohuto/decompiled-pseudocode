/*
 * XREFs of ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x1801C2D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800E5154 (--1CGeometry@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

struct CResource **__fastcall CLineGeometry::`vector deleting destructor'(struct CResource **this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
