/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060300
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180044120 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 * Callees:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180004E20 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004EB0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180005554 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x180005A00 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180005B60 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x18000B1CC (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18000CEFC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180010FEC (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800110F4 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800129B0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001AC8C (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180020F00 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18002492C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002D318 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180035140 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?GetBounds@CVisualTree@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180040D58 (-GetBounds@CVisualTree@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180051AC4 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800591B8 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18005CFB0 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180066330 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18006C304 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180076FD4 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DE2C (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E0A4 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180083644 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x18008E7FC (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18008EBF0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18008F1C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18008F7DC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18009FFAC (--0-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BDBD0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BDCB0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800BE4E0 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800BEE50 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800C167C (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800C4D30 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HasData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBA_NI@Z @ 0x1800CC350 (-HasData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEBA_NI@Z.c)
 *     ??$?8V?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_NAEBV01@@Z @ 0x1800CDC44 (--$-8V-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CV.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800D0874 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800DA0EC (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ??Y?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1800DCF64 (--Y-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800DCFB0 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800DD8CC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800DD8FC (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800DF3C0 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??8CBackdropVisualImageKey@@QEBA_NAEBV0@@Z @ 0x1800E32A4 (--8CBackdropVisualImageKey@@QEBA_NAEBV0@@Z.c)
 *     ?HasValidBounds@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800E6174 (-HasValidBounds@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800F26A4 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180134508 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x1801D266C (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 *     ??_GClippingScopeState@CScopedClipStack@@QEAAPEAXI@Z @ 0x1801D2D74 (--_GClippingScopeState@CScopedClipStack@@QEAAPEAXI@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D3348 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x1801D5954 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801D5A04 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1801D5A24 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801D5A9C (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1801D5B58 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x1801D5D04 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D5F54 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x1801D68F0 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801DA270 (--$move_backward@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked_arra.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801DA43C (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1801DA5CC (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180210BF8 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 *     ?ConvertHR@DbgString@DwmDbg@@AEBA?AV12@AEBJ@Z @ 0x180271D88 (-ConvertHR@DbgString@DwmDbg@@AEBA-AV12@AEBJ@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180271F38 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int *v3; // r13
  void *v4; // r15
  CDrawingContext *v6; // r14
  __int64 v7; // rsi
  struct CVisual *v8; // r8
  _DWORD *v9; // rax
  bool v10; // zf
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rbx
  __int64 v15; // r9
  unsigned int v16; // eax
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rdi
  unsigned int v21; // ecx
  int v22; // eax
  CMILMatrix *v23; // rcx
  int v24; // ecx
  float v25; // xmm0_4
  void (__fastcall ***v26)(_QWORD, _DWORD *); // rcx
  char *v27; // rdx
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  __int64 v31; // rax
  float v32; // xmm1_4
  __int64 v33; // rcx
  int v34; // ecx
  __int128 v35; // xmm2
  float v36; // xmm8_4
  float v37; // xmm9_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  __int64 v40; // rax
  _QWORD *v41; // r12
  struct CVisualTree *v42; // rdi
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 *v45; // rax
  __int64 *v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r12
  _QWORD *v51; // r12
  _QWORD *v52; // rbx
  _DWORD *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r9
  _DWORD *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  int v60; // ecx
  struct CVisualTree *v61; // r12
  CGeometry *v62; // rbx
  char *v63; // r13
  _QWORD *v64; // rcx
  _QWORD *v65; // rbx
  __int64 **TreeData; // rdi
  _DWORD *v67; // r8
  unsigned int *v68; // rdx
  unsigned int *v69; // r8
  __int64 v70; // r12
  __int64 *v71; // rax
  char v72; // cl
  _BYTE *v73; // rbx
  _QWORD *v74; // rbx
  __int64 v75; // rbx
  int BitmapRealizationForEffectInput; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v77; // rdx
  CD2DLayer *v78; // rcx
  __int64 v79; // r9
  unsigned int *v80; // r12
  unsigned __int64 v81; // r13
  char *v82; // r12
  __int64 v83; // rax
  int v84; // ecx
  float v85; // xmm0_4
  char v86; // r13
  _DWORD *v87; // rdi
  bool v88; // r13
  bool v89; // r12
  __int64 v90; // rbx
  __int64 v91; // rax
  bool v92; // bl
  bool v93; // di
  bool v94; // al
  bool *v95; // rdi
  int v96; // eax
  unsigned int v97; // ebx
  unsigned int v99; // eax
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rax
  _QWORD *v103; // r10
  _QWORD *v104; // r11
  __int64 v105; // rbx
  __int64 v106; // rax
  void *v107; // rbx
  int v108; // r8d
  unsigned int v109; // ecx
  unsigned int v110; // eax
  unsigned int v111; // eax
  unsigned int v112; // edx
  int v113; // eax
  float v114; // xmm3_4
  float v115; // xmm0_4
  float v116; // xmm1_4
  unsigned int v117; // eax
  __int64 v118; // rcx
  unsigned int v119; // eax
  int v120; // eax
  CMILMatrix *v121; // rcx
  int v122; // eax
  void *v123; // rax
  int v124; // eax
  unsigned int v125; // ecx
  __int64 v126; // r9
  int v127; // ebx
  __int64 v128; // rax
  int v129; // eax
  int ShapeData; // eax
  unsigned int v131; // ecx
  int v132; // r13d
  void (__fastcall ***v133)(_QWORD, __int64); // rbx
  int v134; // edi
  int v135; // eax
  char v136; // di
  void (__fastcall ***v137)(_QWORD, __int64); // rcx
  __int64 *v138; // rdi
  struct _LIST_ENTRY *v139; // rbx
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *v141; // rcx
  struct _LIST_ENTRY *v142; // rbx
  struct _LIST_ENTRY *Flink; // rax
  const struct CMILMatrix *v144; // rcx
  struct CMILMatrix *v145; // rax
  __int64 v146; // r8
  _BYTE *v147; // r9
  __int64 v148; // rbx
  int v149; // r12d
  __int64 v150; // rdx
  unsigned int v151; // r13d
  __int64 v152; // rdi
  char **v153; // r10
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rax
  void *v158; // rbx
  unsigned __int64 v159; // rdi
  unsigned int v160; // ecx
  unsigned int v161; // eax
  unsigned __int64 v162; // rbx
  unsigned __int64 v163; // r11
  char *v164; // rdx
  char *v165; // rcx
  unsigned __int64 v166; // r9
  unsigned __int64 v167; // rax
  __int64 v168; // r8
  char *v169; // rdi
  CScopedClipStack::ClippingScopeState *v170; // r13
  char *v171; // r13
  __int64 v172; // rax
  int v173; // eax
  void *v174; // r8
  char *v175; // rax
  __int64 v176; // rbx
  __int64 v177; // r8
  int v178; // edi
  __int64 v179; // r9
  __int64 v180; // rdx
  unsigned __int64 v181; // rdx
  char **v182; // r10
  __int64 v183; // rax
  __int64 v184; // r8
  __int64 v185; // rdx
  __int128 v186; // xmm0
  int v187; // ebx
  __int64 v188; // rax
  unsigned int v189; // ecx
  unsigned int v190; // eax
  void *v191; // rax
  char *v192; // rdx
  char *v193; // r8
  unsigned __int64 v194; // rcx
  char *v195; // r11
  char *v196; // rcx
  signed __int64 v197; // r9
  unsigned __int64 v198; // r10
  unsigned __int64 v199; // rdx
  __int64 v200; // rax
  __int64 v201; // r8
  char *v202; // rax
  __int64 v203; // rax
  _OWORD *v204; // rcx
  int v205; // eax
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // r8
  __int64 v209; // rax
  _BYTE *v210; // rdx
  __int64 k; // rcx
  _QWORD **v212; // rcx
  _QWORD *v213; // rcx
  _QWORD *v214; // rax
  __int64 v215; // rdx
  __int64 v216; // r8
  __int64 v217; // rax
  _BYTE *v218; // rdx
  __int64 jj; // rcx
  _QWORD **v220; // rcx
  _QWORD *v221; // rax
  __int64 v222; // r8
  __int64 v223; // rax
  _BYTE *v224; // rdx
  __int64 i1; // rcx
  _QWORD **v226; // rcx
  _QWORD *v227; // rcx
  _QWORD *v228; // rax
  __int64 v229; // r8
  __int64 v230; // rax
  _BYTE *v231; // rdx
  __int64 m; // rcx
  _QWORD **v233; // rcx
  _QWORD *v234; // rcx
  _QWORD *n; // rax
  __int64 v236; // r8
  __int64 v237; // rax
  _BYTE *v238; // rdx
  __int64 ii; // rcx
  _QWORD **v240; // rcx
  _QWORD *v241; // rcx
  _QWORD *v242; // rax
  __int64 v243; // rax
  __int64 mm; // rcx
  _QWORD **v245; // rcx
  _QWORD *v246; // rcx
  _QWORD *v247; // rax
  __int64 v248; // r8
  __int64 v249; // rcx
  _BYTE *v250; // rdx
  unsigned int nn; // r9d
  _QWORD **v252; // rcx
  _QWORD *v253; // rcx
  _QWORD *v254; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  CMILMatrix *TopByReference; // rax
  char v257; // dl
  const struct CMILMatrix *v258; // rax
  void *v259; // rax
  int v260; // eax
  unsigned int v261; // ecx
  void *v262; // rbx
  unsigned int v263; // eax
  unsigned __int8 IsEqual; // al
  int *v265; // r8
  int v266; // edx
  unsigned int v267; // ebx
  int v268; // edx
  _QWORD *v269; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v271; // rdi
  int v272; // eax
  unsigned int v273; // ecx
  unsigned int v274; // ebx
  __int64 v275; // rax
  struct CEffect *EffectInternal; // rax
  __int64 *v277; // r14
  _QWORD *v278; // r12
  __int64 v279; // r8
  __int64 v280; // rcx
  _BYTE *v281; // rdx
  unsigned int kk; // r9d
  _QWORD **v283; // rcx
  _QWORD *v284; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v287; // r12
  char v288; // r8
  __int64 v289; // rax
  int v290; // eax
  int v291; // eax
  __int64 ProjectedShadowReceivers; // rax
  _QWORD *v293; // rcx
  _QWORD *v294; // rdx
  _QWORD *v295; // rdi
  _QWORD *v296; // rbx
  _QWORD *v297; // rax
  CProjectedShadowScene *v298; // rax
  __int64 ***v299; // rdi
  __int64 **i; // rbx
  unsigned int v301; // ecx
  unsigned int v302; // ecx
  void *v303; // rbx
  __int64 v304; // rax
  int v305; // r12d
  _QWORD *v306; // rax
  unsigned int v307; // ecx
  unsigned int v308; // eax
  int v309; // ebx
  __int64 v310; // rax
  void *v311; // rbx
  unsigned int v312; // eax
  unsigned int v313; // r12d
  unsigned int v314; // ecx
  unsigned __int64 v315; // rax
  void *v316; // rbx
  unsigned int v317; // ecx
  unsigned int v318; // ecx
  void *v319; // rbx
  __int64 v320; // rax
  int v321; // edi
  unsigned int v322; // ecx
  unsigned int v323; // eax
  int v324; // ebx
  __int64 v325; // rax
  void *v326; // rbx
  unsigned int v327; // ecx
  unsigned int v328; // eax
  int v329; // eax
  unsigned int v330; // ecx
  unsigned int v331; // edi
  unsigned int v332; // ecx
  void *v333; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v335; // rax
  int v336; // eax
  unsigned int v337; // ecx
  unsigned __int64 v338; // rcx
  void *v339; // rbx
  const void *v340; // rdx
  int v341; // eax
  HANDLE v342; // rax
  bool v343; // cf
  __int64 *v344; // r14
  _QWORD *v345; // r12
  __int64 v346; // r8
  __int64 v347; // r12
  __int64 v348; // rcx
  char v349; // r10
  __int64 v350; // rax
  int v351; // eax
  int v352; // eax
  unsigned __int64 v353; // rax
  int v354; // eax
  unsigned int v355; // ecx
  unsigned __int64 v356; // rax
  void *v357; // rbx
  int v358; // eax
  HANDLE v359; // rax
  unsigned __int64 v360; // rdi
  void *v361; // rax
  __int64 v362; // r8
  __int64 v363; // rdx
  void *v364; // rbx
  char *v365; // rcx
  __int64 v366; // rax
  __int64 i2; // rax
  __int64 v368; // r8
  CScopedClipStack::ClippingScopeState *v369; // rbx
  CScopedClipStack::ClippingScopeState *v370; // rdi
  unsigned __int64 v371; // rax
  int v372; // eax
  unsigned int v373; // ecx
  unsigned __int64 v374; // rcx
  void *v375; // rbx
  const void *v376; // rdx
  int v377; // ecx
  HANDLE v378; // rax
  HANDLE v379; // rax
  unsigned int v380; // r13d
  int v381; // eax
  unsigned int v382; // ecx
  unsigned __int64 v383; // rax
  void *v384; // rbx
  HANDLE v385; // rax
  unsigned __int64 v386; // rdi
  void *v387; // rax
  __int64 v388; // r8
  __int64 v389; // rdx
  void *v390; // rbx
  char *v391; // rcx
  char *v392; // rax
  __int64 v393; // r10
  __int64 v394; // rdx
  __int64 v395; // r8
  int v396; // eax
  unsigned int v397; // ecx
  unsigned int v398; // r13d
  int v399; // eax
  unsigned int v400; // ecx
  int v401; // eax
  unsigned int v402; // ecx
  void *v403; // rbx
  HANDLE v404; // rax
  HANDLE v405; // rax
  unsigned int v406; // ecx
  __int64 v407; // r8
  unsigned int v408; // ecx
  char v409; // bl
  __int64 v410; // rdx
  __int128 *Bounds; // rax
  __int64 v412; // rcx
  unsigned int v413; // ecx
  unsigned int v414; // ecx
  __int64 v415; // r8
  unsigned int v416; // ecx
  unsigned int v417; // edi
  int v418; // eax
  unsigned int v419; // ecx
  void *v420; // rbx
  unsigned int v421; // edi
  int v422; // eax
  unsigned int v423; // ecx
  void *v424; // rbx
  HANDLE v425; // rax
  int v426; // edx
  const void *v427; // rdi
  const char *v428; // rbx
  __int64 v429; // rcx
  DwmDbg::DbgString *v430; // rax
  const char *v431; // rdx
  __int64 v432; // rdi
  DwmDbg::DbgString *v433; // rbx
  DwmDbg::DbgString *v434; // rax
  unsigned int v435; // [rsp+20h] [rbp-E0h]
  int v436; // [rsp+20h] [rbp-E0h]
  unsigned int v437; // [rsp+20h] [rbp-E0h]
  char v438; // [rsp+50h] [rbp-B0h]
  char v439; // [rsp+50h] [rbp-B0h]
  char v440; // [rsp+50h] [rbp-B0h]
  int v441; // [rsp+54h] [rbp-ACh]
  char v442[8]; // [rsp+58h] [rbp-A8h] BYREF
  void *v443; // [rsp+60h] [rbp-A0h] BYREF
  char v444[8]; // [rsp+68h] [rbp-98h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v446[2]; // [rsp+78h] [rbp-88h] BYREF
  bool *v447; // [rsp+80h] [rbp-80h]
  void *v448; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v449; // [rsp+90h] [rbp-70h]
  char v450; // [rsp+98h] [rbp-68h]
  struct CVisualTree *v451; // [rsp+A0h] [rbp-60h]
  _BYTE v452[24]; // [rsp+B0h] [rbp-50h] BYREF
  void (__fastcall ***v453)(_QWORD, __int64); // [rsp+D0h] [rbp-30h] BYREF
  char v454; // [rsp+D8h] [rbp-28h]
  __int64 v455; // [rsp+E0h] [rbp-20h]
  _DWORD v456[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct CVisual *v457; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD *v458; // [rsp+F8h] [rbp-8h]
  __int128 v459; // [rsp+100h] [rbp+0h] BYREF
  char v460; // [rsp+110h] [rbp+10h]
  __int64 v461; // [rsp+118h] [rbp+18h]
  __int64 v462; // [rsp+120h] [rbp+20h]
  int v463; // [rsp+128h] [rbp+28h]
  float v464; // [rsp+12Ch] [rbp+2Ch]
  __int128 v465; // [rsp+130h] [rbp+30h] BYREF
  __int128 v466; // [rsp+140h] [rbp+40h]
  __int128 v467; // [rsp+150h] [rbp+50h]
  __int128 v468; // [rsp+160h] [rbp+60h]
  _QWORD v469[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v470; // [rsp+180h] [rbp+80h]
  __int128 v471; // [rsp+190h] [rbp+90h]
  __int128 v472; // [rsp+1A0h] [rbp+A0h]
  __int64 v473; // [rsp+1B0h] [rbp+B0h]
  __int64 v474; // [rsp+1B8h] [rbp+B8h]
  int v475; // [rsp+1C0h] [rbp+C0h]
  char v476; // [rsp+1C4h] [rbp+C4h]
  _DWORD v477[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  void *lpMem; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v479[5]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v480; // [rsp+1F4h] [rbp+F4h]
  int v481; // [rsp+1F8h] [rbp+F8h]
  int v482; // [rsp+1FCh] [rbp+FCh]
  _DWORD *v483; // [rsp+208h] [rbp+108h] BYREF
  void *v484; // [rsp+210h] [rbp+110h] BYREF
  char *v485; // [rsp+2B8h] [rbp+1B8h] BYREF
  char *v486; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v487[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v488; // [rsp+320h] [rbp+220h]
  _BYTE v489[64]; // [rsp+330h] [rbp+230h] BYREF
  int v490; // [rsp+370h] [rbp+270h]
  _BYTE v491[64]; // [rsp+380h] [rbp+280h] BYREF
  int v492; // [rsp+3C0h] [rbp+2C0h]
  __int128 v493; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v494; // [rsp+3E0h] [rbp+2E0h]
  __int64 v495[2]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v496; // [rsp+400h] [rbp+300h]
  __int128 v497; // [rsp+410h] [rbp+310h]
  __int128 v498; // [rsp+420h] [rbp+320h] BYREF
  __int64 v499; // [rsp+430h] [rbp+330h]
  __m128 v500; // [rsp+438h] [rbp+338h]
  __int128 v501; // [rsp+448h] [rbp+348h] BYREF
  __int128 v502; // [rsp+458h] [rbp+358h] BYREF
  __int64 v503[2]; // [rsp+470h] [rbp+370h] BYREF
  __int64 v504; // [rsp+480h] [rbp+380h]
  __int128 v505; // [rsp+490h] [rbp+390h] BYREF
  __int64 v506; // [rsp+4A0h] [rbp+3A0h]
  __int128 v507; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int128 v508; // [rsp+4B8h] [rbp+3B8h]
  __int128 v509; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int128 v510; // [rsp+4D8h] [rbp+3D8h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+4A8h]

  v3 = (unsigned int *)((char *)this + 3280);
  v4 = 0LL;
  v447 = a3;
  v451 = a2;
  v499 = 0LL;
  v506 = 0LL;
  v498 = 0LL;
  v441 = 0;
  v505 = 0LL;
  LODWORD(Size) = 0;
  v6 = this;
  v509 = 0LL;
  v7 = *((_QWORD *)this + 415);
  v8 = (struct CVisual *)*((_QWORD *)this + 416);
  v460 = 0;
  v475 = 0;
  v476 = 0;
  v469[1] = 0LL;
  v473 = 0x15773F800000LL;
  v459 = 0LL;
  v461 = 0LL;
  v462 = 1065353216LL;
  v463 = 0;
  v464 = 1.0;
  v469[0] = 0LL;
  v474 = 0LL;
  v470 = 0LL;
  v471 = 0LL;
  v472 = 0LL;
  v9 = *(_DWORD **)(v7 + 232);
  v449 = (unsigned __int64)this;
  *(_OWORD *)v503 = 0LL;
  v455 = v7;
  v10 = (*v9 & 0x20000) == 0;
  *(_OWORD *)v495 = 0LL;
  v457 = v8;
  if ( !v10 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(v7);
    v293 = *(_QWORD **)ProjectedShadowReceivers;
    v294 = *(_QWORD **)(ProjectedShadowReceivers + 8);
    v443 = v293;
    for ( *(_QWORD *)&v493 = v294; v293 != v294; v443 = v293 )
    {
      v295 = (_QWORD *)*v293;
      v458 = v295;
      v296 = (_QWORD *)v295[9];
      v297 = (_QWORD *)v295[10];
      v448 = v296;
      *(_QWORD *)v452 = v297;
      if ( v296 != v297 )
      {
        do
        {
          v298 = (CProjectedShadowScene *)*v296;
          *(_QWORD *)v446 = *v296;
          if ( !CCommonRegistryData::DisableProjectedShadows
            && !CProjectedShadowScene::IsEmptyProjection(v298)
            && !CProjectedShadowReceiver::IsEmptyMaskContent((CProjectedShadowReceiver *)v295) )
          {
            v299 = *(__int64 ****)(*(_QWORD *)v446 + 64LL);
            for ( i = *v299; i != (__int64 **)v299; i = (__int64 **)*i )
            {
              if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
              {
                v11 = 1;
                goto LABEL_3;
              }
            }
            v296 = v448;
            v295 = v458;
          }
          v448 = ++v296;
        }
        while ( v296 != *(_QWORD **)v452 );
        v293 = v443;
        v294 = (_QWORD *)v493;
      }
      ++v293;
    }
  }
  v11 = 0;
LABEL_3:
  v12 = v3[1];
  v13 = 64LL;
  v14 = 0LL;
  v443 = 0LL;
  v15 = 1LL;
  if ( *v3 == (_DWORD)v12 )
  {
    v259 = (void *)(2 * v12);
    v448 = v259;
    if ( (unsigned __int64)v259 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_7;
    }
    if ( (unsigned int)v259 <= 0x40 )
    {
      LODWORD(v259) = 64;
      v448 = (void *)64;
    }
    v260 = HrMalloc(1uLL, (unsigned int)v259, &v443);
    if ( v260 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v261, 0LL, 0, v260, 0x6Bu, 0LL);
      v14 = v443;
      goto LABEL_7;
    }
    v262 = v443;
    memcpy_0(v443, *((const void **)v3 + 2), *v3);
    operator delete(*((void **)v3 + 2));
    v263 = (unsigned int)v448;
    *((_QWORD *)v3 + 2) = v262;
    v14 = 0LL;
    v3[1] = v263;
  }
  *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = v11;
  v16 = v3[6];
  if ( v16 <= *v3 )
    v16 = *v3;
  v3[6] = v16;
LABEL_7:
  if ( v14 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v14);
  }
  if ( !*((_QWORD *)v6 + 25) )
    goto LABEL_10;
  v138 = (__int64 *)*((_QWORD *)v6 + 1010);
  v139 = *(struct _LIST_ENTRY **)(v138[1] - 8);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64, struct CVisual *, __int64))v139->Flink[11].Blink)(
         v139,
         v13,
         v8,
         v15) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v7 + 336);
LABEL_238:
    if ( p_Blink )
    {
      v141 = p_Blink[21];
      v142 = p_Blink[22];
      while ( v141 != v142 )
      {
        v13 = *v138;
        v275 = v138[1] - *v138;
        *(_QWORD *)&v493 = v141->Flink;
        v15 = *(_QWORD *)(v493 + 1800);
        v8 = *(struct CVisual **)(v493 + 1792);
        if ( ((v275 ^ (v15 - (_QWORD)v8)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        {
          v8 = (struct CVisual *)((char *)v8 - v13);
          while ( (struct CVisual *)((char *)v8 + v13) != (struct CVisual *)v15 )
          {
            if ( *(_QWORD *)((char *)v8 + v13) != *(_QWORD *)v13
              || *(_QWORD *)((char *)v8 + v13 + 8) != *(_QWORD *)(v13 + 8) )
            {
              goto LABEL_586;
            }
            v13 += 16LL;
          }
          v13 = v493;
          *(_QWORD *)(v493 + 1984) = p_Blink[33][1].Flink[31].Flink;
          Flink = v141->Flink;
          goto LABEL_242;
        }
LABEL_586:
        v141 = (struct _LIST_ENTRY *)((char *)v141 + 8);
      }
    }
    goto LABEL_241;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
  if ( TreeDataListHead )
  {
    for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
    {
      p_Blink = &j[-23].Blink;
      if ( j[2].Flink == v139 )
        goto LABEL_238;
    }
  }
LABEL_241:
  Flink = 0LL;
LABEL_242:
  if ( Flink == *((struct _LIST_ENTRY **)v6 + 25) )
    *((_BYTE *)v6 + 193) = 1;
LABEL_10:
  if ( (*(_BYTE *)(v7 + 102) & 2) != 0 || (*(_DWORD *)(v7 + 96) & 0x100) == 0 )
  {
LABEL_156:
    v99 = *v3;
    if ( *v3 )
      *v3 = --v99;
    v100 = v3[1];
    v448 = 0LL;
    if ( v99 == (_DWORD)v100 )
    {
      v421 = 2 * v100;
      if ( (unsigned __int64)(2 * v100) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_162;
      }
      if ( v421 <= 0x40 )
        v421 = 64;
      v422 = HrMalloc(1uLL, v421, &v448);
      if ( v422 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v423, 0LL, 0, v422, 0x6Bu, 0LL);
        v4 = v448;
        goto LABEL_162;
      }
      v424 = v448;
      memcpy_0(v448, *((const void **)v3 + 2), *v3);
      operator delete(*((void **)v3 + 2));
      *((_QWORD *)v3 + 2) = v424;
      v3[1] = v421;
    }
    *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = 0;
    v101 = v3[6];
    if ( v101 <= *v3 )
      v101 = *v3;
    v3[6] = v101;
LABEL_162:
    if ( !v4 )
      goto LABEL_163;
LABEL_803:
    v425 = GetProcessHeap();
    HeapFree(v425, 0, v4);
    goto LABEL_163;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64, struct CVisual *, __int64))(*(_QWORD *)a2 + 184LL))(
         a2,
         v13,
         v8,
         v15) )
  {
    goto LABEL_13;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v215 = v7 + 336;
  }
  else
  {
    v208 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v208 >= 0 )
      goto LABEL_13;
    v209 = *(unsigned int *)(v208 + 4);
    v210 = (_BYTE *)(v208 + 8);
    for ( k = 0LL; (unsigned int)k < (unsigned int)v209; ++v210 )
    {
      if ( *v210 == 1 )
        break;
      k = (unsigned int)(k + 1);
    }
    v212 = (unsigned int)k >= (unsigned int)v209
         ? 0LL
         : (_QWORD **)(v209 + 15 + v208 + 8 * k - (((_BYTE)v209 + 15) & 7));
    v213 = *v212;
    if ( !v213 )
      goto LABEL_13;
    v214 = (_QWORD *)*v213;
    if ( (_QWORD *)*v213 == v213 )
      goto LABEL_13;
    while ( 1 )
    {
      v215 = (__int64)(v214 - 45);
      if ( (const struct CVisualTree *)v214[4] == a2 )
        break;
      v214 = (_QWORD *)*v214;
      if ( v214 == v213 )
        goto LABEL_13;
    }
  }
  if ( v215 && *(_QWORD *)(v215 + 256) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v215 + 264) + 16LL) + 496LL) )
    goto LABEL_156;
LABEL_13:
  if ( *((_BYTE *)v6 + 193) )
    goto LABEL_156;
  if ( (unsigned int)((__int64)(*(_QWORD *)(v7 + 288) - *(_QWORD *)(v7 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v7 + 312) - *(_QWORD *)(v7 + 304)) >> 4) )
  {
    v456[0] = 0;
    v265 = v456;
    v456[1] = 1;
    v448 = v456;
    do
    {
      v266 = *v265;
      v267 = 0;
      v446[0] = *v265;
      while ( v267 < (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v266) )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v269, v267, v268);
        v271 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                               + 240LL))(
                 LightAtNoRef,
                 a2,
                 v7) )
          {
            BitmapRealizationForEffectInput = CDrawingContext::PushLight((__int64)v6, v7, v271, v446[0]);
            v441 = BitmapRealizationForEffectInput;
            LODWORD(Size) = BitmapRealizationForEffectInput;
            if ( BitmapRealizationForEffectInput < 0 )
            {
              v435 = 5559;
              goto LABEL_590;
            }
          }
        }
        v266 = v446[0];
        ++v267;
      }
      v265 = (int *)((char *)v448 + 4);
      v448 = v265;
    }
    while ( v265 != (int *)&v457 );
  }
  v17 = *(void **)(*((_QWORD *)v6 + 100) + 8LL * (unsigned int)(*((_DWORD *)v6 + 206) - 1));
  v18 = *(_QWORD *)v7;
  v448 = v17;
  v19 = (*(__int64 (__fastcall **)(__int64))(v18 + 160))(v7);
  v20 = (_DWORD *)v19;
  if ( v19 && (void *)v19 != v17 )
  {
    v106 = *((unsigned int *)v6 + 93);
    v107 = 0LL;
    v108 = 0;
    v448 = v20;
    *(_DWORD *)v452 = 11;
    *(_QWORD *)&v452[8] = v7;
    v446[0] = 0;
    v443 = 0LL;
    if ( *((_DWORD *)v6 + 92) != (_DWORD)v106 )
    {
LABEL_176:
      *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * (unsigned int)(*((_DWORD *)v6 + 92))++) = *(_OWORD *)v452;
      v109 = *((_DWORD *)v6 + 92);
      v110 = *((_DWORD *)v6 + 98);
      if ( v110 <= v109 )
        v110 = *((_DWORD *)v6 + 92);
      *((_DWORD *)v6 + 98) = v110;
LABEL_179:
      if ( v107 )
      {
        v342 = GetProcessHeap();
        HeapFree(v342, 0, v107);
        v108 = v446[0];
      }
      if ( v108 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v108, retaddr);
      v483 = v20;
      v111 = *((_DWORD *)v6 + 206);
      v112 = v111 + 1;
      if ( v111 + 1 < v111 )
      {
        v274 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v112 <= *((_DWORD *)v6 + 205) )
        {
          *(_QWORD *)(*((_QWORD *)v6 + 100) + 8LL * v111) = v20;
          *((_DWORD *)v6 + 206) = v112;
LABEL_185:
          if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == v20[32] )
            CDrawingContext::SetHeatMapForCurrentNode(v6);
          goto LABEL_18;
        }
        v272 = DynArrayImpl<0>::AddMultipleAndSet((char *)v6 + 800, 8LL, 1LL, &v483);
        v274 = v272;
        if ( v272 >= 0 )
          goto LABEL_185;
        MilInstrumentationCheckHR_MaybeFailFast(v273, 0LL, 0, v272, 0xC0u, 0LL);
      }
      ModuleFailFastForHRESULT(v274, retaddr);
    }
    v335 = 2 * v106;
    if ( v335 > 0xFFFFFFFF )
    {
      v446[0] = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
      v108 = v446[0];
      goto LABEL_179;
    }
    if ( (unsigned int)v335 <= 0x40 )
      v335 = 64LL;
    *(_QWORD *)&v493 = v335;
    v336 = HrMalloc(0x10uLL, (unsigned int)v335, &v443);
    v446[0] = v336;
    if ( v336 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v337, 0LL, 0, v336, 0x6Bu, 0LL);
    }
    else
    {
      v338 = 16LL * *((unsigned int *)v6 + 92);
      if ( v338 <= 0xFFFFFFFF )
      {
        v339 = v443;
        v340 = (const void *)*((_QWORD *)v6 + 48);
        v446[0] = 0;
        memcpy_0(v443, v340, (unsigned int)v338);
        operator delete(*((void **)v6 + 48));
        v341 = v493;
        v108 = 0;
        *((_QWORD *)v6 + 48) = v339;
        v107 = 0LL;
        *((_DWORD *)v6 + 93) = v341;
        goto LABEL_176;
      }
      v446[0] = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v338, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v108 = v446[0];
    v107 = v443;
    goto LABEL_179;
  }
LABEL_18:
  *v447 = 1;
  if ( (*(_BYTE *)(v7 + 101) & 0x18) != 0 )
  {
    CVisual::GetHeatMapProperties(v7, &v493);
    v343 = (*(_BYTE *)(v7 + 101) & 8) != 0;
    *(_OWORD *)&v452[4] = v493;
    *(_DWORD *)v452 = 2 - v343;
    *(_DWORD *)&v452[20] = v494;
    BitmapRealizationForEffectInput = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(
                                        (char *)g_pComposition + 1112,
                                        v452);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v435 = 5600;
      goto LABEL_590;
    }
  }
  v21 = *(_DWORD *)(v7 + 104);
  if ( (_BYTE)v21 )
  {
    v479[0] = (unsigned __int8)v21;
    v479[4] = (v21 >> 8) & 3;
    v479[3] = (v21 >> 14) & 0x1F;
    v479[1] = (int)(v21 << 18) >> 28;
    v479[2] = *(_DWORD *)(v7 + 196);
    if ( *((_DWORD *)g_pComposition + 278)
      && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112) == 2 )
    {
      v480 = 0;
    }
    else
    {
      v480 = *(_DWORD *)(v7 + 200);
    }
    v481 = *(_DWORD *)(v7 + 204);
    v482 = *(_DWORD *)(v7 + 208);
    BitmapRealizationForEffectInput = CDrawingContext::PushRenderOptionsInternal(
                                        v6,
                                        (const struct CVisual *)v7,
                                        (const struct MilRenderOptions *)v479,
                                        1);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v435 = 5616;
      goto LABEL_590;
    }
  }
  v497 = 0LL;
  v22 = *((_DWORD *)v6 + 100);
  if ( v22 )
    v23 = (CMILMatrix *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v22 - 1));
  else
    v23 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v23);
  if ( *((float *)&v498 + 2) > *(float *)&v498 && *((float *)&v498 + 3) > *((float *)&v498 + 1) )
  {
    v24 = *(_DWORD *)(v7 + 96);
    if ( (v24 & 0x200) != 0 )
    {
      v25 = FLOAT_4_0;
    }
    else if ( (v24 & 0x800) != 0 )
    {
      v25 = FLOAT_0_5;
    }
    else
    {
      v25 = 0.0;
    }
    if ( (v24 & 0x1000) != 0 )
      v25 = v25 + 0.5;
    if ( v25 != 0.0 )
    {
      *((float *)&v498 + 3) = *((float *)&v498 + 3) + v25;
      *(float *)&v498 = *(float *)&v498 - v25;
      *((float *)&v498 + 1) = *((float *)&v498 + 1) - v25;
      *((float *)&v498 + 2) = *((float *)&v498 + 2) + v25;
      *(float *)&v499 = *(float *)&v499 + 0.0;
      *((float *)&v499 + 1) = *((float *)&v499 + 1) + 0.0;
    }
  }
  v26 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)v6 + 4)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL) + 16LL));
  (**v26)(v26, v477);
  v27 = (char *)v6 + 896;
  v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v29 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *(_QWORD *)&v508 = 0LL;
  v31 = *((_QWORD *)v6 + 113);
  *((float *)&v508 + 2) = (float)v477[0];
  *((float *)&v508 + 3) = (float)v477[1];
  v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v33 = v31 - *((_QWORD *)v6 + 112);
  if ( v33 && *(_QWORD *)(v31 - 184) )
  {
    v34 = *((_DWORD *)v6 + 796);
    if ( v34 )
    {
      v27 = (char *)v6 + 896;
      v35 = *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(v34 - 1));
      v497 = v35;
    }
    else
    {
      v497 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      LODWORD(v35) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
  }
  else
  {
    v497 = v508;
    LODWORD(v35) = v508;
    if ( !v33 )
      goto LABEL_36;
  }
  if ( *(_QWORD *)(v31 - 168) )
  {
    v500 = 0LL;
    v113 = *((_DWORD *)v27 + 580);
    if ( v113 )
    {
      v500 = *(__m128 *)(*((_QWORD *)v6 + 404) + 16LL * (unsigned int)(v113 - 1));
      v30 = v500.m128_f32[0];
      v29 = v500.m128_f32[1];
      v32 = v500.m128_f32[2];
      LODWORD(v28) = _mm_shuffle_ps(v500, v500, 255).m128_u32[0];
    }
    else
    {
      v500 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v30 > *(float *)&v35 )
    {
      *(float *)&v497 = v30;
      *(float *)&v35 = v30;
    }
    v114 = *((float *)&v497 + 1);
    if ( v29 > *((float *)&v497 + 1) )
    {
      *((float *)&v497 + 1) = v29;
      v114 = v29;
    }
    v115 = *((float *)&v497 + 2);
    if ( *((float *)&v497 + 2) > v32 )
    {
      *((float *)&v497 + 2) = v32;
      v115 = v32;
    }
    v116 = *((float *)&v497 + 3);
    if ( *((float *)&v497 + 3) > v28 )
    {
      *((float *)&v497 + 3) = v28;
      v116 = v28;
    }
    if ( v115 <= *(float *)&v35 || v116 <= v114 )
    {
      LODWORD(v35) = 0;
      v497 = 0uLL;
    }
  }
