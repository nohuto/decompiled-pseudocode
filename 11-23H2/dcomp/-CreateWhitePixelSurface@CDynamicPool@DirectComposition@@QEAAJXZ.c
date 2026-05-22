/*
 * XREFs of ?CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ @ 0x180035FCC
 * Callers:
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 * Callees:
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z @ 0x18001FF98 (-AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CDynamicPool::CreateWhitePixelSurface(
        struct DirectComposition::CAtlasSurfacePool **this)
{
  int v2; // r8d
  struct DirectComposition::CAtlasSurface *v3; // rax
  struct DirectComposition::CAtlasNode *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]
  struct DirectComposition::CAtlasNode *v10; // [rsp+40h] [rbp+18h] BYREF
  struct DirectComposition::CAtlasSurface *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v8 = 1;
  v9 = 1;
  v2 = DirectComposition::CDynamicPool::AllocAtlasNode(
         (DirectComposition::CDynamicPool *)this,
         (const struct DirectComposition::SizeU *)&v8,
         &v10);
  v3 = 0LL;
  v11 = 0LL;
  if ( v2 >= 0 )
  {
    v4 = v10;
    if ( v10 )
    {
      v2 = DirectComposition::CAtlasSurface::CreateWhitePixel(this[4], &v11);
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = v11;
    }
    if ( v3 )
    {
      *((_QWORD *)v4 + 2) = v3;
      v5 = *((_DWORD *)this + 14);
      if ( v5 <= *(_DWORD *)v4 + *((_DWORD *)v4 + 14) )
        v5 = *(_DWORD *)v4 + *((_DWORD *)v4 + 14);
      *((_DWORD *)this + 14) = v5;
      v6 = *((_DWORD *)this + 15);
      if ( v6 <= *((_DWORD *)v4 + 1) + *((_DWORD *)v4 + 15) )
        v6 = *((_DWORD *)v4 + 1) + *((_DWORD *)v4 + 15);
      *((_DWORD *)this + 15) = v6;
    }
  }
  return (unsigned int)v2;
}
