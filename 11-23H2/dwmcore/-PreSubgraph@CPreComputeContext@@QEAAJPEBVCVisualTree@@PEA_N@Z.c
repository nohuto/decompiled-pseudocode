/*
 * XREFs of ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063E50
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180068AB0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004EB0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800095E0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18000CEFC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180011078 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800110F4 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x1800137EC (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x1800410F0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180042164 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180043CAC (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180044BC8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062F30 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?GetParent@SubTreeContext@CPreComputeContext@@QEBAPEAVCVisual@@PEAV3@@Z @ 0x180066310 (-GetParent@SubTreeContext@CPreComputeContext@@QEBAPEAVCVisual@@PEAV3@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180066330 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E0A4 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007F4D4 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180081DEC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18008332C (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180084944 (--0CTreeData@@IEAA@XZ.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D528 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN_ea_18008D528.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18008D614 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18008D818 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x18008DC58 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x18008DD40 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z @ 0x18008DE28 (-Push@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x18008DF10 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800ABE54 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800B0730 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1800B3D70 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BDBD0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800C4D30 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C5AB0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FindData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBAAEAT?$_Align_type@N$07@std@@I@Z @ 0x1800CCC24 (-FindData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEBAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800CDB0C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x1800D01F0 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?AdjustNodeWorldBounds@CVisual@@QEBA_NPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800D0314 (-AdjustNodeWorldBounds@CVisual@@QEBA_NPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800D0754 (-CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800D092C (-GetUnoptimizedBounds@CDirtyRegion@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x1800D8228 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expans.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DADCC (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1800DB260 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800DB2C8 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800DCA90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800DCF04 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800DD8FC (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800DF0A0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800E0018 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E04F4 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E7A7C (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800F3B98 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEBAPEBUD2D_VECTOR_2F@@XZ @ 0x1800F7E68 (-GetTopByReference@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEBAPEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@M$0EA@$01$09@@QEBAPEBMXZ @ 0x1800F7E84 (-GetTopByReference@-$CWatermarkStack@M$0EA@$01$09@@QEBAPEBMXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18011B62C (sqrtf_0.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18019E590 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEBAPEBW4Enum@MilDepthMode@@XZ @ 0x1801B5E84 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEBAPEBW4Enum@MilDepthMod.c)
 *     ?SetSuperWetInkClip@CTreeData@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D7168 (-SetSuperWetInkClip@CTreeData@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D84F8 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D86E8 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1801D9288 (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ?IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z @ 0x180210D00 (-IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z.c)
 *     ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180219FAC (-Get3DContentBounds@CSceneVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180271F38 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 */

__int64 __fastcall CPreComputeContext::PreSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // r14
  struct CVisualTree *p_Blink; // rbx
  __int64 v7; // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r15
  struct CTreeData *UnusedTreeData; // rsi
  __int64 v17; // rax
  CPreComputeContext *v18; // r15
  _DWORD *v19; // rbx
  _DWORD *v20; // rax
  bool *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm6_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm5_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  __int64 v30; // rcx
  int *v31; // rdx
  __int32 v32; // eax
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  bool v37; // r15
  char v38; // si
  struct CLightStack *v39; // rbx
  struct CVisualTree *v40; // r12
  CPreComputeContext *v41; // r12
  bool *v42; // r15
  _DWORD *v43; // rdx
  char v44; // al
  CMILMatrix *v45; // rcx
  struct CVisualTree *v46; // rsi
  int v47; // eax
  __int128 v48; // xmm6
  __int128 v49; // xmm7
  __int128 v50; // xmm8
  unsigned __int64 v51; // rax
  __int64 v52; // rbx
  __int128 v53; // xmm9
  char v54; // r13
  __int64 **v55; // rsi
  __int64 v56; // rax
  bool v57; // zf
  bool v58; // al
  struct CManipulationManager *v59; // r12
  _BYTE *v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // r15
  char v64; // r13
  _DWORD *v65; // rdx
  CVisual *v66; // r13
  _QWORD *v67; // rdx
  __int64 v68; // r13
  __int64 *v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // r8
  __int64 v73; // rax
  _BYTE *v74; // rcx
  __int64 j; // rdx
  _QWORD **v76; // rdx
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  HANDLE ProcessHeap; // rax
  CTreeData *v80; // rax
  void **v81; // rax
  CPreComputeContext *v82; // r15
  struct CVisualTree *v83; // rbx
  _DWORD *v84; // rdx
  _DWORD *v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rsi
  struct CVisual *Parent; // rax
  _DWORD *v89; // rcx
  struct CVisual *v90; // r15
  struct CVisualTree *v91; // rax
  int v92; // r12d
  _DWORD *v93; // rdi
  bool v94; // r13
  bool v95; // di
  _DWORD *v96; // rdx
  char v97; // al
  __int64 v98; // rcx
  _DWORD *v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  unsigned int v103; // ebx
  __int128 v104; // xmm0
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 i1; // rdx
  _QWORD *v108; // rdx
  _QWORD *v109; // rax
  __int64 v110; // r8
  __int64 v111; // rax
  _BYTE *v112; // rcx
  __int64 i3; // rdx
  _QWORD **v114; // rdx
  _QWORD *v115; // rax
  _QWORD *v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rax
  _BYTE *v119; // rcx
  __int64 i4; // rdx
  _QWORD **v121; // rdx
  _QWORD *v122; // rax
  _QWORD *v123; // rdx
  int v124; // edx
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned int v127; // eax
  const struct CMILMatrix *v128; // r12
  struct CMILMatrix *v129; // rax
  __int64 v130; // r8
  _BYTE *v131; // r9
  _DWORD *v132; // rdx
  __int64 v133; // rax
  _BYTE *v134; // rcx
  __int64 i5; // r8
  _QWORD *v136; // r8
  __int64 v137; // rax
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  int v141; // eax
  CGeometry *v142; // rcx
  int ShapeData; // eax
  unsigned int v144; // ecx
  unsigned int v145; // esi
  void (__fastcall ***v146)(_QWORD, __int64); // rcx
  int v147; // r15d
  int v148; // eax
  unsigned int v149; // ecx
  int v150; // eax
  __int128 v151; // xmm0
  unsigned int v152; // ecx
  unsigned int v153; // eax
  _DWORD *v154; // rsi
  __int64 v155; // rbx
  __int64 v156; // r12
  int v157; // eax
  __int64 v158; // r8
  int v159; // eax
  _OWORD *v160; // rcx
  __int128 v161; // xmm1
  bool v162; // cc
  float v163; // xmm2_4
  float v164; // xmm6_4
  float v165; // xmm3_4
  float v166; // xmm5_4
  float v167; // xmm0_4
  float v168; // xmm4_4
  CDirtyRegion *v169; // rcx
  unsigned int v170; // r15d
  int v171; // eax
  unsigned int v172; // ecx
  unsigned __int8 IsEqual; // al
  struct CVisualTree *v174; // r12
  char v175; // r15
  __int64 **v176; // rbx
  _DWORD *v177; // rdx
  struct _LIST_ENTRY **v178; // rdx
  CVisual *v179; // rsi
  __int64 *v180; // rcx
  __int64 v181; // r9
  _BYTE *v182; // r10
  unsigned int v183; // eax
  _BYTE *v184; // rcx
  __int64 v185; // r8
  __int64 v186; // rcx
  unsigned __int64 v187; // r11
  unsigned int i8; // eax
  __int64 v189; // r8
  __int64 v190; // rax
  char v191; // al
  char v192; // al
  __int64 v193; // rax
  _BYTE *v194; // rcx
  __int64 i10; // r8
  _QWORD *v196; // r8
  __int64 v197; // rax
  _BYTE *v198; // rcx
  __int64 mm; // r8
  _QWORD *v200; // r8
  _QWORD *v201; // rbx
  int k; // ecx
  __int64 v203; // rcx
  _BYTE *v204; // r8
  unsigned int i; // eax
  __int64 *v206; // r8
  __int64 v207; // rbx
  __int64 v208; // rax
  CBspPreComputeHelper *v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rbx
  const void **v212; // rcx
  _BYTE *v213; // rbx
  __int64 v214; // rax
  unsigned __int64 v215; // r15
  unsigned int v216; // ecx
  unsigned __int64 v217; // rax
  HANDLE v218; // rax
  void *v219; // r12
  unsigned __int64 v220; // rcx
  void *v221; // rsi
  __int64 v222; // r8
  __int64 v223; // rax
  _BYTE *v224; // rcx
  __int64 m; // rdx
  _QWORD ***v226; // rdx
  _QWORD **v227; // rcx
  _QWORD *n; // rax
  __int64 v229; // r8
  __int64 v230; // rax
  _BYTE *v231; // rcx
  __int64 ii; // rdx
  _QWORD ***v233; // rdx
  _QWORD **v234; // rcx
  _QWORD *jj; // rax
  __int64 v236; // rcx
  __int128 *UnoptimizedBounds; // rdx
  __int64 v238; // rbx
  float v239; // xmm8_4
  __int64 v240; // rsi
  float v241; // xmm6_4
  __int64 v242; // rcx
  float v243; // xmm0_4
  __int64 v244; // rax
  float v245; // xmm1_4
  float v246; // xmm2_4
  unsigned __int64 v247; // rsi
  unsigned __int64 v248; // rax
  HANDLE v249; // rax
  void *v250; // r12
  unsigned __int64 v251; // rax
  void *v252; // r15
  const struct CVisualTree *v253; // rsi
  char *v254; // rax
  __int64 **TreeData; // rax
  struct CBackdropVisualImage *BackdropVisualImage; // r15
  _BYTE *v257; // rbx
  __int64 v258; // r8
  __int64 v259; // rax
  _BYTE *v260; // rcx
  __int64 i9; // r8
  CWindowBackgroundTreatment **v262; // r8
  CWindowBackgroundTreatment *v263; // rbx
  __int64 v264; // r10
  int v265; // eax
  void *v266; // rdx
  __int64 v267; // r10
  __int64 v268; // rcx
  __int128 *v269; // rdx
  struct CVisualTree *v270; // r12
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v273; // rax
  float v274; // xmm0_4
  int v275; // eax
  unsigned int v276; // ebx
  __int64 TopByReference; // rax
  __int64 v278; // rdx
  float *v279; // rax
  const struct D2D_VECTOR_2F *v280; // r8
  __int128 *v281; // r12
  int v282; // r15d
  unsigned int kk; // esi
  _QWORD *v284; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v286; // r13
  int v287; // eax
  unsigned int v288; // ecx
  unsigned int v289; // r13d
  struct CEffect *EffectInternal; // r15
  __int64 v291; // rcx
  _BYTE *v292; // r8
  unsigned int i2; // r9d
  _QWORD **v294; // r8
  char v295; // al
  _DWORD *v296; // r10
  __int64 v297; // rcx
  unsigned int Slot; // eax
  __int64 v299; // r10
  int v300; // r9d
  int *v301; // r8
  __int64 v302; // rax
  __int64 v303; // rax
  int v304; // r8d
  int *v305; // rdx
  HANDLE v306; // rax
  _QWORD *ProjectedShadowReceivers; // rax
  int v308; // xmm1_4
  _QWORD *v309; // r15
  __int64 v310; // rsi
  __int64 v311; // r8
  __int64 v312; // rax
  _BYTE *v313; // rcx
  __int64 i6; // rdx
  _QWORD **v315; // rdx
  _QWORD *v316; // rax
  _QWORD *v317; // rdx
  __int64 v318; // rsi
  _QWORD *v319; // r15
  __int64 v320; // r8
  __int64 v321; // rax
  __int64 i7; // rdx
  _QWORD **v323; // rdx
  _QWORD *v324; // rax
  _QWORD *v325; // rdx
  __int64 v326; // rbx
  __int64 v327; // rdi
  int v328; // eax
  unsigned int v329; // esi
  char v330; // al
  HANDLE v331; // rax
  __int64 **v332; // rax
  __int64 v333; // rcx
  _BYTE *v334; // r8
  unsigned int nn; // eax
  _QWORD **v336; // r8
  struct _LIST_ENTRY *v337; // rax
  struct _LIST_ENTRY *v338; // rcx
  struct _LIST_ENTRY *v339; // rax
  struct _LIST_ENTRY *v340; // rcx
  CComposition *v341; // rsi
  int ManipulationManager; // eax
  int v343; // r9d
  HANDLE v344; // rax
  int v345; // r15d
  HANDLE v346; // rax
  unsigned int v347; // ecx
  int v348; // esi
  HANDLE v349; // rax
  unsigned int v350; // ecx
  __int64 v351; // rdx
  __int64 v352; // rax
  __int64 v353; // r8
  float v354; // xmm7_4
  float v355; // xmm8_4
  float v356; // xmm0_4
  int v357; // eax
  unsigned int v358; // ebx
  __int64 v359; // rcx
  int v360; // eax
  unsigned int v361; // ecx
  unsigned int v362; // ecx
  int v363; // eax
  unsigned int v364; // ebx
  __int64 v365; // rbx
  __int64 v366; // rdi
  __int64 **v367; // rax
  int v368; // edx
  DwmDbg::DbgString *v369; // rdi
  CVisualTreePath *v370; // rbx
  DwmDbg::DbgString *v371; // rax
  _BYTE *v372; // rcx
  __int64 v373; // r8
  struct CMILMatrix *v374; // [rsp+20h] [rbp-E0h]
  int v375; // [rsp+20h] [rbp-E0h]
  int v376; // [rsp+20h] [rbp-E0h]
  int v377; // [rsp+20h] [rbp-E0h]
  bool v378; // [rsp+30h] [rbp-D0h]
  bool v379; // [rsp+31h] [rbp-CFh] BYREF
  CPreComputeContext *v380; // [rsp+38h] [rbp-C8h]
  char v381; // [rsp+40h] [rbp-C0h]
  struct CManipulationManager *v382; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualTree *v383; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualTree *v384; // [rsp+58h] [rbp-A8h]
  bool *v385; // [rsp+60h] [rbp-A0h]
  void (__fastcall ***v386)(_QWORD, __int64); // [rsp+68h] [rbp-98h] BYREF
  char v387; // [rsp+70h] [rbp-90h]
  __int64 v388; // [rsp+78h] [rbp-88h]
  __int128 v389; // [rsp+80h] [rbp-80h] BYREF
  __int128 v390; // [rsp+90h] [rbp-70h]
  __int128 v391; // [rsp+A0h] [rbp-60h]
  __int128 v392; // [rsp+B0h] [rbp-50h]
  int v393; // [rsp+C0h] [rbp-40h]
  _BYTE v394[64]; // [rsp+D0h] [rbp-30h] BYREF
  int v395; // [rsp+110h] [rbp+10h]
  _BYTE v396[64]; // [rsp+120h] [rbp+20h] BYREF
  int v397; // [rsp+160h] [rbp+60h]
  __m128 v398; // [rsp+170h] [rbp+70h] BYREF
  __int128 v399; // [rsp+180h] [rbp+80h] BYREF
  __int128 v400; // [rsp+198h] [rbp+98h] BYREF
  __int64 v401; // [rsp+1A8h] [rbp+A8h]
  __int128 v402; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v403; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID lpMem; // [rsp+1D0h] [rbp+D0h] BYREF
  const struct CVisualTree **v405; // [rsp+1D8h] [rbp+D8h]
  char *v406; // [rsp+1E0h] [rbp+E0h]
  _BYTE v407[32]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v408; // [rsp+208h] [rbp+108h] BYREF
  int v409; // [rsp+210h] [rbp+110h]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v3 = *((_QWORD *)this + 237);
  v4 = 0;
  v5 = *((_QWORD *)this + 236);
  p_Blink = 0LL;
  v7 = *(_QWORD *)a2;
  v393 = 0;
  *(_QWORD *)&v403 = v3;
  v385 = a3;
  v384 = a2;
  v380 = this;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    p_Blink = (struct CVisualTree *)(v5 + 336);
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
            goto LABEL_3;
        }
        p_Blink = (struct CVisualTree *)&Flink[-23].Blink;
      }
    }
  }
