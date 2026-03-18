/*
 * XREFs of ?GetLayoutParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AA610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800ACDF0 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetLayoutParameters(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  void (__fastcall ***v6)(_QWORD, GUID *, struct D2D_RECT_F *); // rcx
  unsigned int v7; // r14d
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD **); // rcx
  int v12; // ebx
  FLOAT v13; // xmm0_4
  FLOAT v14; // xmm1_4
  FLOAT v15; // xmm2_4
  FLOAT v16; // xmm0_4
  FLOAT v17; // xmm3_4
  FLOAT v18; // xmm1_4
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm1_4
  FLOAT bottom; // xmm2_4
  FLOAT right; // xmm3_4
  FLOAT top; // xmm4_4
  FLOAT left; // xmm5_4
  float v32; // xmm8_4
  float v33; // xmm7_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // xmm1_8
  __int64 v37; // rcx
  _QWORD *v38; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v39[8]; // [rsp+48h] [rbp-89h] BYREF
  int v40; // [rsp+88h] [rbp-49h]
  struct D2D_RECT_F v41; // [rsp+98h] [rbp-39h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-9h]

  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct D2D_RECT_F *))*((_QWORD *)a2 + 13);
  v7 = 0;
  v38 = 0LL;
  *(_QWORD *)&v41.left = 0LL;
  (**v6)(v6, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v41);
  v10 = **(_QWORD **)&v41.left;
  *(_QWORD *)&v42 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *))(v10 + 56))(*(_QWORD *)&v41.left, &v42) < 0 )
  {
    if ( (_QWORD)v42 )
    {
      v20 = *(int *)(*(_QWORD *)(v42 + 8) + 4LL) + v42 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( *(_QWORD *)&v41.left )
    {
      v21 = *(int *)(*(_QWORD *)(*(_QWORD *)&v41.left + 8LL) + 4LL) + *(_QWORD *)&v41.left + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_3;
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v42 + 8) + 4LL) + v42 + 8);
  v12 = (**v11)(v11, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v38);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v41);
  if ( v12 >= 0 )
  {
    v40 = 0;
    v41 = 0LL;
    v22 = v38[1];
    v42 = 0LL;
    v23 = (__int64)v38 + *(int *)(v22 + 16) + 8;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v23 + 8LL))(v23, v39, &v41);
    v43 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int128 *))(*v38 + 168LL))(v38, &v43) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v39, *(float *)&v43, *((float *)&v43 + 1), 0.0);
      v24 = 1;
    }
    else if ( !v24 )
    {
      left = v41.left;
      top = v41.top;
      v33 = v41.left;
      right = v41.right;
      v32 = v41.top;
      bottom = v41.bottom;
      v27 = v41.right;
      v26 = v41.bottom;
      goto LABEL_14;
    }
    CMILMatrix::Transform2DBoundsHelper<0>(v39, &v41, &v42);
    v26 = *((float *)&v42 + 3);
    v27 = *((float *)&v42 + 2);
    bottom = v41.bottom;
    right = v41.right;
    top = v41.top;
    left = v41.left;
    v32 = *((float *)&v42 + 1);
    v33 = *(float *)&v42;
LABEL_14:
    v34 = v27 - v33;
    if ( v34 == 0.0 || (v35 = v26 - v32, v35 == 0.0) )
    {
      v7 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(
        v25,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2003304441,
        0x3B2u);
    }
    else
    {
      a4->height = v35;
      *(_QWORD *)&v41.left = __PAIR64__(LODWORD(top), LODWORD(left));
      *(_QWORD *)&v41.right = __PAIR64__(LODWORD(bottom), LODWORD(right));
      a4->width = v34;
      *a5 = v41;
      if ( v24 )
      {
        *(_QWORD *)&v43 = v39[0];
        *((_QWORD *)&v43 + 1) = v39[2];
        v44 = v39[6];
      }
      else
      {
        v44 = 0LL;
        v43 = *(_OWORD *)&_xmm;
      }
      v36 = v44;
      *(_OWORD *)&a6->m11 = v43;
      *(_QWORD *)&a6->m[2][0] = v36;
    }
    goto LABEL_4;
  }
LABEL_3:
  v13 = *((float *)a2 + 41) - *((float *)a2 + 39);
  a4->width = *((float *)a2 + 40) - *((float *)a2 + 38);
  a4->height = v13;
  v14 = *((float *)a2 + 39);
  v15 = *((float *)a2 + 40);
  v16 = *((float *)a2 + 41);
  a5->left = *((FLOAT *)a2 + 38);
  a5->top = v14;
  a5->right = v15;
  a5->bottom = v16;
  LODWORD(v17) = *((_DWORD *)a2 + 38) ^ _xmm;
  LODWORD(v18) = *((_DWORD *)a2 + 39) ^ _xmm;
  *(_QWORD *)&a6->m11 = 1065353216LL;
  a6->m21 = 0.0;
  a6->m22 = 1.0;
  a6->dx = v17;
  a6->dy = v18;
LABEL_4:
  if ( v38 )
  {
    v37 = (__int64)v38 + *(int *)(v38[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return v7;
}
