/*
 * XREFs of ?FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800EA5C8
 * Callers:
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888 (-FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ.c)
 * Callees:
 *     ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z @ 0x1800840A8 (-FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z.c)
 */

void __fastcall DirectComposition::CBitmapInfoBack::FlushD2DRendering(DirectComposition::CBitmapInfoBack *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 41);
  if ( v1 )
  {
    DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
      *(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 2) + 64LL),
      v1);
    *((_DWORD *)this + 41) = 0;
  }
}
