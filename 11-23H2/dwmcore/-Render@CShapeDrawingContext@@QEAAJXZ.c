/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180054790
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007DC00 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800125DC (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18001264C (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180054488 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180054E48 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18006F200 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180072968 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800745BC (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076B48 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18007C1C8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007C2B4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18007C360 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18007D62C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18007D814 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x1800A8DBC (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800A945C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800A97B0 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800A9AA0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A9AE8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E20AC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18011B4D0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Pop@?$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z @ 0x1801D5B40 (-Pop@-$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // rsi
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // r12
  _DWORD *v6; // r15
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  CGeometry *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  CGeometryOnlyDrawListBrush *v19; // rcx
  __int64 (__fastcall *v20)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **); // rsi
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  CGeometryOnlyDrawListBrush *v25; // rcx
  CGeometry *v26; // rcx
  int ShapeData; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r13
  int v32; // eax
  float v33; // xmm1_4
  struct CShape *v34; // rsi
  struct ID2D1Brush *v35; // rdi
  int v36; // eax
  unsigned int v37; // ecx
  CGeometry *v38; // rcx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  int v44; // eax
  float v45; // xmm1_4
  float v46; // xmm3_4
  int v47; // eax
  unsigned int v48; // ecx
  float v49; // xmm6_4
  float v50; // xmm7_4
  struct CDrawingContext *v51; // rdx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  CGeometryOnlyDrawListBrush *v56; // rcx
  int v57; // edi
  int v58; // xmm1_4
  CGeometryOnlyDrawListBrush *v59; // rax
  __int64 v60; // xmm1_8
  int DrawList; // eax
  unsigned int v62; // ecx
  int v63; // eax
  unsigned int v64; // ecx
  CGeometry *v65; // rcx
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rsi
  __int64 (__fastcall *v71)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **); // rdi
  int v72; // eax
  unsigned int v73; // ecx
  int v74; // eax
  unsigned int v75; // ecx
  CGeometryOnlyDrawListBrush *v76; // rcx
  int v77; // edi
  struct CShape **v78; // rcx
  struct CShape **v79; // rcx
  struct ID2D1StrokeStyle1 *v80; // [rsp+20h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v81; // [rsp+30h] [rbp-D0h] BYREF
  CDrawListCache *v82; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F *v83; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v84; // [rsp+48h] [rbp-B8h] BYREF
  struct CShape *v85; // [rsp+50h] [rbp-B0h] BYREF
  char v86; // [rsp+58h] [rbp-A8h]
  struct CShape *v87; // [rsp+60h] [rbp-A0h] BYREF
  char v88; // [rsp+68h] [rbp-98h]
  struct CShape *v89; // [rsp+70h] [rbp-90h] BYREF
  char v90; // [rsp+78h] [rbp-88h]
  struct CShape *v91; // [rsp+80h] [rbp-80h] BYREF
  char v92; // [rsp+88h] [rbp-78h]
  struct D2D_SIZE_F v93; // [rsp+90h] [rbp-70h] BYREF
  CGeometryOnlyDrawListBrush *v94; // [rsp+98h] [rbp-68h] BYREF
  __int128 v95; // [rsp+A0h] [rbp-60h]
  _DWORD *v96; // [rsp+B0h] [rbp-50h]
  __int128 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-38h]
  _QWORD v99[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v100; // [rsp+E0h] [rbp-20h]
  int v101; // [rsp+12Ch] [rbp+2Ch]
  char v102; // [rsp+130h] [rbp+30h]
  struct CGeometryOnlyDrawListBrush *v103[2]; // [rsp+140h] [rbp+40h] BYREF
  int v104; // [rsp+150h] [rbp+50h]
  int v105; // [rsp+154h] [rbp+54h]
  __int128 v106; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DCOLORVALUE v107; // [rsp+168h] [rbp+68h] BYREF
  struct D2D_MATRIX_3X2_F v108; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v109[40]; // [rsp+190h] [rbp+90h] BYREF
  int v110; // [rsp+1D8h] [rbp+D8h]
  _BYTE v111[4480]; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = &v108;
  v83 = &v108;
  *(_QWORD *)&v108.m[2][0] = 0LL;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_OWORD *)&v108.m11 = *(_OWORD *)&_xmm;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v111);
  v82 = 0LL;
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v82);
  v3 = CDrawListCache::InternalCreate(1, &v82);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_7;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 63);
  v96 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v5 == v96 )
    goto LABEL_7;
  v6 = v5 + 10;
  while ( 1 )
  {
    switch ( *v5 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v6 - 8);
        *((_BYTE *)this + 528) = 1;
        v83 = (struct D2D_MATRIX_3X2_F *)(v6 - 8);
        goto LABEL_6;
      case 2:
        v26 = (CGeometry *)*((_QWORD *)v6 - 4);
        v87 = 0LL;
        v88 = 0;
        ShapeData = CGeometry::GetShapeData(v26, 0LL, (struct CShapePtr *)&v87);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v29 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x50u, 0LL);
          }
          else
          {
            v31 = *((_QWORD *)this + 41);
            v106 = *(_OWORD *)(v6 - 6);
            v32 = *(_DWORD *)(v31 + 3248);
            if ( v32 )
              v33 = *(float *)(*(_QWORD *)(v31 + 3264) + 4LL * (unsigned int)(v32 - 1));
            else
              v33 = *(float *)&FLOAT_1_0;
            v34 = v87;
            *((float *)&v106 + 3) = *((float *)&v106 + 3) * v33;
            v35 = *(struct ID2D1Brush **)(*(_QWORD *)(v31 + 40) + 328LL);
            (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v35 + 64LL))(v35, &v106);
            v36 = CDrawingContext::FillShapeWithBrush((CDrawingContext *)v31, v34, v35);
            if ( v36 >= 0 )
            {
              if ( v88 && v87 )
                (**(void (__fastcall ***)(struct CShape *, __int64))v87)(v87, 1LL);
              v87 = 0LL;
              v88 = 0;
              goto LABEL_29;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x56u, 0LL);
          }
        }
        v79 = &v87;
