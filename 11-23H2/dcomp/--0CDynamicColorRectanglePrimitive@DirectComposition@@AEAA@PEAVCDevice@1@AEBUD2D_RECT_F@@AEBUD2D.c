/*
 * XREFs of ??0CDynamicColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@@Z @ 0x1800F7A40
 * Callers:
 *     ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z @ 0x1800F7B7C (-Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBU.c)
 * Callees:
 *     ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448 (--0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DirectComposition::CDynamicColorRectanglePrimitive::CDynamicColorRectanglePrimitive(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  DirectComposition::CPrimitive::CPrimitive((__int64)a1, a2, a3, a4, a5, a6, a7, a8);
  *a1 = &DirectComposition::CDynamicColorRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  a1[2] = &DirectComposition::CDynamicColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  a1[29] = a9;
  if ( a9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
  return a1;
}