LABEL_3:
  *a3 = 0;
  v11 = *(_QWORD *)a2;
  v383 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v11 + 184))(a2) )
    v383 = p_Blink;
  v12 = *(_DWORD **)(v5 + 232);
  if ( (*v12 & 0x4000000) != 0 )
  {
    v203 = (unsigned int)v12[1];
    v204 = v12 + 2;
    for ( i = 0; i < (unsigned int)v203; ++v204 )
    {
      if ( *v204 == 6 )
        break;
      ++i;
    }
    v206 = i >= (unsigned int)v203 ? 0LL : (__int64 *)((char *)v12 + v203 + 8LL * i - (((_BYTE)v203 + 15) & 7) + 15);
    v207 = *v206;
    if ( *v206 )
    {
      v208 = *(_QWORD *)(v207 + 64);
      if ( v208 )
      {
        if ( *(_BYTE *)(v208 + 96) )
        {
          v209 = (CBspPreComputeHelper *)detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::reserve_region(
                                           this,
                                           0x823EE08FB823EE09uLL
                                         * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
          CBspPreComputeHelper::CBspPreComputeHelper(v209);
          *(_QWORD *)(v210 + 360) = 0LL;
          *(_QWORD *)(v210 + 376) = 0LL;
          *(_DWORD *)(v210 + 368) = 0;
          *(_DWORD *)(v210 + 384) = 0;
          *(_QWORD *)(v210 + 392) = 0LL;
          *(_QWORD *)(v210 + 408) = 0LL;
          *(_DWORD *)(v210 + 400) = 0;
          *(_DWORD *)(v210 + 416) = 0;
          *(_QWORD *)(v210 + 424) = v207 + 104;
          *(_QWORD *)(v210 + 432) = v207;
          *(_QWORD *)(v210 + 440) = 0LL;
          *(_WORD *)(v210 + 448) = 0;
          v211 = *((_QWORD *)this + 1);
          v212 = *(const void ***)(v211 - 24);
          if ( a2 != (const struct CVisualTree *)v212 )
          {
            if ( (int)CThreadContext::RegisterGraphWalkRoot(v212[8]) < 0 )
            {
              *(_BYTE *)(v211 - 7) = 1;
              v326 = *(_QWORD *)this;
              v327 = *((_QWORD *)this + 1);
              while ( v326 != v327 )
              {
                CDirtyRegion::SetFullDirty(*(CDirtyRegion **)(v326 + 424));
                v326 += 456LL;
              }
              return 0LL;
            }
            *(_BYTE *)(v211 - 8) = 1;
          }
          *(_DWORD *)(v211 - 96) = 0;
          *(_DWORD *)(v211 - 64) = 0;
          *(_DWORD *)(v211 - 16) = 0;
          v213 = *(_BYTE **)(v211 - 24);
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v213 + 232LL))(v213);
          CDirtyRegion::Initialize((CDirtyRegion *)(v213 + 104), v213[4714] == 0);
          v214 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v213 + 216LL))(v213);
          if ( v214 )
            (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v214 + 24LL))(v214, v213);
        }
      }
    }
  }
  v13 = *((_QWORD *)this + 1);
  v14 = *(_QWORD *)this;
  v388 = *(_QWORD *)this;
  while ( v14 != v13 )
  {
    v15 = *(_QWORD *)(v14 + 432);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 184LL))(v15) )
    {
      UnusedTreeData = (struct CTreeData *)(v5 + 336);
      goto LABEL_10;
    }
    v72 = *(_QWORD *)(v5 + 232);
    if ( *(int *)v72 < 0 )
    {
      v73 = *(unsigned int *)(v72 + 4);
      v74 = (_BYTE *)(v72 + 8);
      for ( j = 0LL; (unsigned int)j < (unsigned int)v73; ++v74 )
      {
        if ( *v74 == 1 )
          break;
        j = (unsigned int)(j + 1);
      }
      v76 = (unsigned int)j >= (unsigned int)v73 ? 0LL : (_QWORD **)(v72 + v73 + 15 + 8 * j - (((_BYTE)v73 + 15) & 7));
      v77 = *v76;
      if ( *v76 )
      {
        v78 = (_QWORD *)*v77;
        if ( (_QWORD *)*v77 != v77 )
        {
          while ( 1 )
          {
            UnusedTreeData = (struct CTreeData *)(v78 - 45);
            if ( v78[4] == v15 )
              break;
            v78 = (_QWORD *)*v78;
            if ( v78 == v77 )
              goto LABEL_106;
          }
LABEL_10:
          if ( UnusedTreeData )
            goto LABEL_11;
        }
      }
    }
