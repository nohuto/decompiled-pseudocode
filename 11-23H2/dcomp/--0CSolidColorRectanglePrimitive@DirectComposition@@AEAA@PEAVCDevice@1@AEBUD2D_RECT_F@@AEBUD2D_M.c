/*
 * XREFs of ??0CSolidColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800FB45C
 * Callers:
 *     ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z @ 0x1800FB540 (-Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2.c)
 * Callees:
 *     ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448 (--0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVC.c)
 */

__int64 __fastcall DirectComposition::CSolidColorRectanglePrimitive::CSolidColorRectanglePrimitive(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _OWORD *a9)
{
  __int64 result; // rax

  DirectComposition::CPrimitive::CPrimitive(a1, a2, a3, a4, a5, a6, a7, a8);
  *(_QWORD *)a1 = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  result = a1;
  *(_OWORD *)(a1 + 232) = *a9;
  return result;
}
