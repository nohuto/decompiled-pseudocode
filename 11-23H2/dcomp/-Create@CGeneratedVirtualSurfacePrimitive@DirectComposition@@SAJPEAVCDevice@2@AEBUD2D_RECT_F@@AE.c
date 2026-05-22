/*
 * XREFs of ?Create@CGeneratedVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180030D90
 * Callers:
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 * Callees:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CGeneratedVirtualSurfacePrimitive::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        _QWORD *a11)
{
  unsigned int v14; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdi

  v14 = 0;
  ProcessHeap = GetProcessHeap();
  v16 = HeapAlloc(ProcessHeap, 8u, 0x128uLL);
  v17 = v16;
  if ( v16 )
  {
    DirectComposition::CTexturedRectanglePrimitive::CTexturedRectanglePrimitive(
      v16,
      a1,
      a2,
      a3,
      LODWORD(a4),
      a5,
      a6,
      a7,
      a8,
      a9,
      0,
      a10);
    *v17 = &DirectComposition::CGeneratedVirtualSurfacePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
    v17[2] = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
    (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
    *a11 = v17;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v14;
}