LABEL_106:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v5);
    if ( UnusedTreeData )
    {
      v296 = *(_DWORD **)(v5 + 232);
      if ( (*v296 & 0x8000000) != 0 )
      {
        v297 = *(_QWORD *)(v5 + 232);
        *v296 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v297, 5LL);
        if ( Slot < *(_DWORD *)(v299 + 4) )
          *(_BYTE *)(Slot + v299 + 8) = 0;
      }
      v81 = *(void ***)UnusedTreeData;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v80 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x190uLL);
      UnusedTreeData = v80;
      if ( !v80 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      CTreeData::CTreeData(v80);
      v81 = &CVisualTreeData::`vftable';
      *((_QWORD *)UnusedTreeData + 49) = 0LL;
      *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    }
    ((void (__fastcall *)(struct CTreeData *, __int64, __int64))v81[1])(UnusedTreeData, v15, v5);
LABEL_11:
    if ( !*(_DWORD *)(v14 + 444) && !*(_BYTE *)(*(_QWORD *)(v14 + 424) + 4420LL) )
    {
      v17 = 0LL;
      if ( g_pComposition )
        v17 = *((_QWORD *)g_pComposition + 62);
      *((_QWORD *)UnusedTreeData + 29) = v17;
    }
    v14 += 456LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 93LL) )
  {
    v295 = *(_BYTE *)(v5 + 96);
    if ( v295 < 0 )
      *(_BYTE *)(v5 + 96) = v295 | 4;
  }
  v18 = v380;
  v19 = (_DWORD *)((char *)v380 + 1392);
  if ( *(char *)(v5 + 104) < 0 )
  {
    LODWORD(v382) = *(_DWORD *)(v5 + 212);
    v328 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push((char *)v380 + 1392, &v382);
    v329 = v328;
    if ( v328 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v328,
        (int)v374);
      return v329;
    }
  }
  v20 = 0LL;
  if ( *v19 )
    v20 = (_DWORD *)(*((_QWORD *)v380 + 176) + 4LL * (unsigned int)(*v19 - 1));
  if ( *(_DWORD *)(v5 + 108) != *v20 )
  {
    *(_DWORD *)(v5 + 108) = *(_DWORD *)CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::GetTopByReference(v19);
    CVisual::OnOuterTransformChanged((CVisual *)v5);
  }
  v21 = v385;
  if ( ((*(_DWORD *)(v5 + 108) - 1) & 0xFFFFFFFD) == 0 )
    *v385 = 1;
  if ( *(int *)(v5 + 268) > 0 || *(int *)(v5 + 264) > 0 )
    *v21 = 1;
  v22 = 0LL;
  if ( g_pComposition )
    v22 = *((_QWORD *)g_pComposition + 62);
  if ( *(_QWORD *)(v5 + 328) != v22 )
  {
    v23 = *(_QWORD *)(v5 + 88);
    if ( !v23 || (*(_BYTE *)(v23 + 96) & 1) != 0 )
    {
      v24 = *(float *)(v5 + 124);
      v25 = 0.0;
      v26 = *(float *)(v5 + 128);
      v27 = 0.0;
      v28 = *(float *)(v5 + 140);
      v29 = *(float *)(v5 + 144);
      if ( v23 )
      {
        v25 = *(float *)(v23 + 140);
        v27 = *(float *)(v23 + 144);
      }
      v30 = *(_QWORD *)(v5 + 224);
      v31 = (int *)(v30 + 12);
      if ( (*(_DWORD *)(v30 + 4) & 0x10000000) != 0 )
      {
        v300 = *v31;
        v301 = (int *)(v30 + 12);
        if ( (*v31 & 0x7F000000) != 0x4000000 )
        {
          do
          {
            v301 = (int *)((char *)v301 + (v300 & 0xFFFFFF) + 4);
            v300 = *v301;
          }
          while ( (*v301 & 0x7F000000) != 0x4000000 );
        }
        v32 = v301[3];
        v398.m128_u64[0] = *(_QWORD *)(v301 + 1);
      }
      else
      {
        v32 = 0;
        v398.m128_u64[0] = 0LL;
      }
      v398.m128_i32[2] = v32;
      v33 = (float)(v398.m128_f32[0] * v25) + *(float *)(v5 + 112);
      v34 = (float)(v398.m128_f32[1] * v27) + *(float *)(v5 + 116);
      *(float *)(v5 + 124) = v33;
      *(float *)(v5 + 128) = v34;
      if ( (*(_DWORD *)(v30 + 4) & 0x20000000) != 0 )
      {
        for ( k = *v31; (*v31 & 0x7F000000) != 0x3000000; k = *v31 )
          v31 = (int *)((char *)v31 + (k & 0xFFFFFF) + 4);
        *(_QWORD *)&v402 = *(_QWORD *)(v31 + 1);
      }
      else
      {
        *(_QWORD *)&v402 = 0LL;
      }
      v35 = (float)(*(float *)&v402 * v25) + *(float *)(v5 + 132);
      v36 = (float)(*((float *)&v402 + 1) * v27) + *(float *)(v5 + 136);
      *(float *)(v5 + 140) = v35;
      *(float *)(v5 + 144) = v36;
      if ( v35 < 0.0 )
      {
        *(_DWORD *)(v5 + 140) = 0;
        v35 = 0.0;
      }
      if ( v36 < 0.0 )
      {
        *(_DWORD *)(v5 + 144) = 0;
        v36 = 0.0;
      }
      v37 = v24 != v33 || v26 != v34;
      if ( v28 == v35 && v29 == v36 )
      {
        v38 = 0;
      }
      else
      {
        v273 = *(_QWORD *)(v5 + 248);
        v38 = 1;
        if ( v273 && *(_BYTE *)(v273 + 136) )
          CVisual::OnClipChanged((CVisual *)v5);
        CVisual::OnLayoutChanged((CVisual *)v5);
      }
      if ( v37 )
      {
        *(_QWORD *)(v5 + 584) = 0LL;
        v222 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v222 < 0 )
        {
          v223 = *(unsigned int *)(v222 + 4);
          v224 = (_BYTE *)(v222 + 8);
          for ( m = 0LL; (unsigned int)m < (unsigned int)v223; ++v224 )
          {
            if ( *v224 == 1 )
              break;
            m = (unsigned int)(m + 1);
          }
          if ( (unsigned int)m >= (unsigned int)v223 )
            v226 = 0LL;
          else
            v226 = (_QWORD ***)(v222 + v223 + 15 + 8 * m - (((_BYTE)v223 + 15) & 7));
          v227 = *v226;
          if ( *v226 )
          {
            for ( n = *v227; n != v227; n = (_QWORD *)*n )
              *(n - 14) = 0LL;
          }
        }
        *(_BYTE *)(v5 + 497) = 1;
        v229 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v229 < 0 )
        {
          v230 = *(unsigned int *)(v229 + 4);
          v231 = (_BYTE *)(v229 + 8);
          for ( ii = 0LL; (unsigned int)ii < (unsigned int)v230; ++v231 )
          {
            if ( *v231 == 1 )
              break;
            ii = (unsigned int)(ii + 1);
          }
          if ( (unsigned int)ii >= (unsigned int)v230 )
            v233 = 0LL;
          else
            v233 = (_QWORD ***)(v230 + 15 + v229 + 8 * ii - (((_BYTE)v230 + 15) & 7));
          v234 = *v233;
          if ( *v233 )
          {
            for ( jj = *v234; jj != v234; jj = (_QWORD *)*jj )
              *((_BYTE *)jj - 199) = 1;
          }
        }
      }
      else if ( !v38 )
      {
        goto LABEL_50;
      }
      *(_BYTE *)(v5 + 96) |= 1u;
LABEL_50:
      v18 = v380;
      *(_QWORD *)(v5 + 328) = v22;
    }
  }
  v39 = (CPreComputeContext *)((char *)v18 + 1520);
  if ( (unsigned int)((__int64)(*(_QWORD *)(v5 + 288) - *(_QWORD *)(v5 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v5 + 312) - *(_QWORD *)(v5 + 304)) >> 4) )
  {
    *(_QWORD *)&v402 = 0x100000000LL;
    v281 = &v402;
    do
    {
      v282 = *(_DWORD *)v281;
      for ( kk = 0; kk < (unsigned int)CVisual::GetLightsCount((_QWORD *)v5, v282); ++kk )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v284, kk, v282);
        v286 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v384,
                 v5) )
          {
            v287 = CLightStack::Push((__int64)v39, v286, v282);
            v289 = v287;
            if ( v287 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v288, 0LL, 0, v287, 0x4Bu, 0LL);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2B2,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v289,
                v375);
              return v289;
            }
          }
        }
      }
      v281 = (__int128 *)((char *)v281 + 4);
    }
    while ( v281 != (__int128 *)((char *)&v402 + 8) );
    v3 = v403;
    v4 = 0;
    v18 = v380;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x2000000) != 0 )
  {
    v330 = *(_BYTE *)(v5 + 96);
    if ( (v330 & 0xC0) != 0 )
      *(_BYTE *)(v5 + 96) = v330 | 4;
  }
  if ( v3 && (*(_BYTE *)(v3 + 96) & 2) != 0 )
    *(_BYTE *)(v5 + 96) |= 2u;
  v40 = v384;
  if ( (*(_BYTE *)(v5 + 96) & 6) == 2 && CVisual::IsAffectedByNonAmbientLights((CVisual *)v5, v384, v39) )
    *(_BYTE *)(v5 + 96) = *(_BYTE *)(v5 + 96) ^ 2 | 4;
  if ( (*(_BYTE *)(v5 + 272) & 1) != 0
    && ((v236 = *(_QWORD *)(v388 + 424), *(_BYTE *)(v236 + 4420))
      ? (__int128 *)(UnoptimizedBounds = &v400,
                     v400 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite)
      : (UnoptimizedBounds = (__int128 *)CDirtyRegion::GetUnoptimizedBounds(v236, &v399)),
        CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
          (char *)v18 + 1760,
          UnoptimizedBounds),
        (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v40 + 184LL))(v40)) )
  {
    v238 = v5;
    v239 = *(float *)&FLOAT_1_0;
    v240 = v5;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v238 + 103) & 1) == 0 || (*(_BYTE *)(v238 + 102) & 2) != 0 )
        goto LABEL_390;
      v241 = *(float *)&FLOAT_1_0;
      if ( (**(_DWORD **)(v238 + 232) & 0x400000) != 0 )
      {
        EffectInternal = CVisual::GetEffectInternal((CVisual *)v238);
        if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               58LL) )
        {
          v241 = *((float *)EffectInternal + 20);
        }
      }
      v242 = *((_QWORD *)v40 + 8);
      v243 = fminf(1.0, fmaxf(v241, 0.0));
      if ( v238 == v242 )
      {
        v246 = *(float *)&FLOAT_1_0;
      }
      else
      {
        v244 = *(_QWORD *)(v238 + 224);
        if ( (*(_DWORD *)(v244 + 4) & 0x8000000) != 0 )
        {
          v304 = *(_DWORD *)(v244 + 12);
          v305 = (int *)(v244 + 12);
          if ( (v304 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v305 = (int *)((char *)v305 + (v304 & 0xFFFFFF) + 4);
              v304 = *v305;
            }
            while ( (*v305 & 0x7F000000) != 0x5000000 );
          }
          LODWORD(v382) = v305[1];
          v245 = *(float *)&v382;
        }
        else
        {
          v245 = *(float *)&FLOAT_1_0;
        }
        v246 = fminf(1.0, fmaxf(v245, 0.0));
      }
      v239 = v239 * (float)(v243 * v246);
      if ( COERCE_FLOAT(LODWORD(v239) & _xmm) < 0.0000011920929 )
      {
LABEL_390:
        v41 = v380;
        goto LABEL_60;
      }
      if ( v238 == v242 )
        break;
      if ( !v240
        || (v240 = *(_QWORD *)(v240 + 88)) == 0
        || v238 != v240 && (v240 = *(_QWORD *)(v240 + 88), v238 != v240) )
      {
        v238 = *(_QWORD *)(v238 + 88);
        if ( v238 )
          continue;
      }
      goto LABEL_390;
    }
    v41 = v380;
    *(_QWORD *)&v399 = 0LL;
    v253 = *(const struct CVisualTree **)(*(_QWORD *)v380 + 432LL);
    lpMem = v407;
    v405 = (const struct CVisualTree **)v407;
    v406 = &v408;
    *((_QWORD *)&v399 + 1) = v253;
    v254 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
             (detail::liberal_expansion_policy *)&lpMem,
             0LL,
             1uLL);
    *(_OWORD *)v254 = v399;
    TreeData = CVisual::FindTreeData((CVisual *)v5, *(v405 - 1));
    if ( TreeData )
      BackdropVisualImage = CTreeData::GetBackdropVisualImage(
                              (CTreeData *)TreeData,
                              (const struct CVisualTreePath *)&lpMem);
    else
      BackdropVisualImage = 0LL;
    v257 = lpMem;
    v258 = ((char *)v405 - (_BYTE *)lpMem) >> 4;
    if ( v258 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&lpMem,
        0LL,
        v258);
      v257 = lpMem;
    }
    lpMem = 0LL;
    if ( v257 != v407 && v257 )
    {
      v331 = GetProcessHeap();
      HeapFree(v331, 0, v257);
    }
    if ( BackdropVisualImage )
    {
      if ( *((_QWORD *)BackdropVisualImage + 18) != *((_QWORD *)v253 + 8) )
      {
        v332 = CVisual::FindTreeData((CVisual *)v5, v253);
        if ( v332 )
        {
          if ( v332[22] - v332[21] )
            detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
              v332 + 21,
              0LL);
        }
      }
    }
    *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)v253 + 5480,
                 (__int64)(*((_QWORD *)v253 + 686) - *((_QWORD *)v253 + 685)) >> 3) = v5;
  }
  else
  {
    v41 = v380;
  }
LABEL_60:
  v42 = v385;
  if ( (*(_BYTE *)(v5 + 96) & 0xD3) != 0 )
    *v385 = 1;
  v43 = *(_DWORD **)(v5 + 232);
  if ( (*v43 & 0x400000) != 0 )
  {
    v197 = (unsigned int)v43[1];
    v198 = v43 + 2;
    for ( mm = 0LL; (unsigned int)mm < (unsigned int)v197; ++v198 )
    {
      if ( *v198 == 10 )
        break;
      mm = (unsigned int)(mm + 1);
    }
    if ( (unsigned int)mm >= (unsigned int)v197 )
      v200 = 0LL;
    else
      v200 = (_QWORD *)((char *)v43 + 8 * mm - (((_BYTE)v197 + 15) & 7) + v197 + 15);
    v201 = (_QWORD *)*v200;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v200 + 56LL))(*v200, 187LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v201 + 56LL))(v201, 58LL) )
        goto LABEL_63;
      v201 = (_QWORD *)v201[11];
    }
    if ( v201 )
      ++*(_DWORD *)(v13 - 16);
  }
LABEL_63:
  v44 = *(_BYTE *)(v5 + 96);
  v45 = (CMILMatrix *)&CMILMatrix::Identity;
  if ( (v44 & 4) != 0 )
  {
    v154 = (_DWORD *)(v13 - 12);
    if ( (v44 & 1) != 0 && !*v154 )
    {
      v155 = *(_QWORD *)v41;
      v156 = *((_QWORD *)v41 + 1);
      while ( v155 != v156 )
      {
        if ( !*(_DWORD *)(v155 + 444) && !*(_BYTE *)(*(_QWORD *)(v155 + 424) + 4420LL) )
        {
          v157 = *(_DWORD *)(v155 + 360);
          v401 = 0LL;
          v400 = 0LL;
          if ( v157 )
            v45 = (CMILMatrix *)(*(_QWORD *)(v155 + 376) + 68LL * (unsigned int)(v157 - 1));
          CMILMatrix::Transform3DBoundsHelper<1>(v45);
          if ( *(_DWORD *)(v155 + 440) )
            LOBYTE(v158) = 1;
          else
            v158 = 0LL;
          CVisual::AdjustNodeWorldBounds(v5, &v400, v158);
          v159 = *(_DWORD *)(v155 + 392);
          if ( v159 )
          {
            v160 = (_OWORD *)(*(_QWORD *)(v155 + 408) + 16LL * (unsigned int)(v159 - 1));
            v161 = *v160;
            v162 = *(float *)&v400 <= COERCE_FLOAT(*v160);
            v399 = *v160;
            if ( !v162 )
              LODWORD(v161) = v400;
            v163 = *((float *)&v399 + 1);
            v164 = *((float *)&v399 + 1);
            if ( *((float *)&v400 + 1) > *((float *)&v399 + 1) )
            {
              v163 = *((float *)&v400 + 1);
              v164 = *((float *)&v400 + 1);
            }
            v165 = *((float *)&v399 + 2);
            v166 = *((float *)&v399 + 2);
            if ( *((float *)&v399 + 2) > *((float *)&v400 + 2) )
            {
              v165 = *((float *)&v400 + 2);
              v166 = *((float *)&v400 + 2);
            }
            v167 = *((float *)&v399 + 3);
            v168 = *((float *)&v399 + 3);
            if ( *((float *)&v399 + 3) > *((float *)&v400 + 3) )
            {
              v167 = *((float *)&v400 + 3);
              v168 = *((float *)&v400 + 3);
            }
            if ( v166 <= *(float *)&v161 || v167 <= v164 )
            {
              v165 = 0.0;
              v163 = 0.0;
              LODWORD(v161) = 0;
              v168 = 0.0;
            }
          }
          else
          {
            LODWORD(v161) = v400;
            v163 = *((float *)&v400 + 1);
            v165 = *((float *)&v400 + 2);
            v168 = *((float *)&v400 + 3);
          }
          v398.m128_u64[1] = __PAIR64__(LODWORD(v168), LODWORD(v165));
          v398.m128_u64[0] = __PAIR64__(LODWORD(v163), v161);
          if ( v165 > *(float *)&v161 && v168 > v163 )
          {
            v169 = *(CDirtyRegion **)(v155 + 424);
            v170 = 0;
            if ( !*((_BYTE *)v169 + 4420) )
            {
              if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v161
                 || v165 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
                && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v163
                 || v168 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
              {
                v171 = CDirtyRegion::_Add(v169, v5, 1u, &v398);
                v170 = v171;
                if ( v171 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v172, 0LL, 0, v171, 0x1B8u, 0LL);
              }
              else
              {
                CDirtyRegion::SetFullDirty(v169);
              }
            }
            if ( (v170 & 0x80000000) != 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x625,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v170,
                (int)v374);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x314,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)v170,
                v376);
              return v170;
            }
          }
          v45 = (CMILMatrix *)&CMILMatrix::Identity;
        }
        v155 += 456LL;
      }
      v42 = v385;
    }
    ++*v154;
  }
  v46 = v383;
  if ( !v383 )
    goto LABEL_144;
  v47 = *(_DWORD *)(v5 + 96);
  if ( (v47 & 0x10000) == 0 )
  {
    if ( *v42 )
      goto LABEL_67;
    if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 && (v47 & 0x2000) != 0 )
    {
      *v42 = 1;
      goto LABEL_67;
    }
    if ( (v47 & 0x4000) == 0 )
    {
LABEL_144:
      if ( *v42 )
        goto LABEL_67;
      goto LABEL_145;
    }
    v174 = v384;
    v175 = 0;
    v176 = 0LL;
    if ( v5 == *((_QWORD *)v384 + 8) )
      goto LABEL_599;
    v177 = *(_DWORD **)(v5 + 232);
    if ( (*v177 & 0x1000000) != 0 )
    {
      v333 = (unsigned int)v177[1];
      v334 = v177 + 2;
      for ( nn = 0; nn < (unsigned int)v333; ++v334 )
      {
        if ( *v334 == 8 )
          break;
        ++nn;
      }
      if ( nn >= (unsigned int)v333 )
        v336 = 0LL;
      else
        v336 = (_QWORD **)((char *)v177 + 8LL * nn - (((_BYTE)v333 + 15) & 7) + v333 + 15);
      if ( *v336 )
        v176 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v336 + 184LL))(**v336);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v174 + 184LL))(v174) )
    {
      v178 = (struct _LIST_ENTRY **)(v5 + 336);
      goto LABEL_283;
    }
    v337 = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( !v337 )
      goto LABEL_683;
    v338 = v337->Flink;
    if ( v337->Flink == v337 )
      goto LABEL_683;
    while ( 1 )
    {
      v178 = &v338[-23].Blink;
      if ( (struct CVisualTree *)v338[2].Flink == v174 )
        break;
      v338 = v338->Flink;
      if ( v338 == v337 )
        goto LABEL_286;
    }
LABEL_283:
    if ( v178 && v178[32] != v178[33][1].Flink[31].Flink && v176 )
    {
      v176 = CVisual::FindTreeData((CVisual *)v176, v174);
      v175 = 1;
    }
    else
    {
LABEL_683:
    {
LABEL_286:
      v179 = *(CVisual **)(v5 + 88);
      v176 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v174 + 184LL))(v174) )
      {
        v176 = (__int64 **)((char *)v179 + 336);
      }
      else
      {
        v339 = CVisual::GetTreeDataListHead(v179);
        if ( v339 )
        {
          v340 = v339->Flink;
          if ( v339->Flink != v339 )
          {
            while ( (struct CVisualTree *)v340[2].Flink != v174 )
            {
              v340 = v340->Flink;
              if ( v340 == v339 )
                goto LABEL_288;
            }
            v176 = (__int64 **)&v340[-23].Blink;
          }
        }
      }
    }
LABEL_288:
      v46 = v383;
    }
    if ( !v176 )
    {
LABEL_599:
      v180 = 0LL;
      if ( g_pComposition )
        v180 = (__int64 *)*((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v180 = v176[31];
    }
    if ( *((_QWORD *)v46 + 31) < (unsigned __int64)v180 )
      CVisual::UpdateWorldTransform((CVisual *)v5, v174, v46, v175, (const struct CTreeData *)v176);
    v42 = v385;
    if ( *((_QWORD *)v46 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 33) + 16LL) + 496LL) )
      *v385 = 1;
    v4 = 1;
    goto LABEL_144;
  }
  *v42 = 1;
LABEL_67:
  *(_DWORD *)(v5 + 96) &= 0xFFFC00FF;
  *(_BYTE *)(v5 + 96) = *(_DWORD *)(v5 + 96) | 0x10;
  if ( !*v42 )
  {
LABEL_145:
    if ( (*(_BYTE *)(v5 + 272) & 5) == 0 && ((*(_BYTE *)(v5 + 96) & 8) == 0 || *(_DWORD *)(v13 - 12)) )
    {
      v82 = v380;
      goto LABEL_113;
    }
  }
  v48 = v392;
  v49 = v391;
  v50 = v390;
  v51 = *((_QWORD *)v380 + 1);
  v52 = *(_QWORD *)v380;
  v53 = v389;
  v54 = v379;
  v398.m128_u64[0] = v51;
  while ( 2 )
  {
    if ( v52 != v51 )
    {
      v55 = 0LL;
      if ( v5 == *(_QWORD *)(*(_QWORD *)(v13 - 24) + 64LL) )
        v56 = 0LL;
      else
        v56 = *(_QWORD *)(v5 + 88);
      v57 = *(_QWORD *)(v5 + 248) == 0LL;
      v397 = 0;
      *(_QWORD *)&v402 = 0LL;
      v58 = !v57
         && (*(_BYTE *)(v5 + 102) & 1) == 0
         && (!v56 || *(_DWORD *)(v56 + 108) != 1)
         && (*(_DWORD *)(v5 + 108) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v5 + 80)));
      v59 = *(struct CManipulationManager **)(v52 + 432);
      v60 = v396;
      v378 = v58;
      v382 = v59;
      if ( !v58 )
        v60 = 0LL;
      v61 = *(_QWORD *)v59;
      *(_QWORD *)&v403 = v60;
      if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(v61 + 184))(v59) )
      {
        v63 = v5 + 336;
        goto LABEL_78;
      }
      v105 = *(_QWORD *)(v5 + 232);
      if ( *(int *)v105 >= 0 )
        goto LABEL_614;
      v106 = *(unsigned int *)(v105 + 4);
      v62 = (_QWORD *)(v105 + 8);
      for ( i1 = 0LL; (unsigned int)i1 < (unsigned int)v106; v62 = (_QWORD *)((char *)v62 + 1) )
      {
        if ( *(_BYTE *)v62 == 1 )
          break;
        i1 = (unsigned int)(i1 + 1);
      }
      if ( (unsigned int)i1 >= (unsigned int)v106 )
      {
        v108 = 0LL;
      }
      else
      {
        LODWORD(v62) = v106 + 15;
        v108 = (_QWORD *)(v105 + v106 + 15 + 8 * i1 - (((_BYTE)v106 + 15) & 7));
      }
      v109 = (_QWORD *)*v108;
      if ( !*v108 )
        goto LABEL_614;
      v62 = (_QWORD *)*v109;
      if ( (_QWORD *)*v109 == v109 )
        goto LABEL_614;
      while ( 1 )
      {
        v63 = (__int64)(v62 - 45);
        if ( (struct CManipulationManager *)v62[4] == v59 )
          break;
        v62 = (_QWORD *)*v62;
        if ( v62 == v109 )
          goto LABEL_614;
      }
LABEL_78:
      if ( v63 )
      {
        v64 = 0;
        v381 = 0;
        if ( v5 == *((_QWORD *)v59 + 8) )
          goto LABEL_277;
        v65 = *(_DWORD **)(v5 + 232);
        v66 = 0LL;
        if ( (*v65 & 0x1000000) != 0 )
        {
          v291 = (unsigned int)v65[1];
          v292 = v65 + 2;
          for ( i2 = 0; i2 < (unsigned int)v291; ++v292 )
          {
            if ( *v292 == 8 )
              break;
            ++i2;
          }
          if ( i2 >= (unsigned int)v291 )
            v294 = 0LL;
          else
            v294 = (_QWORD **)((char *)v65 + 8LL * i2 - (((_BYTE)v291 + 15) & 7) + v291 + 15);
          if ( *v294 )
            v66 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v294 + 184LL))(**v294);
        }
        if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v59 + 184LL))(v59) )
        {
          v67 = (_QWORD *)(v5 + 336);
          goto LABEL_83;
        }
        v110 = *(_QWORD *)(v5 + 232);
        if ( *(int *)v110 >= 0 )
          goto LABEL_684;
        v111 = *(unsigned int *)(v110 + 4);
        v112 = (_BYTE *)(v110 + 8);
        for ( i3 = 0LL; (unsigned int)i3 < (unsigned int)v111; ++v112 )
        {
          if ( *v112 == 1 )
            break;
          i3 = (unsigned int)(i3 + 1);
        }
        v114 = (unsigned int)i3 >= (unsigned int)v111
             ? 0LL
             : (_QWORD **)(v110 + v111 + 15 + 8 * i3 - (((_BYTE)v111 + 15) & 7));
        v115 = *v114;
        if ( !*v114 )
          goto LABEL_684;
        v116 = (_QWORD *)*v115;
        if ( (_QWORD *)*v115 == v115 )
          goto LABEL_684;
        while ( 1 )
        {
          v67 = v116 - 45;
          if ( (struct CManipulationManager *)v116[4] == v59 )
            break;
          v116 = (_QWORD *)*v116;
          if ( v116 == v115 )
            goto LABEL_86;
        }
LABEL_83:
        if ( v67 && v67[32] != *(_QWORD *)(*(_QWORD *)(v67[33] + 16LL) + 496LL) && v66 )
        {
          v55 = CVisual::FindTreeData(v66, v59);
          v64 = 1;
        }
        else
        {
LABEL_684:
        {
LABEL_86:
          v68 = *(_QWORD *)(v5 + 88);
          v55 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v59 + 184LL))(v59) )
          {
            v55 = (__int64 **)(v68 + 336);
          }
          else
          {
            v117 = *(_QWORD *)(v68 + 232);
            if ( *(int *)v117 < 0 )
            {
              v118 = *(unsigned int *)(v117 + 4);
              v119 = (_BYTE *)(v117 + 8);
              for ( i4 = 0LL; (unsigned int)i4 < (unsigned int)v118; ++v119 )
              {
                if ( *v119 == 1 )
                  break;
                i4 = (unsigned int)(i4 + 1);
              }
              v121 = (unsigned int)i4 >= (unsigned int)v118
                   ? 0LL
                   : (_QWORD **)(v118 + 15 + v117 + 8 * i4 - (((_BYTE)v118 + 15) & 7));
              v122 = *v121;
              if ( *v121 )
              {
                v123 = (_QWORD *)*v122;
                if ( (_QWORD *)*v122 != v122 )
                {
                  while ( (struct CManipulationManager *)v123[4] != v59 )
                  {
                    v123 = (_QWORD *)*v123;
                    if ( v123 == v122 )
                      goto LABEL_88;
                  }
                  v55 = (__int64 **)(v123 - 45);
                }
              }
            }
          }
        }
LABEL_88:
          v64 = v381;
        }
        if ( !v55 )
        {
LABEL_277:
          v69 = 0LL;
          if ( g_pComposition )
            v69 = (__int64 *)*((_QWORD *)g_pComposition + 62);
        }
        else
        {
          v69 = v55[31];
        }
        if ( *(_QWORD *)(v63 + 248) < (unsigned __int64)v69 )
        {
          v128 = (const struct CMILMatrix *)(v55 + 36);
          v129 = (struct CMILMatrix *)v394;
          if ( !v55 )
            v128 = 0LL;
          v409 = 0;
          v57 = *(_QWORD *)(v5 + 248) == 0LL;
          v395 = 0;
          if ( v57 )
            v129 = 0LL;
          CVisual::CalcTransform((CVisual *)v5, v382, v128, &v379, (struct CMILMatrix *)&lpMem, v129);
          if ( v64 || !v128 )
          {
            LOBYTE(v130) = 1;
          }
          else if ( v379 )
          {
            IsEqual = CMILMatrix::IsEqualTo<0>(v128, &lpMem);
            v130 = IsEqual;
            LOBYTE(v130) = IsEqual ^ 1;
          }
          else
          {
            LOBYTE(v130) = 0;
          }
          v131 = v394;
          if ( !*(_QWORD *)(v5 + 248) )
            v131 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, LPVOID *, __int64, _BYTE *))(*(_QWORD *)v63 + 48LL))(
                 v63,
                 &lpMem,
                 v130,
                 v131) )
          {
            v132 = *(_DWORD **)(v5 + 232);
            if ( (*v132 & 0x800000) != 0 )
            {
              v133 = (unsigned int)v132[1];
              v134 = v132 + 2;
              for ( i5 = 0LL; (unsigned int)i5 < (unsigned int)v133; ++v134 )
              {
                if ( *v134 == 9 )
                  break;
                i5 = (unsigned int)(i5 + 1);
              }
              if ( (unsigned int)i5 >= (unsigned int)v133 )
                v136 = 0LL;
              else
                v136 = (_QWORD *)((char *)v132 + 8 * i5 - (((_BYTE)v133 + 15) & 7) + v133 + 15);
              if ( *v136 && (*(_BYTE *)(v5 + 101) & 0x40) != 0 )
              {
                v382 = 0LL;
                v341 = *(CComposition **)(v5 + 16);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v382);
                ManipulationManager = CComposition::GetManipulationManager(v341, &v382);
                if ( ManipulationManager >= 0 )
                  CManipulationManager::NotifyVisualPropertyChange(
                    v382,
                    (struct CVisual *)v5,
                    (const struct CMILMatrix *)&lpMem);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v382);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v63 + 248) )
          ModuleFailFastForHRESULT(2291674884LL, retaddr);
        v53 = *(_OWORD *)(v63 + 288);
        v70 = v403;
        v71 = *(_DWORD *)(v63 + 352);
        v54 = *(_BYTE *)(v63 + 11);
        v389 = v53;
        v393 = v71;
        v50 = *(_OWORD *)(v63 + 304);
        v49 = *(_OWORD *)(v63 + 320);
        v390 = v50;
        v391 = v49;
        v48 = *(_OWORD *)(v63 + 336);
        v392 = v48;
        if ( (_QWORD)v403 )
        {
          v137 = *(_QWORD *)(v63 + 272);
          if ( v137 )
          {
            v138 = *(_OWORD *)(v137 + 16);
            *(_OWORD *)v403 = *(_OWORD *)v137;
            v139 = *(_OWORD *)(v137 + 32);
            *(_OWORD *)(v70 + 16) = v138;
            v140 = *(_OWORD *)(v137 + 48);
            v141 = *(_DWORD *)(v137 + 64);
            *(_OWORD *)(v70 + 32) = v139;
            *(_OWORD *)(v70 + 48) = v140;
          }
          else
          {
            v141 = *(_DWORD *)(v63 + 352);
            *(_OWORD *)v403 = v53;
            *(_OWORD *)(v70 + 16) = v50;
            *(_OWORD *)(v70 + 32) = v49;
            *(_OWORD *)(v70 + 48) = v48;
          }
          *(_DWORD *)(v70 + 64) = v141;
        }
      }
      else
      {
LABEL_614:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v62, 0LL, 0, -2003292412, 0x6AEu, 0LL);
      }
      if ( !v378 )
      {
LABEL_95:
        if ( !v54 )
        {
LABEL_96:
          v51 = v398.m128_u64[0];
          v52 += 456LL;
          continue;
        }
        if ( *(_DWORD *)(v52 + 360) != *(_DWORD *)(v52 + 364) )
        {
LABEL_188:
          v124 = v393;
          v125 = 68LL * *(unsigned int *)(v52 + 360);
          v126 = *(_QWORD *)(v52 + 376);
          *(_OWORD *)(v125 + v126) = v53;
          *(_OWORD *)(v125 + v126 + 16) = v50;
          *(_OWORD *)(v125 + v126 + 32) = v49;
          *(_OWORD *)(v125 + v126 + 48) = v48;
          *(_DWORD *)(v125 + v126 + 64) = v124;
          ++*(_DWORD *)(v52 + 360);
          v127 = *(_DWORD *)(v52 + 384);
          if ( v127 <= *(_DWORD *)(v52 + 360) )
            v127 = *(_DWORD *)(v52 + 360);
          *(_DWORD *)(v52 + 384) = v127;
          goto LABEL_515;
        }
        v215 = 2LL * *(unsigned int *)(v52 + 364);
        if ( v215 > 0xFFFFFFFF )
        {
          v348 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, -2147024362, 0x64u, 0LL);
        }
        else
        {
          if ( (unsigned int)v215 <= 8 )
            LODWORD(v215) = 8;
          v216 = v215;
          if ( (unsigned int)v215 == 8LL )
            v217 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v217 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v215;
          if ( v217 <= 0x44 )
          {
            v348 = -2147024809;
          }
          else
          {
            v218 = GetProcessHeap();
            v219 = HeapAlloc(v218, 0, 68LL * (unsigned int)v215);
            if ( v219 )
            {
              v220 = 68LL * *(unsigned int *)(v52 + 360);
              if ( v220 <= 0xFFFFFFFF )
              {
                memcpy_0(v219, *(const void **)(v52 + 376), (unsigned int)v220);
                v221 = *(void **)(v52 + 376);
                if ( v221 )
                {
                  v306 = GetProcessHeap();
                  HeapFree(v306, 0, v221);
                }
                *(_QWORD *)(v52 + 376) = v219;
                *(_DWORD *)(v52 + 364) = v215;
                goto LABEL_188;
              }
              v348 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v220, 0LL, 0, -2147024362, 0x6Du, 0LL);
              v349 = GetProcessHeap();
              HeapFree(v349, 0, v219);
              goto LABEL_628;
            }
            v348 = -2147024882;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v216, 0LL, 0, v348, 0x6Bu, 0LL);
        }
LABEL_628:
        MilInstrumentationCheckHR_MaybeFailFast(v350, 0LL, 0, v348, 0x36u, 0LL);
LABEL_515:
        v309 = (_QWORD *)v402;
        if ( !(_QWORD)v402 )
        {
          v310 = *(_QWORD *)(v52 + 432);
          v309 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v310 + 184LL))(v310) )
          {
            v309 = (_QWORD *)(v5 + 336);
          }
          else
          {
            v311 = *(_QWORD *)(v5 + 232);
            if ( *(int *)v311 < 0 )
            {
              v312 = *(unsigned int *)(v311 + 4);
              v313 = (_BYTE *)(v311 + 8);
              for ( i6 = 0LL; (unsigned int)i6 < (unsigned int)v312; ++v313 )
              {
                if ( *v313 == 1 )
                  break;
                i6 = (unsigned int)(i6 + 1);
              }
              v315 = (unsigned int)i6 >= (unsigned int)v312
                   ? 0LL
                   : (_QWORD **)(v312 + 15 + v311 + 8 * i6 - (((_BYTE)v312 + 15) & 7));
              v316 = *v315;
              if ( *v315 )
              {
                v317 = (_QWORD *)*v316;
                if ( (_QWORD *)*v316 != v316 )
                {
                  while ( v317[4] != v310 )
                  {
                    v317 = (_QWORD *)*v317;
                    if ( v317 == v316 )
                      goto LABEL_518;
                  }
                  v309 = v317 - 45;
                }
              }
            }
          }
        }
LABEL_518:
        *((_BYTE *)v309 + 8) = 1;
        goto LABEL_96;
      }
      v142 = *(CGeometry **)(v5 + 248);
      v386 = 0LL;
      v387 = 0;
      v400 = 0LL;
      ShapeData = CGeometry::GetShapeData(v142, (const struct D2D_SIZE_F *)(v5 + 140), (struct CShapePtr *)&v386);
      v145 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, ShapeData, 0x63u, 0LL);
      }
      else
      {
        v146 = v386;
        v147 = -2003292412;
        if ( !v386 )
          goto LABEL_228;
        v148 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v386)[6])(
                 v386,
                 &v400,
                 0LL);
        v147 = v148;
        v145 = v148;
        if ( v148 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v149, 0LL, 0, v148, 0x140u, 0LL);
        }
        else
        {
          v146 = v386;
LABEL_228:
          v145 = v147;
          if ( v147 >= 0 )
          {
LABEL_229:
            if ( v145 == -2003304438 )
            {
              v145 = 0;
              v400 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            }
            if ( v387 && v146 )
              (**v146)(v146, 1LL);
            v386 = 0LL;
            v387 = 0;
            if ( (v145 & 0x80000000) != 0 )
            {
              v351 = 552LL;
              goto LABEL_634;
            }
            v402 = 0LL;
            CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v396, (struct MilRectF *)&v400);
            v150 = *(_DWORD *)(v52 + 392);
            v403 = 0LL;
            if ( v150 )
              v151 = *(_OWORD *)(*(_QWORD *)(v52 + 408) + 16LL * (unsigned int)(v150 - 1));
            else
              v151 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v403 = v151;
            v399 = v402;
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v403, &v399);
            if ( *(_DWORD *)(v52 + 392) == *(_DWORD *)(v52 + 396) )
            {
              v247 = 2LL * *(unsigned int *)(v52 + 396);
              if ( v247 > 0xFFFFFFFF )
              {
                v345 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, -2147024362, 0x64u, 0LL);
                v145 = -2147024362;
                goto LABEL_632;
              }
              if ( (unsigned int)v247 <= 8 )
                LODWORD(v247) = 8;
              if ( (unsigned int)v247 == 8LL )
                v248 = 0x1FFFFFFFFFFFFFFFLL;
              else
                v248 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v247;
              if ( v248 <= 0x10 )
              {
                v343 = -2147024809;
LABEL_622:
                v345 = v343;
                MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, v343, 0x6Bu, 0LL);
LABEL_532:
                v145 = v345;
LABEL_632:
                MilInstrumentationCheckHR_MaybeFailFast(v347, 0LL, 0, v345, 0x31u, 0LL);
                v351 = 559LL;
LABEL_634:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v351,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                  (const char *)v145,
                  (int)v374);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x364,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                  (const char *)v145,
                  v377);
                return v145;
              }
              v249 = GetProcessHeap();
              v250 = HeapAlloc(v249, 0, 16LL * (unsigned int)v247);
              if ( !v250 )
              {
                v343 = -2147024882;
                goto LABEL_622;
              }
              v251 = 16LL * *(unsigned int *)(v52 + 392);
              if ( v251 > 0xFFFFFFFF )
              {
                v345 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
                v346 = GetProcessHeap();
                HeapFree(v346, 0, v250);
                goto LABEL_532;
              }
              memcpy_0(v250, *(const void **)(v52 + 408), (unsigned int)v251);
              v252 = *(void **)(v52 + 408);
              if ( v252 )
              {
                v344 = GetProcessHeap();
                HeapFree(v344, 0, v252);
              }
              *(_QWORD *)(v52 + 408) = v250;
              *(_DWORD *)(v52 + 396) = v247;
            }
            *(_OWORD *)(*(_QWORD *)(v52 + 408) + 16LL * *(unsigned int *)(v52 + 392)) = v403;
            v153 = *(_DWORD *)(v52 + 416);
            if ( v153 <= ++*(_DWORD *)(v52 + 392) )
              v153 = *(_DWORD *)(v52 + 392);
            *(_DWORD *)(v52 + 416) = v153;
            v318 = *(_QWORD *)(v52 + 432);
            v319 = 0LL;
            *(_QWORD *)&v402 = 0LL;
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v318 + 184LL))(v318) )
            {
              v319 = (_QWORD *)(v5 + 336);
              goto LABEL_535;
            }
            v320 = *(_QWORD *)(v5 + 232);
            if ( *(int *)v320 < 0 )
            {
              v321 = *(unsigned int *)(v320 + 4);
              v70 = v320 + 8;
              for ( i7 = 0LL; (unsigned int)i7 < (unsigned int)v321; ++v70 )
              {
                if ( *(_BYTE *)v70 == 1 )
                  break;
                i7 = (unsigned int)(i7 + 1);
              }
              if ( (unsigned int)i7 >= (unsigned int)v321 )
              {
                v323 = 0LL;
              }
              else
              {
                LODWORD(v70) = v321 + 15;
                v323 = (_QWORD **)(v321 + 15 + v320 + 8 * i7 - (((_BYTE)v321 + 15) & 7));
              }
              v324 = *v323;
              if ( *v323 )
              {
                v325 = (_QWORD *)*v324;
                if ( (_QWORD *)*v324 != v324 )
                {
                  while ( v325[4] != v318 )
                  {
                    v325 = (_QWORD *)*v325;
                    if ( v325 == v324 )
                      goto LABEL_536;
                  }
                  v319 = v325 - 45;
LABEL_535:
                  *(_QWORD *)&v402 = v319;
                }
              }
            }
LABEL_536:
            *((_BYTE *)v319 + 9) = 1;
            goto LABEL_95;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v146, 0LL, 0, v147, 0x64u, 0LL);
      }
      v146 = v386;
      goto LABEL_229;
    }
    break;
  }
  v4 = 1;
  v82 = v380;
  if ( (*(_BYTE *)(v5 + 96) & 8) != 0 )
    CPreComputeContext::CollectAdditionalDirtyRectsForSubTrees(v380, (struct CVisual *)v5);
  v46 = v383;
LABEL_113:
  if ( v46 )
  {
    if ( !v4
      && ((v100 = *(_DWORD **)(v5 + 232), (*v100 & 0x800000) != 0)
       && (v302 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v100, 9LL)) != 0
       && (v303 = *(_QWORD *)(v302 + 104)) != 0
       && *(_QWORD *)(v303 + 64)
       || (*(_BYTE *)(v5 + 102) & 0x10) != 0) )
    {
      v83 = v384;
      CVisual::EnsureWorldTransform((CVisual *)v5, v384, v46);
    }
    else
    {
      v83 = v384;
    }
    if ( (*(_BYTE *)(v5 + 102) & 0x20) != 0 )
    {
      v352 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v83 + 216LL))(v83);
      if ( v352 )
      {
        LOBYTE(v353) = *(_DWORD *)(v13 - 12) != 0;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v352 + 40LL))(v352, v5, v353);
      }
    }
    v84 = *(_DWORD **)(v5 + 232);
    if ( (*v84 & 0x800000) == 0 )
      goto LABEL_685;
    v181 = (unsigned int)v84[1];
    v182 = v84 + 2;
    v183 = 0;
    if ( (_DWORD)v181 )
    {
      v184 = v84 + 2;
      do
      {
        if ( *v184 == 9 )
          break;
        ++v183;
        ++v184;
      }
      while ( v183 < (unsigned int)v181 );
    }
    v185 = v183 >= (unsigned int)v181 ? 0LL : (__int64)v84 + v181 + 8LL * v183 - (((_BYTE)v181 + 15) & 7) + 15;
    if ( *(_QWORD *)v185 && (v186 = *(_QWORD *)(*(_QWORD *)v185 + 104LL)) != 0 && *(_QWORD *)(v186 + 64) )
    {
      v187 = 0LL;
      for ( i8 = 0; i8 < (unsigned int)v181; ++v182 )
      {
        if ( *v182 == 9 )
          break;
        ++i8;
      }
      if ( i8 >= (unsigned int)v181 )
        v189 = 0LL;
      else
        v189 = (__int64)v84 + 8LL * i8 - (((_BYTE)v181 + 15) & 7) + v181 + 15;
      if ( *(_QWORD *)v189 )
      {
        v190 = *(_QWORD *)(*(_QWORD *)v189 + 104LL);
        if ( v190 )
          v187 = *(_QWORD *)(v190 + 64);
      }
      v398.m128_u64[0] = v187;
      CWatermarkStack<void *,2,2,10>::Push((char *)v82 + 1488, &v398);
      v191 = *(_BYTE *)(v5 + 100) | 8;
      *(_BYTE *)(v5 + 100) = v191;
      v192 = (v191 & 0x20) != 0;
      if ( v192 != *((_BYTE *)v82 + 1960) )
      {
        *((_BYTE *)v82 + 1960) = v192;
        goto LABEL_313;
      }
    }
    else
    {
LABEL_685:
      if ( (*(_BYTE *)(v5 + 100) & 0x20) != 0 && !*((_BYTE *)v82 + 1960) )
      {
        *((_BYTE *)v82 + 1960) = 1;
LABEL_313:
        *(_BYTE *)(v5 + 100) |= 0x10u;
      }
    }
  }
  if ( *(char *)(v5 + 102) < 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x40000) != 0 )
    {
      v274 = CVisual::CalculateWorldRenderingScale((CVisual *)v5);
      if ( v274 > 0.00000011920929 )
      {
        *(float *)&v382 = CVisual::GetWorldRenderingScaleOverride((CVisual *)v5) / v274;
        v275 = CWatermarkStack<float,2,2,10>::Push((char *)v82 + 1424, &v382);
        v276 = v275;
        if ( v275 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3BF,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v275,
            (int)v374);
          return v276;
        }
        *(_BYTE *)(v5 + 100) |= 2u;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 224) + 4LL) & 0x20000) != 0 )
    {
      CVisual::GetWorldUpVectorOverride((CVisual *)v5, (struct D2D_VECTOR_3F *)&v403);
      CMILMatrix::Transform3DVector(
        (CMILMatrix *)&v389,
        (struct D2D_VECTOR_3F *)&v398,
        (const struct D2D_VECTOR_3F *)&v403);
      v354 = v398.m128_f32[1];
      v355 = v398.m128_f32[0];
      v356 = sqrtf_0((float)(v354 * v354) + (float)(v355 * v355));
      if ( v356 > 0.00000011920929 )
      {
        *(float *)&v383 = v355 / v356;
        *((float *)&v383 + 1) = v354 / v356;
        v357 = CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)v82 + 1456, &v383);
        v358 = v357;
        if ( v357 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3D7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v357,
            (int)v374);
          return v358;
        }
        *(_BYTE *)(v5 + 100) |= 4u;
      }
    }
  }
  if ( (*(_BYTE *)(v5 + 102) & 0x10) != 0
    && v46
    && *((_QWORD *)v46 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 33) + 16LL) + 496LL) )
  {
    TopByReference = CWatermarkStack<D2D_VECTOR_2F,2,2,10>::GetTopByReference((char *)v82 + 1456);
    v279 = (float *)CWatermarkStack<float,64,2,10>::GetTopByReference((char *)v82 + 1424, v278, TopByReference);
    CVisual::IssueContextUpdateNotification((CVisual *)v5, *v279, v280);
  }
  v85 = *(_DWORD **)(v5 + 232);
  if ( (*v85 & 0x200000) != 0 )
  {
    v259 = (unsigned int)v85[1];
    v260 = v85 + 2;
    for ( i9 = 0LL; (unsigned int)i9 < (unsigned int)v259; ++v260 )
    {
      if ( *v260 == 11 )
        break;
      i9 = (unsigned int)(i9 + 1);
    }
    if ( (unsigned int)i9 >= (unsigned int)v259 )
      v262 = 0LL;
    else
      v262 = (CWindowBackgroundTreatment **)((char *)v85 + 8 * i9 - (((_BYTE)v259 + 15) & 7) + v259 + 15);
    v263 = *v262;
    CWindowBackgroundTreatment::InvalidateExistingBounds(*v262);
    v264 = v388;
    *((_BYTE *)v263 + 302) = 1;
    v265 = *(_DWORD *)(v264 + 360);
    if ( v265 )
      v266 = (void *)(*(_QWORD *)(v264 + 376) + 68LL * (unsigned int)(v265 - 1));
    else
      v266 = &CMILMatrix::Identity;
    CWindowBackgroundTreatment::SetWorldTransform(v263, v266, 1LL);
    if ( *((_QWORD *)v263 + 38) )
    {
      v268 = *(_QWORD *)(v267 + 424);
      v269 = &v399;
      if ( *(_BYTE *)(v268 + 4420) )
        v399 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      else
        v269 = (__int128 *)CDirtyRegion::GetUnoptimizedBounds(v268, &v399);
      CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
        (char *)v82 + 1760,
        v269);
      v270 = v384;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v384 + 184LL))(v384) )
      {
        if ( CVisualTree::_IsInTree(v270, v5, 2) )
          CPreComputeContext::AddVisualToBVIPreRenderList(v82, (struct CVisual *)v5);
      }
    }
  }
  if ( CPreComputeContext::s_depthSortingEnabled )
    CDepthSortingPreComputeHelper::PreComputePreSubgraph(
      (CPreComputeContext *)((char *)v82 + 1856),
      (struct CVisual *)v5);
  v86 = *(_QWORD *)v82;
  v87 = *((_QWORD *)v82 + 1);
  while ( 2 )
  {
    if ( v86 != v87 )
    {
      Parent = CPreComputeContext::SubTreeContext::GetParent(
                 (CPreComputeContext::SubTreeContext *)v86,
                 (struct CVisual *)v5);
      v89 = *(_DWORD **)(v5 + 232);
      v90 = Parent;
      v91 = *(struct CVisualTree **)(v86 + 432);
      v92 = 0;
      v383 = v91;
      if ( (*v89 & 0x20000000) != 0 )
      {
        v359 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v89, 3LL);
        if ( v359 && *(_DWORD *)(v359 + 24) )
          CVisual::ReleaseBspPolygonList((CVisual *)v5);
        v91 = v383;
      }
      v93 = (_DWORD *)((char *)v90 + 108);
      if ( v90 )
      {
        if ( *v93 == 1 )
        {
          v360 = CBspPreComputeHelper::PushStacksForBspChildVisual(
                   (CBspPreComputeHelper *)v86,
                   v91,
                   (struct CVisual *)v5);
          v92 = v360;
          if ( v360 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v361, 0LL, 0, v360, 0x4Bu, 0LL);
LABEL_666:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x422,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)(unsigned int)v92,
              (int)v374);
            return (unsigned int)v92;
          }
        }
      }
      v94 = *(_DWORD *)(v5 + 108) == 1;
      v95 = v90 && *v93 == 1;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5) )
        goto LABEL_319;
      v96 = *(_DWORD **)(v5 + 232);
      if ( (*v96 & 0x400000) == 0 )
        goto LABEL_134;
      v193 = (unsigned int)v96[1];
      v194 = v96 + 2;
      for ( i10 = 0LL; (unsigned int)i10 < (unsigned int)v193; ++v194 )
      {
        if ( *v194 == 10 )
          break;
        i10 = (unsigned int)(i10 + 1);
      }
      v196 = (unsigned int)i10 >= (unsigned int)v193
           ? 0LL
           : (_QWORD *)((char *)v96 + v193 + 8 * i10 - (((_BYTE)v193 + 15) & 7) + 15);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v196 + 56LL))(*v196, 61LL) )
LABEL_319:
        v97 = 1;
      else
LABEL_134:
        v97 = 0;
      if ( !v94 )
        goto LABEL_136;
      if ( v95 )
      {
        if ( !v97 )
        {
LABEL_136:
          ++*(_DWORD *)(v86 + 352);
          if ( v92 < 0 )
            goto LABEL_666;
          v86 += 456LL;
          continue;
        }
      }
      else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v5 + 80)) )
      {
        goto LABEL_136;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v374 = (struct CMILMatrix *)&v399;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_P3D_BUILDING_BSPTREE_Start);
      }
      v92 = CBspPreComputeHelper::PushStacksForBspRootVisual((CBspPreComputeHelper *)v86, v383, (struct CVisual *)v5);
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v362, 0LL, 0, v92, 0x51u, 0LL);
        goto LABEL_666;
      }
      goto LABEL_136;
    }
    break;
  }
  if ( (*(_BYTE *)(v5 + 96) & 1) == 0 )
    goto LABEL_139;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 166LL) )
  {
    v363 = CSceneVisual::Get3DContentBounds(v5, v5 + 172);
    v364 = v363;
    if ( v363 >= 0 )
      goto LABEL_139;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v363,
      (int)v374);
    return v364;
  }
  else
  {
    v101 = *(_QWORD *)v5;
    v400 = 0LL;
    v102 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v101 + 224))(v5, &v400);
    v103 = v102;
    if ( v102 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v102,
        (int)v374);
      return v103;
    }
    else
    {
      if ( (**(_DWORD **)(v5 + 232) & 0x20000) != 0 )
      {
        ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(v5);
        if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
        {
          v308 = *(_DWORD *)(v5 + 144);
          DWORD2(v399) = *(_DWORD *)(v5 + 140);
          HIDWORD(v399) = v308;
          *(_QWORD *)&v399 = 0LL;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v400, &v399);
        }
      }
      v104 = v400;
      *(_OWORD *)(v5 + 172) = v400;
      *(_QWORD *)(v5 + 188) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v399 = v104;
LABEL_139:
      v98 = *(_QWORD *)(v5 + 256);
      if ( v98 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 56LL))(v98, 180LL) )
      {
        v365 = *(_QWORD *)v380;
        v366 = *((_QWORD *)v380 + 1);
        while ( v365 != v366 )
        {
          v399 = 0LL;
          CBaseClipStack::Top(v365 + 392, &v399);
          v367 = CVisual::FindTreeData((CVisual *)v5, *(const struct CVisualTree **)(v365 + 432));
          CTreeData::SetSuperWetInkClip(v367, &v399);
          v365 += 456LL;
        }
      }
      if ( dword_1803E3760
        && (unsigned __int8)tlgKeywordOn(&dword_1803E3760, 0LL)
        && *v385 == (_BYTE)v368
        && (*(_DWORD *)(v5 + 264) > v368 || *(_DWORD *)(v5 + 268) > v368) )
      {
        v369 = DwmDbg::DbgString::DbgString((char **)&v398, word_18033C470);
        v370 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)&lpMem, v384);
        v371 = DwmDbg::DbgString::DbgString((char **)&v403, "PreCompute-BailWithBackdropsStillInSubtree");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v371, v5, v384, v370, v369);
        v372 = lpMem;
        v373 = ((char *)v405 - (_BYTE *)lpMem) >> 4;
        if ( v373 )
        {
          detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&lpMem,
            0LL,
            v373);
          v372 = lpMem;
        }
        lpMem = 0LL;
        if ( v372 == v407 )
          v372 = 0LL;
        operator delete(v372);
      }
      return 0LL;
    }
  }
}
