/*
 * XREFs of ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EAFF8
 * Callers:
 *     ?GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180107A70 (-GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18025C798 (-HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800DAD6C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1, float *a2, float *a3)
{
  unsigned int v6; // esi
  __int64 v7; // xmm0_8
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  _BYTE v18[4]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+34h] [rbp-4Ch]
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+4Ch] [rbp-34h]
  __int64 v23; // [rsp+54h] [rbp-2Ch]
  void *v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]

  v6 = 0;
  if ( *(_BYTE *)(a1 - 56) )
  {
    v7 = *(_QWORD *)a2;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    v22 = 1LL;
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v26 = v7;
    v8 = CShapeTreeIterator::Walk<CShapeBoundingContext>((__int64)v18, a1 - 152, (__int64)v18);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x2Fu);
      DefaultHeap::Free(v24);
      return v6;
    }
    DefaultHeap::Free(v24);
  }
  if ( a3 )
    *(_OWORD *)a3 = *(_OWORD *)(a1 - 72);
  if ( !*(_BYTE *)(a1 - 55) )
    goto LABEL_18;
  v10 = *a3;
  v11 = *a2;
  v12 = a2[1];
  if ( *a3 < 0.0 )
  {
    *a3 = 0.0;
    v10 = 0.0;
  }
  v13 = a3[1];
  if ( v13 < 0.0 )
  {
    a3[1] = 0.0;
    v13 = 0.0;
  }
  v14 = a3[2];
  v15 = v14;
  if ( v14 > v11 )
  {
    a3[2] = v11;
    v14 = v11;
    v15 = v11;
  }
  v16 = a3[3];
  if ( v16 > v12 )
  {
    a3[3] = v12;
    v14 = v15;
    v16 = v12;
  }
  if ( v14 <= v10 || v16 <= v13 )
  {
LABEL_18:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
  }
  return v6;
}
