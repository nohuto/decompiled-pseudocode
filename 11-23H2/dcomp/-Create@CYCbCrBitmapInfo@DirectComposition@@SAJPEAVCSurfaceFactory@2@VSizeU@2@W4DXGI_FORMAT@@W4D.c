/*
 * XREFs of ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC
 * Callers:
 *     ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100 (-Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x180037808 (--0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurfac.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z @ 0x1800FF054 (-Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CYCbCrBitmapInfo::Create(
        struct DirectComposition::CSurfaceFactory *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct DirectComposition::CYCbCrSurface *a5,
        DirectComposition::CBitmapInfo **a6)
{
  DirectComposition::CSurfaceManager *v8; // rcx
  int v9; // esi
  DirectComposition::CBitmapInfo *v10; // rax
  DirectComposition::CBitmapInfo *v11; // rdi
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+24h] [rbp-14h]
  __int16 v15; // [rsp+2Ch] [rbp-Ch]
  struct DirectComposition::CAtlasSurface *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v15 = 0;
  v8 = (DirectComposition::CSurfaceManager *)*((_QWORD *)a1 + 39);
  v13 = a3;
  v14 = a2;
  v9 = DirectComposition::CSurfaceManager::RequestLargeSurface(
         v8,
         (DirectComposition::CAtlasSurfacePool ***)&v16,
         (const struct DirectComposition::SurfaceRequestStruct *)&v13,
         1);
  if ( v9 >= 0 )
  {
    v10 = (DirectComposition::CBitmapInfo *)DefaultHeap::AllocClear(0x48uLL);
    v11 = v10;
    if ( v10 )
    {
      DirectComposition::CBitmapInfo::CBitmapInfo(v10, a1, DXGI_ALPHA_MODE_IGNORE, v16);
      *((_BYTE *)v11 + 68) &= ~1u;
      v16 = 0LL;
      *(_QWORD *)v11 = &DirectComposition::CYCbCrBitmapInfo::`vftable';
      *((_QWORD *)v11 + 7) = a2;
      CMILRefCountImpl::AddReference((DirectComposition::CBitmapInfo *)((char *)v11 + 8));
      v9 = DirectComposition::CYCbCrBitmapInfo::Initialize(v11, a5);
      if ( v9 < 0 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v11);
      else
        *a6 = v11;
    }
    else
    {
      v9 = -2147024882;
    }
  }
  ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)&v16);
  return (unsigned int)v9;
}
