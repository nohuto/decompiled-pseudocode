/*
 * XREFs of ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478
 * Callers:
 *     ?Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z @ 0x180018078 (-Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z.c)
 *     ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4 (-MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 *     ?Create@CScratchSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAPEAV12@@Z @ 0x18001B740 (-Create@CScratchSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAPEAV12@@Z.c)
 *     ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC (-Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z.c)
 *     ?PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x18001BB98 (-PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ??0CAtlasSurface@DirectComposition@@AEAA@PEAVCAtlasSurfacePool@1@IIAEBVSizeU@1@UDCOMPOSITION_GUTTERS@@@Z @ 0x18001F56C (--0CAtlasSurface@DirectComposition@@AEAA@PEAVCAtlasSurfacePool@1@IIAEBVSizeU@1@UDCOMPOSITION_GUT.c)
 *     ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z @ 0x18001FE78 (-CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ??_ECBitmapInfoBack@DirectComposition@@UEAAPEAXI@Z @ 0x18002AD50 (--_ECBitmapInfoBack@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448 (--0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVC.c)
 *     ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z @ 0x180034834 (--0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N.c)
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 *     ??0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z @ 0x180035F64 (--0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 *     ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x180037808 (--0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurfac.c)
 *     ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34 (-AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV-$TMilRect@IUMilRectU@.c)
 *     ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800382BC (-RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z @ 0x18003A378 (-Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPH.c)
 *     ??$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003A9A4 (--$ReleaseInterface@VCVirtualSurface@DirectComposition@@@@YAXAEAPEAVCVirtualSurface@DirectCompos.c)
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ??0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@1@4_N@Z @ 0x18003B3F4 (--0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX.c)
 *     ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ @ 0x18003C390 (-DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ.c)
 *     ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z @ 0x180063584 (-Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12.c)
 *     ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650 (-Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 *     ?Release@CAnimationInstance@DirectComposition@@UEAAKXZ @ 0x18007E240 (-Release@CAnimationInstance@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CBitmapInfoFront@DirectComposition@@UEAAKXZ @ 0x18007E2D0 (-Release@CBitmapInfoFront@DirectComposition@@UEAAKXZ.c)
 *     ?Release@CVirtualSurface@DirectComposition@@UEAAKXZ @ 0x18007E360 (-Release@CVirtualSurface@DirectComposition@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?QueryInterface@CVirtualSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800886A0 (-QueryInterface@CVirtualSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CMILCOMBaseT@UIPresentationBuffer@@@@UEAAKXZ @ 0x18008C4D0 (-AddRef@-$CMILCOMBaseT@UIPresentationBuffer@@@@UEAAKXZ.c)
 *     ?AddRef@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x1800986F0 (-AddRef@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?AddRef@CArithmeticCompositeEffect@DirectComposition@@UEAAKXZ @ 0x1800B5550 (-AddRef@CArithmeticCompositeEffect@DirectComposition@@UEAAKXZ.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8F90 (-QueryInterface@-$CMILCOMBaseT@UID2D1GeometrySink@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E92F8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@DirectComposition@@@@YAXAEAPEAVCD2DSharedBuffer@DirectComposition@@@Z @ 0x1800ECC7C (--$ReleaseInterface@VCD2DSharedBuffer@DirectComposition@@@@YAXAEAPEAVCD2DSharedBuffer@DirectComp.c)
 *     ?Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800ECD10 (-Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECE20 (-QueryInterface@-$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@UIPresentationBuffer@@@@UEAAKXZ @ 0x1800ECEB0 (-Release@-$CMILCOMBaseT@UIPresentationBuffer@@@@UEAAKXZ.c)
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 *     ?CreateGenericInkProxy@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z @ 0x1800EF4E0 (-CreateGenericInkProxy@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z.c)
 *     ?QueryInterface@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2740 (-QueryInterface@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F27F0 (-QueryInterface@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBlendEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2870 (-QueryInterface@CBlendEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBrightnessEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F28F0 (-QueryInterface@CBrightnessEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CColorMatrixEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A00 (-QueryInterface@CColorMatrixEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A80 (-QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CFloodEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2BF0 (-QueryInterface@CFloodEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHueRotationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2D50 (-QueryInterface@CHueRotationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSaturationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3240 (-QueryInterface@CSaturationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F33F0 (-QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTurbulenceEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3790 (-QueryInterface@CTurbulenceEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z @ 0x1800F7B7C (-Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBU.c)
 *     ?QueryInterface@CPresentationFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7C80 (-QueryInterface@CPresentationFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z @ 0x1800F8480 (-SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z.c)
 *     ?QueryInterface@CGenericInk@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8AF0 (-QueryInterface@CGenericInk@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9374 (-SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600 (-SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FA870 (-QueryInterface@CPrimitiveGroup@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC (-Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FO.c)
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 *     ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z @ 0x1800FB540 (-Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2.c)
 *     ??$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectComposition@@@Z @ 0x1800FB6B0 (--$ReleaseInterface@VCYCbCrSurface@DirectComposition@@@@YAXAEAPEAVCYCbCrSurface@DirectCompositio.c)
 *     ?Release@CPresentationFactory@@UEAAKXZ @ 0x1800FBB00 (-Release@CPresentationFactory@@UEAAKXZ.c)
 *     ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z @ 0x1800FC3CC (-Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enu.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UIDCompositionSurfaceDebug@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD3D0 (-QueryInterface@-$CMILCOMBaseT@UIDCompositionSurfaceDebug@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@UIFlipContent@@@@UEAAKXZ @ 0x1800FD460 (-Release@-$CMILCOMBaseT@UIFlipContent@@@@UEAAKXZ.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 *     ?Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAV12@@Z @ 0x1800FEDB4 (-Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPL.c)
 *     ?Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z @ 0x1800FF054 (-Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z.c)
 *     ?Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180176BD0 (-Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition.c)
 *     ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740 (-MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnim.c)
 *     ?QueryInterface@?$CMILCOMBaseT@UIFlipProducer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AA9E0 (-QueryInterface@-$CMILCOMBaseT@UIFlipProducer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CMILCOMBaseT@UIFlipProducer@@@@UEAAKXZ @ 0x1801AAA70 (-Release@-$CMILCOMBaseT@UIFlipProducer@@@@UEAAKXZ.c)
 *     ?QueryInterface@CCompositionFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ABC90 (-QueryInterface@CCompositionFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CCompositionFramePresentStatistics@@UEAAKXZ @ 0x1801ABD20 (-Release@CCompositionFramePresentStatistics@@UEAAKXZ.c)
 *     ?QueryInterface@CPresentStatusPresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AE440 (-QueryInterface@CPresentStatusPresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AE4D0 (-QueryInterface@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CPresentStatusPresentStatistics@@UEAAKXZ @ 0x1801AE560 (-Release@CPresentStatusPresentStatistics@@UEAAKXZ.c)
 *     ?Release@CPresentationManager@@UEAAKXZ @ 0x1801AE5F0 (-Release@CPresentationManager@@UEAAKXZ.c)
 *     ?QueryInterface@CPresentationSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B02F0 (-QueryInterface@CPresentationSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CPresentationSurface@@UEAAKXZ @ 0x1801B0380 (-Release@CPresentationSurface@@UEAAKXZ.c)
 *     ?QueryInterface@CIndependentFlipFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B1350 (-QueryInterface@CIndependentFlipFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CIndependentFlipFramePresentStatistics@@UEAAKXZ @ 0x1801B13E0 (-Release@CIndependentFlipFramePresentStatistics@@UEAAKXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountImpl::AddReference(CMILRefCountImpl *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  if ( *(int *)this < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1801E5750,
        word_1801E5750,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v4 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        if ( (char)Response == 105 )
          goto LABEL_27;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_26;
          goto LABEL_24;
        }
LABEL_25:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_26:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        }
        if ( (char)Response == 71 )
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_26;
LABEL_24:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_26;
          }
          goto LABEL_25;
        }
LABEL_27:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
