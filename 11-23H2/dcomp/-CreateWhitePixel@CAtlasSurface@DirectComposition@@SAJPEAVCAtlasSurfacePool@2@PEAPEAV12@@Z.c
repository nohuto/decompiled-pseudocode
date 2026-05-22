/*
 * XREFs of ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ @ 0x180035FCC (-CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284 (-NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ??0CAtlasSurface@DirectComposition@@AEAA@PEAVCAtlasSurfacePool@1@IIAEBVSizeU@1@UDCOMPOSITION_GUTTERS@@@Z @ 0x18001F56C (--0CAtlasSurface@DirectComposition@@AEAA@PEAVCAtlasSurfacePool@1@IIAEBVSizeU@1@UDCOMPOSITION_GUT.c)
 *     ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ @ 0x180021834 (-Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::CreateWhitePixel(
        struct DirectComposition::CAtlasSurfacePool *this,
        struct DirectComposition::CAtlasSurface **a2)
{
  void *v4; // rax
  __int64 v5; // rax
  DirectComposition::CAtlasSurface *v6; // rbx
  int v7; // esi
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+64h] [rbp+1Ch]

  v9 = 1;
  v10 = 1;
  v4 = DefaultHeap::AllocClear(0x70uLL);
  if ( v4
    && (v5 = DirectComposition::CAtlasSurface::CAtlasSurface(v4, this, 0LL, 0LL, &v9, 0),
        (v6 = (DirectComposition::CAtlasSurface *)v5) != 0LL) )
  {
    *((_QWORD *)this + 25) = v5;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 8));
    v7 = DirectComposition::CAtlasSurface::Initialize(v6);
    if ( v7 < 0 )
    {
      ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)this + 25);
      CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
    }
    else
    {
      DirectComposition::CAtlasSurfacePool::PaintWhitePixel(this);
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    DirectComposition::CAtlasSurfacePool::NotifyDisposeSurface(this, 0LL);
  }
  return (unsigned int)v7;
}
