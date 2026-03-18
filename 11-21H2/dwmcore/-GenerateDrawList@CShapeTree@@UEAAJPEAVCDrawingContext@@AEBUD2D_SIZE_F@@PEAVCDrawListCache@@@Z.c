/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001E4B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180058280 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18008EE08 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18025BE78 (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // edi
  float v9; // xmm9_4
  float v10; // xmm6_4
  float width; // xmm0_4
  float height; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  unsigned __int8 v19; // r14
  __int64 v20; // rdx
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  void (__fastcall ***v26)(_QWORD, _DWORD *); // rcx
  float v27; // xmm10_4
  float v28; // xmm9_4
  void (__fastcall **v29)(_QWORD, _DWORD *); // rax
  __int64 v30; // r9
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm10_4
  float v36; // xmm9_4
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  CDrawListBitmap *v48; // rax
  CSurfaceDrawListBrush *v49; // rcx
  CSurfaceDrawListBrush *v50; // rax
  __int64 v51; // rcx
  int DrawList; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v57; // [rsp+20h] [rbp-E0h]
  __int16 v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+32h] [rbp-CEh]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v61; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v62[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+A0h] [rbp-60h]
  int v66; // [rsp+BCh] [rbp-44h]
  char v67; // [rsp+C0h] [rbp-40h]
  float v68[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v73; // [rsp+118h] [rbp+18h] BYREF
  char v74; // [rsp+120h] [rbp+20h]
  float v75; // [rsp+128h] [rbp+28h] BYREF
  float v76; // [rsp+12Ch] [rbp+2Ch]
  float v77; // [rsp+130h] [rbp+30h]
  float v78; // [rsp+134h] [rbp+34h]
  _BYTE v79[16]; // [rsp+140h] [rbp+40h] BYREF
  int v80; // [rsp+150h] [rbp+50h]
  _BYTE v81[4432]; // [rsp+190h] [rbp+90h] BYREF

  v8 = 0;
  v69 = *((_OWORD *)this + 5);
  if ( *((_BYTE *)this + 97) )
  {
    v9 = *(float *)&v69;
    v10 = 0.0;
    width = a3->width;
    height = a3->height;
    if ( *(float *)&v69 < 0.0 )
    {
      v9 = 0.0;
      LODWORD(v69) = 0;
    }
    v13 = *((float *)&v69 + 1);
    v14 = *((float *)&v69 + 1);
    if ( *((float *)&v69 + 1) < 0.0 )
    {
      v13 = 0.0;
      v14 = 0.0;
      DWORD1(v69) = 0;
    }
    v15 = *((float *)&v69 + 2);
    v16 = *((float *)&v69 + 2);
    v17 = *((float *)&v69 + 2);
    if ( *((float *)&v69 + 2) > width )
    {
      *((float *)&v69 + 2) = width;
      v15 = width;
      v16 = width;
      v17 = width;
    }
    v18 = *((float *)&v69 + 3);
    if ( *((float *)&v69 + 3) > height )
    {
      *((float *)&v69 + 3) = height;
      v18 = height;
      v16 = v17;
    }
    if ( v15 > v9 && v18 > v14 )
    {
      v65 = 0;
      v19 = 0;
      CMatrixStack::Top((__int64)a2 + 368, (__int64)&v63);
      CMILMatrix::Get2DScaleDimensionsWithPerspective(
        (CMILMatrix *)&v63,
        (float *)&v60,
        (float *)&v60 + 1,
        (__int64)&v69);
      v20 = *((_QWORD *)a2 + 4);
      v76 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v23 = 0.0;
      v75 = 0.0;
      v24 = (float)(v16 - v9) * *(float *)&v60;
      v25 = (float)(v18 - v13) * *((float *)&v60 + 1);
      v26 = (void (__fastcall ***)(_QWORD, _DWORD *))(v20 + 8 + *(int *)(*(_QWORD *)(v20 + 8) + 16LL));
      v77 = v24;
      v72 = 0LL;
      v27 = v24;
      v78 = v25;
      v28 = v25;
      v29 = *v26;
      v73 = __PAIR64__(LODWORD(v25), LODWORD(v24));
      (*v29)(v26, v62);
      if ( fmaxf(v24 - 0.0, v25 - 0.0) > fmaxf((float)v62[0], (float)v62[1]) )
      {
        v19 = 1;
        *(_OWORD *)v68 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v63, (__int64)&v69, v68, v30);
        v70 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)a2);
        v31 = v68[0];
        if ( *(float *)&v70 > v68[0] )
        {
          LODWORD(v68[0]) = v70;
          v31 = *(float *)&v70;
        }
        v32 = v68[1];
        if ( *((float *)&v70 + 1) > v68[1] )
        {
          v68[1] = *((float *)&v70 + 1);
          v32 = *((float *)&v70 + 1);
        }
        v33 = v68[2];
        if ( v68[2] > *((float *)&v70 + 2) )
        {
          v68[2] = *((float *)&v70 + 2);
          v33 = *((float *)&v70 + 2);
        }
        v34 = v68[3];
        if ( v68[3] > *((float *)&v70 + 3) )
        {
          v68[3] = *((float *)&v70 + 3);
          v34 = *((float *)&v70 + 3);
        }
        if ( v33 <= v31 || v34 <= v32 )
          *(_OWORD *)v68 = 0uLL;
        if ( !CShapeTree::ComputePartialIntermediate(
                (struct CMILMatrix *)&v63,
                (float *)&v60,
                (float *)&v69,
                (int *)v68,
                (float *)&v72) )
          return v8;
        v23 = *((float *)&v72 + 1);
        v22 = *(float *)&v72;
        v25 = v25 + COERCE_FLOAT(HIDWORD(v72) ^ _xmm);
        v28 = *((float *)&v73 + 1);
        v24 = v24 + COERCE_FLOAT(v72 ^ _xmm);
        v27 = *(float *)&v73;
        v21 = COERCE_FLOAT(v72 ^ _xmm) + 0.0;
        v78 = v25;
        v77 = v24;
        v76 = COERCE_FLOAT(HIDWORD(v72) ^ _xmm) + 0.0;
        v10 = v76;
        v75 = v21;
      }
      v35 = v27 - v22;
      if ( v35 >= 1.0 )
      {
        v36 = v28 - v23;
        if ( v36 >= 1.0 )
        {
          v60 = 0LL;
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v60);
          *(_QWORD *)&v70 = "DWM ShapeVisual intermediate";
          *(_QWORD *)v68 = __PAIR64__(LODWORD(v36), LODWORD(v35));
          DWORD2(v70) = 28;
          LODWORD(v57) = 2 * (v19 ^ 1) + 2;
          v37 = CDrawingContext::PushOffScreenRenderingLayer(
                  a2,
                  (__int64)&v70,
                  v68,
                  DisplayId::None,
                  v57,
                  (__int64)&v60);
          v8 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0xBEu);
