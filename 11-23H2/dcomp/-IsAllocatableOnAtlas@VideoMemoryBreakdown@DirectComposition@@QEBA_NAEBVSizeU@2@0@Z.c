/*
 * XREFs of ?IsAllocatableOnAtlas@VideoMemoryBreakdown@DirectComposition@@QEBA_NAEBVSizeU@2@0@Z @ 0x18001E8F4
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::VideoMemoryBreakdown::IsAllocatableOnAtlas(
        DirectComposition::VideoMemoryBreakdown *this,
        const struct DirectComposition::SizeU *a2,
        const struct DirectComposition::SizeU *a3)
{
  return *(_DWORD *)a2 <= *(_DWORD *)a3 >> 1 && *((_DWORD *)a2 + 1) <= *((_DWORD *)a3 + 1)
      || *((_DWORD *)a2 + 1) <= *((_DWORD *)a3 + 1) >> 1 && *(_DWORD *)a2 <= *(_DWORD *)a3;
}
