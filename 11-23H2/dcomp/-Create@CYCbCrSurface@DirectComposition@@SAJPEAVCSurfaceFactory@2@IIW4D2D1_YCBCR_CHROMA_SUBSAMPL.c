/*
 * XREFs of ?Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAV12@@Z @ 0x1800FEDB4
 * Callers:
 *     ?CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800FB854 (-CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@P.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectComposition@@@Z @ 0x1800FB6B0 (--$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectCompositio.c)
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::Create(
        struct DirectComposition::CSurfaceFactory *this,
        unsigned int a2,
        unsigned int a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4,
        struct DirectComposition::CYCbCrSurface **a5)
{
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // edi
  volatile signed __int32 *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  if ( (unsigned int)(a4 - 1) > 3 || !a2 || !a3 )
  {
    v11 = -2147024809;
    goto LABEL_11;
  }
  v9 = (volatile signed __int32 *)DefaultHeap::AllocClear(0x50uLL);
  v10 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
LABEL_11:
    ReleaseInterface<DirectComposition::CYCbCrSurface>(&v13);
    v10 = v13;
    goto LABEL_12;
  }
  *((_DWORD *)v9 + 2) = 0;
  *(_QWORD *)v9 = &DirectComposition::CYCbCrSurface::`vftable'{for `CMILCOMBaseT<IDCompositionYCbCrSurfaceInternal>'};
  *((_QWORD *)v9 + 2) = &DirectComposition::CYCbCrSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
  *((_QWORD *)v9 + 3) = this;
  if ( this )
    DirectComposition::CSurfaceFactory::AddRef(this);
  v13 = v10;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 2));
  v11 = DirectComposition::CYCbCrSurface::Initialize((DirectComposition::CYCbCrSurface *)v10, a2, a3, a4);
  if ( v11 < 0 )
    goto LABEL_11;
LABEL_12:
  *a5 = (struct DirectComposition::CYCbCrSurface *)v10;
  return (unsigned int)v11;
}
