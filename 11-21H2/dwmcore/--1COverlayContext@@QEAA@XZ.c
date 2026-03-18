/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x1800C69B8
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x18019DB6C (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C6A88 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext *this)
{
  CResource *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx
  COverlayContext *v5; // rcx

  COverlayContext::Reset(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 1406);
  FastRegion::CRegion::FreeMemory((COverlayContext *)((char *)this + 11176));
  CDirectFlipInfo::~CDirectFlipInfo((COverlayContext *)((char *)this + 11040));
  v2 = (CResource *)*((_QWORD *)this + 1379);
  if ( v2 )
    CResource::InternalRelease(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 913);
  v3 = (COverlayContext *)*((_QWORD *)this + 913);
  *((_QWORD *)this + 913) = 0LL;
  if ( v3 == (COverlayContext *)((char *)this + 7328) )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 462);
  v4 = (COverlayContext *)*((_QWORD *)this + 462);
  *((_QWORD *)this + 462) = 0LL;
  if ( v4 == (COverlayContext *)((char *)this + 3720) )
    v4 = 0LL;
  DefaultHeap::Free(v4);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  v5 = (COverlayContext *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v5 == (COverlayContext *)((char *)this + 112) )
    v5 = 0LL;
  DefaultHeap::Free(v5);
}
