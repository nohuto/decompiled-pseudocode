/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800672D0
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180068AB0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000B384 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18000CEFC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18000CF88 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800110F4 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18003B418 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180043DC0 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800454B8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062F30 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180066330 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800667E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18006D920 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180076268 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180077510 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x180077578 (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18008D614 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18008F7DC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800ABD94 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BE5E0 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x1800CEC54 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x1800DBDB0 (-Optimize@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800DEAE8 (-CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800DFBA0 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800E0018 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800E12E0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x1800F5488 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     IsNotifyInputSinkParentedPresent @ 0x1801103B0 (IsNotifyInputSinkParentedPresent.c)
 *     IsNotifyInputSinkTransformChangedPresent @ 0x180110404 (IsNotifyInputSinkTransformChangedPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B366C (--$move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_iterator@.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x1801B5EC4 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilDepthMode@@@Z @ 0x1801B5EDC (-Pop@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilDepthMode@@@Z.c)
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B5F4C (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801D7440 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801D7CCC (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D7D5C (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D7E18 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D91B8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801F607C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180271F38 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v9; // rax
  char v10; // al
  _QWORD *v11; // r13
  _DWORD **v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  _DWORD *v15; // r8
  struct CVisual *v16; // r11
  int *v17; // r9
  __int64 v18; // r8
  char v19; // al
  int v20; // r9d
  int v21; // r8d
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r12
  _QWORD *v27; // rsi
  CBspPreComputeHelper *v28; // rdi
  CPreComputeContext *v29; // r15
  struct CVisualTree *v30; // r12
  unsigned __int8 v31; // dl
  _DWORD *v32; // r8
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 ii; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  CPreComputeContext *v40; // rbx
  CPreComputeContext *v41; // rsi
  struct CVisual *v42; // r12
  bool v43; // zf
  _DWORD *v44; // r8
  int v45; // r12d
  char v46; // al
  _QWORD *v47; // rbx
  _DWORD *v49; // r8
  __int64 v50; // rcx
  _BYTE *v51; // rax
  unsigned int n; // r9d
  _QWORD **v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  const struct CVisual *v56; // rsi
  char v57; // r12
  _DWORD *v58; // r8
  int v59; // eax
  unsigned int v60; // ebx
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned int v63; // r10d
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ebx
  int v68; // eax
  int v69; // eax
  CPreComputeContext *v70; // rbx
  CPreComputeContext *v71; // r12
  int v72; // eax
  CMILMatrix *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rax
  float *v76; // rdx
  float v77; // xmm2_4
  float v78; // xmm1_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  float v81; // xmm0_4
  int v82; // eax
  float v83; // xmm9_4
  float v84; // xmm4_4
  float v85; // xmm8_4
  float v86; // xmm5_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  CDirtyRegion *v90; // rcx
  unsigned int v91; // esi
  int v92; // eax
  unsigned int v93; // ecx
  __int64 v94; // rax
  _BYTE *v95; // rdx
  __int64 m; // rcx
  __int64 *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _BYTE *v101; // rdx
  __int64 k; // rcx
  __int64 *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // rsi
  unsigned int v108; // ecx
  __int64 v109; // rax
  unsigned int v110; // edx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  _BYTE *v114; // rdx
  unsigned int jj; // ecx
  _QWORD **v116; // rbx
  _QWORD *v117; // rbx
  __int64 v118; // rax
  __int64 kk; // rsi
  __int64 v120; // rcx
  __int64 mm; // rsi
  __int64 v122; // rcx
  unsigned int v123; // ecx
  int v124; // eax
  __int64 v125; // r14
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  unsigned int v135; // ecx
  int v136; // eax
  int v137; // eax
  int v138; // eax
  CPreComputeContext *v139; // r9
  signed __int64 v140; // r8
  unsigned __int64 v141; // rcx
  signed __int64 v142; // rdx
  CBspPreComputeHelper *v143; // rbx
  void *v144; // rsi
  HANDLE ProcessHeap; // rax
  void *v146; // rsi
  HANDLE v147; // rax
  int v148; // eax
  unsigned int v149; // ebx
  int v150; // eax
  unsigned int v151; // ebx
  int v152; // eax
  struct CEffect *EffectInternal; // r12
  struct CVisual **v154; // r12
  int v155; // r13d
  unsigned int i; // esi
  _QWORD *v157; // rcx
  _BYTE *LightAtNoRef; // rax
  int v159; // eax
  unsigned int v160; // ecx
  int v161; // eax
  unsigned int v162; // ecx
  unsigned int v163; // ebx
  int v164; // eax
  unsigned int v165; // ebx
  __int64 v166; // rax
  _BYTE *v167; // rdx
  __int64 j; // rcx
  _QWORD **v169; // rcx
  _QWORD *v170; // rcx
  const struct CVisual *TransformParent; // rax
  CVisual ***v172; // rbx
  struct CVisual *v173; // rax
  unsigned int v174; // eax
  __int64 v175; // rsi
  int v176; // eax
  _QWORD *v177; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  DwmDbg::DbgString *v180; // rax
  DwmDbg::DbgString *v181; // rsi
  CVisualTreePath *v182; // rbx
  DwmDbg::DbgString *v183; // rax
  __m256i *v184; // rcx
  __int64 v185; // r8
  int v186; // eax
  unsigned int v187; // ebx
  int v188; // eax
  unsigned int v189; // ecx
  int v190; // r12d
  struct CBspNode *v191; // rdx
  int v192; // eax
  unsigned int v193; // ecx
  int v194; // eax
  unsigned int v195; // ecx
  unsigned int v196; // eax
  __int64 v197; // rsi
  int v198; // eax
  unsigned int v199; // ecx
  unsigned int v200; // eax
  __int64 v201; // rsi
  int v202; // eax
  unsigned int v203; // ecx
  unsigned int v204; // eax
  __int64 v205; // rsi
  int v206; // eax
  unsigned int v207; // ecx
  unsigned int v208; // eax
  __int64 v209; // rsi
  int v210; // eax
  unsigned int v211; // ecx
  int v212; // eax
  unsigned int v213; // ecx
  unsigned int v214; // eax
  __int64 v215; // rsi
  int v216; // eax
  unsigned int v217; // ecx
  unsigned int v218; // eax
  int v219; // eax
  unsigned int v220; // ecx
  CPreComputeContext **v221; // [rsp+20h] [rbp-178h]
  int v222; // [rsp+20h] [rbp-178h]
  int v223; // [rsp+20h] [rbp-178h]
  int v224; // [rsp+20h] [rbp-178h]
  int v225; // [rsp+20h] [rbp-178h]
  char v226; // [rsp+30h] [rbp-168h]
  bool HasEffects; // [rsp+30h] [rbp-168h]
  struct CVisual *v228; // [rsp+38h] [rbp-160h] BYREF
  struct CVisualTree *v229; // [rsp+40h] [rbp-158h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+48h] [rbp-150h]
  char *v231; // [rsp+50h] [rbp-148h]
  __int128 v232; // [rsp+60h] [rbp-138h] BYREF
  __m256i v233; // [rsp+70h] [rbp-128h] BYREF
  void *lpMem[2]; // [rsp+90h] [rbp-108h]
  __int64 v235; // [rsp+A0h] [rbp-F8h]
  __int128 v236; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v237; // [rsp+C0h] [rbp-D8h]
  struct CVisual *v238[3]; // [rsp+C8h] [rbp-D0h] BYREF
  CPreComputeContext *v239[2]; // [rsp+E0h] [rbp-B8h] BYREF
  signed __int64 v240; // [rsp+F0h] [rbp-A8h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v3 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 236);
  v7 = *(_QWORD *)a2;
  v238[0] = *((struct CVisual **)this + 237);
  p_Blink = 0LL;
  *(_QWORD *)&v236 = v3;
  v226 = 0;
  v229 = a2;
  v239[0] = this;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    v9 = *(_QWORD *)a2;
    p_Blink = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v9 + 184))(a2) )
    {
      p_Blink = (struct _LIST_ENTRY **)(v5 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_4;
          }
          p_Blink = &Flink[-23].Blink;
        }
      }
    }
  }
LABEL_4:
  *a3 = 1;
  if ( *(_BYTE *)(v3 - 7) )
  {
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::pop_back(this);
    return 0LL;
  }
  if ( (unsigned int)((__int64)(*(_QWORD *)(v5 + 288) - *(_QWORD *)(v5 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v5 + 312) - *(_QWORD *)(v5 + 304)) >> 4) )
  {
    v228 = (struct CVisual *)0x100000000LL;
    v154 = &v228;
    do
    {
      v155 = *(_DWORD *)v154;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount((_QWORD *)v5, v155); ++i )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v157, i, v155);
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v229,
                 v5) )
          {
            v159 = CLightStack::Pop((CPreComputeContext *)((char *)this + 1520));
            LODWORD(v231) = v159;
            if ( v159 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v160, 0LL, 0, v159, 0x69u, 0LL);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x482,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)(unsigned int)v231,
                v222);
              return (unsigned int)v231;
            }
          }
        }
      }
      v154 = (struct CVisual **)((char *)v154 + 4);
    }
    while ( v154 != &v229 );
  }
  v10 = *(_BYTE *)(v5 + 96);
  if ( (v10 & 1) != 0 )
  {
    v56 = 0LL;
    v226 = 1;
    v11 = (_QWORD *)(v5 + 232);
    v57 = 0;
    v58 = *(_DWORD **)(v5 + 232);
    if ( (*v58 & 0x1000000) != 0 )
    {
      v166 = (unsigned int)v58[1];
      v167 = v58 + 2;
      for ( j = 0LL; (unsigned int)j < (unsigned int)v166; ++v167 )
      {
        if ( *v167 == 8 )
          break;
        j = (unsigned int)(j + 1);
      }
      v169 = (unsigned int)j >= (unsigned int)v166
           ? 0LL
           : (_QWORD **)((char *)v58 + v166 + 8 * j - (((_BYTE)v166 + 15) & 7) + 15);
      v170 = *v169;
      if ( v170 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v170 + 184LL))(*v170) )
        {
          TransformParent = CVisual::GetTransformParent((CVisual *)v5, (CVisual **)v229, 0LL);
          v172 = *(CVisual ****)this;
          v56 = TransformParent;
          v173 = (struct CVisual *)*((_QWORD *)this + 1);
          v228 = v173;
          while ( v172 != (CVisual ***)v173 )
          {
            if ( v56 != CVisual::GetTransformParent((CVisual *)v5, v172[54], 0LL) )
            {
              v57 = 1;
              break;
            }
            v173 = v228;
            v172 += 57;
          }
        }
      }
    }
    v59 = CVisual::ConvertInnerToOuterBounds((CVisual *)v5, v229, v56, v57);
    v60 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A1,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v59,
        (int)v221);
      return v60;
    }
    *(_BYTE *)(v5 + 96) &= ~1u;
    v10 = *(_BYTE *)(v5 + 96);
  }
  else
  {
    v11 = (_QWORD *)(v5 + 232);
  }
  if ( (v10 & 0x10) != 0 )
  {
    v12 = (_DWORD **)v11;
    v13 = (int)(*(_DWORD *)(v5 + 96) << 14) >> 22;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 256LL))(v5) )
    {
      if ( (v13 & 1) != 0 )
      {
        LOWORD(v13) = v13 | 0x200;
      }
      else
      {
        LOWORD(v13) = v13 | 1;
        if ( !CVisual::HasSingleD2DBitmapOrPrimitiveGroup((CVisual *)v5) )
          LOWORD(v13) = v13 | 0x200;
        v12 = (_DWORD **)(v5 + 232);
      }
    }
    if ( (**v12 & 0x400000) == 0 )
      goto LABEL_12;
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v5);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            187LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              58LL) )
      {
LABEL_12:
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 328LL))(v5) )
          LOWORD(v13) = v13 | 4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 336LL))(v5) )
          LOWORD(v13) = v13 | 8;
        v14 = *(_QWORD *)(v5 + 256);
        if ( v14
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, 17LL)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 256) + 304LL))(*(_QWORD *)(v5 + 256)) )
        {
          LOWORD(v13) = v13 | 0x10;
        }
        v15 = *v12;
        if ( (**v12 & 0x800000) != 0 )
        {
          v100 = (unsigned int)v15[1];
          v101 = v15 + 2;
          for ( k = 0LL; (unsigned int)k < (unsigned int)v100; ++v101 )
          {
            if ( *v101 == 9 )
              break;
            k = (unsigned int)(k + 1);
          }
          if ( (unsigned int)k >= (unsigned int)v100 )
            v103 = 0LL;
          else
            v103 = (__int64 *)((char *)v15 + 8 * k - (((_BYTE)v100 + 15) & 7) + v100 + 15);
          v104 = *v103;
          if ( v104 )
          {
            v105 = *(_QWORD *)(v104 + 104);
            if ( v105 )
            {
              if ( *(_QWORD *)(v105 + 64) )
                LOWORD(v13) = v13 | 0x20;
            }
          }
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 288LL))(v5) )
          LOWORD(v13) = v13 | 0x80;
        *(_DWORD *)(v5 + 96) &= 0xFFFC00FF;
        *(_DWORD *)(v5 + 96) |= (v13 & 0x3FF) << 8;
        goto LABEL_21;
      }
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
      LOWORD(v13) = v13 | 2;
    goto LABEL_12;
  }
