/*
 * XREFs of ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4
 * Callers:
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 * Callees:
 *     ??_GCTileClump@DirectComposition@@MEAAPEAXI@Z @ 0x180036E70 (--_GCTileClump@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??0CTileClump@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@PEAVCVirtualSurface@1@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037330 (--0CTileClump@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@PEAVCVirtualSurface@1@AEBV-$TMilRect.c)
 *     ?Initialize@CTileClump@DirectComposition@@IEAAJXZ @ 0x1800373F0 (-Initialize@CTileClump@DirectComposition@@IEAAJXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CTileClump::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DirectComposition::CTileClump **a4)
{
  void *v8; // rax
  DirectComposition::CTileClump *v9; // rax
  DirectComposition::CTileClump *v10; // rbx
  int v11; // edi

  v8 = DefaultHeap::AllocClear(0x1F0uLL);
  if ( v8
    && (v9 = (DirectComposition::CTileClump *)DirectComposition::CTileClump::CTileClump(v8, a1, a2, a3),
        (v10 = v9) != 0LL) )
  {
    v11 = DirectComposition::CTileClump::Initialize(v9);
    if ( v11 < 0 )
    {
      DirectComposition::CTileClump::`scalar deleting destructor'(v10, 1);
    }
    else
    {
      CMILRefCountImpl::AddReference((DirectComposition::CTileClump *)((char *)v10 + 8));
      *a4 = v10;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
