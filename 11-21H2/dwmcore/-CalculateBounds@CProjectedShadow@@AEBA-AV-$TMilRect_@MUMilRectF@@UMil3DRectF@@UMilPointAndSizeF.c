/*
 * XREFs of ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x180232ECC
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x180232ADC (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180232D48 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180201004 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 */

__int64 __fastcall CProjectedShadow::CalculateBounds(__int64 a1, __int64 a2, float a3, __int64 a4)
{
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm0_4
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v14[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+10h] BYREF

  v21 = a4;
  v13 = *(_OWORD *)(std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
                      *(_QWORD *)(a1 + 80) + 80LL,
                      (__int64)&v21)
                  + 60);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v13, a3, a3);
  v14[2] = 0;
  v14[6] = 0;
  v18 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = *(_DWORD *)(a1 + 184);
  v14[0] = *(_DWORD *)(a1 + 180);
  v7 = *(_DWORD *)(a1 + 192);
  v14[1] = v6;
  v14[3] = *(_DWORD *)(a1 + 188);
  v8 = *(_DWORD *)(a1 + 196);
  v14[4] = v7;
  v9 = *(_DWORD *)(a1 + 200);
  v14[5] = v8;
  v14[7] = v9;
  v16 = *(_DWORD *)(a1 + 204);
  v10 = *(_DWORD *)(a1 + 212);
  v15 = _xmm;
  v20 = 0;
  v17 = *(_DWORD *)(a1 + 208);
  v19 = v10;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v14, (__int64)&v13, (float *)a2, v11);
  return a2;
}
