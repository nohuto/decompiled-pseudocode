/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800A7640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180039E9C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18007C1C8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18007C244 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007C2B4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A7FCC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800A8160 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x1800A81C0 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x1800A8DBC (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800A945C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800A97B0 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800A9AA0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x180222038 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct D2D_SIZE_F *v2; // r15
  float v3; // xmm0_4
  struct CDrawingContext *v6; // rdx
  struct CGeometryOnlyDrawListBrush *v7; // rbx
  char v8; // r12
  CComponentTransform2D *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  int v17; // r15d
  CNineGridDrawListBrush *v18; // rcx
  struct CGeometryOnlyDrawListBrush *v19; // rdx
  const struct D2D1::Matrix3x2F *v20; // rcx
  __int64 v21; // rcx
  CGeometryOnlyDrawListBrush *v23; // rcx
  FLOAT v24; // xmm1_4
  int v25; // xmm0_4
  CGeometryOnlyDrawListBrush *v26; // rax
  __int64 v27; // rcx
  FLOAT width; // xmm1_4
  unsigned int v29; // xmm0_4
  __int128 v30; // xmm1
  __int64 v31; // xmm1_8
  __int64 v32; // rdx
  CGeometryOnlyDrawListBrush *v33[2]; // [rsp+30h] [rbp-99h] BYREF
  struct CGeometryOnlyDrawListBrush *v34[2]; // [rsp+40h] [rbp-89h] BYREF
  char v35; // [rsp+50h] [rbp-79h]
  __int128 v36; // [rsp+58h] [rbp-71h] BYREF
  __int128 v37; // [rsp+68h] [rbp-61h] BYREF
  __int64 v38; // [rsp+78h] [rbp-51h]
  __int128 v39; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v40[16]; // [rsp+90h] [rbp-39h] BYREF
  int v41; // [rsp+A0h] [rbp-29h]
  __int128 v42; // [rsp+A4h] [rbp-25h]
  CGeometryOnlyDrawListBrush *v43; // [rsp+B8h] [rbp-11h]

  v2 = (const struct D2D_SIZE_F *)((char *)a2 + 8);
  v3 = *((float *)this + 25) * *((float *)this + 24);
  v6 = *(struct CDrawingContext **)a2;
  v7 = 0LL;
  v34[0] = 0LL;
  *(float *)&v36 = v3;
  v8 = 0;
  *((float *)&v36 + 1) = *((float *)this + 27) * *((float *)this + 26);
  *((float *)&v36 + 2) = *((float *)this + 29) * *((float *)this + 28);
  *((float *)&v36 + 3) = *((float *)this + 31) * *((float *)this + 30);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v40, v6, v2);
  if ( !*((_BYTE *)this + 153) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           181LL) )
    {
      v9 = *(CComponentTransform2D **)(*((_QWORD *)this + 11) + 120LL);
      if ( v9 )
      {
        if ( !CComponentTransform2D::IsIdentity(v9) )
        {
          v12 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
            McTemplateU0q_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_180357820, 2u, -2147022876, 0x268u, 0LL);
          goto LABEL_43;
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 312LL))(*((_QWORD *)this + 11), v40);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180357820, 2u, v10, 0x26Du, 0LL);
LABEL_43:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_19;
  }
  v33[0] = v43;
  v43 = 0LL;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(v34, v33);
  if ( v33[0] )
    std::default_delete<CDrawListBrush>::operator()(v13, v33[0]);
  v7 = v34[0];
  if ( v34[0] )
  {
    if ( *((_BYTE *)v34[0] + 52) )
    {
      v8 = 1;
      v15 = *((_DWORD *)this + 26);
      LODWORD(v33[0]) = *((_DWORD *)this + 24);
      v16 = *((_DWORD *)this + 28);
      HIDWORD(v33[0]) = v15;
      v33[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 30), v16);
      v39 = *(_OWORD *)v33;
    }
    else if ( *((_BYTE *)this + 152) )
    {
      width = v2->width;
      v8 = 1;
      v33[0] = 0LL;
      v39 = v36;
      v29 = *((_DWORD *)a2 + 3);
      *((_BYTE *)v34[0] + 52) = 1;
      v33[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v29, LODWORD(width));
      v30 = *(_OWORD *)v33;
      *((_DWORD *)v7 + 12) = 50529027;
      *((_OWORD *)v7 + 2) = v30;
    }
    v17 = v41;
    if ( !v8 )
      goto LABEL_16;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 20) = v42;
    if ( !*((_BYTE *)this + 152) )
    {
      v17 = v41;
      goto LABEL_16;
    }
    v33[0] = 0LL;
    v34[0] = (struct CGeometryOnlyDrawListBrush *)v33;
    v39 = v36;
    v34[1] = 0LL;
    v35 = 1;
    v12 = CGeometryOnlyDrawListBrush::Create(&v34[1]);
    if ( v35 )
    {
      v23 = *(CGeometryOnlyDrawListBrush **)v34[0];
      *(_QWORD *)v34[0] = v34[1];
      if ( v23 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v23, 1u);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_180357820, 2u, v12, 0x27Eu, 0LL);
      if ( v33[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33[0], 1u);
      goto LABEL_43;
    }
    v24 = v2->width;
    v25 = *((_DWORD *)a2 + 3);
    v26 = v33[0];
    v34[0] = 0LL;
    *(FLOAT *)&v34[1] = v24;
    *((_BYTE *)v33[0] + 52) = 1;
    *((_DWORD *)v26 + 12) = 50529027;
    HIDWORD(v34[1]) = v25;
    *((_OWORD *)v26 + 2) = *(_OWORD *)v34;
    v17 = v41;
    v34[0] = v33[0];
  }
  LOBYTE(v14) = *((_BYTE *)this + 152);
  *(_QWORD *)&v37 = v33;
  v33[0] = 0LL;
  *((_QWORD *)&v37 + 1) = 0LL;
  LOBYTE(v38) = 1;
  v12 = CNineGridDrawListBrush::Create(
          (unsigned int)v34,
          (unsigned int)&v39,
          (unsigned int)&v36,
          v14,
          (__int64)&v37 + 8);
  if ( (_BYTE)v38 )
  {
    v18 = *(CNineGridDrawListBrush **)v37;
    *(_QWORD *)v37 = *((_QWORD *)&v37 + 1);
    if ( v18 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v18, 1u);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, &dword_180357820, 2u, v12, 0x2AEu, 0LL);
    if ( v33[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v33[0], 1u);
    v7 = v34[0];
    goto LABEL_43;
  }
  v19 = v34[0];
  v7 = v33[0];
  v33[0] = 0LL;
  v34[0] = v7;
  if ( v19 )
  {
    std::default_delete<CDrawListBrush>::operator()(v18, v19);
    if ( v33[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v33[0], 1u);
  }
LABEL_16:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 128)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v37, (struct CGeometryOnlyDrawListBrush *)((char *)v7 + 8), v20);
    v31 = v38;
    *(_OWORD *)v32 = v37;
    *(_QWORD *)(v32 + 16) = v31;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v34);
  v7 = v34[0];
  v12 = 0;
  *((_DWORD *)a2 + 4) = v17;
LABEL_19:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v40);
  if ( v7 )
    std::default_delete<CDrawListBrush>::operator()(v21, v7);
  return (unsigned int)v12;
}
