/*
 * XREFs of ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@PEBVIDeviceTarget@@II@Z @ 0x1800F4C8C
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?FindCache@CDrawListCacheSet@@AEBAPEAVCDrawListCache@@IIPEBVIDeviceTarget@@@Z @ 0x1800DC198 (-FindCache@CDrawListCacheSet@@AEBAPEAVCDrawListCache@@IIPEBVIDeviceTarget@@@Z.c)
 */

void __fastcall CVisual::InvalidateDrawListCaches(
        CVisual *this,
        const struct CVisualTree *a2,
        const struct IDeviceTarget *a3)
{
  __int64 **TreeData; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  CDrawListCache *Cache; // rax

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    if ( a3 )
    {
      Cache = CDrawListCacheSet::FindCache((CDrawListCacheSet *)(TreeData + 2), 0, 0, a3);
      if ( Cache )
        CDrawListCache::Invalidate(Cache);
    }
    else
    {
      v5 = TreeData[2];
      v6 = TreeData[3];
      while ( v5 != v6 )
      {
        if ( !*(_DWORD *)v5 && !*((_DWORD *)v5 + 1) )
          CDrawListCache::Invalidate((CDrawListCache *)v5[2]);
        v5 += 3;
      }
    }
  }
}
