/*
 * XREFs of ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180039230
 * Callers:
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180035D28 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x180038FB8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::AreAllCornerRadiiEqual(CRoundedRectangleGeometryData *this)
{
  float *v1; // rax
  unsigned int v2; // edx

  if ( *((_BYTE *)this + 52) )
    return 1;
  v1 = (float *)((char *)this + 28);
  v2 = 1;
  while ( *((float *)this + 4) == *(v1 - 1) && *((float *)this + 5) == *v1 )
  {
    ++v2;
    v1 += 2;
    if ( v2 >= 4 )
      return 1;
  }
  return 0;
}
