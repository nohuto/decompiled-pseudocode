/*
 * XREFs of ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180212DC4
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001014C (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1802125D8 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 *v3; // rbx
  int height; // r9d
  __int64 v6; // rdx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  int width; // eax
  int (__fastcall ***v12)(_QWORD); // rcx
  void (__fastcall ***v13)(_QWORD, int *); // rcx
  int (__fastcall ***v14)(_QWORD); // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  struct D2D_SIZE_F v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+50h] [rbp+18h] BYREF
  int v21; // [rsp+54h] [rbp+1Ch]

  v3 = (__int64 *)((char *)this + 16);
  height = (int)a3->height;
  v6 = *((_QWORD *)this + 2);
  v8.m128_i32[0] = LODWORD(a3->height);
  v9 = 0LL;
  v10 = 0LL;
  v10.m128_f32[0] = (float)height;
  v20 = _mm_cmplt_ss(v10, v8).m128_u32[0];
  v10.m128_i32[0] = LODWORD(a3->width);
  width = (int)a3->width;
  v9.m128_f32[0] = (float)width;
  v19.height = (float)(height - v20);
  v19.width = (float)(int)(width - _mm_cmplt_ss(v9, v10).m128_u32[0]);
  if ( v6 )
  {
    v12 = (int (__fastcall ***)(_QWORD))(v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL));
    if ( (**v12)(v12) >= 0 )
    {
      v13 = (void (__fastcall ***)(_QWORD, int *))(*v3 + 8 + *(int *)(*(_QWORD *)(*v3 + 8) + 16LL));
      (**v13)(v13, &v20);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.width - (float)v20) & _xmm) > 0.015625
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.height - (float)v21) & _xmm) > 0.015625 )
      {
        CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
      }
    }
  }
  if ( *v3 )
  {
    v14 = (int (__fastcall ***)(_QWORD))(*v3 + 8 + *(int *)(*(_QWORD *)(*v3 + 8) + 8LL));
    if ( (**v14)(v14) >= 0 )
      return 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v3);
  v15 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
          a2,
          &v19,
          *((struct CBrush **)this + 1),
          (struct IRenderTargetBitmap **)v3);
  v17 = v15;
  if ( v15 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x36Bu);
  return v17;
}
