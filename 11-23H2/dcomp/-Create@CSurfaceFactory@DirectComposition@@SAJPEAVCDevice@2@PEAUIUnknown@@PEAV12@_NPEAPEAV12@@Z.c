/*
 * XREFs of ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554
 * Callers:
 *     ?CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x18001B4B0 (-CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceF.c)
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z @ 0x18001B5E8 (--0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z.c)
 *     ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC (-Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::Create(
        struct DirectComposition::CDevice *a1,
        struct IUnknown *a2,
        struct DirectComposition::CSurfaceFactory *a3,
        bool a4,
        struct DirectComposition::CSurfaceFactory **a5)
{
  DirectComposition::CSurfaceFactory *v9; // rax
  __int64 v10; // rax
  DirectComposition::CSurfaceFactory *v11; // rbx
  int v12; // edi

  v9 = (DirectComposition::CSurfaceFactory *)DefaultHeap::AllocClear(0x168uLL);
  if ( v9
    && (v10 = DirectComposition::CSurfaceFactory::CSurfaceFactory(v9, a1, a4),
        (v11 = (DirectComposition::CSurfaceFactory *)v10) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 16));
    v12 = DirectComposition::CSurfaceFactory::Initialize(v11, a2, a3);
    if ( v12 < 0 )
      CMILRefCountBaseT<IUnknown>::InternalRelease((char *)v11 + 8);
    else
      *a5 = v11;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