LABEL_106:
        CShapePtr::Release((CShapePtr *)v79);
        goto LABEL_7;
      case 3:
        v13 = (CGeometry *)*((_QWORD *)v6 - 4);
        v81 = 0LL;
        v85 = 0LL;
        v86 = 0;
        v14 = CGeometry::GetShapeData(v13, 0LL, (struct CShapePtr *)&v85);
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x62u, 0LL);
        }
        else
        {
          v16 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x67u, 0LL);
          }
          else
          {
            v18 = *((_QWORD *)v6 - 1);
            v19 = v81;
            v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v18 + 336LL);
            if ( v81 )
            {
              v81 = 0LL;
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v19 + 16LL))(v19);
            }
            v21 = v20(v18, *((_QWORD *)this + 41), v6 - 6, &v81);
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x6Bu, 0LL);
            }
            else
            {
              (*(void (**)(void))(*(_QWORD *)v81 + 32LL))();
              v23 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v85, v81);
              if ( v23 >= 0 )
              {
                if ( v86 && v85 )
                  (**(void (__fastcall ***)(struct CShape *, __int64))v85)(v85, 1LL);
                v25 = v81;
                v85 = 0LL;
                v86 = 0;
                if ( v81 )
                {
                  v81 = 0LL;
                  (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v25 + 16LL))(v25);
                }
LABEL_29:
                v1 = v83;
                goto LABEL_6;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x6Fu, 0LL);
            }
          }
        }
        v78 = &v85;
        goto LABEL_101;
    }
    if ( *v5 != 4 )
    {
      if ( *v5 != 5 )
      {
        if ( *v5 != 6 )
          goto LABEL_6;
        v65 = (CGeometry *)*((_QWORD *)v6 - 4);
        v81 = 0LL;
        v89 = 0LL;
        v90 = 0;
        v66 = CGeometry::GetShapeData(v65, 0LL, (struct CShapePtr *)&v89);
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0xD5u, 0LL);
LABEL_82:
          v78 = &v89;
LABEL_101:
          CShapePtr::Release((CShapePtr *)v78);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
          goto LABEL_7;
        }
        v68 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0xDAu, 0LL);
          goto LABEL_82;
        }
        v70 = *((_QWORD *)v6 - 1);
        v71 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v70 + 336LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
        v72 = v71(v70, *((_QWORD *)this + 41), v6 - 6, &v81);
        if ( v72 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0xDEu, 0LL);
          goto LABEL_82;
        }
        (*(void (**)(void))(*(_QWORD *)v81 + 32LL))();
        v74 = CDrawingContext::StrokeShapeWithBrush(
                *((CDrawingContext **)this + 41),
                v89,
                v81,
                *(float *)v6,
                *((struct ID2D1StrokeStyle1 **)v6 + 1));
        if ( v74 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0xE4u, 0LL);
          goto LABEL_82;
        }
        CShapePtr::Release((CShapePtr *)&v89);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
        goto LABEL_29;
      }
      v38 = (CGeometry *)*((_QWORD *)v6 - 4);
      v91 = 0LL;
      v92 = 0;
      v39 = CGeometry::GetShapeData(v38, 0LL, (struct CShapePtr *)&v91);
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xBBu, 0LL);
      }
      else
      {
        v41 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC0u, 0LL);
        }
        else
        {
          v43 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v107.r = *(struct _D3DCOLORVALUE *)(v6 - 6);
          v44 = *(_DWORD *)(v43 + 3248);
          if ( v44 )
            v45 = *(float *)(*(_QWORD *)(v43 + 3264) + 4LL * (unsigned int)(v44 - 1));
          else
            v45 = *(float *)&FLOAT_1_0;
          v46 = *((float *)v6 - 2);
          v80 = *(struct ID2D1StrokeStyle1 **)v6;
          v107.a = v107.a * v45;
          v47 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v43, v91, &v107, v46, v80);
          if ( v47 >= 0 )
          {
            CShapePtr::Release((CShapePtr *)&v91);
            goto LABEL_6;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0xC9u, 0LL);
        }
      }
      v79 = &v91;
      goto LABEL_106;
    }
    v49 = *((float *)v6 - 6) - *((float *)v6 - 8);
    v50 = *((float *)v6 - 5) - *((float *)v6 - 7);
    v51 = (struct CDrawingContext *)*((_QWORD *)this + 41);
    v81 = 0LL;
    v93.width = v49;
    v93.height = v50;
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v109, v51, &v93);
    v52 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)v6 - 2) + 312LL))(*((_QWORD *)v6 - 2), v109);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x80u, 0LL);
      goto LABEL_94;
    }
    v54 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x82u, 0LL);
      goto LABEL_94;
    }
    if ( !v110 )
      break;
