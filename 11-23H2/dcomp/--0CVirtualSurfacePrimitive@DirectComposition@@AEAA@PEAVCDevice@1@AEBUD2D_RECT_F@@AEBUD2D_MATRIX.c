/*
 * XREFs of ??0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@1@4_N@Z @ 0x18003B3F4
 * Callers:
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 * Callees:
 *     ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448 (--0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfacePrimitive::CVirtualSurfacePrimitive(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  DirectComposition::CPrimitive::CPrimitive(a1, a2, a3, a4, a5, a6, a7, a8);
  *(_QWORD *)a1 = &DirectComposition::CVirtualSurfacePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CVirtualSurfacePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  *(_BYTE *)(a1 + 272) = a11;
  if ( a10 )
  {
    *(_OWORD *)(a1 + 232) = *(_OWORD *)a10;
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a10 + 16);
  }
  else
  {
    *(_OWORD *)(a1 + 232) = _xmm;
    *(_QWORD *)(a1 + 248) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  *(_QWORD *)(a1 + 256) = a9;
  if ( !a11 && a9 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a9 + 8));
  return a1;
}
