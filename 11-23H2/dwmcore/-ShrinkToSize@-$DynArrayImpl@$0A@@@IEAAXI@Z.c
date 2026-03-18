/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x180011830 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180012EE4 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180029174 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180039860 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180040418 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180040550 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180040AC4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800459DC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180045D88 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800468C0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004781C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18004B780 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800507A0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180057C00 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18005A9B0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18005B280 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180076C14 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180077180 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18007E508 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18007E5DC (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18007F228 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180082E44 (--1CBaseExpression@@MEAA@XZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18008332C (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D99C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?UpdateWindowInputSinkHints@CPreComputeContext@@AEAAXXZ @ 0x18008E1CC (-UpdateWindowInputSinkHints@CPreComputeContext@@AEAAXXZ.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x18009E980 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800A136C (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800A3C40 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x1800A52EC (--1CBrush@@MEAA@XZ.c)
 *     ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B8F40 (-OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_ @ 0x1800C4F14 (_anonymous_namespace_--SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800C5130 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_ @ 0x1800C5198 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_ @ 0x1800C5200 (_anonymous_namespace_--SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800C8AE0 (--1CAnimation@@UEAA@XZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800C8CAC (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800D93B0 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DC310 (-OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E0190 (-OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x1800E5364 (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x1800F0FCC (--1CBlurRenderingGraph@@EEAA@XZ.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800F1D50 (-Reset@CComposition@@UEAAXXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800FDC04 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x180104658 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B381C (--1CComposition@@MEAA@XZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x1801B4D5C (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801B6DD4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801CD93C (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x1801D9B78 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x1801DE538 (-UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E9B00 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EEC38 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EF35C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EF6C0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180212C64 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x18021F680 (-ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEV.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180248690 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180248FB0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180249354 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18024E24C (--1CScalar@@MEAA@XZ.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x180254338 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREF.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180264860 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802AC1D0 (--1CHolographicClient@@MEAA@XZ.c)
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AD334 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1802BC0D0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18002A06C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  int v7; // eax
  LPVOID v8; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        v5 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v8 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v8 )
      {
        *(_QWORD *)a1 = v8;
        v7 = *(_DWORD *)(a1 + 24);
LABEL_8:
        *(_DWORD *)(a1 + 20) = v7;
      }
    }
  }
}