LABEL_58:
    v58 = *(v6 - 7);
    *(_OWORD *)v103 = *(_OWORD *)&_xmm;
    v104 = *(v6 - 8);
    v105 = v58;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v97,
      (const struct D2D1::Matrix3x2F *)v103,
      (const struct D2D1::Matrix3x2F *)v1);
    v60 = v98;
    *(_OWORD *)((char *)v59 + 8) = v97;
    *((_QWORD *)v59 + 3) = v60;
    if ( *((_BYTE *)v59 + 52) )
    {
      v103[1] = 0LL;
      v103[0] = (struct CGeometryOnlyDrawListBrush *)&v81;
      LOBYTE(v104) = 1;
      v77 = CGeometryOnlyDrawListBrush::Create(&v103[1]);
      if ( (_BYTE)v104 )
      {
        v76 = *(CGeometryOnlyDrawListBrush **)v103[0];
        *(_QWORD *)v103[0] = v103[1];
        if ( v76 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v76, 1u);
      }
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v76, 0LL, 0, v77, 0x9Du, 0LL);
        goto LABEL_94;
      }
      v59 = v81;
    }
    *(_QWORD *)&v95 = 0LL;
    *((_BYTE *)v59 + 52) = 1;
    *((_DWORD *)v59 + 12) = 50529027;
    *((_QWORD *)&v95 + 1) = __PAIR64__(LODWORD(v50), LODWORD(v49));
    v99[1] = 0LL;
    v100 = 0;
    *((_OWORD *)v59 + 2) = v95;
    v99[0] = v81;
    v101 = 257;
    v102 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v109,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v99,
                 (struct CDrawListEntryBuilder *)v111);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_94;
    }
    CDrawListCache::Update(v82, *((struct CDrawingContext **)this + 41), (struct CDrawListEntryBuilder *)v111);
    v63 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v82);
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0xAFu, 0LL);
      goto LABEL_94;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v111);
    CDrawListCache::Invalidate(v82);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v109);
    if ( v81 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v81, 1u);
LABEL_6:
    v5 += 14;
    v6 += 14;
    if ( v5 == v96 )
      goto LABEL_7;
  }
  v84 = 0LL;
  v103[0] = (struct CGeometryOnlyDrawListBrush *)&v84;
  v103[1] = 0LL;
  LOBYTE(v104) = 1;
  v57 = CGeometryOnlyDrawListBrush::Create(&v103[1]);
  if ( (_BYTE)v104 )
  {
    v56 = *(CGeometryOnlyDrawListBrush **)v103[0];
    *(_QWORD *)v103[0] = v103[1];
    if ( v56 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v56, 1u);
  }
  if ( v57 >= 0 )
  {
    v94 = v84;
    v84 = 0LL;
    CBrushDrawListGenerator::AttachInput(v109, 0LL, &v94);
    if ( v94 )
      std::default_delete<CDrawListBrush>::operator()();
    if ( v84 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v84, 1u);
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v56, 0LL, 0, v57, 0x88u, 0LL);
  if ( v84 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v84, 1u);
LABEL_94:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v109);
  if ( v81 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v81, 1u);
LABEL_7:
  if ( *((_BYTE *)this + 530) )
  {
    v7 = *((_QWORD *)this + 41);
    v8 = *(_DWORD *)(v7 + 368);
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      *(_DWORD *)(v7 + 368) = v9;
      v106 = *(_OWORD *)(*(_QWORD *)(v7 + 384) + 16 * v9);
    }
    if ( *((_QWORD *)&v106 + 1) )
      CWatermarkStack<unsigned int,64,2,10>::Pop(v7 + 464);
    v10 = *(_DWORD *)(v7 + 400);
    if ( v10 )
      *(_DWORD *)(v7 + 400) = v10 - 1;
    v11 = *(_DWORD *)(v7 + 432);
    if ( v11 )
      *(_DWORD *)(v7 + 432) = v11 - 1;
    *((_BYTE *)this + 530) = 0;
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v82);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v111);
  return 0LL;
}
