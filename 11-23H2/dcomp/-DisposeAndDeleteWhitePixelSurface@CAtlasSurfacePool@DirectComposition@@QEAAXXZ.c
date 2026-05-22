/*
 * XREFs of ?DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x18001EB64
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::DisposeAndDeleteWhitePixelSurface(
        DirectComposition::CAtlasSurfacePool *this)
{
  __int64 *v1; // rbx
  DirectComposition::CAtlasSurface *v2; // rcx

  v1 = (__int64 *)((char *)this + 200);
  v2 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    DirectComposition::CAtlasSurface::Dispose(v2);
    ReleaseInterface<DirectComposition::CAtlasSurface>(v1);
  }
}