LABEL_21:
  v16 = v238[0];
  if ( v238[0] )
  {
    v17 = (int *)*v11;
    v18 = 0LL;
    if ( (*(_DWORD *)*v11 & 0x800000) != 0 )
    {
      v94 = (unsigned int)v17[1];
      v95 = v17 + 2;
      for ( m = 0LL; (unsigned int)m < (unsigned int)v94; ++v95 )
      {
        if ( *v95 == 9 )
          break;
        m = (unsigned int)(m + 1);
      }
      if ( (unsigned int)m >= (unsigned int)v94 )
        v97 = 0LL;
      else
        v97 = (__int64 *)((char *)v17 + 8 * m - (((_BYTE)v94 + 15) & 7) + v94 + 15);
      v98 = *v97;
      if ( v98 )
      {
        v99 = *(_QWORD *)(v98 + 104);
        if ( v99 )
          v18 = *(_QWORD *)(v99 + 64);
      }
    }
    v19 = *(_BYTE *)(v5 + 102);
    v20 = v18 != 0 ? 0x40 : 0;
    if ( (v19 & 0x10) != 0 )
      v20 = 64;
    if ( (v19 & 0x20) != 0 )
      v20 |= 0x100u;
    v21 = *(_DWORD *)(v5 + 96);
    v22 = v20 | 0x200;
    if ( (v21 & *((_DWORD *)v238[0] + 24) & 0x100) == 0 )
      v22 = v20;
    v23 = *((_DWORD *)v238[0] + 24) | v21 & 0x3FF00 | (v22 << 8);
    *((_DWORD *)v238[0] + 24) = v23;
    if ( (v23 & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)v16 + 172);
  }
  if ( (*(_BYTE *)(v5 + 272) & 4) != 0 )
  {
    v164 = CPreComputeContext::ProcessPostSubgraphWindowBackdropInput(this, (struct CVisual *)v5);
    v165 = v164;
    if ( v164 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x515,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v164,
        (int)v221);
      return v165;
    }
  }
  v24 = *(_QWORD *)this;
  v25 = *((_QWORD *)this + 1);
  while ( v24 != v25 )
  {
    v26 = *(_QWORD *)(v24 + 432);
    v27 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 184LL))(v26) )
    {
      v27 = (_QWORD *)(v5 + 336);
    }
    else
    {
      v49 = (_DWORD *)*v11;
      if ( *(int *)*v11 < 0 )
      {
        v50 = (unsigned int)v49[1];
        v51 = v49 + 2;
        for ( n = 0; n < (unsigned int)v50; ++v51 )
        {
          if ( *v51 == 1 )
            break;
          ++n;
        }
        v53 = n >= (unsigned int)v50 ? 0LL : (_QWORD **)((char *)v49 + 8LL * n - (((_BYTE)v50 + 15) & 7) + v50 + 15);
        v54 = *v53;
        if ( v54 )
        {
          v55 = (_QWORD *)*v54;
          if ( (_QWORD *)*v54 != v54 )
          {
            while ( v55[4] != v26 )
            {
              v55 = (_QWORD *)*v55;
              if ( v55 == v54 )
                goto LABEL_36;
            }
            v27 = v55 - 45;
          }
        }
      }
    }
