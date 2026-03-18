/*
 * XREFs of ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800808D8
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180041B9C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800DFF44 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x180025914 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180042164 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042DDC (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800809F0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18009FD74 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1800E7AE8 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1801D8D04 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x180271E64 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

__int64 __fastcall CVisual::CreateOrUpdateBVI(
        struct CVisual *a1,
        struct CVisualTreePath *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CVisual *v7; // rsi
  const struct CVisualTree *v8; // rbp
  CTreeData *v9; // r15
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  CCachedVisualImage *v11; // rdi
  unsigned int v12; // ebx
  bool v14; // bp
  const char **DebugString; // rax
  DwmDbg::DbgString *v16; // rbx
  DwmDbg::DbgString *v17; // rax
  char *v18; // [rsp+30h] [rbp-38h] BYREF
  char *v19; // [rsp+38h] [rbp-30h] BYREF
  void *lpMem; // [rsp+78h] [rbp+10h] BYREF

  v7 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 64LL);
  v8 = *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL);
  v9 = CVisual::EnsureTreeData(a1, v8);
  BackdropVisualImage = CTreeData::GetBackdropVisualImage(v9, a2);
  v11 = BackdropVisualImage;
  if ( BackdropVisualImage )
  {
    CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)BackdropVisualImage + 8));
  }
  else
  {
    v14 = CVisual::GetVisualTreeNoRef(v7) == v8;
    lpMem = 0LL;
    CBackdropVisualImage::Create(g_pComposition, a1, a2, v14, (struct CBackdropVisualImage **)&lpMem);
    v11 = (CCachedVisualImage *)lpMem;
    CTreeData::SetBackdropVisualImage(v9, a2, (struct CBackdropVisualImage *)lpMem);
    if ( dword_1803E3760 )
    {
      DebugString = (const char **)CVisualTreePath::GetDebugString(a2, &lpMem);
      v16 = DwmDbg::DbgString::DbgString(&v18, "pBVI=0x%p, bviPath=[%s]", v11, *DebugString);
      v17 = DwmDbg::DbgString::DbgString(&v19, "Visual-CreatedNewBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v17, a1, v16);
      if ( lpMem )
        operator delete(lpMem);
    }
  }
  v12 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v11, a5);
  if ( v11 )
    CResource::InternalRelease(v11);
  return v12;
}
