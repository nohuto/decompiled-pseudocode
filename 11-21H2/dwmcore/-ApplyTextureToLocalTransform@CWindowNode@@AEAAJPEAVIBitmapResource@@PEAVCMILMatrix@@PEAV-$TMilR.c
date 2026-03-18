/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2240
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800068A4 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(__int64 a1, __int64 *a2, CMILMatrix *a3, _OWORD *a4)
{
  __int64 v4; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  CCompositionSurfaceBitmap *v14; // rdi
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // r9
  float v18; // xmm4_4
  float v19; // xmm6_4
  int v20; // eax
  _QWORD *v21; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v22[4]; // [rsp+48h] [rbp-69h] BYREF
  char v23; // [rsp+88h] [rbp-29h]
  char v24; // [rsp+89h] [rbp-28h]
  __int128 v25; // [rsp+98h] [rbp-19h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-9h] BYREF

  v4 = *a2;
  v21 = 0LL;
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD **))(v4 + 56))(a2, &v21);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x52Eu);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, CMILMatrix *, __int128 *))(*v21 + 8LL))(v21, a3, &v26);
    if ( a4 )
      *a4 = v26;
    if ( *(_BYTE *)(a1 + 920) )
    {
      v14 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[]((__int64 *)(a1 + 808), 0LL);
      if ( a2 == (__int64 *)(((unsigned __int64)v14 + 72) & -(__int64)(v14 != 0LL)) )
      {
        v15 = (float)*(int *)(a1 + 772);
        v16 = (float)*(int *)(a1 + 768);
        v25 = 0LL;
        CMILMatrix::Translate(a3, v16, v15);
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, (__int64)&v26, (float *)&v25, v17);
        if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v14) == 1 )
        {
          if ( *(_BYTE *)(a1 + 916) )
            CMILMatrix::Translate(
              a3,
              (float)(*(_DWORD *)(a1 + 776) - *(_DWORD *)(a1 + 768)) - (float)(*((float *)&v25 + 2) - *(float *)&v25),
              0.0);
        }
        else
        {
          v18 = *((float *)&v25 + 2) - *(float *)&v25;
          v19 = (float)(*(_DWORD *)(a1 + 776) - *(_DWORD *)(a1 + 768));
          if ( (COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - (float)(*((float *)&v25 + 2) - *(float *)&v25)) & _xmm) > 0.00390625
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)(*(_DWORD *)(a1 + 780) - *(_DWORD *)(a1 + 772))
                             - (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1))) & _xmm) > 0.00390625)
            && v18 > 0.0
            && (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1)) > 0.0 )
          {
            v24 = v24 & 0xC0 | 0x17;
            v20 = *(_DWORD *)(a1 + 780) - *(_DWORD *)(a1 + 772);
            v22[1] = _xmm;
            v23 = 85;
            v22[0] = _xmm;
            v22[3] = _xmm;
            v22[2] = _xmm;
            CMILMatrix::Scale(
              (CMILMatrix *)v22,
              v19 / v18,
              (float)v20 / (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1)),
              1.0);
            CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v22, a3);
          }
        }
      }
    }
  }
  if ( v21 )
  {
    v12 = (__int64)v21 + *(int *)(v21[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v11;
}
