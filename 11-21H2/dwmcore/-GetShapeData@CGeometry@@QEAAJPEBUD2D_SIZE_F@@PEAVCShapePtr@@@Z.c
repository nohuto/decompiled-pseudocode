/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180065138 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800972E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F6330 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800F8B30 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1801B41E0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8EF0 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801FA760 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180201E44 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180216F30 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180244228 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180244280 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802442B0 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1802443C8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800E8684 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801F8BF0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  char v3; // al
  unsigned int v4; // esi
  __int64 v8; // rdi
  __int64 v9; // rdi
  const struct D2D_SIZE_F *v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // eax
  struct CShape *v17; // rsi
  char v18; // di
  __int64 v19; // rdi
  int ShapeDataWorker; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbp
  int TrimmedShapeData; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  struct CShape *v29; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v30[80]; // [rsp+40h] [rbp-98h] BYREF
  struct D2D_MATRIX_3X2_F v31; // [rsp+90h] [rbp-48h] BYREF

  v3 = *((_BYTE *)this + 136);
  v4 = 0;
  if ( v3 )
    goto LABEL_10;
  v8 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() != *(_DWORD *)(v8 + 680) )
  {
    v3 = *((_BYTE *)this + 136);
    if ( !v3 && (*((_BYTE *)this + 32) & 1) == 0 )
    {
      v9 = *((_QWORD *)this + 13);
      if ( v9 )
      {
        if ( *((_BYTE *)this + 137) )
        {
          if ( *((_BYTE *)this + 138) || (v24 = *((_QWORD *)this + 15)) == 0 )
          {
            TrimmedShapeData = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 13), a3);
            v4 = TrimmedShapeData;
            if ( TrimmedShapeData < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, TrimmedShapeData, 0xD3u);
          }
          else
          {
            CShapePtr::Release(a3);
            *(_QWORD *)a3 = v24;
            *((_BYTE *)a3 + 8) = 0;
          }
        }
        else
        {
          if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
            (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
          *(_QWORD *)a3 = v9;
          *((_BYTE *)a3 + 8) = 0;
        }
        return v4;
      }
    }
LABEL_10:
    v11 = 0LL;
    if ( v3 )
      v11 = a2;
    v12 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL))(
            this,
            v11,
            a3);
    v14 = v12;
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xFAu);
      goto LABEL_51;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 232LL))(this) && *(_QWORD *)a3 )
    {
      (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this + 224LL))(
        this,
        v11,
        &v31);
      CMILMatrix::CMILMatrix((CMILMatrix *)v30, &v31);
      v16 = CShape::CopyShape(*(CShape **)a3, (const struct CMILMatrix *)v30, &v29);
      v14 = v16;
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0LL, v16, 0x108u);
        goto LABEL_51;
      }
      v17 = v29;
      if ( *((_BYTE *)a3 + 8) )
      {
        v15 = *(void (__fastcall ****)(_QWORD, __int64))a3;
        if ( *(_QWORD *)a3 )
          (**v15)(v15, 1LL);
      }
      *(_QWORD *)a3 = v17;
      *((_BYTE *)a3 + 8) = 1;
    }
    v4 = v14;
    if ( v14 >= 0 )
    {
      if ( *((_BYTE *)this + 137) )
      {
        v27 = CGeometry::GetTrimmedShapeData(this, *(const struct CShape **)a3, a3);
        v4 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xCAu);
      }
      return v4;
    }
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0LL, v14, 0xC6u);
    return v4;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v18 = 1;
    ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 104));
    v4 = ShapeDataWorker;
    if ( ShapeDataWorker < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, ShapeDataWorker, 0xAAu);
      return v4;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  else
  {
    v18 = 0;
  }
  if ( *((_BYTE *)this + 137) )
  {
    if ( v18 || *((_BYTE *)this + 138) || (v19 = *((_QWORD *)this + 15)) == 0 )
    {
      v22 = CGeometry::GetTrimmedShapeData(
              this,
              *((const struct CShape **)this + 13),
              (CGeometry *)((char *)this + 120));
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0xB2u);
        return v4;
      }
      v19 = *((_QWORD *)this + 15);
      *((_BYTE *)this + 138) = 0;
    }
    CShapePtr::Release(a3);
  }
  else
  {
    v19 = *((_QWORD *)this + 13);
    if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  }
  *(_QWORD *)a3 = v19;
  *((_BYTE *)a3 + 8) = 0;
  return v4;
}
