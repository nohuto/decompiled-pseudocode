/*
 * XREFs of ?Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180013578
 * Callers:
 *     ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438 (-EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFCD0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCo.c)
 * Callees:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTexturedRectanglePrimitive::Create(
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
        __int64 **a11)
{
  void *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rbx
  int v17; // edi
  __int64 v18; // rax
  char v21; // [rsp+58h] [rbp-20h]

  v14 = DefaultHeap::AllocClear(0x128uLL);
  if ( v14
    && (v21 = 1,
        v15 = DirectComposition::CTexturedRectanglePrimitive::CTexturedRectanglePrimitive(
                v14,
                a1,
                a2,
                a3,
                LODWORD(a4),
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                v21),
        (v16 = (__int64 *)v15) != 0LL) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 136LL))(v15);
    v18 = *v16;
    if ( v17 < 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v18 + 48))(v16, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *))(v18 + 8))(v16);
      *a11 = v16;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
