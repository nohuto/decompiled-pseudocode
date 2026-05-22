/*
 * XREFs of ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C
 * Callers:
 *     ?Initialize@CTileClump@DirectComposition@@IEAAJXZ @ 0x1800373F0 (-Initialize@CTileClump@DirectComposition@@IEAAJXZ.c)
 *     ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z @ 0x1800EB7A0 (-Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_.c)
 * Callees:
 *     ??0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_N@Z @ 0x180037538 (--0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_.c)
 *     ?Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180037B0C (-Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        enum D2D1_EXTEND_MODE *a6,
        struct IDCompositionSurface *a7,
        bool a8,
        struct DirectComposition::CBitmapInfoFront **a9)
{
  DirectComposition::CBitmapInfoFront *v13; // rax
  __int64 v14; // rax
  DirectComposition::CBitmapInfoFront *v15; // rbx
  int v16; // edi

  v13 = (DirectComposition::CBitmapInfoFront *)DefaultHeap::AllocClear(0xC8uLL);
  if ( v13
    && (v14 = DirectComposition::CBitmapInfoFront::CBitmapInfoFront(v13, a1, a2, a3, a4, a5, a6, a7, a8),
        (v15 = (DirectComposition::CBitmapInfoFront *)v14) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
    v16 = DirectComposition::CBitmapInfoFront::Initialize(v15, a7);
    if ( v16 < 0 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v15);
    else
      *a9 = v15;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v16;
}
