/*
 * XREFs of ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 *     ?Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180037B0C (-Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z.c)
 * Callees:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::RequestSurface(
        DirectComposition::CBitmapInfoFront *this,
        int a2,
        int a3,
        DirectComposition::CAtlasSurfacePool ***a4)
{
  char v6; // r8
  __int64 v7; // rax
  enum DXGI_FORMAT v8; // edx
  DirectComposition::CSurfaceManager *v9; // rcx
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rax
  _DWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-Ch]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v6 = *((_BYTE *)this + 112);
  if ( (v6 & 0x10) != 0 )
  {
    v11 = *((_DWORD *)this + 13);
    v14 = 0;
    v13[0] = v11;
    v12 = *((_QWORD *)this + 3);
    v13[1] = a2;
    v13[2] = a3;
    LODWORD(result) = DirectComposition::CSurfaceManager::RequestLargeSurface(
                        *(DirectComposition::CSurfaceManager **)(v12 + 312),
                        a4,
                        (const struct DirectComposition::SurfaceRequestStruct *)v13,
                        0);
  }
  else
  {
    v7 = *((_QWORD *)this + 3);
    v15 = a2;
    v8 = *((_DWORD *)this + 13);
    v9 = *(DirectComposition::CSurfaceManager **)(v7 + 312);
    v16 = a3;
    LODWORD(result) = DirectComposition::CSurfaceManager::RequestSurface(
                        v9,
                        v8,
                        (v6 & 4) != 0,
                        (const struct DirectComposition::SizeU *)&v15,
                        (struct DirectComposition::CAtlasSurface **)a4);
  }
  if ( (int)result >= 0 )
    (*a4)[12] = 0LL;
  return (unsigned int)result;
}