LABEL_36:
    if ( *((_BYTE *)v27 + 8) )
    {
      v68 = *(_DWORD *)(v24 + 360);
      if ( v68 )
        *(_DWORD *)(v24 + 360) = v68 - 1;
      *((_BYTE *)v27 + 8) = 0;
    }
    if ( *((_BYTE *)v27 + 9) )
    {
      v69 = *(_DWORD *)(v24 + 392);
      if ( v69 )
        *(_DWORD *)(v24 + 392) = v69 - 1;
      *((_BYTE *)v27 + 9) = 0;
    }
    v24 += 456LL;
  }
  v28 = (CBspPreComputeHelper *)v236;
  v29 = v239[0];
  if ( (*(_BYTE *)(v5 + 100) & 4) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)v239[0] + 1456);
  if ( (*(_BYTE *)(v5 + 100) & 2) != 0 )
  {
    v152 = *((_DWORD *)v29 + 356);
    if ( v152 )
      *((_DWORD *)v29 + 356) = v152 - 1;
  }
  if ( (*(_BYTE *)(v5 + 100) & 8) != 0 )
  {
    v106 = *((_DWORD *)v29 + 372);
    if ( v106 )
      *((_DWORD *)v29 + 372) = v106 - 1;
  }
  if ( (*(_BYTE *)(v5 + 100) & 0x10) != 0 )
    *((_BYTE *)v29 + 1960) = *((_BYTE *)v29 + 1960) == 0;
  if ( (*(_BYTE *)(v5 + 272) & 1) != 0 )
  {
    v148 = CPreComputeContext::ProcessPostSubgraphBackdropInput(v29, (struct CVisual *)v5, v226);
    v149 = v148;
    if ( v148 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x545,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v148,
        (int)v221);
      return v149;
    }
  }
  if ( (*(_DWORD *)*v11 & 0x200000) != 0 )
  {
    v150 = CPreComputeContext::ProcessPostSubgraphWindowBackgroundTreatment(v29, (struct CVisual *)v5, v226);
    v151 = v150;
    if ( v150 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v150,
        (int)v221);
      return v151;
    }
  }
  if ( (*(_BYTE *)(v5 + 96) & 4) == 0 )
    goto LABEL_48;
  --*((_DWORD *)v28 - 3);
  v70 = *(CPreComputeContext **)v29;
  v71 = (CPreComputeContext *)*((_QWORD *)v29 + 1);
  while ( v70 != v71 )
  {
    if ( !*((_DWORD *)v70 + 111) && !*(_BYTE *)(*((_QWORD *)v70 + 53) + 4420LL) )
    {
      v72 = *((_DWORD *)v70 + 90);
      v237 = 0LL;
      v236 = 0LL;
      if ( v72 )
        v73 = (CMILMatrix *)(*((_QWORD *)v70 + 47) + 68LL * (unsigned int)(v72 - 1));
      else
        v73 = (CMILMatrix *)&CMILMatrix::Identity;
      v74 = *((_QWORD *)v70 + 54);
      v75 = *(_QWORD *)(v74 + 64);
      if ( v5 == v75 )
      {
        if ( v75 )
          v76 = (float *)(v74 + 72);
        else
          v76 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
      else
      {
        v76 = (float *)(v5 + 148);
      }
      CMILMatrix::Transform3DBoundsHelper<1>(v73, v76, (float *)&v236);
      v77 = *((float *)&v236 + 2);
      v78 = *(float *)&v236;
      v79 = *((float *)&v236 + 3);
      v80 = *((float *)&v236 + 1);
      if ( *((float *)&v236 + 2) > *(float *)&v236 && *((float *)&v236 + 3) > *((float *)&v236 + 1) )
      {
        if ( *((_DWORD *)v70 + 110) || (*(_DWORD *)(v5 + 96) & 0x200) != 0 )
        {
          v81 = FLOAT_4_0;
        }
        else if ( (*(_DWORD *)(v5 + 96) & 0x800) != 0 )
        {
          v81 = FLOAT_0_5;
        }
        else
        {
          v81 = 0.0;
        }
        if ( (*(_DWORD *)(v5 + 96) & 0x1000) != 0 )
          v81 = v81 + 0.5;
        if ( v81 != 0.0 )
        {
          v78 = *(float *)&v236 - v81;
          v80 = *((float *)&v236 + 1) - v81;
          v77 = *((float *)&v236 + 2) + v81;
          v79 = *((float *)&v236 + 3) + v81;
        }
      }
      v82 = *((_DWORD *)v70 + 98);
      if ( v82 )
      {
        v236 = *(_OWORD *)(*((_QWORD *)v70 + 51) + 16LL * (unsigned int)(v82 - 1));
        v83 = *(float *)&v236;
        if ( v78 > *(float *)&v236 )
          v83 = v78;
        v84 = *((float *)&v236 + 1);
        v85 = *((float *)&v236 + 1);
        if ( v80 > *((float *)&v236 + 1) )
        {
          v84 = v80;
          v85 = v80;
        }
        v86 = *((float *)&v236 + 2);
        v87 = *((float *)&v236 + 2);
        if ( *((float *)&v236 + 2) > v77 )
        {
          v86 = v77;
          v87 = v77;
        }
        v88 = *((float *)&v236 + 3);
        v89 = *((float *)&v236 + 3);
        if ( *((float *)&v236 + 3) > v79 )
        {
          v88 = v79;
          v89 = v79;
        }
        v79 = v89;
        if ( v87 <= v83 || v88 <= v85 )
        {
          v86 = 0.0;
          v84 = 0.0;
          v83 = 0.0;
          v79 = 0.0;
        }
        *((float *)v239 + 1) = v84;
        v78 = v83;
        *(float *)&v239[1] = v86;
        v80 = v84;
        v77 = v86;
      }
      else
      {
        *((float *)v239 + 1) = v80;
        *(float *)&v239[1] = v77;
      }
      *((float *)&v239[1] + 1) = v79;
      *(float *)v239 = v78;
      if ( v77 > v78 && v79 > v80 )
      {
        v90 = (CDirtyRegion *)*((_QWORD *)v70 + 53);
        v91 = 0;
        if ( !*((_BYTE *)v90 + 4420) )
        {
          if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v78
             || v77 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
            && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v80
             || v79 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
          {
            v92 = CDirtyRegion::_Add(v90, v5, 1u, (__m128 *)v239);
            v91 = v92;
            if ( v92 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x1B8u, 0LL);
          }
          else
          {
            CDirtyRegion::SetFullDirty(v90);
          }
        }
        if ( (v91 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x625,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)v91,
            (int)v221);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x552,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)v91,
            v223);
          return v91;
        }
      }
    }
    v70 = (CPreComputeContext *)((char *)v70 + 456);
  }
  if ( dword_1803E3760 && (*(int *)(v5 + 264) > 0 || *(int *)(v5 + 268) > 0) )
  {
    v180 = DwmDbg::DbgString::DbgString((char **)v239, word_18033C470);
    v30 = v229;
    v181 = v180;
    v182 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)&v232, v229);
    v183 = DwmDbg::DbgString::DbgString((char **)&v236, "PreCompute-AddedDirtyRectInPostSubgraph");
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v183, v5, v30, v182, v181);
    v184 = (__m256i *)v232;
    v185 = (__int64)(*((_QWORD *)&v232 + 1) - v232) >> 4;
    if ( v185 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v232,
        0LL,
        v185);
      v184 = (__m256i *)v232;
    }
    *(_QWORD *)&v232 = 0LL;
    if ( v184 == (__m256i *)&v233.m256i_u64[1] )
      v184 = 0LL;
    operator delete(v184);
  }
  else
  {
LABEL_48:
    v30 = v229;
  }
  if ( !p_Blink )
    goto LABEL_61;
  v31 = *(_BYTE *)(v5 + 100);
  if ( (v31 & 0x40) != 0 && v31 >> 7 != (((*(int *)(v5 + 96) >> 8) & 0x20) != 0) )
  {
    *(_BYTE *)(v5 + 100) = (*(_DWORD *)(v5 + 96) >> 6) ^ (v31 ^ (*(_DWORD *)(v5 + 96) >> 6)) & 0x7F;
    v239[0] = (CPreComputeContext *)CVisual::GetTopLevelWindow((CVisual *)v5);
    v62 = *((unsigned int *)v29 + 454);
    LODWORD(v239[1]) = v63 >> 7;
    v64 = v62 + 1;
    if ( (int)v62 + 1 < (unsigned int)v62 )
    {
      v67 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_306;
    }
    if ( v64 <= *((_DWORD *)v29 + 453) )
    {
      *(_OWORD *)(*((_QWORD *)v29 + 224) + 16 * v62) = *(_OWORD *)v239;
      *((_DWORD *)v29 + 454) = v64;
    }
    else
    {
      v65 = DynArrayImpl<0>::AddMultipleAndSet((char *)v29 + 1792, 16LL, 1LL, v239);
      v67 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0xC0u, 0LL);
LABEL_306:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x568,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
          (const char *)v67,
          v224);
        return v67;
      }
    }
  }
  v32 = (_DWORD *)*v11;
  if ( (*(_DWORD *)*v11 & 0x800000) != 0 )
  {
    v33 = (unsigned int)v32[1];
    v34 = v32 + 2;
    for ( ii = 0LL; (unsigned int)ii < (unsigned int)v33; ++v34 )
    {
      if ( *v34 == 9 )
        break;
      ii = (unsigned int)(ii + 1);
    }
    v36 = (unsigned int)ii >= (unsigned int)v33
        ? 0LL
        : (__int64 *)((char *)v32 + v33 + 8 * ii - (((_BYTE)v33 + 15) & 7) + 15);
    v37 = *v36;
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 104);
      v39 = 0LL;
      if ( v38 )
        v39 = *(_QWORD *)(v38 + 64);
      if ( v39 )
      {
        if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 || (v107 = v39, *((_BYTE *)v29 + 1960)) )
        {
          v107 = v39;
          if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
          {
            v176 = *((_DWORD *)v29 + 372);
            v177 = 0LL;
            if ( v176 )
              v177 = (_QWORD *)(*((_QWORD *)v29 + 188) + 8LL * (unsigned int)(v176 - 1));
            NotifyInputSinkParented(v39, *v177);
          }
        }
        if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 || p_Blink[31] == p_Blink[33][1].Flink[31].Flink )
        {
          *(_QWORD *)&v232 = v107;
          CopyInputTransform(
            (const struct CMILMatrix *)(p_Blink + 36),
            (struct tagINPUT_TRANSFORM *)((char *)&v232 + 8));
          v109 = *((unsigned int *)v29 + 462);
          v110 = v109 + 1;
          if ( (int)v109 + 1 < (unsigned int)v109 )
          {
            v163 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else
          {
            if ( v110 <= *((_DWORD *)v29 + 461) )
            {
              v111 = 9 * v109;
              v112 = *((_QWORD *)v29 + 228);
              *(_OWORD *)(v112 + 8 * v111) = v232;
              *(__m256i *)(v112 + 8 * v111 + 16) = v233;
              *(_OWORD *)(v112 + 8 * v111 + 48) = *(_OWORD *)lpMem;
              *(_QWORD *)(v112 + 8 * v111 + 64) = v235;
              *((_DWORD *)v29 + 462) = v110;
              goto LABEL_168;
            }
            v161 = DynArrayImpl<0>::AddMultipleAndSet((char *)v29 + 1824, 72LL, 1LL, &v232);
            v163 = v161;
            if ( v161 >= 0 )
            {
LABEL_168:
              if ( (unsigned __int8)IsNotifyInputSinkTransformChangedPresent() )
                NotifyInputSinkTransformChanged(v107, (char *)&v232 + 8);
              goto LABEL_60;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v162, 0LL, 0, v161, 0xC0u, 0LL);
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x587,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)v163,
            v225);
          return v163;
        }
      }
    }
  }