LABEL_36:
  *(_QWORD *)((char *)&v493 + 4) = *(_QWORD *)((char *)&v497 + 4);
  v494 = v499;
  LODWORD(v493) = v35;
  HIDWORD(v493) = HIDWORD(v497);
  TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v498,
    &v493);
  LODWORD(v36) = v498;
  v37 = *((float *)&v498 + 2);
  v38 = *((float *)&v498 + 1);
  v39 = *((float *)&v498 + 3);
  *(_OWORD *)v503 = v498;
  if ( *((float *)&v498 + 2) <= *(float *)&v498 || *((float *)&v498 + 3) <= *((float *)&v498 + 1) )
  {
    v117 = *v3;
    if ( *v3 )
      *v3 = --v117;
    v118 = v3[1];
    v448 = 0LL;
    if ( v117 == (_DWORD)v118 )
    {
      v417 = 2 * v118;
      if ( (unsigned __int64)(2 * v118) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_212;
      }
      if ( v417 <= 0x40 )
        v417 = 64;
      v418 = HrMalloc(1uLL, v417, &v448);
      if ( v418 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v419, 0LL, 0, v418, 0x6Bu, 0LL);
        v4 = v448;
        goto LABEL_212;
      }
      v420 = v448;
      memcpy_0(v448, *((const void **)v3 + 2), *v3);
      operator delete(*((void **)v3 + 2));
      *((_QWORD *)v3 + 2) = v420;
      v3[1] = v417;
    }
    *(_BYTE *)((*v3)++ + *((_QWORD *)v3 + 2)) = 0;
    v119 = v3[6];
    if ( v119 <= *v3 )
      v119 = *v3;
    v3[6] = v119;
