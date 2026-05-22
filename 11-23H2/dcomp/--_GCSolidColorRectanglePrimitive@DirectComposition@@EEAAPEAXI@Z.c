/*
 * XREFs of ??_GCSolidColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x1800FB4E0
 * Callers:
 *     ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z @ 0x1800FB540 (-Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364 (--1CPrimitive@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CSolidColorRectanglePrimitive *__fastcall DirectComposition::CSolidColorRectanglePrimitive::`scalar deleting destructor'(
        DirectComposition::CSolidColorRectanglePrimitive *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *((_QWORD *)this + 2) = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  DirectComposition::CPrimitive::~CPrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