LABEL_60:
  *(_BYTE *)(v5 + 100) &= ~0x20u;
LABEL_61:
  if ( CPreComputeContext::s_depthSortingEnabled )
  {
    v186 = CDepthSortingPreComputeHelper::PreComputePostSubgraph(
             (CPreComputeContext *)((char *)v29 + 1856),
             v30,
             (struct CVisual *)v5,
             v238[0]);
    v187 = v186;
    if ( v186 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v186,
        (int)v221);
      return v187;
    }
  }
  v40 = *(CPreComputeContext **)v29;
  v41 = (CPreComputeContext *)*((_QWORD *)v29 + 1);
  while ( 1 )
  {
    if ( v40 == v41 )
    {
      if ( *(char *)(v5 + 104) < 0 )
        CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Pop((char *)v29 + 1392);
      v44 = (_DWORD *)*v11;
      v45 = 0;
      if ( (*(_DWORD *)*v11 & 0x400000) != 0 )
      {
        v113 = (unsigned int)v44[1];
        v114 = v44 + 2;
        for ( jj = 0; jj < (unsigned int)v113; ++v114 )
        {
          if ( *v114 == 10 )
            break;
          ++jj;
        }
        if ( jj >= (unsigned int)v113 )
          v116 = 0LL;
        else
          v116 = (_QWORD **)((char *)v44 + 8LL * jj - (((_BYTE)v113 + 15) & 7) + v113 + 15);
        v117 = *v116;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v117 + 56LL))(v117, 187LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v117 + 56LL))(v117, 58LL) )
            goto LABEL_71;
          v117 = (_QWORD *)v117[11];
        }
        if ( v117 )
          --*((_DWORD *)v28 - 4);
      }
