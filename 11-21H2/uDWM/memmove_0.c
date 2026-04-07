/*
 * XREFs of memmove_0 @ 0x180063707
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180003794 (--$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@-$vector@UCompTargetStats@CCompFram.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x180004130 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x18001FADC (--1CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180041978 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1800440D4 (-_Growmap@-$deque@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAUIAnimatedVisual@@@?$vector@PEAUIAnimatedVisual@@V?$allocator@PEAUIAnimatedVisual@@@std@@@std@@QEAAPEAPEAUIAnimatedVisual@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x180099698 (--$_Emplace_reallocate@PEAUIAnimatedVisual@@@-$vector@PEAUIAnimatedVisual@@V-$allocator@PEAUIAni.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B83F8 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniq.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B93E0 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800BEF90 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@QEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800C184C (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C8AE0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800D40CC (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ?NonDelegatingGetIids@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F0FE0 (-NonDelegatingGetIids@-$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@.c)
 *     ?NonDelegatingGetIids@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F4304 (-NonDelegatingGetIids@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisu.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x1800F612C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FA8C0 (-NonDelegatingGetIids@-$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FA950 (-NonDelegatingGetIids@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@.c)
 *     ??$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@QEAAPEAPEAVCAnimatedTransitionVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1800FC380 (--$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@-$vector@PEAVCAnimatedTransitionVisual@@V.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
