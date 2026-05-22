/*
 * XREFs of ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0
 * Callers:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 *     ?RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ @ 0x180003718 (-RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ.c)
 *     ?CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x180008200 (-CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDComp.c)
 *     ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0 (-Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ @ 0x18000F3D0 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ.c)
 *     ?CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@Z @ 0x18000F888 (-CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@.c)
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z @ 0x18000F9A0 (-SetInput@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z @ 0x18000FF50 (-End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z.c)
 *     ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z @ 0x180013F00 (-ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x18001B4B0 (-CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceF.c)
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z @ 0x18001E0E0 (-ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z.c)
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800354E0 (-OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x180035D80 (-AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z @ 0x180036C40 (-AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z.c)
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800395A0 (-ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18003A090 (-ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890 (-CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ @ 0x18003B14C (-EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ.c)
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x18003BAC0 (-LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ @ 0x18003C1F8 (-RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ.c)
 *     ?Unlink@CPrimitive@DirectComposition@@UEAAJXZ @ 0x18003C2B0 (-Unlink@CPrimitive@DirectComposition@@UEAAJXZ.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ??1CAnimationInstance@DirectComposition@@EEAA@XZ @ 0x180061D94 (--1CAnimationInstance@DirectComposition@@EEAA@XZ.c)
 *     ?CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z @ 0x1800634B0 (-CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCo.c)
 *     ?CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x180063F30 (-CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z.c)
 *     ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ @ 0x180064050 (-Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ.c)
 *     ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C (-Reset@CAnimationData@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z @ 0x18006412C (-RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     ?TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z @ 0x180084AE0 (-TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z.c)
 *     ?Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z @ 0x180088570 (-Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z.c)
 *     ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x180088600 (-AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x18008A1A0 (-SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18008B3F0 (-SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x18008BFB0 (-OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ @ 0x18008C550 (-RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z @ 0x18009AD3C (-EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z.c)
 *     ?GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z @ 0x18009FFD0 (-GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1800A0280 (-SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800A0310 (-SetColorSpace@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z @ 0x1800A03A0 (-SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z.c)
 *     ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A0810 (-CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 *     ?Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x1800B57C0 (-Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     ?AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x1800E83F0 (-AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x1800E8490 (-AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z @ 0x1800E85B0 (-SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z.c)
 *     ?SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z @ 0x1800E8620 (-SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z.c)
 *     ?SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z @ 0x1800E86C0 (-SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@.c)
 *     ?TelemetryGetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJPEAU_GUID@@@Z @ 0x1800E8760 (-TelemetryGetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJPEAU_GUID@@@Z.c)
 *     ?TelemetrySetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@@Z @ 0x1800E87C0 (-TelemetrySetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@@Z.c)
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 *     ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z @ 0x1800E8BF0 (-GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z.c)
 *     ?ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ @ 0x1800E9110 (-ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800EDE20 (-CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800EF5D0 (-CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFCD0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCo.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFE70 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_ea_1800EFE70.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFFB0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_ea_1800EFFB0.c)
 *     ?CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800F1300 (-CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEA.c)
 *     ?CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800F1450 (-CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUID.c)
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 *     ?HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800F1FC0 (-HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 *     ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC (-InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z.c)
 *     ?OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ @ 0x1800F2680 (-OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800F3B10 (-ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?RedirectMouseToHwnd@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUHWND__@@KK@Z @ 0x1800F3BA0 (-RedirectMouseToHwnd@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAA.c)
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJXZ @ 0x1800F3F60 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAA.c)
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F5530 (-SetInput@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?s_OnCallbackMessage_NoLock@CDevice@DirectComposition@@CAJPEBX00I@Z @ 0x1800F6EE0 (-s_OnCallbackMessage_NoLock@CDevice@DirectComposition@@CAJPEBX00I@Z.c)
 *     ?s_ProcessPendingCallbackDeletions_NoLock@CDevice@DirectComposition@@CAJPEAX@Z @ 0x1800F6F80 (-s_ProcessPendingCallbackDeletions_NoLock@CDevice@DirectComposition@@CAJPEAX@Z.c)
 *     ??1CFilterEffect@DirectComposition@@MEAA@XZ @ 0x1800F7ECC (--1CFilterEffect@DirectComposition@@MEAA@XZ.c)
 *     ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z @ 0x1800F829C (-SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z.c)
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z @ 0x1800F8BD0 (-UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z.c)
 *     ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z @ 0x1800F8EA0 (-CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z.c)
 *     ?SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z @ 0x1800F9690 (-SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z.c)
 *     ?LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@H@Z @ 0x1800FA6A0 (-LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@.c)
 *     ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z @ 0x1800FAC8C (-SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z.c)
 *     ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800FB750 (-CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 *     ?CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x1800FB854 (-CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@P.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800FDB40 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 *     ?CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@@Z @ 0x1800FE954 (-CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180185200 (-Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 *     ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1801859D0 (-Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  bool v4; // zf

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 24LL))(*v1);
    v3 = *v1;
    if ( *v1 )
    {
      v4 = (*((_DWORD *)v1 + 12))-- == 1;
      if ( v4 && *((_BYTE *)v1 + 52) )
      {
        *((_BYTE *)v1 + 52) = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        *a1 = 0LL;
        return;
      }
    }
    else
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 1));
    }
    *a1 = 0LL;
  }
}
