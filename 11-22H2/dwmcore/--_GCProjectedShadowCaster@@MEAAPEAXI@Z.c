/*
 * XREFs of ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x180004390
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180007640 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CProjectedShadowCaster *__fastcall CProjectedShadowCaster::`scalar deleting destructor'(
        CProjectedShadowCaster *this,
        char a2)
{
  CProjectedShadowCaster::~CProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x88uLL);
    else
      operator delete(this);
  }
  return this;
}
