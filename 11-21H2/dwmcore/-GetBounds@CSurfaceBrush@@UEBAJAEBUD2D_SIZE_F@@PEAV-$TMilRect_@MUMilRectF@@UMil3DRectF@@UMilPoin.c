/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800626F4
 * Callers:
 *     ?GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180107B10 (-GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(__int64 a1, const struct D2D_SIZE_F *a2, float *a3)
{
  CSurfaceBrush *v6; // rdi
  int v7; // edi
  struct CShape *v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  float width; // xmm0_4
  FLOAT height; // xmm1_4
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  struct CShape **v16; // [rsp+38h] [rbp-48h]
  struct CShape *v17; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+48h] [rbp-38h]
  char v19[48]; // [rsp+50h] [rbp-30h] BYREF

  v15 = 0LL;
  if ( a2->width <= 0.0 )
    goto LABEL_14;
  if ( a2->height <= 0.0 )
    goto LABEL_14;
  v6 = (CSurfaceBrush *)(a1 - 200);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 200) + 192LL))(a1 - 200) )
    goto LABEL_14;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _QWORD))(**(_QWORD **)(a1 - 88) + 24LL))(
         *(_QWORD *)(a1 - 88),
         v6,
         0LL) )
  {
    width = a2->width;
    v11 = 0;
    height = a2->height;
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = width;
    a3[3] = height;
    goto LABEL_11;
  }
  v17 = 0LL;
  v16 = (struct CShape **)&v15;
  v18 = 1;
  v7 = CSurfaceBrush::ComputeLayout(v6, a2, (struct CContent::LayoutData *)v19, &v17);
  if ( v18 )
  {
    v8 = *v16;
    *v16 = v17;
    if ( v8 )
      std::default_delete<CShape>::operator()();
  }
  if ( v7 < 0 )
  {
LABEL_14:
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
    v11 = 0;
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, a3, 0LL);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x187u, 0LL);
LABEL_11:
  if ( v15 )
    std::default_delete<CShape>::operator()();
  return v11;
}