LABEL_71:
      v46 = *(_BYTE *)(v5 + 100);
      *(_BYTE *)(v5 + 96) = 0;
      *(_BYTE *)(v5 + 100) = v46 & 0xE0;
      v47 = (_QWORD *)*((_QWORD *)v28 - 3);
      if ( v47[8] != v5 )
        return 0LL;
      v118 = (*(__int64 (__fastcall **)(_QWORD))(*v47 + 216LL))(*((_QWORD *)v28 - 3));
      if ( v118 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 32LL))(v118);
      for ( kk = (__int64)(v47[568] - v47[567]) >> 3; (int)kk > 0; LODWORD(kk) = kk - 1 )
      {
        v120 = *(_QWORD *)(v47[567] + 8LL * (unsigned int)(kk - 1));
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v120 + 24LL))(v120, v47, v47 + 13);
      }
      CDirtyRegion::Optimize((CDirtyRegion *)(v47 + 13));
      for ( mm = (__int64)(v47[568] - v47[567]) >> 3; (int)mm > 0; LODWORD(mm) = mm - 1 )
      {
        v122 = *(_QWORD *)(v47[567] + 8LL * (unsigned int)(mm - 1));
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v122 + 16LL))(v122, v47, v47 + 13);
      }
      *((_DWORD *)v28 - 26) = 0;
      CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)v28 - 136);
      CWatermarkStack<bool,64,2,10>::Optimize((char *)v28 - 168);
      CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)v28 - 200);
      v124 = *((_DWORD *)v28 - 56);
      v125 = 64LL;
      if ( v124 == 10 )
      {
        v196 = *((_DWORD *)v28 - 52);
        v197 = 64LL;
        if ( v196 > 0x40 )
          v197 = v196;
        if ( (unsigned __int64)(3 * v197) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v197) <= *((_DWORD *)v28 - 57) )
        {
          v238[0] = 0LL;
          v198 = HrMalloc(4uLL, (unsigned int)v197, (void **)v238);
          if ( v198 >= 0 )
          {
            operator delete(*((void **)v28 - 27));
            *((struct CVisual **)v28 - 27) = v238[0];
            *((_DWORD *)v28 - 57) = v197;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v199, 0LL, 0, v198, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 52) = 0;
        v126 = 0;
      }
      else
      {
        v126 = v124 + 1;
      }
      *((_DWORD *)v28 - 56) = v126;
      v127 = *((_DWORD *)v28 - 64);
      if ( v127 == 10 )
      {
        v200 = *((_DWORD *)v28 - 60);
        v201 = 64LL;
        if ( v200 > 0x40 )
          v201 = v200;
        if ( (unsigned __int64)(3 * v201) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v201) <= *((_DWORD *)v28 - 65) )
        {
          v238[0] = 0LL;
          v202 = HrMalloc(4uLL, (unsigned int)v201, (void **)v238);
          if ( v202 >= 0 )
          {
            operator delete(*((void **)v28 - 31));
            *((struct CVisual **)v28 - 31) = v238[0];
            *((_DWORD *)v28 - 65) = v201;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v203, 0LL, 0, v202, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 60) = 0;
        v128 = 0;
      }
      else
      {
        v128 = v127 + 1;
      }
      *((_DWORD *)v28 - 64) = v128;
      v129 = *((_DWORD *)v28 - 72);
      if ( v129 == 10 )
      {
        v204 = *((_DWORD *)v28 - 68);
        v205 = 64LL;
        if ( v204 > 0x40 )
          v205 = v204;
        if ( (unsigned __int64)(3 * v205) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v205) <= *((_DWORD *)v28 - 73) )
        {
          v238[0] = 0LL;
          v206 = HrMalloc(4uLL, (unsigned int)v205, (void **)v238);
          if ( v206 >= 0 )
          {
            operator delete(*((void **)v28 - 35));
            *((struct CVisual **)v28 - 35) = v238[0];
            *((_DWORD *)v28 - 73) = v205;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v207, 0LL, 0, v206, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 68) = 0;
        v130 = 0;
      }
      else
      {
        v130 = v129 + 1;
      }
      *((_DWORD *)v28 - 72) = v130;
      v131 = *((_DWORD *)v28 - 80);
      if ( v131 == 10 )
      {
        v208 = *((_DWORD *)v28 - 76);
        v209 = 64LL;
        if ( v208 > 0x40 )
          v209 = v208;
        if ( (unsigned __int64)(3 * v209) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v209) <= *((_DWORD *)v28 - 81) )
        {
          v238[0] = 0LL;
          v210 = HrMalloc(4uLL, (unsigned int)v209, (void **)v238);
          if ( v210 >= 0 )
          {
            operator delete(*((void **)v28 - 39));
            *((struct CVisual **)v28 - 39) = v238[0];
            *((_DWORD *)v28 - 81) = v209;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v210, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 76) = 0;
        v132 = 0;
      }
      else
      {
        v132 = v131 + 1;
      }
      *((_DWORD *)v28 - 80) = v132;
      v133 = *((_DWORD *)v28 - 88);
      if ( v133 == 8 )
      {
        v174 = *((_DWORD *)v28 - 84);
        v175 = 8LL;
        if ( v174 > 8 )
          v175 = v174;
        if ( (unsigned __int64)(3 * v175) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v175) <= *((_DWORD *)v28 - 89) )
        {
          v238[0] = 0LL;
          v212 = HrMalloc(0x44uLL, (unsigned int)v175, (void **)v238);
          if ( v212 >= 0 )
          {
            operator delete(*((void **)v28 - 43));
            *((struct CVisual **)v28 - 43) = v238[0];
            *((_DWORD *)v28 - 89) = v175;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v212, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 84) = 0;
        v134 = 0;
      }
      else
      {
        v134 = v133 + 1;
      }
      *((_DWORD *)v28 - 88) = v134;
      CWatermarkStack<CMILMatrix,8,2,8>::Optimize((char *)v28 - 392);
      v136 = *((_DWORD *)v28 - 104);
      if ( v136 == 10 )
      {
        v214 = *((_DWORD *)v28 - 100);
        v215 = 64LL;
        if ( v214 > 0x40 )
          v215 = v214;
        if ( (unsigned __int64)(3 * v215) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v215) <= *((_DWORD *)v28 - 105) )
        {
          v238[0] = 0LL;
          v216 = HrMalloc(8uLL, (unsigned int)v215, (void **)v238);
          if ( v216 >= 0 )
          {
            operator delete(*((void **)v28 - 51));
            *((struct CVisual **)v28 - 51) = v238[0];
            *((_DWORD *)v28 - 105) = v215;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v217, 0LL, 0, v216, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 100) = 0;
        v137 = 0;
      }
      else
      {
        v137 = v136 + 1;
      }
      *((_DWORD *)v28 - 104) = v137;
      v138 = *((_DWORD *)v28 - 112);
      if ( v138 == 10 )
      {
        v218 = *((_DWORD *)v28 - 108);
        if ( v218 > 0x40 )
          v125 = v218;
        if ( (unsigned __int64)(3 * v125) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, -2147024362, 0x106u, 0LL);
        }
        else if ( (unsigned int)(3 * v125) <= *((_DWORD *)v28 - 113) )
        {
          v238[0] = 0LL;
          v219 = HrMalloc(8uLL, (unsigned int)v125, (void **)v238);
          if ( v219 >= 0 )
          {
            operator delete(*((void **)v28 - 55));
            *((struct CVisual **)v28 - 55) = v238[0];
            *((_DWORD *)v28 - 113) = v125;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v220, 0LL, 0, v219, 0x116u, 0LL);
          }
        }
        *((_DWORD *)v28 - 108) = 0;
      }
      else
      {
        v45 = v138 + 1;
      }
      *((_DWORD *)v28 - 112) = v45;
      if ( *((_BYTE *)v28 - 8) )
      {
        CThreadContext::UnregisterGraphWalkRoot();
        *((_BYTE *)v28 - 8) = 0;
      }
      v139 = *(CPreComputeContext **)v29;
      v140 = 0x823EE08FB823EE09uLL * ((*((_QWORD *)v29 + 1) - *(_QWORD *)v29 - 456LL) >> 3);
      v141 = 0x823EE08FB823EE09uLL * ((__int64)(*((_QWORD *)v29 + 1) - *(_QWORD *)v29) >> 3);
      v142 = v140 + 1;
      if ( v140 + 1 > v141 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
      }
      else
      {
        v28 = (CPreComputeContext *)((char *)v139 + 8 * ((__int64)(*((_QWORD *)v29 + 1) - *(_QWORD *)v29) >> 3));
        if ( v142 == v141 )
        {
LABEL_203:
          v143 = (CBspPreComputeHelper *)((char *)v28 - 456);
          do
          {
            v144 = (void *)*((_QWORD *)v143 + 51);
            if ( v144 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v144);
            }
            v146 = (void *)*((_QWORD *)v143 + 47);
            if ( v146 )
            {
              v147 = GetProcessHeap();
              HeapFree(v147, 0, v146);
            }
            CBspPreComputeHelper::~CBspPreComputeHelper(v143);
            v143 = (CBspPreComputeHelper *)((char *)v143 + 456);
          }
          while ( v143 != v28 );
          *((_QWORD *)v29 + 1) -= 456LL;
          return 0LL;
        }
      }
      if ( v140 && (!v139 || v140 < 0 || v141 < v140) )
        _invalid_parameter_noinfo_noreturn();
      v239[0] = v139;
      v239[1] = (CPreComputeContext *)v141;
      v240 = v140;
      std::move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        &v236,
        (char *)v139 + 456 * v142,
        v28,
        v239,
        v221);
      goto LABEL_203;
    }
    if ( v5 == *(_QWORD *)(*((_QWORD *)v40 + 54) + 64LL) )
      v42 = 0LL;
    else
      v42 = *(struct CVisual **)(v5 + 88);
    v43 = *((_DWORD *)v40 + 24) == 0;
    v228 = v42;
    if ( v43 || (!v42 || *((_DWORD *)v42 + 27) != 1) && !CVisual::IsPreserve3DRoot((CVisual *)v5, v42) )
      goto LABEL_67;
    HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v5, v42);
    v188 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v40, (struct CVisual *)v5, HasEffects);
    v190 = v188;
    if ( v188 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v189, 0LL, 0, v188, 0x180u, 0LL);
      goto LABEL_337;
    }
    if ( CVisual::IsPreserve3DRoot((CVisual *)v5, v228) )
      break;
