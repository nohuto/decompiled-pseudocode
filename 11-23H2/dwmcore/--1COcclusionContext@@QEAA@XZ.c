/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x1800A0C9C
 * Callers:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180014D90 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180020F00 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18009FB34 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800A3828 (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E954C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F9058 (--1CDDARenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007F480 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800A12F8 (--1CLightStack@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B1A24 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B5FC8 (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  void **v2; // rdi
  __int64 v3; // r8
  void *v4; // rcx
  bool v5; // zf
  unsigned int v6; // edx
  CVisualTreePath *v7; // rcx

  operator delete(this[190]);
  operator delete(this[186]);
  operator delete(this[182]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 168));
  v2 = this + 105;
  v3 = ((_BYTE *)this[106] - (_BYTE *)this[105]) >> 4;
  if ( v3 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL,
      v3);
  v4 = *v2;
  v5 = this[105] == this + 108;
  *v2 = 0LL;
  if ( v5 )
    v4 = 0LL;
  operator delete(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 56));
  CLightStack::~CLightStack((CLightStack *)(this + 26));
  operator delete(this[24]);
  operator delete(this[20]);
  operator delete(this[14]);
  operator delete(this[6]);
  v7 = (CVisualTreePath *)this[2];
  if ( v7 )
    CVisualTreePath::`scalar deleting destructor'(v7, v6);
}
