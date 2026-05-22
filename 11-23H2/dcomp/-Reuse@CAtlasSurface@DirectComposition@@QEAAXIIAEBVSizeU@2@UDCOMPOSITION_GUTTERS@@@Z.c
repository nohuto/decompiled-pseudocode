/*
 * XREFs of ?Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z @ 0x18000EB4C
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CAtlasSurface::Reuse(__int64 a1, int a2, int a3, _QWORD *a4, unsigned int a5)
{
  *(_DWORD *)(a1 + 76) = a3;
  *(_DWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = *a4;
  *(_DWORD *)(a1 + 88) = a5;
  *(_QWORD *)(a1 + 104) = (*(_DWORD *)(a1 + 84) + ((a5 >> 2) & 1) + ((a5 >> 3) & 1))
                        * (*(_DWORD *)(a1 + 80) + ((a5 >> 1) & 1) + (a5 & 1));
  DirectComposition::CAtlasSurface::Reuse((DirectComposition::CAtlasSurface *)(a1 + 16));
}