LABEL_212:
    if ( !v4 )
      goto LABEL_163;
    goto LABEL_803;
  }
  *(_QWORD *)v452 = *((_QWORD *)v6 + 1009);
  if ( !*(_QWORD *)v452 )
  {
LABEL_55:
    v42 = v451;
    goto LABEL_56;
  }
  v40 = *((_QWORD *)v6 + 25);
  if ( v40 )
    v41 = (_QWORD *)(v40 + 1888);
  else
    v41 = &CBackdropVisualImageKey::sc_NoBVIKey;
  v42 = v451;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v451 + 184LL))(v451) )
  {
    v43 = (_QWORD *)(v7 + 336);
LABEL_43:
    if ( !v43 )
      goto LABEL_56;
    v44 = 0LL;
    v45 = (__int64 *)v43[25];
    v46 = (__int64 *)v43[26];
    *(_QWORD *)&v493 = v43 + 25;
    while ( v45 != v46 )
    {
      v47 = *v45;
      if ( *(_QWORD *)(*v45 + 8) == *v41 && *(_QWORD *)(v47 + 16) == v41[1] )
      {
        v44 = *v45;
        if ( v47 )
          *(_BYTE *)(v47 + 25) = 10;
        break;
      }
      ++v45;
    }
    v48 = *(_QWORD *)(*(_QWORD *)(v43[33] + 16LL) + 496LL);
    if ( v43[30] != v48 )
    {
      v277 = (__int64 *)v493;
      v43[30] = v48;
      v278 = (_QWORD *)*v277;
      while ( v278 != (_QWORD *)v43[26] )
      {
        if ( (unsigned __int8)CBackdropVisualImageKey::operator==(*v278 + 8LL, &CBackdropVisualImageKey::sc_NoBVIKey)
          || (v10 = *(_BYTE *)(v279 + 25) == 1, --*(_BYTE *)(v279 + 25), !v10) )
        {
          ++v278;
        }
        else
        {
          v287 = ((__int64)v278 - *v277) >> 3;
          detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
            v277,
            v287,
            1LL);
          v278 = (_QWORD *)(*v277 + 8 * v287);
        }
      }
      v7 = v455;
      v6 = (CDrawingContext *)v449;
    }
    if ( v44 )
    {
      if ( v37 <= v36
        || v39 <= v38
        || (v49 = *(unsigned int *)(v44 + 28),
            *(_QWORD *)&v493 = __PAIR64__(LODWORD(v38), LODWORD(v36)),
            *((_QWORD *)&v493 + 1) = __PAIR64__(LODWORD(v39), LODWORD(v37)),
            (unsigned __int8)CArrayBasedCoverageSet::IsCovered(*(_QWORD *)v452 + 448LL, &v493, v49)) )
      {
        if ( *v3 )
          --*v3;
        v442[0] = 0;
        CWatermarkStack<bool,64,2,10>::Push(v3, v442);
        v95 = v447;
        *v447 = 0;
        goto LABEL_147;
      }
    }
    goto LABEL_55;
  }
  v229 = *(_QWORD *)(v7 + 232);
  if ( *(int *)v229 < 0 )
  {
    v230 = *(unsigned int *)(v229 + 4);
    v231 = (_BYTE *)(v229 + 8);
    for ( m = 0LL; (unsigned int)m < (unsigned int)v230; ++v231 )
    {
      if ( *v231 == 1 )
        break;
      m = (unsigned int)(m + 1);
    }
    v233 = (unsigned int)m >= (unsigned int)v230
         ? 0LL
         : (_QWORD **)(v230 + 15 + v229 + 8 * m - (((_BYTE)v230 + 15) & 7));
    v234 = *v233;
    if ( v234 )
    {
      for ( n = (_QWORD *)*v234; n != v234; n = (_QWORD *)*n )
      {
        v43 = n - 45;
        if ( (struct CVisualTree *)n[4] == v42 )
          goto LABEL_43;
      }
    }
  }
