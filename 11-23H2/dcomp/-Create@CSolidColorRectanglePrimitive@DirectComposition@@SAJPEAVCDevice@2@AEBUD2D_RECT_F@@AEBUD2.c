/*
 * XREFs of ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z @ 0x1800FB540
 * Callers:
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFE70 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_ea_1800EFE70.c)
 * Callees:
 *     ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ @ 0x18003B4F0 (-Initialize@CPrimitive@DirectComposition@@MEAAJXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CSolidColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800FB45C (--0CSolidColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_M.c)
 *     ??_GCSolidColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z @ 0x1800FB4E0 (--_GCSolidColorRectanglePrimitive@DirectComposition@@EEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CSolidColorRectanglePrimitive::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        float a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _OWORD *a8,
        DirectComposition::CPrimitive **a9)
{
  LPVOID v12; // rax
  DirectComposition::CPrimitive *v13; // rax
  DirectComposition::CPrimitive *v14; // rdi
  int v15; // ebx

  v12 = DefaultHeap::AllocClear(0xF8uLL);
  if ( v12
    && (v13 = (DirectComposition::CPrimitive *)DirectComposition::CSolidColorRectanglePrimitive::CSolidColorRectanglePrimitive(
                                                 (__int64)v12,
                                                 a1,
                                                 a2,
                                                 a3,
                                                 SLODWORD(a4),
                                                 a5,
                                                 a6,
                                                 a7,
                                                 a8),
        (v14 = v13) != 0LL) )
  {
    v15 = DirectComposition::CPrimitive::Initialize(v13);
    if ( v15 < 0 )
    {
      DirectComposition::CSolidColorRectanglePrimitive::`scalar deleting destructor'(v14, 1);
    }
    else
    {
      CMILRefCountImpl::AddReference((DirectComposition::CPrimitive *)((char *)v14 + 8));
      *a9 = v14;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
