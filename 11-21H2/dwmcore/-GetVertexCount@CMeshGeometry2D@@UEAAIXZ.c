/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180114510
 * Callers:
 *     ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x180224F10 (-GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180225070 (-GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180225150 (-GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z.c)
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x180225290 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  int v1; // r9d
  unsigned int v2; // edx
  unsigned int v3; // r8d

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 4) != 0 )
  {
    v2 = *((_DWORD *)this + 30) / 0xCu;
    v3 = *((_DWORD *)this + 34) >> 4;
    if ( v2 >= *((_DWORD *)this + 38) >> 2 )
      v2 = *((_DWORD *)this + 38) >> 2;
    if ( v2 < v3 )
      v3 = v2;
    *((_DWORD *)this + 20) = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 21) = v3;
  }
  else
  {
    return *((unsigned int *)this + 21);
  }
  return v3;
}
