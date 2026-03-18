/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800CD204
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107AB0 (-AddOcclusionInformation@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006A08 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // si
  CSurfaceBrush *v4; // r15
  unsigned int v5; // ebx
  char v9; // al
  __int64 *v10; // rcx
  char v11; // r12
  __int64 v12; // rax
  struct CShape *v13; // rcx
  struct CShape *v14; // rax
  __int64 v15; // r11
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // eax
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  int v22; // r9d
  __int64 v23; // r11
  unsigned int v24; // [rsp+20h] [rbp-A9h]
  __int64 v25; // [rsp+30h] [rbp-99h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, __int64); // [rsp+38h] [rbp-91h] BYREF
  int v27; // [rsp+40h] [rbp-89h] BYREF
  struct D2D_MATRIX_3X2_F v28; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v29[80]; // [rsp+70h] [rbp-59h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-9h] BYREF
  struct CShape **v31; // [rsp+D0h] [rbp+7h] BYREF
  struct CShape *v32; // [rsp+D8h] [rbp+Fh] BYREF
  char v33; // [rsp+E0h] [rbp+17h]

  v3 = 0;
  v4 = (CSurfaceBrush *)((char *)this - 200);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 25) + 192LL))((char *)this - 200) )
    return v5;
  if ( a3->width <= 0.0 )
    return v5;
  if ( a3->height <= 0.0 )
    return v5;
  v9 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this - 11) + 8LL))(*((_QWORD *)this - 11), v4);
  v10 = (__int64 *)*((_QWORD *)this - 11);
  v11 = v9;
  v12 = *v10;
  v25 = 0LL;
  (*(void (__fastcall **)(__int64 *, CSurfaceBrush *, __int64 *))(v12 + 56))(v10, v4, &v25);
  if ( !v11 && !v25 )
    return v5;
  v26 = 0LL;
  v31 = (struct CShape **)&v26;
  v32 = 0LL;
  v33 = 1;
  v5 = CSurfaceBrush::ComputeLayout(v4, a3, (struct CContent::LayoutData *)&v28, &v32);
  if ( v33 )
  {
    v13 = v32;
    v14 = *v31;
    *v31 = v32;
    if ( v14 )
      std::default_delete<CShape>::operator()((__int64)v13, (__int64 (__fastcall ***)(_QWORD, __int64))v14);
  }
  if ( v5 != -2003304441 )
  {
    if ( (v5 & 0x80000000) != 0 )
    {
      v22 = v5;
      v24 = 317;
      goto LABEL_37;
    }
    if ( !(unsigned __int8)(*v26)[8](v26, (__int64)&v27) || v27 != 1 )
      goto LABEL_35;
    if ( *((_BYTE *)a2 + 1205) )
    {
      v15 = v25;
      if ( !v25 )
        goto LABEL_18;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 272LL))(v25) )
        v3 = 1;
    }
    v15 = v25;
LABEL_18:
    if ( v11 )
    {
      v17 = *((_QWORD *)this - 11);
      v30 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, CSurfaceBrush *, struct CShape ***))(*(_QWORD *)v17 + 24LL))(
             v17,
             v4,
             &v31)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v32 + 1) - 1.0) & _xmm) < 0.0000011920929 )
      {
        width = a3->width;
        height = a3->height;
        *(_QWORD *)&v30 = 0LL;
        *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      }
      else
      {
        v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v26)[6])(
                v26,
                &v30,
                0LL);
        v5 = v19;
        if ( v19 < 0 )
        {
          v24 = 343;
LABEL_33:
          v22 = v19;
LABEL_37:
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0LL, v22, v24);
          goto LABEL_38;
        }
      }
      COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v30, v3, v18, 0LL);
      v15 = v25;
    }
    if ( !v3 )
    {
LABEL_20:
      if ( v26 )
      {
        (**v26)(v26, 1LL);
        v15 = v25;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v5;
    }
    CMILMatrix::CMILMatrix((CMILMatrix *)v29, &v28);
    v19 = COcclusionContext::CheckAndRecordOverlayCandidate(
            (__int64)a2,
            *((_QWORD *)a2 + 149),
            v23,
            (__int64)v29,
            (__int64)v26,
            0);
    v5 = v19;
    if ( v19 >= 0 )
    {
LABEL_35:
      v15 = v25;
      goto LABEL_20;
    }
    v24 = 358;
    goto LABEL_33;
  }
  v5 = 0;
LABEL_38:
  if ( v26 )
    std::default_delete<CShape>::operator()((__int64)v13, v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return v5;
}