LABEL_56:
  *(_QWORD *)v452 = *((_QWORD *)v6 + 1009);
  if ( !*(_QWORD *)v452 )
    goto LABEL_71;
  v50 = *((_QWORD *)v6 + 25);
  if ( v50 )
    v51 = (_QWORD *)(v50 + 1888);
  else
    v51 = &CBackdropVisualImageKey::sc_NoBVIKey;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v42 + 184LL))(v42) )
  {
    v52 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v236 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v236 >= 0 )
      goto LABEL_71;
    v237 = *(unsigned int *)(v236 + 4);
    v238 = (_BYTE *)(v236 + 8);
    for ( ii = 0LL; (unsigned int)ii < (unsigned int)v237; ++v238 )
    {
      if ( *v238 == 1 )
        break;
      ii = (unsigned int)(ii + 1);
    }
    v240 = (unsigned int)ii >= (unsigned int)v237
         ? 0LL
         : (_QWORD **)(v237 + 15 + v236 + 8 * ii - (((_BYTE)v237 + 15) & 7));
    v241 = *v240;
    if ( !v241 )
      goto LABEL_71;
    v242 = (_QWORD *)*v241;
    if ( (_QWORD *)*v241 == v241 )
      goto LABEL_71;
    while ( 1 )
    {
      v52 = v242 - 45;
      if ( (struct CVisualTree *)v242[4] == v42 )
        break;
      v242 = (_QWORD *)*v242;
      if ( v242 == v241 )
        goto LABEL_71;
    }
  }
  if ( v52 )
  {
    v53 = 0LL;
    v54 = v52[25];
    v55 = v52[26];
    *(_QWORD *)&v493 = v52 + 25;
    while ( v54 != v55 )
    {
      v56 = *(_DWORD **)v54;
      if ( *(_QWORD *)(*(_QWORD *)v54 + 8LL) == *v51 && *((_QWORD *)v56 + 2) == v51[1] )
      {
        v53 = *(_DWORD **)v54;
        if ( v56 )
          *((_BYTE *)v56 + 25) = 10;
        break;
      }
      v54 += 8LL;
    }
    v57 = *(_QWORD *)(*(_QWORD *)(v52[33] + 16LL) + 496LL);
    if ( v52[30] != v57 )
    {
      v344 = (__int64 *)v493;
      v52[30] = v57;
      v345 = (_QWORD *)*v344;
      while ( v345 != (_QWORD *)v52[26] )
      {
        if ( (unsigned __int8)CBackdropVisualImageKey::operator==(*v345 + 8LL, &CBackdropVisualImageKey::sc_NoBVIKey)
          || (v10 = *(_BYTE *)(v346 + 25) == 1, --*(_BYTE *)(v346 + 25), !v10) )
        {
          ++v345;
        }
        else
        {
          v347 = ((__int64)v345 - *v344) >> 3;
          detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
            v344,
            v347,
            1LL);
          v345 = (_QWORD *)(*v344 + 8 * v347);
        }
      }
      v7 = v455;
      v6 = (CDrawingContext *)v449;
    }
    if ( v53 )
    {
      v58 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v53 + 16LL))(v53);
      v59 = *(_QWORD *)v452;
      *((_DWORD *)v6 + 2022) = v58;
      v60 = *(_DWORD *)(v59 + 1200);
      if ( v58 >= v60 )
      {
        if ( v53[7] < v60 )
          goto LABEL_146;
        CWatermarkStack<bool,64,2,10>::Pop(v3);
        v442[0] = 0;
        CWatermarkStack<bool,64,2,10>::Push(v348, v442);
        v95 = v447;
        *v447 = 0;
        goto LABEL_147;
      }
    }
  }
LABEL_71:
  v61 = v451;
  CDrawingContext::GetEffects(
    v6,
    (struct CVisual **)v451,
    (struct CVisual *)v7,
    (struct CDrawingContext::NodeEffects *)&v459);
  if ( COERCE_FLOAT(v462 & _xmm) < 0.0000011920929 || COERCE_FLOAT(LODWORD(v464) & _xmm) < 0.0000011920929 )
    goto LABEL_163;
  v62 = *(CGeometry **)(v7 + 248);
  if ( v62 )
  {
    v510 = 0LL;
    if ( v460 && *((_QWORD *)&v459 + 1) )
      (***((void (__fastcall ****)(_QWORD, __int64))&v459 + 1))(*((_QWORD *)&v459 + 1), 1LL);
    *((_QWORD *)&v459 + 1) = 0LL;
    v460 = 0;
    v453 = 0LL;
    v454 = 0;
    ShapeData = CGeometry::GetShapeData(v62, (const struct D2D_SIZE_F *)(v7 + 140), (struct CShapePtr *)&v453);
    v441 = ShapeData;
    v132 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, ShapeData, 0x95Cu, 0LL);
LABEL_548:
      v137 = v453;
      if ( v132 == -2003304438 )
      {
        v132 = 0;
        v441 = 0;
      }
LABEL_550:
      if ( v454 && v137 )
        (**v137)(v137, 1LL);
      v453 = 0LL;
      v454 = 0;
      LODWORD(Size) = v132;
      if ( v132 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v137, 0LL, 0, v132, 0x1645u, 0LL);
        goto LABEL_146;
      }
      goto LABEL_74;
    }
    v133 = v453;
    v134 = -2003292412;
    if ( v453 )
    {
      v135 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), __int128 *, _QWORD))(*v453)[6])(
               v453,
               &v510,
               0LL);
      v441 = v135;
      v134 = v135;
      v132 = v135;
      if ( v135 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, v135, 0x140u, 0LL);
LABEL_628:
        MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, v134, 0x95Du, 0LL);
        goto LABEL_548;
      }
      v133 = v453;
    }
    v441 = v134;
    v132 = v134;
    if ( v134 >= 0 )
    {
      v136 = v454;
      if ( v460 && *((_QWORD *)&v459 + 1) )
        (***((void (__fastcall ****)(_QWORD, __int64))&v459 + 1))(*((_QWORD *)&v459 + 1), 1LL);
      v137 = 0LL;
      *((_QWORD *)&v459 + 1) = v133;
      v453 = 0LL;
      v454 = 0;
      v460 = v136;
      goto LABEL_550;
    }
    goto LABEL_628;
  }
LABEL_74:
  v63 = (char *)v469 + 4;
  if ( !*((_QWORD *)&v459 + 1) )
    v63 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
  {
    v65 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v216 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v216 >= 0 )
      goto LABEL_640;
    v217 = *(unsigned int *)(v216 + 4);
    v218 = (_BYTE *)(v216 + 8);
    for ( jj = 0LL; (unsigned int)jj < (unsigned int)v217; ++v218 )
    {
      if ( *v218 == 1 )
        break;
      jj = (unsigned int)(jj + 1);
    }
    v220 = (unsigned int)jj >= (unsigned int)v217
         ? 0LL
         : (_QWORD **)(v217 + 15 + v216 + 8 * jj - (((_BYTE)v217 + 15) & 7));
    v64 = *v220;
    if ( !v64 )
      goto LABEL_640;
    v221 = (_QWORD *)*v64;
    if ( (_QWORD *)*v64 == v64 )
      goto LABEL_640;
    while ( 1 )
    {
      v65 = v221 - 45;
      if ( (struct CVisualTree *)v221[4] == v61 )
        break;
      v221 = (_QWORD *)*v221;
      if ( v221 == v64 )
        goto LABEL_640;
    }
  }
  if ( v65 )
  {
    TreeData = 0LL;
    v438 = 0;
    if ( v7 == *((_QWORD *)v61 + 8) )
      goto LABEL_335;
    v67 = *(_DWORD **)(v7 + 232);
    if ( (*v67 & 0x1000000) != 0 )
    {
      v280 = (unsigned int)v67[1];
      v281 = v67 + 2;
      for ( kk = 0; kk < (unsigned int)v280; ++v281 )
      {
        if ( *v281 == 8 )
          break;
        ++kk;
      }
      if ( kk >= (unsigned int)v280 )
        v283 = 0LL;
      else
        v283 = (_QWORD **)((char *)v67 + v280 + 8LL * kk - (((_BYTE)v280 + 15) & 7) + 15);
      v284 = *v283;
      if ( v284 )
        TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v284 + 184LL))(*v284);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
    {
      v68 = (unsigned int *)(v7 + 336);
      v69 = (unsigned int *)v61;
    }
    else
    {
      v69 = *(unsigned int **)(v7 + 232);
      if ( (*v69 & 0x80000000) == 0 )
        goto LABEL_86;
      v243 = v69[1];
      v68 = v69 + 2;
      for ( mm = 0LL; (unsigned int)mm < (unsigned int)v243; v68 = (unsigned int *)((char *)v68 + 1) )
      {
        if ( *(_BYTE *)v68 == 1 )
          break;
        mm = (unsigned int)(mm + 1);
      }
      if ( (unsigned int)mm >= (unsigned int)v243 )
      {
        v245 = 0LL;
      }
      else
      {
        v68 = (unsigned int *)(v243 + 15);
        v245 = (_QWORD **)((char *)v69 + 8 * mm - (((_BYTE)v243 + 15) & 7) + v243 + 15);
      }
      v246 = *v245;
      if ( !v246 )
        goto LABEL_86;
      v247 = (_QWORD *)*v246;
      if ( (_QWORD *)*v246 == v246 )
        goto LABEL_86;
      v69 = (unsigned int *)v61;
      while ( 1 )
      {
        v68 = (unsigned int *)(v247 - 45);
        if ( (struct CVisualTree *)v247[4] == v61 )
          break;
        v247 = (_QWORD *)*v247;
        if ( v247 == v246 )
          goto LABEL_86;
      }
    }
    if ( v68 && *((_QWORD *)v68 + 32) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 33) + 16LL) + 496LL) && TreeData )
    {
      TreeData = CVisual::FindTreeData((CVisual *)TreeData, (const struct CVisualTree *)v69);
      v438 = 1;
      goto LABEL_88;
    }
LABEL_86:
    TreeData = 0LL;
    v70 = *(_QWORD *)(v7 + 88);
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, unsigned int *, unsigned int *))(*(_QWORD *)v451
                                                                                                 + 184LL))(
           v451,
           v68,
           v69) )
    {
      TreeData = (__int64 **)(v70 + 336);
    }
    else
    {
      v248 = *(_QWORD *)(v70 + 232);
      if ( *(int *)v248 < 0 )
      {
        v249 = *(unsigned int *)(v248 + 4);
        v250 = (_BYTE *)(v248 + 8);
        for ( nn = 0; nn < (unsigned int)v249; ++v250 )
        {
          if ( *v250 == 1 )
            break;
          ++nn;
        }
        v252 = nn >= (unsigned int)v249 ? 0LL : (_QWORD **)(v249 + 15 + v248 + 8LL * nn - (((_BYTE)v249 + 15) & 7));
        v253 = *v252;
        if ( v253 )
        {
          v254 = (_QWORD *)*v253;
          if ( (_QWORD *)*v253 != v253 )
          {
            while ( (struct CVisualTree *)v254[4] != v451 )
            {
              v254 = (_QWORD *)*v254;
              if ( v254 == v253 )
                goto LABEL_88;
            }
            TreeData = (__int64 **)(v254 - 45);
          }
        }
      }
    }
