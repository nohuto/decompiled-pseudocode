/*
 * XREFs of ??_GCGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x180030D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x180030D60 (--1CGeneratedVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CGeneratedVirtualSurfacePrimitive *__fastcall DirectComposition::CGeneratedVirtualSurfacePrimitive::`scalar deleting destructor'(
        DirectComposition::CGeneratedVirtualSurfacePrimitive *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  DirectComposition::CGeneratedVirtualSurfacePrimitive::~CGeneratedVirtualSurfacePrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x128uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
