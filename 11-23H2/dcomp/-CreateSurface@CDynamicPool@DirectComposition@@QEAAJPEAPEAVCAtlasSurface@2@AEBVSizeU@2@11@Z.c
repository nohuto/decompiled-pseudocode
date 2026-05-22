/*
 * XREFs of ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z @ 0x18001FE78
 * Callers:
 *     ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z @ 0x18001FC94 (-RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W.c)
 * Callees:
 *     ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z @ 0x18001FF98 (-AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDynamicPool::CreateSurface(
        DirectComposition::CDynamicPool *this,
        struct DirectComposition::CAtlasSurface **a2,
        const struct DirectComposition::SizeU *a3,
        const struct DirectComposition::SizeU *a4,
        const struct DirectComposition::SizeU *a5)
{
  __int64 v8; // rbx
  int v9; // ebp
  struct DirectComposition::CAtlasNode *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  struct DirectComposition::CAtlasNode *v15; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  v8 = 0LL;
  v9 = DirectComposition::CDynamicPool::AllocAtlasNode(this, a3, &v15);
  v14[0] = 0LL;
  if ( v9 >= 0 )
  {
    v10 = v15;
    if ( v15 )
    {
      v9 = DirectComposition::CAtlasSurface::Create(
             *((_QWORD *)this + 4),
             *(unsigned int *)v15,
             *((unsigned int *)v15 + 1),
             a4,
             (*((_DWORD *)a5 + 1) != 0 ? 8 : 0) | (*((_DWORD *)a5 + 1) != 0 ? 4 : 0) | (*(_DWORD *)a5 != 0 ? 2 : 0) | (unsigned int)v15 & 0xFFFFFFF0 | (*(_DWORD *)a5 != 0),
             v14);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v8 = v14[0];
    }
    if ( v8 )
    {
      *a2 = (struct DirectComposition::CAtlasSurface *)v8;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
      *((_QWORD *)v10 + 2) = v8;
      v11 = *((_DWORD *)this + 14);
      if ( v11 <= *(_DWORD *)v10 + *((_DWORD *)v10 + 14) )
        v11 = *(_DWORD *)v10 + *((_DWORD *)v10 + 14);
      *((_DWORD *)this + 14) = v11;
      v12 = *((_DWORD *)this + 15);
      if ( v12 <= *((_DWORD *)v10 + 1) + *((_DWORD *)v10 + 15) )
        v12 = *((_DWORD *)v10 + 1) + *((_DWORD *)v10 + 15);
      *((_DWORD *)this + 15) = v12;
    }
  }
  return (unsigned int)v9;
}
