/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18001D538 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800801F0 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D089C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E4C84 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        __int64 a1,
        CDesktopTree *a2,
        __int64 a3,
        CMILMatrix *a4,
        float *a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 *v12; // rax
  __int64 v13; // r8
  unsigned __int64 *v14; // rax
  const struct CShape *v15; // r8
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CVisual::CollectAdditionalDirtyRects((CVisual *)a1, (__int64)a2, a3, a4, a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x14Au, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 890)
         && !*(_BYTE *)(a1 + 891)
         && *(_BYTE *)(a1 + 895)
         && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v12 = CPtrArrayBase::operator[]((__int64 *)(a1 + 776), 0LL);
    LOBYTE(v13) = 1;
    CGdiSpriteBitmap::GetAccumShape(v12, v16, v13);
    if ( v16[0] )
    {
      v14 = CPtrArrayBase::operator[]((__int64 *)(a1 + 776), 0LL);
      if ( (int)CDesktopTree::AddNewComposeTopContent(
                  a2,
                  (struct IBitmapResource *)((unsigned __int64)(v14 + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)),
                  v15,
                  a4) >= 0 )
        *(_BYTE *)(a1 + 891) = 1;
    }
    CShapePtr::Release((CShapePtr *)v16);
  }
  return v10;
}
