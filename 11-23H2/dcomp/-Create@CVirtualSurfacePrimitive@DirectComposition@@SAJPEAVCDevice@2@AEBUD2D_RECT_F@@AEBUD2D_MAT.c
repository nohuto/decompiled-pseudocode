/*
 * XREFs of ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304
 * Callers:
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFCD0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCo.c)
 * Callees:
 *     ??_GCVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x18003ABA0 (--_GCVirtualSurfacePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 *     ??0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@1@4_N@Z @ 0x18003B3F4 (--0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX.c)
 *     ?Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ @ 0x18003B4B0 (-Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfacePrimitive::Create(
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
        DirectComposition::CVirtualSurfacePrimitive **a11)
{
  void *v14; // r10
  DirectComposition::CVirtualSurfacePrimitive *v15; // rax
  DirectComposition::CVirtualSurfacePrimitive *v16; // rdi
  int v17; // ebx

  v14 = DefaultHeap::AllocClear(0x118uLL);
  if ( v14
    && (v15 = (DirectComposition::CVirtualSurfacePrimitive *)DirectComposition::CVirtualSurfacePrimitive::CVirtualSurfacePrimitive(
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
                                                               a10),
        (v16 = v15) != 0LL) )
  {
    v17 = DirectComposition::CVirtualSurfacePrimitive::Initialize(v15);
    if ( v17 < 0 )
    {
      DirectComposition::CVirtualSurfacePrimitive::`scalar deleting destructor'(v16, 1);
    }
    else
    {
      CMILRefCountImpl::AddReference((DirectComposition::CVirtualSurfacePrimitive *)((char *)v16 + 8));
      *a11 = v16;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