LABEL_88:
    if ( TreeData )
    {
      v71 = TreeData[31];
      goto LABEL_90;
    }
LABEL_335:
    v71 = 0LL;
    if ( g_pComposition )
      v71 = (__int64 *)*((_QWORD *)g_pComposition + 62);
LABEL_90:
    v61 = v451;
    if ( v65[31] < (unsigned __int64)v71 )
    {
      v488 = 0;
      v490 = 0;
      v144 = (const struct CMILMatrix *)(TreeData + 36);
      if ( !TreeData )
        v144 = 0LL;
      v145 = (struct CMILMatrix *)v489;
      v10 = *(_QWORD *)(v7 + 248) == 0LL;
      *(_QWORD *)&v493 = v144;
      if ( v10 )
        v145 = 0LL;
      CVisual::CalcTransform((CVisual *)v7, v451, v144, (bool *)v442, (struct CMILMatrix *)v487, v145);
      if ( v438 || !(_QWORD)v493 )
      {
        LOBYTE(v146) = 1;
      }
      else if ( v442[0] )
      {
        IsEqual = CMILMatrix::IsEqualTo<0>(v493, v487);
        v146 = IsEqual;
        LOBYTE(v146) = IsEqual ^ 1;
      }
      else
      {
        LOBYTE(v146) = 0;
      }
      v147 = v489;
      if ( !*(_QWORD *)(v7 + 248) )
        v147 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _BYTE *, __int64, _BYTE *))(*v65 + 48LL))(v65, v487, v146, v147)
        && CVisual::GetInteractionInternal((CVisual *)v7) )
      {
        CVisual::NotifyMidManipulationPropertyChange((CVisual *)v7, (const struct CMILMatrix *)v487);
      }
    }
    if ( !v65[31] )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    v465 = *((_OWORD *)v65 + 18);
    v466 = *((_OWORD *)v65 + 19);
    v467 = *((_OWORD *)v65 + 20);
    v468 = *((_OWORD *)v65 + 21);
    LODWORD(v469[0]) = *((_DWORD *)v65 + 88);
    v72 = *((_BYTE *)v65 + 11);
    if ( v63 )
    {
      v128 = v65[34];
      if ( v128 )
      {
        *(_OWORD *)v63 = *(_OWORD *)v128;
        *((_OWORD *)v63 + 1) = *(_OWORD *)(v128 + 16);
        *((_OWORD *)v63 + 2) = *(_OWORD *)(v128 + 32);
        *((_OWORD *)v63 + 3) = *(_OWORD *)(v128 + 48);
        v129 = *(_DWORD *)(v128 + 64);
      }
      else
      {
        *(_OWORD *)v63 = *((_OWORD *)v65 + 18);
        *((_OWORD *)v63 + 1) = *((_OWORD *)v65 + 19);
        *((_OWORD *)v63 + 2) = *((_OWORD *)v65 + 20);
        *((_OWORD *)v63 + 3) = *((_OWORD *)v65 + 21);
        v129 = *((_DWORD *)v65 + 88);
      }
      *((_DWORD *)v63 + 16) = v129;
    }
    if ( v72 )
      goto LABEL_200;
    goto LABEL_94;
  }
LABEL_640:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2003292412, 0x6AEu, 0LL);
LABEL_94:
  if ( v7 != *((_QWORD *)v6 + 1008) )
  {
    v73 = (char *)v6 + 8168;
    if ( !*((_BYTE *)v6 + 8168) )
    {
      v205 = *((_DWORD *)v6 + 100);
      if ( v205 )
      {
        v206 = (unsigned int)(v205 - 1);
        v207 = *((_QWORD *)v6 + 52);
        v465 = *(_OWORD *)(68 * v206 + v207);
        v466 = *(_OWORD *)(68 * v206 + v207 + 16);
        v467 = *(_OWORD *)(68 * v206 + v207 + 32);
        v468 = *(_OWORD *)(68 * v206 + v207 + 48);
        LODWORD(v469[0]) = *(_DWORD *)(68 * v206 + v207 + 64);
      }
      else
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)&v465);
      }
    }
    goto LABEL_96;
  }
LABEL_200:
  v73 = (char *)v6 + 8168;
  if ( !*((_BYTE *)v6 + 8168) )
    CMILMatrix::Multiply((CMILMatrix *)&v465, (CDrawingContext *)((char *)v6 + 96));
  BitmapRealizationForEffectInput = CDrawingContext::PushTransformInternal(
                                      v6,
                                      (const struct CVisual *)v7,
                                      (const struct CMILMatrix *)&v465,
                                      0,
                                      1);
  v441 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v435 = 5724;
    goto LABEL_590;
  }
LABEL_96:
  if ( *((_QWORD *)&v459 + 1) && !*v73 )
    CMILMatrix::Multiply((CMILMatrix *)((char *)v469 + 4), (CDrawingContext *)((char *)v6 + 96));
  v74 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v61 + 184LL))(v61) )
  {
    v74 = (_QWORD *)(v7 + 336);
  }
  else
  {
    v222 = *(_QWORD *)(v7 + 232);
    if ( *(int *)v222 < 0 )
    {
      v223 = *(unsigned int *)(v222 + 4);
      v224 = (_BYTE *)(v222 + 8);
      for ( i1 = 0LL; (unsigned int)i1 < (unsigned int)v223; ++v224 )
      {
        if ( *v224 == 1 )
          break;
        i1 = (unsigned int)(i1 + 1);
      }
      v226 = (unsigned int)i1 >= (unsigned int)v223
           ? 0LL
           : (_QWORD **)(v223 + 15 + v222 + 8 * i1 - (((_BYTE)v223 + 15) & 7));
      v227 = *v226;
      if ( v227 )
      {
        v228 = (_QWORD *)*v227;
        if ( (_QWORD *)*v227 != v227 )
        {
          while ( (struct CVisualTree *)v228[4] != v61 )
          {
            v228 = (_QWORD *)*v228;
            if ( v228 == v227 )
              goto LABEL_99;
          }
          v74 = v228 - 45;
        }
      }
    }
  }
LABEL_99:
  v75 = (__int64)(v74 + 11);
  BitmapRealizationForEffectInput = CCpuClippingData::Update(
                                      v75,
                                      v61,
                                      v7,
                                      (CDrawingContext *)((char *)v6 + 896),
                                      *((struct CShape **)&v459 + 1),
                                      (struct CMILMatrix *)((char *)v469 + 4),
                                      *((_QWORD *)v6 + 27),
                                      (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)v6 + 84) != 0),
                                      v474);
  v441 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v435 = 5753;
    goto LABEL_590;
  }
  if ( *(_QWORD *)(v75 + 64) )
  {
    LOBYTE(v475) = 1;
    v461 = v75;
  }
  v80 = (unsigned int *)*(unsigned __int8 *)(v75 + 72);
  v81 = *(unsigned int *)(v75 + 32);
  if ( (_BYTE)v80 )
    goto LABEL_105;
  if ( (int)v81 <= 2
    || *((_QWORD *)&v459 + 1)
    || ((v173 = *((_DWORD *)v6 + 100)) == 0
      ? (v174 = &CMILMatrix::Identity)
      : (v174 = (void *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v173 - 1))),
        !(unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(v6, v7 + 172, v174)) )
  {
    LOBYTE(v80) = 0;
LABEL_105:
    if ( (_DWORD)v81 != 2 && !(_BYTE)v80 )
      goto LABEL_107;
    goto LABEL_296;
  }
  LOBYTE(v80) = 1;
LABEL_296:
  v502 = 0LL;
  LOBYTE(v78) = *((_QWORD *)&v459 + 1) != 0LL;
  v175 = (char *)&v465;
  if ( *((_QWORD *)&v459 + 1) )
    v175 = (char *)v469 + 4;
  v458 = v175;
  if ( (_BYTE)v80 )
    goto LABEL_303;
  v176 = *((_QWORD *)v6 + 113);
  v177 = *((_QWORD *)v6 + 345);
  v178 = 0;
  v179 = 0LL;
  v180 = *((_QWORD *)v6 + 346) - v177;
  v446[0] = 0;
  v181 = -858993459 * (unsigned int)(v180 >> 3) - *(_DWORD *)(v176 - 176);
  v443 = (void *)v181;
  if ( !*(_QWORD *)(v176 - 160) )
  {
LABEL_300:
    v441 = v178;
    if ( v178 < 0 )
      goto LABEL_521;
    if ( *((_BYTE *)v6 + 8170) )
      *(_WORD *)((char *)v6 + 8169) = 1;
LABEL_303:
    v182 = (char **)((char *)v6 + 896);
    v183 = *((_QWORD *)v6 + 113);
    v184 = v183 - *((_QWORD *)v6 + 112);
    if ( v184 && *(_QWORD *)(v183 - 184) && (LODWORD(v78) = *((_DWORD *)v6 + 796), (_DWORD)v78) )
    {
      v185 = (unsigned int)((_DWORD)v78 - 1);
      v78 = (CD2DLayer *)*((_QWORD *)v6 + 400);
      v186 = *((_OWORD *)v78 + v185);
    }
    else
    {
      v186 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v502 = v186;
    if ( !(_BYTE)v80 && v184 && *(_QWORD *)(v183 - 168) )
    {
      v493 = 0LL;
      CBaseClipStack::Top((char *)v6 + 3216, &v493);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v502, &v493);
    }
    *(_DWORD *)v452 = 4;
    v159 = (unsigned __int64)v6 + 368;
    Size = 0LL;
    v443 = 0LL;
    v187 = 0;
    v188 = *((unsigned int *)v6 + 93);
    *(_QWORD *)&v452[8] = v7;
    if ( *((_DWORD *)v6 + 92) != (_DWORD)v188 )
      goto LABEL_312;
    v353 = 2 * v188;
    if ( v353 > 0xFFFFFFFF )
    {
      v187 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, -2147024362, 0x64u, 0LL);
      v182 = (char **)((char *)v6 + 896);
LABEL_315:
      v191 = 0LL;
LABEL_316:
      if ( v191 )
      {
        v359 = GetProcessHeap();
        HeapFree(v359, 0, (LPVOID)Size);
        v182 = (char **)((char *)v6 + 896);
      }
      v441 = v187;
      if ( v187 >= 0 )
      {
        v192 = v182[2];
        v193 = *v182;
        v162 = 0xD37A6F4DE9BD37A7uLL * ((v182[1] - *v182) >> 3);
        v194 = 0xD37A6F4DE9BD37A7uLL * ((v192 - v182[1]) >> 3);
        v449 = v162;
        if ( !v194 )
        {
          if ( v162 + 1 < v162 )
            goto LABEL_721;
          v360 = detail::liberal_expansion_policy::expand(0LL, 0xD37A6F4DE9BD37A7uLL * ((v192 - v193) >> 3), v162 + 1);
          v361 = operator new(saturated_mul(v360, 0xB8uLL));
          v362 = *((_QWORD *)v6 + 113);
          v363 = *((_QWORD *)v6 + 112);
          v364 = v361;
          *(_QWORD *)&v493 = v361;
          *((_QWORD *)&v493 + 1) = v449;
          v494 = 0LL;
          std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
            v452,
            v363,
            v362,
            &v493);
          detail::destruct_range<CScopedClipStack::ClippingScopeState>(*((CScopedClipStack::ClippingScopeState **)v6
                                                                       + 112));
          v365 = (char *)*((_QWORD *)v6 + 112);
          *((_QWORD *)v6 + 112) = v364;
          if ( v365 == (char *)v6 + 920 )
            v365 = 0LL;
          operator delete(v365);
          v162 = v449;
          v182 = (char **)((char *)v6 + 896);
          *((_QWORD *)v6 + 113) = *((_QWORD *)v6 + 112) + 184 * v449;
          v366 = 184 * v360;
          v159 = (unsigned __int64)v6 + 368;
          *((_QWORD *)v6 + 114) = *((_QWORD *)v6 + 112) + v366;
        }
        v195 = *v182;
        v196 = v182[1];
        v443 = v195;
        v197 = 0xD37A6F4DE9BD37A7uLL * ((v196 - v195) >> 3);
        v198 = v197 - v162;
        v199 = (unsigned __int64)&v195[8 * ((v196 - v195) >> 3)];
        *(_QWORD *)v446 = v199;
        if ( !v199 )
          goto LABEL_785;
        v200 = 1LL;
        if ( v198 <= 1 )
          v200 = v197 - v162;
        if ( v196 == &v196[-184 * v200] )
        {
          *(_QWORD *)v446 = &v195[8 * ((v196 - v195) >> 3)];
LABEL_325:
          if ( v198 > 1 )
          {
            if ( v197 && (!v195 || v197 < 0) )
              goto LABEL_785;
            *(_QWORD *)&v452[8] = v197;
            *(_QWORD *)&v452[16] = v197;
            *(_QWORD *)&v493 = 184 * v162;
            *(_QWORD *)v452 = v195;
            std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
              v479,
              &v195[184 * v162],
              &v195[184 * v197 - 184],
              v452);
            v199 = *(_QWORD *)v446;
            v195 = (char *)v443;
            v201 = v493;
          }
          else
          {
            v201 = 184 * v162;
          }
          if ( v199 >= (unsigned __int64)&v195[184 * v162 + 184] )
          {
            v199 = (unsigned __int64)&v195[184 * v162 + 184];
            *(_QWORD *)v446 = v199;
          }
          v202 = &v195[v201];
          *(_QWORD *)v452 = &v195[v201];
          if ( &v195[v201] != (char *)v199 )
          {
            v369 = *(CScopedClipStack::ClippingScopeState **)v446;
            v370 = (CScopedClipStack::ClippingScopeState *)&v195[v201];
            do
            {
              CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v370, v199);
              v370 = (CScopedClipStack::ClippingScopeState *)((char *)v370 + 184);
            }
            while ( v370 != v369 );
            v202 = *(char **)v452;
            v159 = (unsigned __int64)v6 + 368;
          }
          *((_QWORD *)v6 + 113) += 184LL;
          memset_0(v202, 0, 0xB8uLL);
          v203 = *((_QWORD *)v6 + 113);
          *(_BYTE *)(v203 - 8) = 1;
          *(_OWORD *)(v203 - 152) = *((_OWORD *)v6 + 6);
          *(_OWORD *)(v203 - 136) = *((_OWORD *)v6 + 7);
          *(_OWORD *)(v203 - 120) = *((_OWORD *)v6 + 8);
          *(_OWORD *)(v203 - 104) = *((_OWORD *)v6 + 9);
          *(_DWORD *)(v203 - 88) = *((_DWORD *)v6 + 40);
          v204 = v458;
          *(_OWORD *)(v203 - 84) = *v458;
          *(_OWORD *)(v203 - 68) = v204[1];
          *(_OWORD *)(v203 - 52) = v204[2];
          *(_OWORD *)(v203 - 36) = v204[3];
          *(_DWORD *)(v203 - 20) = *((_DWORD *)v204 + 16);
          if ( (_BYTE)v80 )
            *((_BYTE *)v6 + 8170) = 0;
          LODWORD(Size) = v441;
          goto LABEL_522;
        }
        v443 = v195;
        v449 = (unsigned __int64)(v196 - 184);
        v455 = (__int64)(v196 - 184);
        for ( i2 = 1LL; i2; i2 = v493 )
        {
          *(_QWORD *)&v493 = i2 - 1;
          if ( i2 != 1 )
            break;
          CScopedClipStack::ClippingScopeState::ClippingScopeState(v199, v449);
          v199 = *(_QWORD *)v446;
          if ( v455 == v368 )
            goto LABEL_325;
          v449 = v455 - 184;
          v455 -= 184LL;
        }
