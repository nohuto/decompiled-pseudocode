/*
 * XREFs of ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708
 * Callers:
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 * Callees:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ?DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FDC0 (-DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUT.c)
 *     ??0CBitmapInfoBack@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x1800377B8 (--0CBitmapInfoBack@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSu.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::CreateInPlaceUpdate(
        __int64 a1,
        const struct tagRECT *a2,
        char a3,
        int a4,
        DirectComposition::CBitmapInfoFront *a5,
        struct DCOMPOSITION_GUTTERS *a6)
{
  int v6; // ebx
  struct DirectComposition::CAtlasSurface **v7; // rsi
  DirectComposition::CBitmapInfoBack *v12; // rax
  DirectComposition::CBitmapInfoBack *v13; // rax
  DirectComposition::CBitmapInfoBack *v14; // rdi
  int v16; // edx
  struct DirectComposition::CAtlasSurface *v17; // rcx

  v6 = 0;
  v7 = (struct DirectComposition::CAtlasSurface **)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v6 = DirectComposition::CBitmapInfoFront::RequestSurface(
           (DirectComposition::CBitmapInfoFront *)a1,
           *(_DWORD *)(a1 + 44),
           *(_DWORD *)(a1 + 48),
           (DirectComposition::CAtlasSurfacePool ***)(a1 + 16));
    if ( v6 < 0 )
      return (unsigned int)v6;
    v17 = *v7;
    *((_QWORD *)*v7 + 12) = a1;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      McTemplateU0xxqdd_EventWriteTransfer((_DWORD)v17, v16, (unsigned int)*v7, a4, a3);
  }
  v12 = (DirectComposition::CBitmapInfoBack *)DefaultHeap::AllocClear(0xA8uLL);
  if ( v12
    && (v13 = (DirectComposition::CBitmapInfoBack *)DirectComposition::CBitmapInfoBack::CBitmapInfoBack(
                                                      v12,
                                                      *(struct DirectComposition::CSurfaceFactory **)(a1 + 24),
                                                      (enum DXGI_ALPHA_MODE)*(_DWORD *)(a1 + 40),
                                                      *v7),
        (v14 = v13) != 0LL) )
  {
    DirectComposition::CBitmapInfoBack::DirtyGuttersForUpdate(v13, a2, a6);
    CMILRefCountImpl::AddReference((DirectComposition::CBitmapInfoBack *)((char *)v14 + 8));
    *(_QWORD *)a5 = v14;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
