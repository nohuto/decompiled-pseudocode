/*
 * XREFs of ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800110BC (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     ?IsFullyAntialiased@CMeshCacheManager@@CA_NPEBW4D2D1_EDGE_FLAGS@@_K@Z @ 0x180011FB0 (-IsFullyAntialiased@CMeshCacheManager@@CA_NPEBW4D2D1_EDGE_FLAGS@@_K@Z.c)
 *     ??$make_unique@$$BY0A@UVertexAAOffsetDesc@Mesh@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@UVertexAAOffsetDesc@Mesh@@U?$default_delete@$$BY0A@UVertexAAOffsetDesc@Mesh@@@std@@@0@_K@Z @ 0x180014FB4 (--$make_unique@$$BY0A@UVertexAAOffsetDesc@Mesh@@$0A@@std@@YA-AV-$unique_ptr@$$BY0A@UVertexAAOffs.c)
 *     ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800575EC (-AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057A54 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@@Z @ 0x1800A773C (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

const struct Mesh::VertexAAOffsetDesc *__fastcall CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(
        __int64 **this,
        const struct Mesh::MeshDesc *a2,
        const struct CRoundedRectangleShape *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  const struct D2D_MATRIX_3X2_F *v6; // r9
  __int64 v7; // r10
  float v9; // xmm3_4
  unsigned __int64 v10; // rdx
  struct Mesh::VertexAAOffsetDesc *v11; // rdi
  struct Mesh::VertexAAOffsetDesc *v12; // rbx
  void *v13; // rcx
  _BYTE v14[16]; // [rsp+20h] [rbp-69h] BYREF
  float v15; // [rsp+30h] [rbp-59h]
  float v16; // [rsp+34h] [rbp-55h]
  int v17; // [rsp+50h] [rbp-39h]
  _BYTE v18[72]; // [rsp+58h] [rbp-31h] BYREF
  struct Mesh::VertexAAOffsetDesc *v19; // [rsp+A0h] [rbp+17h] BYREF
  float v20; // [rsp+A8h] [rbp+1Fh]
  float v21; // [rsp+ACh] [rbp+23h]
  unsigned __int64 v22; // [rsp+B0h] [rbp+27h] BYREF
  float v23; // [rsp+B8h] [rbp+2Fh]

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(a4, (const struct D2D_MATRIX_3X2_F *)a2) )
    return 0LL;
  v17 = 0;
  CMILMatrix::CMILMatrix((CMILMatrix *)v18, v6);
  CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
    (const struct CRoundedRectangleGeometryData *)(*(_QWORD *)(v7 + 16) + 16LL),
    (const struct CMILMatrix *)v18,
    (struct CRoundedRectangleGeometryData *)v14);
  if ( !CRoundedRectangleGeometryData::AreAllCornerRadiiEqual((CRoundedRectangleGeometryData *)v14) )
    return 0LL;
  CRoundedRectangleGeometryData::GetBaseRect(v14, &v19);
  v9 = v15;
  if ( (float)((float)(v20 - *(float *)&v19) - (float)(v15 * 2.0)) <= 0.0000011920929
    || (float)((float)(v21 - *((float *)&v19 + 1)) - (float)(v16 * 2.0)) <= 0.0000011920929
    || !CMeshCacheManager::IsFullyAntialiased(*((const enum D2D1_EDGE_FLAGS **)a2 + 3), *((_QWORD *)a2 + 1)) )
  {
    return 0LL;
  }
  v22 = v10;
  v23 = v9 / v16;
  std::map<CMeshCacheManager::RoundedRectangleCacheKey,CMeshCacheManager::RoundedRectangleCacheEntry>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
    this,
    (__int64)&v19,
    &v22);
  v11 = v19;
  if ( !*((_QWORD *)v19 + 6) )
  {
    std::make_unique<Mesh::VertexAAOffsetDesc [0],0>(&v19, *((_QWORD *)a2 + 1));
    v12 = v19;
    Mesh::CalcVertexAAOffsets(a2, v19);
    v13 = (void *)*((_QWORD *)v11 + 6);
    *((_QWORD *)v11 + 6) = v12;
    if ( v13 )
      DefaultHeap::Free(v13);
  }
  return (const struct Mesh::VertexAAOffsetDesc *)*((_QWORD *)v11 + 6);
}