LABEL_785:
        _invalid_parameter_noinfo_noreturn();
      }
      MilInstrumentationCheckHR_MaybeFailFast(v189, 0LL, 0, v187, 0xC17u, 0LL);
      v302 = v187;
      LODWORD(Size) = v187;
LABEL_787:
      MilInstrumentationCheckHR_MaybeFailFast(v302, 0LL, 0, v187, 0x16A0u, 0LL);
      goto LABEL_146;
    }
    if ( (unsigned int)v353 <= 0x40 )
      v353 = 64LL;
    *(_QWORD *)&v493 = v353;
    v354 = HrMalloc(0x10uLL, (unsigned int)v353, &v443);
    v187 = v354;
    if ( v354 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v355, 0LL, 0, v354, 0x6Bu, 0LL);
    }
    else
    {
      v356 = 16LL * *(unsigned int *)v159;
      if ( v356 <= 0xFFFFFFFF )
      {
        v357 = v443;
        memcpy_0(v443, *((const void **)v6 + 48), (unsigned int)v356);
        operator delete(*((void **)v6 + 48));
        v358 = v493;
        v182 = (char **)((char *)v6 + 896);
        *((_QWORD *)v6 + 48) = v357;
        v187 = 0;
        *((_DWORD *)v6 + 93) = v358;
        Size = 0LL;
LABEL_312:
        v189 = 2 * *(_DWORD *)v159;
        *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * *((unsigned int *)v6 + 92)) = *(_OWORD *)v452;
        ++*(_DWORD *)v159;
        v190 = *((_DWORD *)v6 + 98);
        if ( v190 <= *(_DWORD *)v159 )
          v190 = *(_DWORD *)v159;
        *((_DWORD *)v6 + 98) = v190;
        goto LABEL_315;
      }
      v187 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v191 = v443;
    v182 = (char **)((char *)v6 + 896);
    Size = (size_t)v443;
    goto LABEL_316;
  }
  while ( 1 )
  {
    v349 = 0;
    v350 = v177 + 40 * v181;
    v78 = *(CD2DLayer **)(v350 + 24);
    *(_QWORD *)&v493 = v350;
    if ( v78 )
    {
      v351 = CD2DLayer::ApplyState(v78, v6);
      v441 = v351;
      v178 = v351;
      if ( v351 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v351, 0x21Au, 0LL);
        goto LABEL_521;
      }
      v350 = v493;
      v349 = 1;
      LODWORD(v181) = (_DWORD)v443;
      v179 = v446[0];
      *(_QWORD *)(v493 + 24) = 0LL;
      --*(_QWORD *)(v176 - 160);
      v177 = *((_QWORD *)v6 + 345);
    }
    if ( *(_BYTE *)(v350 + 36) )
      break;
LABEL_652:
    v181 = (unsigned int)(v181 + 1);
    v443 = (void *)v181;
    if ( !*(_QWORD *)(v176 - 160) )
      goto LABEL_300;
  }
  if ( !v349 )
  {
LABEL_651:
    v179 = (unsigned int)(v179 + 1);
    v446[0] = v179;
    goto LABEL_652;
  }
  v352 = CCpuClipAntialiasSinkContext::FlushDrawList(
           *(CCpuClipAntialiasSinkContext **)(v176 - 16),
           v6,
           (unsigned int)v179,
           v179);
  v441 = v352;
  v178 = v352;
  if ( v352 >= 0 )
  {
    v177 = *((_QWORD *)v6 + 345);
    LODWORD(v181) = (_DWORD)v443;
    LODWORD(v179) = v446[0];
    goto LABEL_651;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v352, 0x236u, 0LL);
LABEL_521:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v178, 0x109Au, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v301, 0LL, 0, v178, 0xC09u, 0LL);
  v159 = (unsigned __int64)v6 + 368;
  v187 = v441;
  LODWORD(Size) = v441;
  if ( v441 < 0 )
    goto LABEL_787;
LABEL_522:
  *(_QWORD *)&v452[8] = v7;
  *(_DWORD *)v452 = 1;
  v303 = 0LL;
  v304 = *(unsigned int *)(v159 + 4);
  v305 = 0;
  v443 = 0LL;
  if ( *(_DWORD *)v159 != (_DWORD)v304 )
  {
    v306 = (_QWORD *)(v159 + 16);
    goto LABEL_524;
  }
  v371 = 2 * v304;
  if ( v371 > 0xFFFFFFFF )
  {
    v305 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
  }
  else
  {
    if ( (unsigned int)v371 <= 0x40 )
      v371 = 64LL;
    *(_QWORD *)&v493 = v371;
    v372 = HrMalloc(0x10uLL, (unsigned int)v371, &v443);
    v305 = v372;
    if ( v372 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v373, 0LL, 0, v372, 0x6Bu, 0LL);
      v303 = v443;
    }
    else
    {
      v374 = 16LL * *(unsigned int *)v159;
      if ( v374 > 0xFFFFFFFF )
      {
        v305 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v374, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v303 = v443;
      }
      else
      {
        v375 = v443;
        v376 = *(const void **)(v159 + 16);
        v305 = 0;
        v449 = v159 + 16;
        memcpy_0(v443, v376, (unsigned int)v374);
        operator delete(*(void **)v449);
        v306 = (_QWORD *)v449;
        v377 = v493;
        *(_QWORD *)v449 = v375;
        v303 = 0LL;
        *(_DWORD *)(v159 + 4) = v377;
LABEL_524:
        v307 = 2 * *(_DWORD *)v159;
        *(_OWORD *)(*v306 + 16LL * (unsigned int)(*(_DWORD *)v159)++) = *(_OWORD *)v452;
        v308 = *(_DWORD *)(v159 + 24);
        if ( v308 <= *(_DWORD *)v159 )
          v308 = *(_DWORD *)v159;
        *(_DWORD *)(v159 + 24) = v308;
      }
    }
  }
  if ( v303 )
  {
    v378 = GetProcessHeap();
    HeapFree(v378, 0, v303);
  }
  v309 = v305;
  v441 = v305;
  if ( v305 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v307, 0LL, 0, v305, 0xBC9u, 0LL);
    goto LABEL_784;
  }
  v310 = *((unsigned int *)v6 + 797);
  v311 = 0LL;
  v305 = 0;
  v441 = 0;
  v493 = v502;
  v443 = 0LL;
  if ( *((_DWORD *)v6 + 796) != (_DWORD)v310 )
    goto LABEL_531;
  v313 = 2 * v310;
  if ( (unsigned __int64)(2 * v310) > 0xFFFFFFFF )
  {
    v305 = -2147024362;
    v441 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v307, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_534;
  }
  if ( v313 <= 8 )
    v313 = 8;
  v441 = HrMalloc(0x10uLL, v313, &v443);
  if ( v441 < 0 )
  {
    v305 = v441;
    MilInstrumentationCheckHR_MaybeFailFast(v314, 0LL, 0, v441, 0x6Bu, 0LL);
    goto LABEL_694;
  }
  v315 = 16LL * *((unsigned int *)v6 + 796);
  if ( v315 > 0xFFFFFFFF )
  {
    v305 = -2147024362;
    v441 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_694:
    v311 = v443;
    goto LABEL_534;
  }
  v316 = v443;
  v441 = 0;
  memcpy_0(v443, *((const void **)v6 + 400), (unsigned int)v315);
  operator delete(*((void **)v6 + 400));
  *((_QWORD *)v6 + 400) = v316;
  v311 = 0LL;
  *((_DWORD *)v6 + 797) = v313;
  v305 = 0;
LABEL_531:
  *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(*((_DWORD *)v6 + 796))++) = v493;
  LODWORD(v78) = *((_DWORD *)v6 + 796);
  v312 = *((_DWORD *)v6 + 802);
  if ( v312 <= (unsigned int)v78 )
    v312 = *((_DWORD *)v6 + 796);
  *((_DWORD *)v6 + 802) = v312;
LABEL_534:
  if ( v311 )
  {
    v379 = GetProcessHeap();
    HeapFree(v379, 0, v311);
  }
  if ( v305 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v305, 0xCEu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v414, 0LL, 0, v441, 0xBCEu, 0LL);
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v159, 0LL, v415);
    v309 = v305;
    v441 = v305;
LABEL_784:
    LODWORD(Size) = v309;
    MilInstrumentationCheckHR_MaybeFailFast(v416, 0LL, 0, v305, 0x16A6u, 0LL);
    goto LABEL_146;
  }
  ++*(_QWORD *)(*((_QWORD *)v6 + 113) - 184LL);
  *((_BYTE *)v6 + 8169) = 1;
  LODWORD(Size) = v305;
LABEL_107:
  if ( !*((_QWORD *)&v459 + 1)
    && !HIDWORD(v462)
    && !HIBYTE(v475)
    && !*(_WORD *)((char *)&v475 + 1)
    && !v476
    && !v463
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v464 - 1.0) & _xmm) < 0.0000011920929
    || *((_DWORD *)g_pComposition + 278)
    && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112) == 2 )
  {
    goto LABEL_114;
  }
  v120 = *((_DWORD *)v6 + 100);
  v494 = 0LL;
  v493 = 0LL;
  if ( v120 )
    v121 = (CMILMatrix *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v120 - 1));
  else
    v121 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v121);
  v505 = v493;
  v506 = v494;
  v507 = 0LL;
  v122 = *((_DWORD *)v6 + 100);
  if ( v122 )
    v123 = (void *)(*((_QWORD *)v6 + 52) + 68LL * (unsigned int)(v122 - 1));
  else
    v123 = &CMILMatrix::Identity;
  v124 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *, __int128 *, __int128 *, __int128 *))(*(_QWORD *)v7 + 200LL))(
           v7,
           v123,
           &v498,
           &v505,
           &v509,
           &v507);
  v441 = v124;
  v127 = v124;
  if ( v124 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v124, 0xB06u, 0LL);
    LODWORD(Size) = v127;
    MilInstrumentationCheckHR_MaybeFailFast(v413, 0LL, 0, v127, 0x16BBu, 0LL);
    goto LABEL_146;
  }
  *(_OWORD *)v495 = v507;
  BitmapRealizationForEffectInput = CDrawingContext::PushEffects(
                                      v6,
                                      &v459,
                                      (unsigned __int64)&v509,
                                      v126,
                                      (__int64)v495,
                                      v503,
                                      v442);
  v441 = BitmapRealizationForEffectInput;
  LODWORD(Size) = BitmapRealizationForEffectInput;
  if ( BitmapRealizationForEffectInput < 0 )
  {
    v435 = 5826;
    goto LABEL_590;
  }
  if ( v442[0] )
    goto LABEL_163;
