/*
 * XREFs of ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N888@Z @ 0x1801DB004
 * Callers:
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x1801DB190 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012FCEA (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N888@Z @ 0x1801DAF2C (--$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801DEE38 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 */

/*
 * Hex-Rays decompilation failed for ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N888@Z @ 0x1801DB004
 * Reason: Hex-Rays returned no pseudocode for 0x1801DB004
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801DB004: mov     rax, rsp
 * 00000001801DB007: mov     [rax+8], rbx
 * 00000001801DB00B: mov     [rax+10h], rsi
 * 00000001801DB00F: mov     [rax+18h], rdi
 * 00000001801DB013: mov     [rax+20h], r9
 * 00000001801DB017: push    r14
 * 00000001801DB019: sub     rsp, 60h
 * 00000001801DB01D: mov     rdi, [r8]
 * 00000001801DB020: mov     rax, 6DB6DB6DB6DB6DB7h
 * 00000001801DB02A: sub     rdi, [rcx]
 * 00000001801DB02D: mov     r14, rdx
 * 00000001801DB030: sar     rdi, 5
 * 00000001801DB034: mov     r8d, 1
 * 00000001801DB03A: imul    rdi, rax
 * 00000001801DB03E: mov     rsi, rcx
 * 00000001801DB041: mov     rdx, rdi
 * 00000001801DB044: call    ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z; detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(unsigned __int64,unsigned __int64)
 * 00000001801DB049: mov     rbx, [rsp+68h+arg_48]
 * 00000001801DB051: lea     rcx, [rsp+68h+arg_68]
 * 00000001801DB059: mov     [rsp+68h+var_10], rcx
 * 00000001801DB05E: lea     r9, [rsp+68h+arg_28]
 * 00000001801DB066: lea     rcx, [rsp+68h+arg_60]
 * 00000001801DB06E: mov     [rsp+68h+var_18], rcx
 * 00000001801DB073: lea     r8, [rsp+68h+arg_20]
 * 00000001801DB07B: lea     rcx, [rsp+68h+arg_58]
 * 00000001801DB083: mov     [rsp+68h+var_20], rcx
 * 00000001801DB088: lea     rdx, [rsp+68h+arg_18]
 * 00000001801DB090: lea     rcx, [rsp+68h+arg_50]
 * 00000001801DB098: mov     [rsp+68h+var_28], rcx
 * 00000001801DB09D: lea     rcx, [rsp+68h+arg_40]
 * 00000001801DB0A5: mov     [rsp+68h+var_30], rbx
 * 00000001801DB0AA: mov     [rsp+68h+var_38], rcx
 * 00000001801DB0AF: lea     rcx, [rsp+68h+arg_38]
 * 00000001801DB0B7: mov     [rsp+68h+var_40], rcx
 * 00000001801DB0BC: lea     rcx, [rsp+68h+arg_30]
 * 00000001801DB0C4: mov     [rsp+68h+var_48], rcx
 * 00000001801DB0C9: mov     rcx, rax
 * 00000001801DB0CC: call    ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N888@Z; detail::construct<COverlayContext::OverlayPlaneInfo,COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(COverlayContext::OverlayPlaneInfo *,COverlayContext * &&,CVisual * &&,CCompositionSurfaceInfo * &&,unsigned __int64 &&,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES * &&,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> * &&,std::shared_ptr<CRegion> &&,bool &&,bool &&,bool &&,bool &&)
 * 00000001801DB0D1: mov     rcx, [rbx+8]; this
 * 00000001801DB0D5: imul    rax, rdi, 0E0h
 * 00000001801DB0DC: add     rax, [rsi]
 * 00000001801DB0DF: mov     [r14], rax
 * 00000001801DB0E2: test    rcx, rcx
 * 00000001801DB0E5: jz      short loc_1801DB0EC
 * 00000001801DB0E7: call    ?_Decref@_Ref_count_base@std@@QEAAXXZ; std::_Ref_count_base::_Decref(void)
 * 00000001801DB0EC: lea     r11, [rsp+68h+var_8]
 * 00000001801DB0F1: mov     rax, r14
 * 00000001801DB0F4: mov     rbx, [r11+10h]
 * 00000001801DB0F8: mov     rsi, [r11+18h]
 * 00000001801DB0FC: mov     rdi, [r11+20h]
 * 00000001801DB100: mov     rsp, r11
 * 00000001801DB103: pop     r14
 * 00000001801DB105: retn
 */
