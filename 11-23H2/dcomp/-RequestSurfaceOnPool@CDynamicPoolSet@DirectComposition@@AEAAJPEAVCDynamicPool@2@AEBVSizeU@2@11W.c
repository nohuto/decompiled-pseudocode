/*
 * XREFs of ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z @ 0x18001FC94
 * Callers:
 *     ?RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVCAtlasSurface@2@@Z @ 0x18001FB1C (-RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVC.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z @ 0x18001FE78 (-CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z.c)
 */

__int64 __fastcall DirectComposition::CDynamicPoolSet::RequestSurfaceOnPool(
        DirectComposition::CDynamicPoolSet *this,
        DirectComposition::CAtlasSurfacePool **a2,
        const struct DirectComposition::SizeU *a3,
        const struct DirectComposition::SizeU *a4,
        const struct DirectComposition::SizeU *a5,
        enum DXGI_FORMAT a6,
        bool a7,
        bool a8,
        bool a9,
        struct DirectComposition::CAtlasSurface **a10)
{
  const struct DirectComposition::SizeU *v12; // r8
  const struct DirectComposition::SizeU *v13; // r9
  __int64 v14; // r10
  int Surface; // r11d

  *a10 = 0LL;
  if ( DirectComposition::CAtlasSurfacePool::IsAvailable(a2[4]) == a9
    && *(_DWORD *)(v14 + 160) == a6
    && ((*(_BYTE *)(v14 + 172) & 4) != 0) == a7
    && a8 == (*(_QWORD *)(v14 + 200) != 0LL) )
  {
    Surface = DirectComposition::CDynamicPool::CreateSurface((DirectComposition::CDynamicPool *)a2, a10, v12, v13, a5);
    if ( Surface >= 0 )
    {
      if ( *a10 )
        *((_QWORD *)this + 6) = a2;
    }
  }
  return (unsigned int)Surface;
}