LABEL_114:
  if ( (_DWORD)v81 == 4 )
  {
    if ( !*(_BYTE *)(*((_QWORD *)v6 + 113) - 8LL) )
      goto LABEL_116;
    *(_OWORD *)v495 = 0LL;
    BitmapRealizationForEffectInput = CDrawingContext::PushClippingScope(v6, v7, 0LL, 0LL, 0LL, v495);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v435 = 5848;
      goto LABEL_590;
    }
    LOBYTE(v436) = 1;
    BitmapRealizationForEffectInput = CDrawingContext::PushGpuClipRectInternal(v6, v7, v495, 0LL, v436);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v435 = 5854;
      goto LABEL_590;
    }
LABEL_116:
    v82 = (char *)v6 + 3392;
    v83 = 0LL;
    v84 = *((_DWORD *)v6 + 848);
    if ( v84 )
      v83 = *((_QWORD *)v6 + 426) + 16LL * (unsigned int)(v84 - 1);
    v450 = *(_BYTE *)(v83 + 8);
    v85 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v465, v77);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v85 - 0.0) & _xmm) >= 0.00000011920929 && _finite((float)(1.0 / v85)) )
    {
      if ( v85 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v465 + 3) * *(float *)&v466)
                                                      - (float)(*(float *)&v465 * *((float *)&v466 + 3)))
                                              * *((float *)&v468 + 1))
                                      + (float)((float)((float)(*((float *)&v465 + 1) * *((float *)&v466 + 3))
                                                      - (float)(*((float *)&v465 + 3) * *((float *)&v466 + 1)))
                                              * *(float *)&v468))
                              + (float)((float)((float)(*(float *)&v465 * *((float *)&v466 + 1))
                                              - (float)(*((float *)&v465 + 1) * *(float *)&v466))
                                      * *((float *)&v468 + 3))) < 0.0 )
      {
        v86 = 1;
        goto LABEL_122;
      }
    }
    else if ( (float)((float)(*(float *)&v465 * *((float *)&v466 + 1)) - (float)(*((float *)&v465 + 1) * *(float *)&v466)) > 0.0 )
    {
      v86 = 1;
      goto LABEL_122;
    }
    v86 = 0;
LABEL_122:
    v87 = (_DWORD *)(v7 + 108);
    v439 = v86;
    if ( (**(_DWORD **)(v7 + 232) & 0x400000) == 0 )
    {
      v88 = *v87 != 1;
      v89 = v457 && *((_DWORD *)v457 + 27) == 1;
      v90 = *(_QWORD *)(v7 + 80);
      if ( (v90 & 2) != 0 )
        v90 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v90) = v90 & 1;
      v91 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
      if ( v91 )
        LOBYTE(v91) = 1;
      if ( !v88 )
        goto LABEL_753;
      if ( !v89 )
      {
LABEL_132:
        v86 = v439;
        v82 = (char *)v6 + 3392;
        goto LABEL_133;
      }
      if ( !(_DWORD)v90 )
      {
LABEL_753:
        if ( !v89 || !(_BYTE)v91 )
          goto LABEL_132;
      }
      v86 = v439;
      v82 = (char *)v6 + 3392;
    }
    v495[0] = v7;
    LOBYTE(v495[1]) = v86;
    BitmapRealizationForEffectInput = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                        v82,
                                        v495);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput < 0 )
    {
      v435 = 5882;
      goto LABEL_590;
    }
LABEL_133:
    if ( (**(_DWORD **)(v7 + 232) & 0x200000) != 0 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7);
      if ( CWindowBackgroundTreatment::HasValidBounds(WindowBackgroundTreatmentInternal) )
      {
        *(_OWORD *)v495 = 0LL;
        CDrawingContext::GetClipBoundsWorld(v6, v495);
        TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>(v503);
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v6 + 400));
        CMILMatrix::Transform3DBoundsHelper<0>(
          TopByReference,
          (float *)WindowBackgroundTreatmentInternal + 22,
          (float *)v503);
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)v495,
               (float *)v503) )
        {
          v440 = 0;
          v442[0] = 1;
          if ( *((_QWORD *)WindowBackgroundTreatmentInternal + 38) )
            v440 = *((_BYTE *)WindowBackgroundTreatmentInternal + 303);
          if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 300)
            || !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
          {
            if ( v440 )
              v442[0] = 0;
            BitmapRealizationForEffectInput = CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
                                                WindowBackgroundTreatmentInternal,
                                                v6);
            v441 = BitmapRealizationForEffectInput;
            LODWORD(Size) = BitmapRealizationForEffectInput;
            if ( BitmapRealizationForEffectInput < 0 )
            {
              v435 = 5924;
              goto LABEL_590;
            }
          }
          if ( v440 )
          {
            FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
              *((FRAME_TIME_INFO **)g_pComposition + 61),
              v442[0]);
            if ( !v257 )
              ++dword_1803E5AB0;
          }
          v258 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v6 + 400));
          CWindowBackgroundTreatment::SetWorldTransform(WindowBackgroundTreatmentInternal, v258, 3LL);
        }
      }
    }
    v92 = *v87 == 1;
    v93 = v457 && *((_DWORD *)v457 + 27) == 1;
    v94 = 1;
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7) )
    {
      if ( (**(_DWORD **)(v7 + 232) & 0x400000) == 0
        || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v7),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               61LL)) )
      {
        v94 = 0;
      }
    }
    if ( !v92 )
    {
LABEL_141:
      v444[0] = 0;
      if ( !*((_DWORD *)v6 + 87) || (v409 = v450, v450 == v86) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 248LL))(v7) )
        {
          (*(void (__fastcall **)(__int64, CDrawingContext *, char *))(*(_QWORD *)v7 + 240LL))(v7, v6, v444);
          ++*((_DWORD *)v448 + 8);
          goto LABEL_144;
        }
        if ( !CVisual::HasProtectedContent((CVisual *)v7) )
          goto LABEL_144;
        if ( !*((_BYTE *)g_pComposition + 1274) )
        {
          *((_BYTE *)v6 + 8092) = 1;
LABEL_144:
          if ( !HIBYTE(v475)
            || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, 93LL)
            || !CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled((CLayerVisual *)v7) )
          {
            if ( !v444[0] )
              goto LABEL_146;
            goto LABEL_163;
          }
          v410 = *(_QWORD *)(*((_QWORD *)v6 + 62) + 8LL * (unsigned int)(*((_DWORD *)v6 + 130) - 1));
          v492 = 0;
          CMILMatrix::Set2DScaleAndOffset(
            (CMILMatrix *)v491,
            *(float *)(v410 + 280),
            *(float *)(v410 + 280),
            (float)-*(_DWORD *)(v410 + 16),
            (float)-*(_DWORD *)(v410 + 20));
          Bounds = CVisualTree::GetBounds(*(_QWORD *)(v7 + 720));
          BitmapRealizationForEffectInput = CDrawingContext::DrawSubVisualTree(
                                              (__int64)v6,
                                              v412,
                                              (__int64)Bounds,
                                              (CMILMatrix *)v491);
          v441 = BitmapRealizationForEffectInput;
          LODWORD(Size) = BitmapRealizationForEffectInput;
          if ( BitmapRealizationForEffectInput < 0 )
          {
            v435 = 6009;
            goto LABEL_590;
          }
          v444[0] = 1;
LABEL_163:
          v95 = v447;
          *v447 = 0;
          goto LABEL_147;
        }
      }
      else if ( !(unsigned __int8)CSparseAlignedStorage<8,8>::AllocatedStorage::HasData(*(_QWORD *)(v7 + 232), 10LL)
             && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7)
             || !v86
             || *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v82)
                         + 8) == v409 )
      {
        goto LABEL_144;
      }
      v444[0] = 1;
      goto LABEL_144;
    }
    if ( v93 )
    {
      if ( !v94 )
        goto LABEL_141;
    }
    else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v7 + 80)) )
    {
      goto LABEL_141;
    }
    if ( !CVisual::HasBspPolygonList((CVisual *)v7) )
      goto LABEL_146;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_RENDERING_Start);
    BitmapRealizationForEffectInput = CDrawingContext::DrawBspPolygonList(v6, (struct CVisual *)v7, v457);
    v441 = BitmapRealizationForEffectInput;
    LODWORD(Size) = BitmapRealizationForEffectInput;
    if ( BitmapRealizationForEffectInput >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_RENDERING_Stop);
      v95 = v447;
      ++*((_DWORD *)v448 + 8);
      *v95 = 0;
      goto LABEL_147;
    }
    v435 = 6025;