LABEL_52:
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v60);
            return v8;
          }
          v39 = v60;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 16LL))(v60, 0LL);
          CMILMatrix::InferAffineMatrix((__int64)&v63, (float *)&v69, &v75);
          v40 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v63, 0, 1);
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0xC6u);
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v60);
          }
          else
          {
            v42 = CShapeTree::DrawShapes(this, a2, a3);
            if ( v42 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v44 = CDrawingContext::PopLayer(a2);
              v8 = v44;
              if ( v44 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, v44, 0xCFu);
              }
              else
              {
                CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v79, a2);
                v64 = 0;
                v63 = 0LL;
                v66 = 257;
                v67 = 0;
                CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v81);
                v61 = 0LL;
                v72 = (__int64)&v61;
                v46 = *(_QWORD *)(v39 + 8);
                *(_QWORD *)&v70 = __PAIR64__(LODWORD(v10), LODWORD(v21));
                *((_QWORD *)&v70 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
                v47 = *(int *)(v46 + 16);
                v73 = 0LL;
                v74 = 1;
                v58 = 257;
                v48 = CDrawListBitmap::CDrawListBitmap(
                        (CDrawListBitmap *)v68,
                        (struct IBitmapRealization *)(v47 + v39 + 8));
                v59 = 1;
                v8 = CSurfaceDrawListBrush::CreateWithContentRect(v48, &v58, (float *)&v70, (__int64 *)&v73);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v68[2]);
                wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v68);
                if ( v74 )
                {
                  v49 = *(CSurfaceDrawListBrush **)v72;
                  *(_QWORD *)v72 = v73;
                  if ( v49 )
                    CSurfaceDrawListBrush::`vector deleting destructor'(v49, 1);
                }
                if ( (v8 & 0x80000000) != 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v49, 0LL, 0LL, v8, 0xDCu);
                }
                else
                {
                  MILMatrix3x2::InferAffineMatrix((__int64)&v70, &v75, (float *)&v69);
                  v50 = v61;
                  *(_OWORD *)((char *)v61 + 8) = v70;
                  *((_QWORD *)v50 + 3) = v71;
                  *(_QWORD *)v68 = v61;
                  v61 = 0LL;
                  CBrushDrawListGenerator::AttachInput((__int64)v79, 0, v68);
                  if ( *(_QWORD *)v68 )
                    std::default_delete<CDrawListBrush>::operator()(
                      v51,
                      *(__int64 (__fastcall ****)(_QWORD, __int64))v68);
                  v80 = v19 != 0 ? 256 : 64;
                  DrawList = CBrushDrawListGenerator::GenerateDrawList(
                               (CBrushDrawListGenerator *)v79,
                               (__int64)&v63,
                               (struct CDrawListEntryBuilder *)v81);
                  v8 = DrawList;
                  if ( DrawList < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0LL, DrawList, 0xEEu);
                  else
                    CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v81);
                }
                if ( v61 )
                  CSurfaceDrawListBrush::`vector deleting destructor'(v61, 1);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v81);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v79);
              }
              goto LABEL_52;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v42, 0xC9u);
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v60);
            CDrawingContext::PopTransformInternal(a2, 1);
          }
          v54 = CDrawingContext::PopLayer(a2);
          v8 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0LL, v54, 0xFBu);
        }
      }
    }
  }
  return v8;
}
