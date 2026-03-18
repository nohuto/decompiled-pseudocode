/*
 * XREFs of ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180033020
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     ??$?0UPrimitiveUVDesc@@$0?0$0?0$0A@@?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEAA@AEBV?$span@UPrimitiveUVDesc@@$0?0@1@@Z @ 0x180020D98 (--$-0UPrimitiveUVDesc@@$0-0$0-0$0A@@-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEAA@AEBV-$span@UPrim.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180033AFC (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x180037780 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180037EBC (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x180038148 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180039448 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003F850 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005503C (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006D350 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x1800756BC (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180076804 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180077728 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AAB0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007B5C0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098418 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800A6914 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?insert@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_RECT_F@@@2@V?$basic_iterator@$$CBUD2D_RECT_F@@@2@_KAEBUD2D_RECT_F@@@Z @ 0x1800A8004 (-insert@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800AD664 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AE638 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B2BB8 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800CF2C0 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T2_N3@Z @ 0x1800DF0FC (--$emplace_back@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@-$vector_facad.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E0C0C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     ceilf_0 @ 0x18011B56C (ceilf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801B59F0 (--1-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@deta.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801D2A34 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     gsl::final_action__lambda_599dd103dd54625acbe38721a71e5844___::_final_action__lambda_599dd103dd54625acbe38721a71e5844___ @ 0x1801FEB68 (gsl--final_action__lambda_599dd103dd54625acbe38721a71e5844___--_final_action__lambda_599dd103dd5.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FED68 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int **a4,
        __int64 *a5)
{
  __int64 *v6; // r15
  _QWORD *v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  signed __int64 v11; // rcx
  float v12; // xmm6_4
  _BYTE *v13; // rdx
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 v16; // rdi
  float v17; // xmm9_4
  float v18; // xmm0_4
  __int64 v19; // rax
  int v20; // eax
  unsigned int **v21; // r12
  int v22; // ebx
  _QWORD *v23; // rdi
  struct IBitmapRealization *v24; // rdx
  float v25; // xmm10_4
  float v26; // xmm11_4
  CSurfaceDrawListBrush *v27; // rcx
  int v28; // eax
  int v29; // eax
  unsigned int *v30; // rbx
  unsigned int v31; // r8d
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned int *v34; // rdx
  __int64 v35; // r12
  float *v36; // rsi
  struct D2D_MATRIX_3X2_F *v37; // r9
  _QWORD *v38; // r9
  unsigned int *v39; // rsi
  __int64 v40; // rax
  _BYTE *v41; // r15
  __int64 v42; // rax
  int v43; // r15d
  unsigned int v44; // edx
  CBatchCommand *v45; // rcx
  CBatchCommand *v46; // rcx
  _OWORD *v47; // rax
  unsigned int v48; // edx
  __int64 *v49; // r9
  __int64 v50; // rsi
  __int64 *v51; // r15
  _QWORD *v52; // r12
  _QWORD *v53; // rsi
  int v54; // eax
  int v55; // eax
  int v56; // esi
  __int64 v57; // rsi
  unsigned int **v58; // rcx
  __int64 v59; // rdi
  unsigned int **v60; // rax
  unsigned int *v61; // r15
  unsigned int **v62; // rcx
  __int64 v63; // r15
  unsigned __int64 v64; // r15
  __int64 v65; // rax
  _BYTE *v66; // rcx
  __int64 *v67; // rcx
  void *v68; // rsi
  _BYTE *v69; // rcx
  unsigned __int64 v71; // rax
  void *v72; // rcx
  void *v73; // rcx
  __int64 v74; // rdx
  unsigned int v75; // edx
  void *v76; // rbx
  void *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // [rsp+28h] [rbp-E0h]
  float v81[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v84; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v85; // [rsp+78h] [rbp-90h] BYREF
  CBatchCommand *v86; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v87; // [rsp+90h] [rbp-78h] BYREF
  CSurfaceDrawListBrush *v88; // [rsp+98h] [rbp-70h] BYREF
  unsigned int **v89; // [rsp+A0h] [rbp-68h]
  void *v90; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v91; // [rsp+B0h] [rbp-58h]
  const char *v92; // [rsp+B8h] [rbp-50h] BYREF
  int v93; // [rsp+C0h] [rbp-48h]
  char v94[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v95[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-28h]
  _QWORD *v97; // [rsp+E8h] [rbp-20h]
  void *v98; // [rsp+F0h] [rbp-18h]
  __int64 *v99; // [rsp+F8h] [rbp-10h]
  _OWORD *v100; // [rsp+100h] [rbp-8h] BYREF
  CSurfaceDrawListBrush **v101; // [rsp+108h] [rbp+0h] BYREF
  CSurfaceDrawListBrush *v102; // [rsp+110h] [rbp+8h] BYREF
  char v103; // [rsp+118h] [rbp+10h]
  CBatchCommand **v104; // [rsp+120h] [rbp+18h]
  unsigned int v105[2]; // [rsp+128h] [rbp+20h] BYREF
  char v106; // [rsp+130h] [rbp+28h]
  _DWORD v107[6]; // [rsp+138h] [rbp+30h] BYREF
  void **v108; // [rsp+150h] [rbp+48h]
  void *v109; // [rsp+158h] [rbp+50h] BYREF
  char v110; // [rsp+160h] [rbp+58h]
  CSurfaceDrawListBrush *v111; // [rsp+168h] [rbp+60h] BYREF
  __int64 v112; // [rsp+170h] [rbp+68h]
  _DWORD v113[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v114; // [rsp+1A0h] [rbp+98h]
  __int64 v115; // [rsp+1A8h] [rbp+A0h]
  __int64 v116; // [rsp+1B0h] [rbp+A8h]
  int v117; // [rsp+1B8h] [rbp+B0h]
  __int64 v118; // [rsp+1C0h] [rbp+B8h]
  char v119; // [rsp+1C9h] [rbp+C1h]
  __int128 v120; // [rsp+1D8h] [rbp+D0h] BYREF
  float v121; // [rsp+1E8h] [rbp+E0h]
  float v122; // [rsp+1ECh] [rbp+E4h]
  struct D2D_RECT_F v123; // [rsp+1F8h] [rbp+F0h] BYREF
  _DWORD v124[20]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE *v125; // [rsp+258h] [rbp+150h] BYREF
  _BYTE *v126; // [rsp+260h] [rbp+158h]
  char *v127; // [rsp+268h] [rbp+160h]
  _BYTE v128[64]; // [rsp+270h] [rbp+168h] BYREF
  char v129; // [rsp+2B0h] [rbp+1A8h] BYREF
  struct D2D_MATRIX_3X2_F v130; // [rsp+2B8h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v6 = a5;
  v96 = *(_QWORD *)(a2 + 40);
  v123 = 0LL;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL * a3);
  v9 = (a5[1] - *a5) >> 2;
  v125 = v128;
  v10 = 0xAAAAAAAAAAAAAAABuLL * v9;
  v126 = v128;
  v89 = a4;
  v99 = a5;
  v91 = v8;
  v127 = &v129;
  if ( v10 )
  {
    v84 = v128;
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v125,
      (unsigned int)&v100,
      (unsigned int)&v84,
      v10,
      (__int64)&v123);
  }
  else
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      &v125,
      0LL);
  }
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2);
  if ( v11 < 0 )
  {
    v71 = v11 & 1 | ((0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2)) >> 1);
    v12 = (float)(int)v71 + (float)(int)v71;
  }
  else
  {
    v12 = (float)(int)v11;
  }
  v13 = v125;
  v14 = v12 + v12;
  v15 = 0.0;
  v16 = 0LL;
  *(float *)&v83 = v14;
  while ( (unsigned int)v16 < 0xAAAAAAAAAAAAAAABuLL * ((a5[1] - *a5) >> 2) )
  {
    CCpuClipAntialiasSink::CalcBoundingRect(*v8, 1LL, *a5 + 12 * v16, &v13[16 * (unsigned int)v16]);
    v13 = v125;
    if ( v15 <= (float)(*(float *)&v125[16 * (unsigned int)v16 + 12] - *(float *)&v125[16 * (unsigned int)v16 + 4]) )
      v15 = *(float *)&v125[16 * (unsigned int)v16 + 12] - *(float *)&v125[16 * (unsigned int)v16 + 4];
    v16 = (unsigned int)(v16 + 1);
  }
  v100 = (_OWORD *)(a1 + 904);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)(a1 + 904), v81, (float *)&v82);
  v17 = fmaxf(v81[0], *(float *)&v82);
  v18 = ceilf_0(v17 * v15);
  *((float *)&v83 + 1) = v18;
  v87 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v87);
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 40LL))(a2 + 24);
  v93 = 40;
  v92 = "DWM CPU-clip antialias sink intermediate";
  v20 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v92, &v83, *(unsigned int *)(v19 + 8), 1, &v87);
  v21 = v89;
  v22 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v20,
      v80);
LABEL_90:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v87);
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::~vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>(&v125);
    return (unsigned int)v22;
  }
  v23 = v87;
  v92 = (const char *)a2;
  LOBYTE(v93) = 1;
  (*(void (__fastcall **)(_QWORD *, __int64))(*v87 + 8LL))(v87, 1LL);
  if ( v23 )
    v24 = (struct IBitmapRealization *)((char *)v23 + *(int *)(v23[1] + 16LL) + 8);
  else
    v24 = 0LL;
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v94, v24);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v94);
  v25 = 1.0 / (float)(int)v84;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v94);
  v85.left = 0.0;
  v85.top = 0.0;
  v82 = 0LL;
  v88 = 0LL;
  v102 = 0LL;
  v103 = 1;
  v85.right = v14;
  v101 = &v88;
  LOWORD(v81[0]) = SamplerMode::k_ClampClampLinear;
  v85.bottom = v18;
  v26 = 1.0 / (float)SHIDWORD(v84);
  BYTE2(v81[0]) = 1;
  v123 = v85;
  v22 = CSurfaceDrawListBrush::CreateWithContentRect(v94, v81, &v123, &v102);
  if ( v103 )
  {
    v27 = *v101;
    *v101 = v102;
    if ( v27 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v27, 1u);
  }
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v22,
      v80);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v88);
LABEL_68:
    wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v82);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v94);
    gsl::final_action__lambda_599dd103dd54625acbe38721a71e5844___::_final_action__lambda_599dd103dd54625acbe38721a71e5844___(&v92);
    goto LABEL_90;
  }
  v111 = v88;
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v82);
  *(_QWORD *)&v85.left = 1LL;
  *(_QWORD *)&v85.right = &v111;
  v123 = v85;
  v28 = CCommonRenderingEffectFactory::CreateRenderingEffect(&v120, &v123, &v82);
  v22 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v28,
      v80);
    if ( v88 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v88, 1u);
    goto LABEL_68;
  }
  if ( v88 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v88, 1u);
  v29 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 1);
  v22 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v29,
      v80);
    goto LABEL_68;
  }
  v30 = *v21;
  v31 = 0;
  v32 = v82;
  v81[0] = 0.0;
LABEL_22:
  v30 = *(unsigned int **)v30;
  while ( 1 )
  {
    v33 = *v6;
    v34 = v30;
    if ( v31 >= 0xAAAAAAAAAAAAAAABuLL * ((v6[1] - *v6) >> 2) || v30 == *v21 )
      break;
    v98 = v30;
    v35 = v33 + 12LL * v31;
    v84 = (_BYTE *)v35;
    while ( v30 != *v89 && *(float *)(v35 + 8) > *((float *)v30 + 6) && *((float *)v30 + 7) > *(float *)(v35 + 4) )
      v30 = *(unsigned int **)v30;
    if ( v30 == v34 )
    {
      v21 = v89;
      goto LABEL_22;
    }
    v85.top = 0.0;
    v36 = (float *)&v125[16 * v31];
    v85.left = (float)(int)v31 + (float)(int)v31;
    v85.right = v85.left + 1.0;
    v85.bottom = ceilf_0((float)(v36[3] - v36[1]) * v17);
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v36, &v85, (const struct D2D_RECT_F *)&v130, v37);
    v38 = v91;
    v39 = (unsigned int *)v98;
    v97 = v91 + 1;
    while ( v39 != v30 )
    {
      v40 = v39[4];
      v97 = v38 + 1;
      v83 = v38[1];
      v112 = 5 * v40;
      v41 = *(_BYTE **)(v83 + 40 * v40);
      *(_QWORD *)&v120 = v41;
      v42 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v41 + 40LL))(v41);
      if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 48LL))(v42, a2) >= 0 )
      {
        if ( (v41[48] & 4) != 0 )
          *(_BYTE *)(a2 + 8095) = 1;
        v86 = 0LL;
        *(_QWORD *)v105 = 0LL;
        v104 = &v86;
        v106 = 1;
        v43 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v96 + 64, v105);
        if ( v106 )
        {
          v44 = v105[0];
          v45 = *v104;
          *v104 = *(CBatchCommand **)v105;
          if ( v45 )
            CBatchCommand::`scalar deleting destructor'(v45, v44);
        }
        if ( v43 < 0 )
        {
          v74 = 412LL;
          goto LABEL_79;
        }
        v80 = (unsigned int)CMILMatrix::CMILMatrix((CMILMatrix *)v124, &v130);
        CBatchCommand::InitializeForRendering(v86, v120, *(unsigned int *)(v83 + 8 * v112 + 12));
        v46 = v86;
        *((_DWORD *)v86 + 24) = 1;
        *(_QWORD *)((char *)v46 + 100) = *(_QWORD *)(v39 + 5);
        *((_DWORD *)v46 + 27) = v39[7];
        v47 = v100;
        *((_OWORD *)v46 + 7) = *v100;
        *((_OWORD *)v46 + 8) = v47[1];
        *((_OWORD *)v46 + 9) = v47[2];
        *((_OWORD *)v46 + 10) = v47[3];
        *((_DWORD *)v46 + 44) = *((_DWORD *)v47 + 16);
        v43 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v96 + 16));
        if ( v43 < 0 )
        {
          v74 = 428LL;
LABEL_79:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v74,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
            (const char *)(unsigned int)v43,
            v80);
          if ( v86 )
            CBatchCommand::`scalar deleting destructor'(v86, v75);
          wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v82);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v94);
          gsl::final_action__lambda_599dd103dd54625acbe38721a71e5844___::_final_action__lambda_599dd103dd54625acbe38721a71e5844___(&v92);
          v22 = v43;
          goto LABEL_90;
        }
        if ( v86 )
          CBatchCommand::`scalar deleting destructor'(v86, v48);
      }
      v39 = *(unsigned int **)v39;
      v38 = v91;
    }
    v90 = 0LL;
    DWORD2(v120) = 0;
    *(_QWORD *)&v120 = LODWORD(v25);
    *((float *)&v120 + 3) = v26;
    v121 = 0.0 - (float)(v25 * 0.0);
    v122 = 0.0 - (float)(v26 * 0.0);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v107,
      (const struct D2D1::Matrix3x2F *)&v130,
      (const struct D2D1::Matrix3x2F *)&v120);
    v124[2] = 0;
    v124[5] = 0;
    v50 = *v49;
    v109 = 0LL;
    v124[3] = v107[2];
    v124[4] = v107[3];
    v124[6] = v107[4];
    v124[7] = v107[5];
    v108 = &v90;
    v124[0] = v107[0];
    v124[1] = v107[1];
    v124[8] = 1065353216;
    v110 = 1;
    *(float *)&v124[9] = (float)(v85.left + 0.5) * v25;
    *(float *)&v124[10] = (float)(v85.top + 0.5) * v26;
    *(_QWORD *)&v123.left = 1LL;
    *(_QWORD *)&v123.right = v124;
    *(float *)&v124[11] = (float)(v85.right - 0.5) * v25;
    *(float *)&v124[12] = (float)(v85.bottom - 0.5) * v26;
    v120 = *(_OWORD *)gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(&v101, &v123);
    CCpuClipAntialiasSink::CreateUVData(v50, 1, v35, 2, 1, (__int64)&v120, (__int64)&v109);
    v51 = v91;
    v52 = v91 + 1;
    if ( v110 )
    {
      v52 = v97;
      v53 = *v108;
      *v108 = v109;
      if ( v53 )
      {
        v72 = (void *)v53[2];
        if ( v72 )
          operator delete(v72);
        operator delete(v53, 0x18uLL);
        v52 = v51 + 1;
      }
    }
    memset_0(v113, 0, 0x58uLL);
    v113[0] = 4112;
    v114 = v32;
    v119 = 1;
    v118 = *(_QWORD *)v90;
    v83 = 0LL;
    v115 = *v51;
    v54 = *((_DWORD *)v84 + 2);
    v116 = *(_QWORD *)v84;
    v117 = v54;
    v55 = CCpuClipAntialiasDrawListEntry::Create(v113, &v90, &v83);
    v56 = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v55,
        v80);
      if ( v83 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease(v83);
      v76 = v90;
      if ( v90 )
      {
        v77 = (void *)*((_QWORD *)v90 + 2);
        if ( v77 )
          operator delete(v77);
        operator delete(v76, 0x18uLL);
      }
      wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v82);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v95);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v94);
      CDrawingContext::PopLayer((CDrawingContext *)a2);
      v22 = v56;
      goto LABEL_90;
    }
    v57 = v83;
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::emplace_back<CCpuClipAntialiasDrawListEntry *,float,enum BlendMode::Enum,std::nullptr_t,std::nullptr_t,bool,bool>(
      v52,
      v83);
    v58 = (unsigned int **)v98;
    v59 = 0LL;
    v60 = (unsigned int **)*((_QWORD *)v98 + 1);
    *v60 = v30;
    *((_QWORD *)v30 + 1) = v60;
    do
    {
      v61 = *v58;
      operator delete(v58, 0x20uLL);
      ++v59;
      v58 = (unsigned int **)v61;
    }
    while ( v61 != v30 );
    v62 = v89;
    *(_QWORD *)&v120 = v59;
    v23 = v87;
    v89[1] = (unsigned int *)((char *)v89[1] - v120);
    v63 = v52[1] - *v52;
    v21 = v62;
    v64 = 0xCCCCCCCCCCCCCCCDuLL * (v63 >> 3) - 1;
    if ( v62[1] == (unsigned int *)0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("list too long");
    v65 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v66 = v84;
    v31 = LODWORD(v81[0]) + 1;
    *(_DWORD *)(v65 + 16) = v64;
    *(_QWORD *)(v65 + 20) = *(_QWORD *)v66;
    *(_DWORD *)(v65 + 28) = *((_DWORD *)v66 + 2);
    v21[1] = (unsigned int *)((char *)v21[1] + 1);
    v67 = (__int64 *)*((_QWORD *)v30 + 1);
    *(_QWORD *)v65 = v30;
    *(_QWORD *)(v65 + 8) = v67;
    *((_QWORD *)v30 + 1) = v65;
    *v67 = v65;
    LODWORD(v81[0]) = v31;
    if ( v57 )
    {
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v57);
      v31 = LODWORD(v81[0]);
    }
    v68 = v90;
    v6 = v99;
    if ( v90 )
    {
      v73 = (void *)*((_QWORD *)v90 + 2);
      if ( v73 )
        operator delete(v73);
      operator delete(v68, 0x18uLL);
      v31 = LODWORD(v81[0]);
    }
  }
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v82);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v95);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v94);
  CDrawingContext::PopLayer((CDrawingContext *)a2);
  if ( g_LockAndReadCpuClipAntialiasSinkTexture )
  {
    v78 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 64LL))(v23);
    v79 = *(int *)(*(_QWORD *)(v78 + 8) + 16LL) + v78 + 8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v79 + 24LL))(v79, a2 + 24);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v87);
  v69 = v125;
  if ( (v126 - v125) >> 4 )
  {
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      &v125,
      0LL);
    v69 = v125;
  }
  v125 = 0LL;
  if ( v69 == v128 )
    v69 = 0LL;
  operator delete(v69);
  return 0LL;
}
