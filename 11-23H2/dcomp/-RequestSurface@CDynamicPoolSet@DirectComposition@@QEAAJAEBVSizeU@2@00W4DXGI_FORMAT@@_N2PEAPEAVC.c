/*
 * XREFs of ?RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVCAtlasSurface@2@@Z @ 0x18001FB1C
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z @ 0x18001FC94 (-RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W.c)
 */

__int64 __fastcall DirectComposition::CDynamicPoolSet::RequestSurface(
        DirectComposition::CDynamicPoolSet *this,
        const struct DirectComposition::SizeU *a2,
        const struct DirectComposition::SizeU *a3,
        const struct DirectComposition::SizeU *a4,
        enum DXGI_FORMAT a5,
        bool a6,
        bool a7,
        struct DirectComposition::CAtlasSurface **a8)
{
  int v12; // r10d
  unsigned int v13; // edi
  struct DirectComposition::CAtlasSurface *v14; // r11
  struct DirectComposition::CDynamicPool *v15; // rcx
  struct DirectComposition::CAtlasSurface *v16; // rdx
  int v17; // eax
  DirectComposition::CDynamicPoolSet *v18; // rax
  struct DirectComposition::CDynamicPool *v19; // rbx
  int v20; // eax
  DirectComposition::CDynamicPoolSet *v21; // rax

  v12 = 0;
  v13 = 0;
  *a8 = 0LL;
  v14 = 0LL;
  do
  {
    if ( v14 || v13 >= 2 )
      break;
    v15 = (struct DirectComposition::CDynamicPool *)*((_QWORD *)this + 6);
    v16 = 0LL;
    if ( v15 )
    {
      v17 = DirectComposition::CDynamicPoolSet::RequestSurfaceOnPool(this, v15, a2, a3, a4, a5, a6, a7, v13 == 1, a8);
      v14 = *a8;
      v12 = v17;
      v15 = (struct DirectComposition::CDynamicPool *)*((_QWORD *)this + 6);
      v16 = *a8;
    }
    v18 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)this + 5);
    v19 = 0LL;
    if ( v18 != (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
      v19 = (DirectComposition::CDynamicPoolSet *)((char *)v18 - 16);
    while ( v12 >= 0 && !v16 && v19 )
    {
      v16 = 0LL;
      if ( v19 != v15 )
      {
        v20 = DirectComposition::CDynamicPoolSet::RequestSurfaceOnPool(this, v19, a2, a3, a4, a5, a6, a7, v13 == 1, a8);
        v14 = *a8;
        v12 = v20;
        v15 = (struct DirectComposition::CDynamicPool *)*((_QWORD *)this + 6);
        v16 = *a8;
      }
      v21 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v19 + 3);
      v19 = (DirectComposition::CDynamicPoolSet *)((char *)v21 - 16);
      if ( v21 == (DirectComposition::CDynamicPoolSet *)((char *)this + 32) )
        v19 = 0LL;
    }
    ++v13;
  }
  while ( v12 >= 0 );
  return (unsigned int)v12;
}
