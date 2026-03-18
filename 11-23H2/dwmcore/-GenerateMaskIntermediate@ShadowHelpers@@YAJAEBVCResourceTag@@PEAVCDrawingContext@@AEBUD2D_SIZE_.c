/*
 * XREFs of ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B7A04
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1802198B0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180249B44 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18024A200 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18024B31C (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18005A37C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180076804 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x18007E158 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18007E65C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18008F1C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AE638 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800DD870 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801B131C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x1801B1558 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801D5E54 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall ShadowHelpers::GenerateMaskIntermediate(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        __int64 a4,
        struct CShape *a5,
        char a6,
        float *a7,
        __int64 *a8)
{
  struct CShape *v8; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct tagRECT *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  struct CShape *v34; // [rsp+38h] [rbp-40h] BYREF
  char v35; // [rsp+40h] [rbp-38h]
  struct CShape *v36; // [rsp+48h] [rbp-30h] BYREF
  int v37[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a5;
  v33 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v33);
  LODWORD(v32) = 4;
  v13 = CDrawingContext::PushOffScreenRenderingLayer(a2, a1, a3, DisplayId::None, v32, (__int64)&v33);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE7u, 0LL);
    goto LABEL_27;
  }
  v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xEAu, 0LL);
    goto LABEL_11;
  }
  v15 = CDrawingContext::MarkCurrentState(a2);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v15, 0xEEu, 0LL);
    goto LABEL_10;
  }
  v34 = 0LL;
  v35 = 0;
  if ( !a5 )
  {
    if ( !a6 )
      goto LABEL_21;
    v23 = CShape::BuildFromRectFs((__int64)a7, v18, &v36);
    v15 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x105u, 0LL);
      goto LABEL_9;
    }
    CShapePtr::Release((CShapePtr *)&v34);
    v8 = v36;
    goto LABEL_16;
  }
  if ( !a6 )
  {
    CShapePtr::Release((CShapePtr *)&v34);
    v35 = 0;
LABEL_17:
    v34 = v8;
    if ( v8 )
    {
      v25 = CDrawingContext::PushClipShapeForCurrentNode(a2, (__int64 *)&v34);
      v15 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x10Bu, 0LL);
        goto LABEL_9;
      }
    }
LABEL_21:
    v27 = a4 + *(int *)(*(_QWORD *)(a4 + 64) + 8LL) + 64LL;
    v28 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, float *, _QWORD))(*(_QWORD *)v27 + 16LL))(
            v27,
            a2,
            a3,
            0LL);
    v15 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x10Eu, 0LL);
    }
    else
    {
      v30 = v33;
      v33 = 0LL;
      *a8 = v30;
    }
    goto LABEL_9;
  }
  v20 = (const struct tagRECT *)PixelAlign(v37, a7);
  v21 = CShape::ClipWithRect(a5, v20, &v36);
  v15 = v21;
  if ( v21 >= 0 )
  {
    v8 = v36;
    CShapePtr::Release((CShapePtr *)&v34);
LABEL_16:
    v35 = 1;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xFAu, 0LL);
LABEL_9:
  CShapePtr::Release((CShapePtr *)&v34);
  CDrawingContext::RestoreStateToLastMark(a2);
LABEL_10:
  CDrawingContext::PopTransformInternal(a2, 1);
LABEL_11:
  CDrawingContext::PopLayer(a2);
LABEL_27:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
  return (unsigned int)v15;
}
