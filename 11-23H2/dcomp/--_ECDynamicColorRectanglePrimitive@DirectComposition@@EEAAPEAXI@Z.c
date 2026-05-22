/*
 * XREFs of ??_ECDynamicColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x1800F7B30
 * Callers:
 *     ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z @ 0x1800F7B7C (-Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBU.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ @ 0x1800F7ACC (--1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ.c)
 */

DirectComposition::CDynamicColorRectanglePrimitive *__fastcall DirectComposition::CDynamicColorRectanglePrimitive::`vector deleting destructor'(
        DirectComposition::CDynamicColorRectanglePrimitive *this,
        char a2)
{
  DirectComposition::CDynamicColorRectanglePrimitive::~CDynamicColorRectanglePrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
