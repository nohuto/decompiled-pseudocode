/*
 * XREFs of ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180073D58
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000E084 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000E084.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x180071470 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801D3150 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180071D50 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1801052C0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        const struct CShape *a3,
        const struct MILMatrix3x2 *a4,
        bool a5)
{
  unsigned int v9; // ecx
  char *v10; // rcx
  __int64 v11; // rdi
  SIZE_T v12; // rbx
  HANDLE ProcessHeap; // rax
  char *v14; // rax
  unsigned int v15; // ecx
  void *v16; // rsi
  char *i; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  HANDLE v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rcx
  _QWORD v25[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  struct IBitmapRealization *v27; // [rsp+48h] [rbp-18h] BYREF
  bool v28; // [rsp+50h] [rbp-10h]
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(*(_QWORD *)a3 + 64LL))(a3, &v29) )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x8B3u, 0LL);
    return v20;
  }
  v26 = 0LL;
  v27 = a2;
  if ( a2 )
  {
    v10 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v11 = v29;
  v28 = a5;
  v12 = 16LL * v29;
  if ( !is_mul_ok(v29, 0x10uLL) )
    v12 = -1LL;
  ProcessHeap = GetProcessHeap();
  v14 = (char *)HeapAlloc(ProcessHeap, 0, v12);
  v16 = v14;
  if ( !v14 )
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x8A9u, 0LL);
    goto LABEL_17;
  }
  for ( i = v14; v11; --v11 )
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(i);
    i += 16;
  }
  (*(void (__fastcall **)(const struct CShape *, void *, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, v16, v29);
  v25[0] = v29;
  v25[1] = v16;
  v18 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, &v26, (__int64)v25, a4);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x8AFu, 0LL);
    operator delete(v16);
LABEL_17:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
    return v20;
  }
  v21 = GetProcessHeap();
  HeapFree(v21, 0, v16);
  if ( v27 )
  {
    v22 = (__int64)v27 + *(int *)(*((_QWORD *)v27 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v26 )
  {
    v24 = v26 + 8 + *(int *)(*(_QWORD *)(v26 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v20;
}