LABEL_590:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, BitmapRealizationForEffectInput, v435, 0LL);
    goto LABEL_146;
  }
  if ( (_DWORD)v81 != 3 )
    goto LABEL_116;
  v501 = 0LL;
  v148 = *((_QWORD *)v6 + 113);
  v149 = 0;
  v150 = *((_QWORD *)v6 + 345);
  v151 = 0;
  v152 = -858993459 * (unsigned int)((*((_QWORD *)v6 + 346) - v150) >> 3) - *(_DWORD *)(v148 - 176);
  if ( !*(_QWORD *)(v148 - 160) )
  {
LABEL_264:
    v441 = v149;
    if ( v149 < 0 )
      goto LABEL_555;
    if ( *((_BYTE *)v6 + 8170) )
      *(_WORD *)((char *)v6 + 8169) = 1;
    v153 = (char **)((char *)v6 + 896);
    v154 = *((_QWORD *)v6 + 113);
    v155 = v154 - *((_QWORD *)v6 + 112);
    if ( v155 && *(_QWORD *)(v154 - 184) )
    {
      LODWORD(v155) = *((_DWORD *)v6 + 796);
      if ( (_DWORD)v155 )
      {
        v156 = (unsigned int)(v155 - 1);
        v155 = *((_QWORD *)v6 + 400);
        v501 = *(_OWORD *)(v155 + 16 * v156);
      }
      else
      {
        v501 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      goto LABEL_271;
    }
    v501 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( v155 )
    {
LABEL_271:
      if ( *(_QWORD *)(v154 - 168) )
      {
        *(_OWORD *)v495 = 0LL;
        CBaseClipStack::Top((char *)v6 + 3216, v495);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v501, v495);
      }
    }
    v80 = (unsigned int *)((char *)v6 + 368);
    LODWORD(v495[0]) = 4;
    v157 = *((unsigned int *)v6 + 93);
    v158 = 0LL;
    v159 = 0LL;
    v495[1] = v7;
    v443 = 0LL;
    if ( *((_DWORD *)v6 + 92) == (_DWORD)v157 )
    {
      v380 = 2 * v157;
      if ( (unsigned __int64)(2 * v157) > 0xFFFFFFFF )
      {
        v159 = 2147942934LL;
        MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, -2147024362, 0x64u, 0LL);
        v153 = (char **)((char *)v6 + 896);
      }
      else
      {
        if ( v380 <= 0x40 )
          v380 = 64;
        v381 = HrMalloc(0x10uLL, v380, &v443);
        v159 = (unsigned int)v381;
        if ( v381 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v382, 0LL, 0, v381, 0x6Bu, 0LL);
        }
        else
        {
          v383 = 16LL * *v80;
          if ( v383 <= 0xFFFFFFFF )
          {
            v384 = v443;
            v159 = 0LL;
            memcpy_0(v443, *((const void **)v6 + 48), (unsigned int)v383);
            operator delete(*((void **)v6 + 48));
            *((_QWORD *)v6 + 48) = v384;
            v153 = (char **)((char *)v6 + 896);
            *((_DWORD *)v6 + 93) = v380;
            v158 = 0LL;
            goto LABEL_274;
          }
          v159 = 2147942934LL;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
        }
        v158 = v443;
        v153 = (char **)((char *)v6 + 896);
      }
    }
    else
    {
LABEL_274:
      v160 = 2 * *v80;
      *(_OWORD *)(*((_QWORD *)v6 + 48) + 16LL * *((unsigned int *)v6 + 92)) = *(_OWORD *)v495;
      ++*v80;
      v161 = *((_DWORD *)v6 + 98);
      if ( v161 <= *v80 )
        v161 = *v80;
      *((_DWORD *)v6 + 98) = v161;
    }
    if ( v158 )
    {
      v385 = GetProcessHeap();
      HeapFree(v385, 0, v158);
      v153 = (char **)((char *)v6 + 896);
    }
    v162 = (unsigned int)v159;
    v441 = v159;
    if ( (v159 & 0x80000000) != 0LL )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v160, 0LL, 0, v159, 0xC17u, 0LL);
      LODWORD(Size) = v159;
      goto LABEL_731;
    }
    v163 = 1LL;
    v81 = 0xD37A6F4DE9BD37A7uLL * ((v153[1] - *v153) >> 3);
    if ( 0xD37A6F4DE9BD37A7uLL * ((v153[2] - v153[1]) >> 3) )
    {
LABEL_281:
      v164 = *v153;
      v165 = v153[1];
      v443 = v164;
      v159 = 0xD37A6F4DE9BD37A7uLL * ((v165 - v164) >> 3);
      v166 = v159 - v81;
      v162 = (unsigned __int64)&v164[8 * ((v165 - v164) >> 3)];
      if ( v162 )
      {
        if ( v166 <= 1 )
        {
          v167 = v159 - v81;
LABEL_284:
          if ( v165 != &v165[-184 * v167] )
          {
            v392 = v165 - 184;
            v443 = v164;
            v393 = 1LL;
            while ( 1 )
            {
              if ( v393 != 1 )
                goto LABEL_785;
              CScopedClipStack::ClippingScopeState::ClippingScopeState(v162, v392);
              if ( v394 == v395 )
                break;
              v392 = (char *)(v394 - 184);
            }
            v164 = (char *)v443;
            v153 = (char **)((char *)v6 + 896);
            v163 = 1LL;
          }
          v168 = 184 * v81;
          v449 = 184 * v81;
          if ( v166 > v163 )
          {
            v495[0] = (__int64)v164;
            v495[1] = v159;
            v496 = 0LL;
            stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator+=(v495, v159);
            *(_OWORD *)v503 = *(_OWORD *)v495;
            v504 = v496;
            std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
              v479,
              (char *)v443 + v449,
              (char *)v443 + 184 * v159 - 184,
              v503);
            v164 = (char *)v443;
            v153 = (char **)((char *)v6 + 896);
            v168 = v449;
          }
          if ( v162 >= (unsigned __int64)&v164[184 * v81 + 184] )
            v162 = (unsigned __int64)&v164[184 * v81 + 184];
          v169 = &v164[v168];
          v170 = (CScopedClipStack::ClippingScopeState *)&v164[v168];
          if ( &v164[v168] != (char *)v162 )
          {
            do
            {
              CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v170, (unsigned int)v164);
              v170 = (CScopedClipStack::ClippingScopeState *)((char *)v170 + 184);
            }
            while ( v170 != (CScopedClipStack::ClippingScopeState *)v162 );
            v153 = (char **)((char *)v6 + 896);
          }
          v153[1] += 184;
          memset_0(v169, 0, 0xB8uLL);
          v171 = (char *)v6 + 896;
          v172 = *((_QWORD *)v6 + 113);
          *(_BYTE *)(v172 - 8) = 1;
          *(_OWORD *)(v172 - 152) = *((_OWORD *)v6 + 6);
          *(_OWORD *)(v172 - 136) = *((_OWORD *)v6 + 7);
          *(_OWORD *)(v172 - 120) = *((_OWORD *)v6 + 8);
          *(_OWORD *)(v172 - 104) = *((_OWORD *)v6 + 9);
          *(_DWORD *)(v172 - 88) = *((_DWORD *)v6 + 40);
          *(_OWORD *)(v172 - 84) = v465;
          *(_OWORD *)(v172 - 68) = v466;
          *(_OWORD *)(v172 - 52) = v467;
          *(_OWORD *)(v172 - 36) = v468;
          *(_DWORD *)(v172 - 20) = v469[0];
          LODWORD(Size) = v441;
LABEL_557:
          v495[1] = v7;
          LODWORD(v495[0]) = 1;
          v319 = 0LL;
          v320 = v80[1];
          v321 = 0;
          v443 = 0LL;
          if ( *v80 == (_DWORD)v320 )
          {
            v446[0] = 0;
            LODWORD(Size) = 0;
            v396 = ULongLongToUInt(2 * v320, v446);
            v321 = v396;
            if ( v396 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v397, 0LL, 0, v396, 0x64u, 0LL);
            }
            else
            {
              v398 = v446[0];
              if ( v446[0] <= 0x40 )
                v398 = 64;
              v399 = HrMalloc(0x10uLL, v398, &v443);
              v321 = v399;
              if ( v399 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v400, 0LL, 0, v399, 0x6Bu, 0LL);
              }
              else
              {
                v401 = ULongLongToUInt(16LL * *v80, (unsigned int *)&Size);
                v321 = v401;
                if ( v401 >= 0 )
                {
                  v403 = v443;
                  memcpy_0(v443, *((const void **)v80 + 2), (unsigned int)Size);
                  operator delete(*((void **)v80 + 2));
                  *((_QWORD *)v80 + 2) = v403;
                  v319 = 0LL;
                  v80[1] = v398;
                  v171 = (char *)v6 + 896;
                  goto LABEL_558;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v402, 0LL, 0, v401, 0x6Du, 0LL);
              }
              v319 = v443;
              v171 = (char *)v6 + 896;
            }
          }
          else
          {
LABEL_558:
            v322 = 2 * *v80;
            *(_OWORD *)(*((_QWORD *)v80 + 2) + 16LL * (*v80)++) = *(_OWORD *)v495;
            v323 = v80[6];
            if ( v323 <= *v80 )
              v323 = *v80;
            v80[6] = v323;
          }
          if ( v319 )
          {
            v404 = GetProcessHeap();
            HeapFree(v404, 0, v319);
          }
          v324 = v321;
          v441 = v321;
          if ( v321 >= 0 )
          {
            v325 = *((unsigned int *)v6 + 797);
            v326 = 0LL;
            v321 = 0;
            v441 = 0;
            *(_OWORD *)v495 = v501;
            v443 = 0LL;
            if ( *((_DWORD *)v6 + 796) != (_DWORD)v325 )
              goto LABEL_565;
            v446[0] = 0;
            LODWORD(Size) = 0;
            v329 = ULongLongToUInt(2 * v325, v446);
            v441 = v329;
            v321 = v329;
            if ( v329 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v330, 0LL, 0, v329, 0x64u, 0LL);
              goto LABEL_568;
            }
            v331 = v446[0];
            if ( v446[0] <= 8 )
              v331 = 8;
            v441 = HrMalloc(0x10uLL, v331, &v443);
            if ( v441 < 0 )
            {
              v437 = 107;
            }
            else
            {
              v441 = ULongLongToUInt(16LL * *((unsigned int *)v6 + 796), (unsigned int *)&Size);
              if ( v441 >= 0 )
              {
                v333 = v443;
                memcpy_0(v443, *((const void **)v6 + 400), (unsigned int)Size);
                operator delete(*((void **)v6 + 400));
                *((_QWORD *)v6 + 400) = v333;
                v326 = 0LL;
                *((_DWORD *)v6 + 797) = v331;
                v321 = v441;
LABEL_565:
                *(_OWORD *)(*((_QWORD *)v6 + 400) + 16LL * (unsigned int)(*((_DWORD *)v6 + 796))++) = *(_OWORD *)v495;
                v327 = *((_DWORD *)v6 + 796);
                v328 = *((_DWORD *)v6 + 802);
                if ( v328 <= v327 )
                  v328 = *((_DWORD *)v6 + 796);
                *((_DWORD *)v6 + 802) = v328;
LABEL_568:
                if ( v326 )
                {
                  v405 = GetProcessHeap();
                  HeapFree(v405, 0, v326);
                }
                if ( v321 >= 0 )
                {
                  ++*(_QWORD *)(*((_QWORD *)v171 + 1) - 184LL);
                  *((_BYTE *)v6 + 8169) = 1;
                  LODWORD(Size) = v321;
                  goto LABEL_116;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v327, 0LL, 0, v321, 0xCEu, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(v406, 0LL, 0, v441, 0xBCEu, 0LL);
                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v80, 0LL, v407);
                v324 = v321;
                v441 = v321;
LABEL_748:
                LODWORD(Size) = v324;
                MilInstrumentationCheckHR_MaybeFailFast(v408, 0LL, 0, v321, 0x16EEu, 0LL);
                goto LABEL_146;
              }
              v437 = 109;
            }
            v321 = v441;
            MilInstrumentationCheckHR_MaybeFailFast(v332, 0LL, 0, v441, v437, 0LL);
            v326 = v443;
            goto LABEL_568;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v322, 0LL, 0, v321, 0xBC9u, 0LL);
          goto LABEL_748;
        }
LABEL_722:
        v167 = v163;
        goto LABEL_284;
      }
      goto LABEL_785;
    }
    if ( v81 + 1 >= v81 )
    {
      v386 = detail::liberal_expansion_policy::expand(0LL, 0xD37A6F4DE9BD37A7uLL * ((v153[2] - *v153) >> 3), v81 + 1);
      v387 = operator new(saturated_mul(v386, 0xB8uLL));
      v388 = *((_QWORD *)v6 + 113);
      v389 = *((_QWORD *)v6 + 112);
      v390 = v387;
      v495[0] = (__int64)v387;
      v495[1] = v81;
      v496 = 0LL;
      std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
        v479,
        v389,
        v388,
        v495);
      detail::destruct_range<CScopedClipStack::ClippingScopeState>(*((CScopedClipStack::ClippingScopeState **)v6 + 112));
      v391 = (char *)*((_QWORD *)v6 + 112);
      *((_QWORD *)v6 + 112) = v390;
      if ( v391 == (char *)v6 + 920 )
        v391 = 0LL;
      operator delete(v391);
      v153 = (char **)((char *)v6 + 896);
      v163 = 1LL;
      *((_QWORD *)v6 + 113) = *((_QWORD *)v6 + 112) + 184 * v81;
      *((_QWORD *)v6 + 114) = *((_QWORD *)v6 + 112) + 184 * v386;
      goto LABEL_281;
    }
LABEL_721:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_722;
  }
  while ( 2 )
  {
    v288 = 0;
    v289 = v150 + 40 * v152;
    v78 = *(CD2DLayer **)(v289 + 24);
    *(_QWORD *)&v493 = v289;
    if ( v78 )
    {
      v290 = CD2DLayer::ApplyState(v78, v6);
      v441 = v290;
      v149 = v290;
      if ( v290 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v290, 0x21Au, 0LL);
        goto LABEL_555;
      }
      v289 = v493;
      v288 = 1;
      *(_QWORD *)(v493 + 24) = 0LL;
      --*(_QWORD *)(v148 - 160);
      v150 = *((_QWORD *)v6 + 345);
    }
    if ( !*(_BYTE *)(v289 + 36) )
      goto LABEL_501;
    if ( !v288 )
      goto LABEL_500;
    v291 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v148 - 16), v6, v151, v79);
    v441 = v291;
    v149 = v291;
    if ( v291 >= 0 )
    {
      v150 = *((_QWORD *)v6 + 345);
LABEL_500:
      ++v151;
LABEL_501:
      v152 = (unsigned int)(v152 + 1);
      if ( !*(_QWORD *)(v148 - 160) )
        goto LABEL_264;
      continue;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v291, 0x236u, 0LL);
LABEL_555:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v78, 0LL, 0, v149, 0x109Au, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v317, 0LL, 0, v149, 0xC09u, 0LL);
  v80 = (unsigned int *)((char *)v6 + 368);
  LODWORD(v159) = v441;
  LODWORD(Size) = v441;
  if ( v441 >= 0 )
  {
    v171 = (char *)v6 + 896;
    goto LABEL_557;
  }
LABEL_731:
  MilInstrumentationCheckHR_MaybeFailFast(v318, 0LL, 0, v159, 0x16E8u, 0LL);
LABEL_146:
  v95 = v447;
LABEL_147:
  if ( *((_BYTE *)v6 + 8172) )
  {
    v96 = *((_DWORD *)v6 + 820);
    if ( v96 )
    {
      if ( *(_BYTE *)((unsigned int)(v96 - 1) + *((_QWORD *)v6 + 412)) )
        CVisual::RenderProjectedShadows(v7, v6, 1);
    }
  }
  if ( !*v95 )
  {
    v102 = *((_QWORD *)v6 + 25);
    if ( v102 )
    {
      if ( !*((_BYTE *)v6 + 193) )
      {
        v103 = *(_QWORD **)(v102 + 1960);
        v104 = *(_QWORD **)(v102 + 1968);
        v105 = *((_QWORD *)v6 + 1010);
        if ( v103 != v104 )
        {
          while ( v7 != *v103
               || !(unsigned __int8)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::operator==<detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>,void>(
                                      v105,
                                      v103 + 1) )
          {
            v103 += 8;
            if ( v103 == v104 )
              goto LABEL_152;
          }
          *((_BYTE *)v6 + 193) = 1;
        }
      }
    }
  }
LABEL_152:
  if ( dword_1803E3760
    && (unsigned __int8)tlgKeywordOn(&dword_1803E3760, 0LL)
    && *v95 == (_BYTE)v426
    && (*(_DWORD *)(v7 + 264) > v426 || *(_DWORD *)(v7 + 268) > v426) )
  {
    *(_OWORD *)v495 = 0LL;
    CDrawingContext::GetClipBoundsWorld(v6, v495);
    v427 = (const void *)*((_QWORD *)v6 + 25);
    v428 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v484, (const struct MilRectF *)v495);
    DwmDbg::DbgString::ConvertHR(v429, &lpMem, &Size);
    v430 = DwmDbg::DbgString::DbgString(
             &v485,
             "hr=%s, clipBoundsWorld=[%s], m_pCutoffBVI=0x%p",
             (const char *)lpMem,
             v428,
             v427);
    v431 = "Render-BailWithBackdropsStillInSubtree-Backdrop";
    v432 = *((_QWORD *)v6 + 1010);
    v433 = v430;
    if ( !*((_QWORD *)v6 + 25) )
      v431 = "Render-BailWithBackdropsStillInSubtree-Normal";
    v434 = DwmDbg::DbgString::DbgString(&v486, v431);
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v434, v7, v451, v432, v433);
    if ( lpMem )
      operator delete(lpMem);
    if ( v484 )
      operator delete(v484);
    v97 = Size;
  }
  else
  {
    v97 = v441;
  }
  if ( v460 && *((_QWORD *)&v459 + 1) )
    (***((void (__fastcall ****)(_QWORD, __int64))&v459 + 1))(*((_QWORD *)&v459 + 1), 1LL);
  return v97;
}
