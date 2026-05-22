/*
 * XREFs of ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ @ 0x18003B4F0
 * Callers:
 *     ?Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ @ 0x18000CD60 (-Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ @ 0x18003B4B0 (-Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z @ 0x1800F7B7C (-Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBU.c)
 *     ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z @ 0x1800FB540 (-Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitive::Initialize(DirectComposition::CPrimitive *this)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *((_QWORD *)this + 13);
  result = 0LL;
  if ( v1 )
    return DirectComposition::CDirtyNotifier::AddListener(
             (DirectComposition::CDirtyNotifier *)(v1 + 56),
             (struct DirectComposition::CDirtyListener *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)));
  return result;
}
