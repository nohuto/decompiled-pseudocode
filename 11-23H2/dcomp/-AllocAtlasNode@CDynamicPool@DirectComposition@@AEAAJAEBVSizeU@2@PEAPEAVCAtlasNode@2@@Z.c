/*
 * XREFs of ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z @ 0x18001FF98
 * Callers:
 *     ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z @ 0x18001FE78 (-CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z.c)
 *     ?CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ @ 0x180035FCC (-CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0 (-Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CDynamicPool::AllocAtlasNode(
        DirectComposition::CDynamicPool *this,
        const struct DirectComposition::SizeU *a2,
        struct DirectComposition::CAtlasNode **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD *v8; // r10
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-18h]

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)(v3 + 16) )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 5);
    if ( !v8 )
    {
      v8 = DefaultHeap::Alloc(0x50uLL);
      if ( !v8 )
      {
        *((_QWORD *)this + 5) = 0LL;
        return (unsigned int)-2147024882;
      }
      DWORD2(v13) = *((_DWORD *)this + 12);
      v10 = *((_DWORD *)this + 13);
      v8[2] = 0LL;
      v8[3] = 0LL;
      v8[4] = 0LL;
      v8[5] = 0LL;
      v8[7] = 0LL;
      HIDWORD(v13) = v10;
      *(_QWORD *)&v13 = 0LL;
      *(_OWORD *)v8 = v13;
      v11 = *((_DWORD *)v8 + 2) - *(_DWORD *)v8;
      *((_DWORD *)v8 + 16) = v11;
      v12 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
      *((_DWORD *)v8 + 17) = v12;
      *((_DWORD *)v8 + 18) = v11 * v12;
      *((_QWORD *)this + 5) = v8;
    }
    return (unsigned int)DirectComposition::CAtlasNode::Allocate(
                           (DirectComposition::CAtlasNode *)v8,
                           *(_DWORD *)a2,
                           *((_DWORD *)a2 + 1),
                           a3);
  }
  return v4;
}
