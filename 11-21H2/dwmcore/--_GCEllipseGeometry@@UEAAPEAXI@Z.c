/*
 * XREFs of ??_GCEllipseGeometry@@UEAAPEAXI@Z @ 0x1800CF640
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800CF7BC (--1CGeometry@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CEllipseGeometry *__fastcall CEllipseGeometry::`scalar deleting destructor'(CEllipseGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
