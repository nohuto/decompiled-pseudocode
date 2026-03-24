/*
 * XREFs of ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N888@Z @ 0x1801DAB34
 * Callers:
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x1801DACC0 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012F94A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N888@Z @ 0x1801DAA5C (--$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801DE968 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 */

/*
 * Hex-Rays decompilation failed for ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N888@Z @ 0x1801DAB34
 * Reason: Hex-Rays returned no pseudocode for 0x1801DAB34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801DAB34: mov     rax, rsp
 * 00000001801DAB37: mov     [rax+8], rbx
 * 00000001801DAB3B: mov     [rax+10h], rsi
 * 00000001801DAB3F: mov     [rax+18h], rdi
 * 00000001801DAB43: mov     [rax+20h], r9
 * 00000001801DAB47: push    r14
 * 00000001801DAB49: sub     rsp, 60h
 * 00000001801DAB4D: mov     rdi, [r8]
 * 00000001801DAB50: mov     rax, 6DB6DB6DB6DB6DB7h
 * 00000001801DAB5A: sub     rdi, [rcx]
 * 00000001801DAB5D: mov     r14, rdx
 * 00000001801DAB60: sar     rdi, 5
 * 00000001801DAB64: mov     r8d, 1
 * 00000001801DAB6A: imul    rdi, rax
 * 00000001801DAB6E: mov     rsi, rcx
 * 00000001801DAB71: mov     rdx, rdi
 * 00000001801DAB74: call    ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z; detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(unsigned __int64,unsigned __int64)
 * 00000001801DAB79: mov     rbx, [rsp+68h+arg_48]
 * 00000001801DAB81: lea     rcx, [rsp+68h+arg_68]
 * 00000001801DAB89: mov     [rsp+68h+var_10], rcx
 * 00000001801DAB8E: lea     r9, [rsp+68h+arg_28]
 * 00000001801DAB96: lea     rcx, [rsp+68h+arg_60]
 * 00000001801DAB9E: mov     [rsp+68h+var_18], rcx
 * 00000001801DABA3: lea     r8, [rsp+68h+arg_20]
 * 00000001801DABAB: lea     rcx, [rsp+68h+arg_58]
 * 00000001801DABB3: mov     [rsp+68h+var_20], rcx
 * 00000001801DABB8: lea     rdx, [rsp+68h+arg_18]
 * 00000001801DABC0: lea     rcx, [rsp+68h+arg_50]
 * 00000001801DABC8: mov     [rsp+68h+var_28], rcx
 * 00000001801DABCD: lea     rcx, [rsp+68h+arg_40]
 * 00000001801DABD5: mov     [rsp+68h+var_30], rbx
 * 00000001801DABDA: mov     [rsp+68h+var_38], rcx
 * 00000001801DABDF: lea     rcx, [rsp+68h+arg_38]
 * 00000001801DABE7: mov     [rsp+68h+var_40], rcx
 * 00000001801DABEC: lea     rcx, [rsp+68h+arg_30]
 * 00000001801DABF4: mov     [rsp+68h+var_48], rcx
 * 00000001801DABF9: mov     rcx, rax
 * 00000001801DABFC: call    ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N888@Z; detail::construct<COverlayContext::OverlayPlaneInfo,COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(COverlayContext::OverlayPlaneInfo *,COverlayContext * &&,CVisual * &&,CCompositionSurfaceInfo * &&,unsigned __int64 &&,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES * &&,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> * &&,std::shared_ptr<CRegion> &&,bool &&,bool &&,bool &&,bool &&)
 * 00000001801DAC01: mov     rcx, [rbx+8]; this
 * 00000001801DAC05: imul    rax, rdi, 0E0h
 * 00000001801DAC0C: add     rax, [rsi]
 * 00000001801DAC0F: mov     [r14], rax
 * 00000001801DAC12: test    rcx, rcx
 * 00000001801DAC15: jz      short loc_1801DAC1C
 * 00000001801DAC17: call    ?_Decref@_Ref_count_base@std@@QEAAXXZ; std::_Ref_count_base::_Decref(void)
 * 00000001801DAC1C: lea     r11, [rsp+68h+var_8]
 * 00000001801DAC21: mov     rax, r14
 * 00000001801DAC24: mov     rbx, [r11+10h]
 * 00000001801DAC28: mov     rsi, [r11+18h]
 * 00000001801DAC2C: mov     rdi, [r11+20h]
 * 00000001801DAC30: mov     rsp, r11
 * 00000001801DAC33: pop     r14
 * 00000001801DAC35: retn
 */
