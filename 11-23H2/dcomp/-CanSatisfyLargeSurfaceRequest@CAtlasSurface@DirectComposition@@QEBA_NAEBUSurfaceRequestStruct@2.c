/*
 * XREFs of ?CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2@@Z @ 0x180009380
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CAtlasSurface::CanSatisfyLargeSurfaceRequest(
        DirectComposition::CAtlasSurface *this,
        const struct DirectComposition::SurfaceRequestStruct *a2)
{
  __int64 v2; // r8
  char v3; // cl

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 16)
    && *(_DWORD *)(v2 + 160) == *(_DWORD *)a2
    && *(_QWORD *)(v2 + 152) == *(_QWORD *)((char *)a2 + 4)
    && (!*((_BYTE *)a2 + 13) || *(_QWORD *)(v2 + 200)) )
  {
    return 1;
  }
  return v3;
}
