/*
 * XREFs of ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0
 * Callers:
 *     ?Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180008690 (-Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOc.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 *     ?Rebuild@CPrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x1800F92F0 (-Rebuild@CPrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z.c)
 * Callees:
 *     ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84 (-BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@.c)
 *     ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34 (-ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9374 (-SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600 (-SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::AddPrimitiveInternal(
        DirectComposition::CPrimitiveGroup *this,
        struct DirectComposition::CPrimitive *a2,
        unsigned int a3,
        struct DirectComposition::BatchedOccluder *a4,
        struct DirectComposition::BatchedOccluder *a5)
{
  bool v6; // zf
  int v10; // ebp
  struct DirectComposition::CPrimitiveBatch *v12; // rdx
  struct DirectComposition::CPrimitiveBatch *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  *((_QWORD *)a2 + 8) = this;
  v6 = *((_QWORD *)a2 + 27) == 0LL;
  *((_DWORD *)a2 + 50) = -1;
  *((_DWORD *)a2 + 51) = -1;
  if ( !v6 )
    DirectComposition::CPrimitive::SetColorBrushAtlasSurfacePool(a2, 0LL);
  if ( *((_QWORD *)a2 + 28) )
    DirectComposition::CPrimitive::SetOpacityBrushAtlasSurfacePool(a2, 0LL);
  v10 = DirectComposition::CPrimitiveGroup::BatchPrimitive(this, a2, a3, a5, &v13);
  if ( v10 < 0 )
  {
    DirectComposition::CPrimitiveGroup::ReleaseAllResources(this);
  }
  else if ( a4 )
  {
    v12 = v13;
    *((_QWORD *)a4 + 4) = v13;
    *((_QWORD *)a4 + 3) = a2;
    *((_DWORD *)a4 + 10) = *((_DWORD *)v12 + 2) - 1;
    *((_DWORD *)a4 + 11) = -858993459 * (((__int64)v12 - *((_QWORD *)this + 23)) >> 4);
  }
  return (unsigned int)v10;
}
