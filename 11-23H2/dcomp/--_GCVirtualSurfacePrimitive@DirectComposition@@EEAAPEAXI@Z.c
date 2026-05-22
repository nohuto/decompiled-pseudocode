/*
 * XREFs of ??_GCVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x18003ABA0
 * Callers:
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x18003ABE4 (--1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CVirtualSurfacePrimitive *__fastcall DirectComposition::CVirtualSurfacePrimitive::`scalar deleting destructor'(
        DirectComposition::CVirtualSurfacePrimitive *this,
        char a2)
{
  DirectComposition::CVirtualSurfacePrimitive::~CVirtualSurfacePrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x118uLL);
    else
      operator delete(this);
  }
  return this;
}
