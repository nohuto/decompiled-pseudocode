/*
 * XREFs of ?Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ @ 0x18003B4B0
 * Callers:
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 * Callees:
 *     ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ @ 0x18003B4F0 (-Initialize@CPrimitive@DirectComposition@@MEAAJXZ.c)
 *     ?AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z @ 0x18003B508 (-AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfacePrimitive::Initialize(
        DirectComposition::CVirtualSurfacePrimitive *this)
{
  __int64 result; // rax

  result = DirectComposition::CPrimitive::Initialize(this);
  if ( (int)result >= 0 )
    return DirectComposition::CDirtyNotifier::AddListener(
             (DirectComposition::CDirtyNotifier *)(*((_QWORD *)this + 32) + 16LL),
             (struct DirectComposition::CDirtyListener *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)));
  return result;
}