LABEL_333:
    if ( v228 && *((_DWORD *)v228 + 27) == 1 )
      CBspPreComputeHelper::PopStacksForBspChildVisual(v40, (const struct CVisual *)v5);
    if ( v190 < 0 )
      goto LABEL_337;
LABEL_67:
    v40 = (CPreComputeContext *)((char *)v40 + 456);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v221 = v239;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_BSPTREE_Stop);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v221 = (CPreComputeContext **)&v236;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Start);
    }
  }
  *(__int64 *)((char *)&v233.m256i_i64[1] + 4) = 1LL;
  *(__int64 *)((char *)&v233.m256i_i64[2] + 4) = 0LL;
  lpMem[0] = 0LL;
  LODWORD(lpMem[1]) = 0;
  DWORD1(v232) = 0;
  *((_QWORD *)&v232 + 1) = 0LL;
  v233.m256i_i64[0] = 0LL;
  v235 = v5;
  v191 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(v40);
  if ( v191 )
  {
    v192 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v232, v191);
    v190 = v192;
    if ( v192 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v193, 0LL, 0, v192, 0x18Du, 0LL);
      goto LABEL_325;
    }
  }
  CBspPreComputeHelper::PopStacksForBspRootVisual(v40, v191);
  if ( !*((_DWORD *)v40 + 24)
    || !HasEffects
    || (v194 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(v40, (struct CVisual *)v5, 1),
        v190 = v194,
        v194 >= 0) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v221 = v238;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop);
    }
    operator delete(lpMem[0]);
    goto LABEL_333;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v195, 0LL, 0, v194, 0x195u, 0LL);
LABEL_325:
  operator delete(lpMem[0]);
LABEL_337:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A0,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v190,
    (int)v221);
  return (unsigned int)v190;
}
